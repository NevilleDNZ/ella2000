
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
/* UNAME:ZZEASIM */
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

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t257,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,67,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 67 CHAR */
struct A68t259{
A68_INT  Ws;
A_PAD_INT(PAD_82)
A68_BOOL  Up;
A_PAD_BOOL(PAD_83)
A68_INT  Sizeunit;
A_PAD_INT(PAD_84)
struct A68t32  Al;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT,BOOL,INT,REF MODE32)  */
A_ISTRUCT(A68_INT ,3,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 3 INT */
struct A68t261{
struct A68t160  Ferryout;
struct A68t36  Flt;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE160,MODE36)  */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t160 ,struct A68t36 ,struct A68t261 *),(struct A68t160 ,struct A68t36 ,struct A68t261 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE160,MODE36) MODE261 */
struct A68t263{
struct A68t160  Ferryin;
struct A68t36  Flt;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(MODE160,MODE36)  */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t160 ,struct A68t36 ,struct A68t263 *),(struct A68t160 ,struct A68t36 ,struct A68t263 *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE160,MODE36) MODE263 */

A_PROCEDURE(A68_VOID ,A68t265,(A68_BOOL ,A68_VC ),(A68_BOOL ,A68_VC ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(BOOL,MODE26) VOID */
A_ISTRUCT(struct A68t52 ,3,A68t266);
typedef struct A68t266  A68_266 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,5,A68t267);
typedef struct A68t267  A68_267 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t268);
typedef struct A68t268  A68_268 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,6,A68t269);
typedef struct A68t269  A68_269 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t270,(A68_BOOL ,struct A68t261 ),(A68_BOOL ,struct A68t261 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(BOOL,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(A68_BOOL *,struct A68t263 ),(A68_BOOL *,struct A68t263 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(REF BOOL,MODE263) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(A68_INT ,struct A68t261 ),(A68_INT ,struct A68t261 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(INT,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_INT *,struct A68t263 ),(A68_INT *,struct A68t263 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF INT,MODE263) VOID */

A_PROCEDURE(A68_VOID ,A68t274,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(REF MODE26,MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t275,(A68_VC ),(A68_VC ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t276,(A68_VC ,struct A68t261 ),(A68_VC ,struct A68t261 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE26,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t277,(A68_VC *,struct A68t263 ),(A68_VC *,struct A68t263 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF REF MODE26,MODE263) VOID */
struct A68t278{
A68_INT  Machine_offset;
A_PAD_INT(PAD_85)
struct A68t278 * Rest;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(INT,REF MODE278)  */

A_PROCEDURE(A68_INT ,A68t279,(struct A68t278 *),(struct A68t278 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE278) INT */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t278 *,A68_VC ),(struct A68t278 *,A68_VC ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE278,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t278 **,A68_INT ),(struct A68t278 **,A68_INT ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(REF REF MODE278,INT) VOID */

A_PROCEDURE(A68_INT ,A68t283,(struct A68t278 **),(struct A68t278 **,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF REF MODE278) INT */

A_PROCEDURE(A68_BOOL ,A68t284,(struct A68t278 *),(struct A68t278 *,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE278) BOOL */
struct A68t285{
A68_VC  Mem;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t286,(struct A68t285 *),(struct A68t285 *,void *));
typedef struct A68t286  A68_286 ;    /* PROC MODE285 */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t285 *),(struct A68t285 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE285) VOID */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t285 *,A68_INT ),(struct A68t285 *,A68_INT ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(REF MODE285,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t285 *,struct A68t261 ),(struct A68t285 *,struct A68t261 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(REF MODE285,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t290,(struct A68t285 *,struct A68t263 ),(struct A68t285 *,struct A68t263 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(REF MODE285,MODE263) VOID */

A_PROCEDURE(A68_VOID ,A68t291,(struct A68t285 ,A68_VC ),(struct A68t285 ,A68_VC ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(MODE285,MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t292,(struct A68t285 *),(struct A68t285 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE285) INT */
struct A68t293{
A68_INT  Off;
A_PAD_INT(PAD_86)
A68_INT  Len;
A_PAD_INT(PAD_87)
};
typedef struct A68t293  A68_293 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t294,(A68_INT ,A68_INT ,struct A68t293 *),(A68_INT ,A68_INT ,struct A68t293 *,void *));
typedef struct A68t294  A68_294 ;    /* PROC(INT,INT) MODE293 */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t285 *,struct A68t293 ,A68_VC *),(struct A68t285 *,struct A68t293 ,A68_VC *,void *));
typedef struct A68t295  A68_295 ;    /* PROC(REF MODE285,MODE293) REF MODE26 */
struct A68t296{
A68_VC  W;
A68_INT  O;
A_PAD_INT(PAD_88)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t297,(A68_VC ,A68_INT ,struct A68t296 *),(A68_VC ,A68_INT ,struct A68t296 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE26,INT) MODE296 */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t285 *,struct A68t296 ),(struct A68t285 *,struct A68t296 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE285,MODE296) VOID */
struct A68t299{
A68_INT  Lab;
A_PAD_INT(PAD_89)
A68_VC  Tag;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(INT,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t300,(A68_VC ,struct A68t299 *),(A68_VC ,struct A68t299 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(MODE26) MODE299 */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t299 ,A68_VC ),(struct A68t299 ,A68_VC ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(MODE299,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t299 *,struct A68t261 ),(struct A68t299 *,struct A68t261 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE299,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t299 *,struct A68t263 ),(struct A68t299 *,struct A68t263 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE299,MODE263) VOID */

A_PROCEDURE(A68_BOOL ,A68t304,(struct A68t299 *,struct A68t299 ),(struct A68t299 *,struct A68t299 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE299,MODE299) BOOL */
struct A68t305 { A68_INT mode; union {
A68_INT  mode1;
struct A68t299  mode2;
} data; };
typedef struct A68t305  A68_305 ;    /* UNION(INT,MODE299,VOID)  */

A_PROCEDURE(A68_VOID ,A68t306,(struct A68t305 ,A68_VC ),(struct A68t305 ,A68_VC ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE305,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,7,A68t307);
typedef struct A68t307  A68_307 ;    /* STRUCT 7 CHAR */
struct A68t308{
struct A68t299  Label;
A68_INT  Machine_offset;
A_PAD_INT(PAD_90)
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE299,INT)  */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t299 ,A68_INT ,struct A68t308 *),(struct A68t299 ,A68_INT ,struct A68t308 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE299,INT) MODE308 */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t308 ,A68_VC ),(struct A68t308 ,A68_VC ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE308,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t311);
typedef struct A68t311  A68_311 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 4 MODE52 */

A_PROCEDURE(A68_VOID ,A68t314,(struct A68t308 *,struct A68t261 ),(struct A68t308 *,struct A68t261 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(REF MODE308,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t308 *,struct A68t263 ),(struct A68t308 *,struct A68t263 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(REF MODE308,MODE263) VOID */
struct A68t316{
struct A68t308  Labeled_offset;
struct A68t316 * Rest;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(MODE308,REF MODE316)  */

A_PROCEDURE(A68_INT ,A68t317,(struct A68t316 *),(struct A68t316 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE316) INT */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t316 *,A68_VC ),(struct A68t316 *,A68_VC ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE316,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t320,(struct A68t316 *,struct A68t261 ),(struct A68t316 *,struct A68t261 ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF MODE316,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t321,(struct A68t316 **,struct A68t263 ),(struct A68t316 **,struct A68t263 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(REF REF MODE316,MODE263) VOID */

A_PROCEDURE(A68_INT ,A68t322,(struct A68t316 *,struct A68t299 ),(struct A68t316 *,struct A68t299 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE316,MODE299) INT */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t316 **,struct A68t308 ),(struct A68t316 **,struct A68t308 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF REF MODE316,MODE308) VOID */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t316 **),(struct A68t316 **,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF REF MODE316) VOID */

A_PROCEDURE(A68_BOOL ,A68t325,(struct A68t316 *),(struct A68t316 *,void *));
typedef struct A68t325  A68_325 ;    /* PROC(REF MODE316) BOOL */
struct A68t326{
struct A68t211  Machine_label;
struct A68t326 * Rest;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE211,REF MODE326)  */

A_PROCEDURE(A68_INT ,A68t327,(struct A68t326 *),(struct A68t326 *,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE326) INT */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t326 *,A68_VC ),(struct A68t326 *,A68_VC ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(REF MODE326,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t329);
typedef struct A68t329  A68_329 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t330);
typedef struct A68t330  A68_330 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t326 **,struct A68t211 ),(struct A68t326 **,struct A68t211 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(REF REF MODE326,MODE211) VOID */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t326 **,struct A68t211 *),(struct A68t326 **,struct A68t211 *,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF REF MODE326) MODE211 */

A_PROCEDURE(A68_BOOL ,A68t333,(struct A68t326 *),(struct A68t326 *,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE326) BOOL */
struct A68t334{
struct A68t299  Label;
struct A68t326 * Machine_label_stack;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(MODE299,REF MODE326)  */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t299 ,struct A68t326 *,struct A68t334 *),(struct A68t299 ,struct A68t326 *,struct A68t334 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE299,REF MODE326) MODE334 */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t334 ,A68_VC ),(struct A68t334 ,A68_VC ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(MODE334,MODE26) VOID */
struct A68t337{
struct A68t334  Back_patch;
struct A68t337 * Rest;
};
typedef struct A68t337  A68_337 ;    /* STRUCT(MODE334,REF MODE337)  */

A_PROCEDURE(A68_INT ,A68t338,(struct A68t337 *),(struct A68t337 *,void *));
typedef struct A68t338  A68_338 ;    /* PROC(REF MODE337) INT */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t337 *,A68_VC ),(struct A68t337 *,A68_VC ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE337,MODE26) VOID */
struct A68t340{
struct A68t211  Ml;
struct A68t299  Lab;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(MODE211,MODE299)  */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t211 ,struct A68t299 ,struct A68t340 *),(struct A68t211 ,struct A68t299 ,struct A68t340 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE211,MODE299) MODE340 */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t337 **,struct A68t340 ),(struct A68t337 **,struct A68t340 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF REF MODE337,MODE340) VOID */

A_PROCEDURE(struct A68t326 *,A68t343,(struct A68t337 **,struct A68t299 ),(struct A68t337 **,struct A68t299 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF REF MODE337,MODE299) REF MODE326 */

A_PROCEDURE(A68_BOOL ,A68t344,(struct A68t337 *),(struct A68t337 *,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF MODE337) BOOL */
struct A68t345{
A68_INT  Sort;
A_PAD_INT(PAD_91)
A68_INT  Size;
A_PAD_INT(PAD_92)
};
typedef struct A68t345  A68_345 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t346,(struct A68t345 ,A68_VC ),(struct A68t345 ,A68_VC ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE345,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t345 *,struct A68t261 ),(struct A68t345 *,struct A68t261 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(REF MODE345,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t345 *,struct A68t263 ),(struct A68t345 *,struct A68t263 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE345,MODE263) VOID */
struct A68t349{
struct A68t345  Head;
struct A68t349 * Tail;
};
typedef struct A68t349  A68_349 ;    /* STRUCT(MODE345,REF MODE349)  */

A_PROCEDURE(A68_VOID ,A68t350,(struct A68t349 *,A68_VC ),(struct A68t349 *,A68_VC ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(REF MODE349,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t349 *,struct A68t261 ),(struct A68t349 *,struct A68t261 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE349,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t349 **,struct A68t263 ),(struct A68t349 **,struct A68t263 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF REF MODE349,MODE263) VOID */

A_PROCEDURE(A68_INT ,A68t353,(struct A68t349 *),(struct A68t349 *,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE349) INT */
struct A68t354{
struct A68t299  Label;
struct A68t349 * Input_params;
struct A68t349 * Output_params;
};
typedef struct A68t354  A68_354 ;    /* STRUCT(MODE299,REF MODE349,REF MODE349)  */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t299 ,struct A68t349 *,struct A68t349 *,struct A68t354 *),(struct A68t299 ,struct A68t349 *,struct A68t349 *,struct A68t354 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE299,REF MODE349,REF MODE349) MODE354 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t354 ,A68_VC ),(struct A68t354 ,A68_VC ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE354,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t354 *,struct A68t261 ),(struct A68t354 *,struct A68t261 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE354,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t354 *,struct A68t263 ),(struct A68t354 *,struct A68t263 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE354,MODE263) VOID */
struct A68t359{
struct A68t299  Label;
struct A68t349 * Spec;
};
typedef struct A68t359  A68_359 ;    /* STRUCT(MODE299,REF MODE349)  */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t299 ,struct A68t349 *,struct A68t359 *),(struct A68t299 ,struct A68t349 *,struct A68t359 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE299,REF MODE349) MODE359 */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t359 ,A68_VC ),(struct A68t359 ,A68_VC ,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE359,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,11,A68t362);
typedef struct A68t362  A68_362 ;    /* STRUCT 11 CHAR */
struct A68t363{
struct A68t359  Labeled_spec;
struct A68t363 * Rest;
};
typedef struct A68t363  A68_363 ;    /* STRUCT(MODE359,REF MODE363)  */

A_PROCEDURE(A68_INT ,A68t364,(struct A68t363 *),(struct A68t363 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE363) INT */

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t363 *,A68_VC ),(struct A68t363 *,A68_VC ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE363,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t366);
typedef struct A68t366  A68_366 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_BOOL ,A68t367,(struct A68t363 *,struct A68t299 ),(struct A68t363 *,struct A68t299 ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE363,MODE299) BOOL */

A_PROCEDURE(struct A68t349 *,A68t368,(struct A68t363 **,struct A68t299 ),(struct A68t363 **,struct A68t299 ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF REF MODE363,MODE299) REF MODE349 */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t363 **,struct A68t359 ),(struct A68t363 **,struct A68t359 ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF REF MODE363,MODE359) VOID */
struct A68t370{
struct A68t354  Labeled_params;
struct A68t370 * Rest;
};
typedef struct A68t370  A68_370 ;    /* STRUCT(MODE354,REF MODE370)  */

A_PROCEDURE(A68_INT ,A68t371,(struct A68t370 *),(struct A68t370 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(REF MODE370) INT */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t370 *,A68_VC ),(struct A68t370 *,A68_VC ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(REF MODE370,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t370 *,struct A68t261 ),(struct A68t370 *,struct A68t261 ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(REF MODE370,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t370 **,struct A68t263 ),(struct A68t370 **,struct A68t263 ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(REF REF MODE370,MODE263) VOID */
A_ROW(struct A68t349 *,A68t375,1);
typedef struct A68t375  A68_375 ;    /* [] REF MODE349 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t370 *,struct A68t299 ,struct A68t375 *),(struct A68t370 *,struct A68t299 ,struct A68t375 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(REF MODE370,MODE299) MODE375 */
A_ISTRUCT(struct A68t349 *,2,A68t377);
typedef struct A68t377  A68_377 ;    /* STRUCT 2 REF MODE349 */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t370 **,struct A68t299 ),(struct A68t370 **,struct A68t299 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(REF REF MODE370,MODE299) VOID */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t370 **,struct A68t354 ),(struct A68t370 **,struct A68t354 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(REF REF MODE370,MODE354) VOID */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t370 **),(struct A68t370 **,void *));
typedef struct A68t380  A68_380 ;    /* PROC(REF REF MODE370) VOID */
struct A68t381{
A68_INT  Window_offset;
A_PAD_INT(PAD_93)
A68_INT  Register_ind;
A_PAD_INT(PAD_94)
A68_INT  Memory_offset;
A_PAD_INT(PAD_95)
A68_INT  Max_offset;
A_PAD_INT(PAD_96)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t381 *),(struct A68t381 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC MODE381 */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t381 ,A68_VC ),(struct A68t381 ,A68_VC ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE381,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t381 *,struct A68t261 ),(struct A68t381 *,struct A68t261 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE381,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t381 *,struct A68t263 ),(struct A68t381 *,struct A68t263 ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE381,MODE263) VOID */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t381 *),(struct A68t381 *,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE381) VOID */

A_PROCEDURE(A68_BOOL ,A68t387,(struct A68t381 *),(struct A68t381 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE381) BOOL */

A_PROCEDURE(A68_INT ,A68t388,(struct A68t381 *),(struct A68t381 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(REF MODE381) INT */
struct A68t389{
A68_BOOL  Ircallinst_flag;
A_PAD_BOOL(PAD_97)
};
typedef struct A68t389  A68_389 ;    /* STRUCT(BOOL)  */

A_PROCEDURE(A68_VOID ,A68t390,(A68_BOOL ,struct A68t389 *),(A68_BOOL ,struct A68t389 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(BOOL) MODE389 */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t389 ,A68_VC ),(struct A68t389 ,A68_VC ,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE389,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,10,A68t392);
typedef struct A68t392  A68_392 ;    /* STRUCT 10 CHAR */
struct A68t393{
A68_INT  Copy_stack_number;
A_PAD_INT(PAD_98)
A68_BOOL  Register_flag;
A_PAD_BOOL(PAD_99)
};
typedef struct A68t393  A68_393 ;    /* STRUCT(INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t394,(A68_INT ,A68_BOOL ,struct A68t393 *),(A68_INT ,A68_BOOL ,struct A68t393 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(INT,BOOL) MODE393 */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t393 ,A68_VC ),(struct A68t393 ,A68_VC ,void *));
typedef struct A68t395  A68_395 ;    /* PROC(MODE393,MODE26) VOID */
struct A68t396{
A68_VC  Constant;
};
typedef struct A68t396  A68_396 ;    /* STRUCT(REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t397,(A68_VC ,struct A68t396 *),(A68_VC ,struct A68t396 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE26) MODE396 */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t396 ,A68_VC ),(struct A68t396 ,A68_VC ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE396,MODE26) VOID */
struct A68t399{
A68_INT  Sumconstant;
A_PAD_INT(PAD_100)
A68_BOOL  Callinst_flag;
A_PAD_BOOL(PAD_101)
};
typedef struct A68t399  A68_399 ;    /* STRUCT(INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t400,(A68_INT ,A68_BOOL ,struct A68t399 *),(A68_INT ,A68_BOOL ,struct A68t399 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(INT,BOOL) MODE399 */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t399 ,A68_VC ),(struct A68t399 ,A68_VC ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE399,MODE26) VOID */
struct A68t402{
A68_BOOL  Indcallinst_flag;
A_PAD_BOOL(PAD_102)
};
typedef struct A68t402  A68_402 ;    /* STRUCT(BOOL)  */

A_PROCEDURE(A68_VOID ,A68t403,(A68_BOOL ,struct A68t402 *),(A68_BOOL ,struct A68t402 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(BOOL) MODE402 */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t402 ,A68_VC ),(struct A68t402 ,A68_VC ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE402,MODE26) VOID */
struct A68t405{
A68_BITS  Condition;
A_PAD_BITS(PAD_103)
};
typedef struct A68t405  A68_405 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t406,(A68_BITS ,struct A68t405 *),(A68_BITS ,struct A68t405 *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(BITS) MODE405 */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t405 ,A68_VC ),(struct A68t405 ,A68_VC ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE405,MODE26) VOID */
struct A68t408 { A68_INT mode; union {
struct A68t389  mode1;
struct A68t393  mode2;
struct A68t396  mode3;
struct A68t399  mode4;
struct A68t402  mode5;
struct A68t405  mode6;
} data; };
typedef struct A68t408  A68_408 ;    /* UNION(MODE389,MODE393,MODE396,MODE399,MODE402,MODE405,VOID)  */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t408 ,A68_VC ),(struct A68t408 ,A68_VC ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE408,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t408 ,struct A68t408 ,struct A68t408 *),(struct A68t408 ,struct A68t408 ,struct A68t408 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(MODE408,MODE408) MODE408 */

A_PROCEDURE(A68_VOID ,A68t411,(struct A68t408 ,struct A68t408 *),(struct A68t408 ,struct A68t408 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE408) MODE408 */

A_PROCEDURE(A68_BOOL ,A68t412,(struct A68t408 ),(struct A68t408 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE408) BOOL */
A_ISTRUCT(A68_CHAR ,34,A68t413);
typedef struct A68t413  A68_413 ;    /* STRUCT 34 CHAR */
struct A68t414 { A68_INT mode; union {
A68_BOOL  mode1;
A68_INT  mode2;
A68_CHAR  mode3;
} data; };
typedef struct A68t414  A68_414 ;    /* UNION(BOOL,INT,CHAR)  */
struct A68t415{
struct A68t414  Location_type;
struct A68t408  Symbolic_state;
A68_INT  Alloc_register;
A_PAD_INT(PAD_104)
A68_INT  Bit_length;
A_PAD_INT(PAD_105)
};
typedef struct A68t415  A68_415 ;    /* STRUCT(MODE414,MODE408,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t415 ,A68_VC ),(struct A68t415 ,A68_VC ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE415,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,20,A68t417);
typedef struct A68t417  A68_417 ;    /* STRUCT 20 CHAR */
A_VECTOR(struct A68t415 ,A68t419);
typedef struct A68t419  A68_419 ;    /* VECTOR [] MODE415 */
struct A68t418{
struct A68t419  Stack_locations;
A68_INT  Top;
A_PAD_INT(PAD_106)
};
typedef struct A68t418  A68_418 ;    /* STRUCT(REF MODE419,INT)  */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t418 *),(struct A68t418 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC MODE418 */

A_PROCEDURE(A68_VOID ,A68t421,(A68_BOOL ,struct A68t419 *),(A68_BOOL ,struct A68t419 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(BOOL) MODE419 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t418 ,A68_VC ),(struct A68t418 ,A68_VC ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE418,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t418 *,struct A68t418 *),(struct A68t418 *,struct A68t418 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE418) MODE418 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t418 *),(struct A68t418 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(REF MODE418) VOID */

A_PROCEDURE(A68_INT ,A68t425,(struct A68t418 *),(struct A68t418 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE418) INT */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t418 *,struct A68t415 *),(struct A68t418 *,struct A68t415 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(REF MODE418) MODE415 */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t418 *,struct A68t415 ),(struct A68t418 *,struct A68t415 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(REF MODE418,MODE415) VOID */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t418 *,A68_INT ,struct A68t415 *),(struct A68t418 *,A68_INT ,struct A68t415 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE418,INT) MODE415 */
struct A68t429{
struct A68t415  Loc;
A68_INT  O;
A_PAD_INT(PAD_107)
};
typedef struct A68t429  A68_429 ;    /* STRUCT(MODE415,INT)  */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t415 ,A68_INT ,struct A68t429 *),(struct A68t415 ,A68_INT ,struct A68t429 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(MODE415,INT) MODE429 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t418 *,struct A68t429 ),(struct A68t418 *,struct A68t429 ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE418,MODE429) VOID */

A_PROCEDURE(A68_BOOL ,A68t432,(struct A68t418 *),(struct A68t418 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(REF MODE418) BOOL */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t418 *,A68_INT ,struct A68t414 *),(struct A68t418 *,A68_INT ,struct A68t414 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE418,INT) MODE414 */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t418 *,A68_INT ,struct A68t408 *),(struct A68t418 *,A68_INT ,struct A68t408 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(REF MODE418,INT) MODE408 */

A_PROCEDURE(A68_INT ,A68t435,(struct A68t418 *,A68_INT ),(struct A68t418 *,A68_INT ,void *));
typedef struct A68t435  A68_435 ;    /* PROC(REF MODE418,INT) INT */
struct A68t436{
A68_INT  O;
A_PAD_INT(PAD_108)
struct A68t408  Ss;
};
typedef struct A68t436  A68_436 ;    /* STRUCT(INT,MODE408)  */

A_PROCEDURE(A68_VOID ,A68t437,(A68_INT ,struct A68t408 ,struct A68t436 *),(A68_INT ,struct A68t408 ,struct A68t436 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(INT,MODE408) MODE436 */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t418 *,struct A68t436 ),(struct A68t418 *,struct A68t436 ,void *));
typedef struct A68t438  A68_438 ;    /* PROC(REF MODE418,MODE436) VOID */
struct A68t439{
A68_INT  O;
A_PAD_INT(PAD_109)
A68_INT  Bl;
A_PAD_INT(PAD_110)
};
typedef struct A68t439  A68_439 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t440,(A68_INT ,A68_INT ,struct A68t439 *),(A68_INT ,A68_INT ,struct A68t439 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(INT,INT) MODE439 */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t418 *,struct A68t439 ),(struct A68t418 *,struct A68t439 ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE418,MODE439) VOID */
struct A68t442{
A68_INT  O;
A_PAD_INT(PAD_111)
A68_INT  R;
A_PAD_INT(PAD_112)
};
typedef struct A68t442  A68_442 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t443,(A68_INT ,A68_INT ,struct A68t442 *),(A68_INT ,A68_INT ,struct A68t442 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(INT,INT) MODE442 */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t418 *,struct A68t442 ),(struct A68t418 *,struct A68t442 ,void *));
typedef struct A68t444  A68_444 ;    /* PROC(REF MODE418,MODE442) VOID */
struct A68t445{
A68_INT  Current_size;
A_PAD_INT(PAD_113)
A68_INT  Max_size;
A_PAD_INT(PAD_114)
};
typedef struct A68t445  A68_445 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t445 *),(struct A68t445 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC MODE445 */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t445 ,A68_VC ),(struct A68t445 ,A68_VC ,void *));
typedef struct A68t447  A68_447 ;    /* PROC(MODE445,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,12,A68t448);
typedef struct A68t448  A68_448 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t445 *,struct A68t261 ),(struct A68t445 *,struct A68t261 ,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE445,MODE261) VOID */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t445 *,struct A68t263 ),(struct A68t445 *,struct A68t263 ,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE445,MODE263) VOID */

A_PROCEDURE(A68_INT ,A68t451,(struct A68t445 *),(struct A68t445 *,void *));
typedef struct A68t451  A68_451 ;    /* PROC(REF MODE445) INT */

A_PROCEDURE(A68_VOID ,A68t452,(struct A68t445 *,A68_INT ),(struct A68t445 *,A68_INT ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(REF MODE445,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t445 *),(struct A68t445 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(REF MODE445) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kemassemsparc --- */
extern A68_VOID  ZIDASIM_simfault(A68_VC );
extern A68_VOID  RJDASIM_get_vec_chars(A68_INT ,A68_VC *);
extern A68_VOID  GKDASIM_free_vec_chars(A68_VC *);
extern A68_INT  MPDASIM_nullmachineoffset;
extern A68_INT  JQDASIM_maximm13;
extern A68_INT  KQDASIM_minimm13;
extern A68_226  LEEASIM_save;
extern A68_226  PEEASIM_restore;
#define YVDASIM_eq 0X1U
#define ZVDASIM_z YVDASIM_eq
#define DWDASIM_lu 0X5U
#define EWDASIM_cs DWDASIM_lu
#define IWDASIM_ne 0X9U
#define JWDASIM_nz IWDASIM_ne
#define NWDASIM_geu 0XdU
#define OWDASIM_cc NWDASIM_geu
#define SWDASIM_eq_a 0X11U
#define TWDASIM_z_a SWDASIM_eq_a
#define XWDASIM_lu_a 0X15U
#define YWDASIM_cs_a XWDASIM_lu_a
#define CXDASIM_ne_a 0X19U
#define DXDASIM_nz_a CXDASIM_ne_a
#define HXDASIM_geu_a 0X1dU
#define IXDASIM_cc_a HXDASIM_geu_a
extern A68_BITS  MXDASIM_invcondition(A68_BITS );
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
extern A68_VOID  ISEASIM_using(struct A68t226 ,struct A68t219 );
/* --- End of imports from kemassemsparc --- */


/* --- Imports from kesave --- */
extern A68_INT  LGBASIM_readint(struct A68t160 ,struct A68t36 );
extern A68_VOID  RGBASIM_readid(struct A68t160 ,struct A68t36 ,A68_VC *);
extern A68_BOOL  XGBASIM_readbool(struct A68t160 ,struct A68t36 );
extern A68_VOID  PHBASIM_writeint(A68_INT ,struct A68t160 ,struct A68t36 );
extern A68_VOID  BIBASIM_writeid(A68_VC ,struct A68t160 ,struct A68t36 );
extern A68_VOID  FIBASIM_writebool(A68_BOOL ,struct A68t160 ,struct A68t36 );
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
extern void KIDASIM(void);   /* kemassemsparc */
extern void EFBASIM(void);   /* kesave */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_258   DAFASIM = {"$Id: kecodegenserversparc.a68,v 34.2 1995/03/29 13:04:46 ella Exp $"}; 
A_GISVEC(A68_VC ,EAFASIM,DAFASIM,67)
A68_259  OAFASIM_am_version;
static A68_95   EBFASIM = {"BOOL"}; 
A_GISVEC(A68_VC ,FBFASIM,EBFASIM,4)
static A68_267   MBFASIM = {" TRUE"}; 
A_GISVEC(A68_VC ,NBFASIM,MBFASIM,5)
static A68_269   UBFASIM = {" FALSE"}; 
A_GISVEC(A68_VC ,VBFASIM,UBFASIM,6)
static A68_95   UDFASIM = {"WORD"}; 
A_GISVEC(A68_VC ,VDFASIM,UDFASIM,4)
A68_INT  ZFFASIM_nullstacknumber;
A68_278 * AGFASIM_machineoffsetstack;
static A68_281   LGFASIM = {"MACHINEOFFSETSTACK"}; 
A_GISVEC(A68_VC ,MGFASIM,LGFASIM,18)
static A68_269   OJFASIM = {"MEMORY"}; 
A_GISVEC(A68_VC ,PJFASIM,OJFASIM,6)
static A68_267   PMFASIM = {"LABEL"}; 
A_GISVEC(A68_VC ,QMFASIM,PMFASIM,5)
A68_305  ONFASIM_indirect;
static A68_307   VNFASIM = {"ADDRESS"}; 
A_GISVEC(A68_VC ,WNFASIM,VNFASIM,7)
static A68_95   SOFASIM = {"VOID"}; 
A_GISVEC(A68_VC ,TOFASIM,SOFASIM,4)
static A68_311   JPFASIM = {"LABELEDOFFSET"}; 
A_GISVEC(A68_VC ,KPFASIM,JPFASIM,13)
static A68_312   VPFASIM = {"machine_offset"}; 
A_GISVEC(A68_VC ,WPFASIM,VPFASIM,14)
A68_316 * KQFASIM_labellist;
static A68_319   VQFASIM = {"LABELLIST"}; 
A_GISVEC(A68_VC ,WQFASIM,VQFASIM,9)
A68_326 * LSFASIM_machinelabelstack;
static A68_329   WSFASIM = {"MACHINELABELSTACK"}; 
A_GISVEC(A68_VC ,XSFASIM,WSFASIM,17)
static A68_319   NTFASIM = {"location "}; 
A_GISVEC(A68_VC ,OTFASIM,NTFASIM,9)
static A68_269   TTFASIM = {" size "}; 
A_GISVEC(A68_VC ,UTFASIM,TTFASIM,6)
static A68_319   DVFASIM = {"BACKPATCH"}; 
A_GISVEC(A68_VC ,EVFASIM,DVFASIM,9)
A68_337 * KVFASIM_backpatchlist;
static A68_311   VVFASIM = {"BACKPATCHLIST"}; 
A_GISVEC(A68_VC ,WVFASIM,VVFASIM,13)
#define EXFASIM_unknown 0
#define FXFASIM_fixed 1
#define GXFASIM_instanceptr 2
#define HXFASIM_boolean 3
#define IXFASIM_integer 4
static A68_269   NXFASIM = {"PARAM "}; 
A_GISVEC(A68_VC ,OXFASIM,NXFASIM,6)
A68_349 * GYFASIM_nilparams;
static A68_311   IZFASIM = {"LABELEDPARAMS"}; 
A_GISVEC(A68_VC ,JZFASIM,IZFASIM,13)
static A68_362   HAGASIM = {"LABELEDSPEC"}; 
A_GISVEC(A68_VC ,IAGASIM,HAGASIM,11)
A68_363 * QAGASIM_speclist;
static A68_366   BBGASIM = {"SPECLIST"}; 
A_GISVEC(A68_VC ,CBGASIM,BBGASIM,8)
A68_370 * FCGASIM_parameterlist;
static A68_311   QCGASIM = {"PARAMETERLIST"}; 
A_GISVEC(A68_VC ,RCGASIM,QCGASIM,13)
static A68_INT  LEGASIM_maxregister;
static A68_INT  MEGASIM_minregister;
A68_BITS  NEGASIM_tempreg1;
A68_BITS  OEGASIM_tempreg2;
A68_BITS  PEGASIM_tempreg3;
A68_BITS  QEGASIM_tempreg4;
A68_BITS  REGASIM_callinstpointer;
A68_BITS  SEGASIM_dynamicpointer;
A68_BITS  TEGASIM_globalpointer;
static A68_362   BFGASIM = {"RMALLOCATOR"}; 
A_GISVEC(A68_VC ,CFGASIM,BFGASIM,11)
static A68_312   JFGASIM = {"window_offset "}; 
A_GISVEC(A68_VC ,KFGASIM,JFGASIM,14)
static A68_311   TFGASIM = {"register_ind "}; 
A_GISVEC(A68_VC ,UFGASIM,TFGASIM,13)
static A68_312   DGGASIM = {"memory_offset "}; 
A_GISVEC(A68_VC ,EGGASIM,DGGASIM,14)
static A68_362   NGGASIM = {"max_offset "}; 
A_GISVEC(A68_VC ,OGGASIM,NGGASIM,11)
static A68_392   QIGASIM = {"INREGISTER"}; 
A_GISVEC(A68_VC ,RIGASIM,QIGASIM,10)
static A68_267   IJGASIM = {"COPY "}; 
A_GISVEC(A68_VC ,JJGASIM,IJGASIM,5)
static A68_267   EKGASIM = {"CONST"}; 
A_GISVEC(A68_VC ,FKGASIM,EKGASIM,5)
static A68_366   VKGASIM = {"SUMCONST"}; 
A_GISVEC(A68_VC ,WKGASIM,VKGASIM,8)
static A68_392   VLGASIM = {"INDIRECTED"}; 
A_GISVEC(A68_VC ,WLGASIM,VLGASIM,10)
static A68_392   NMGASIM = {"CONDITION "}; 
A_GISVEC(A68_VC ,OMGASIM,NMGASIM,10)
static A68_413   HPGASIM = {"Invalid use of condition on stack."}; 
A_GISVEC(A68_VC ,IPGASIM,HPGASIM,34)
static A68_413   QPGASIM = {"Invalid use of condition on stack."}; 
A_GISVEC(A68_VC ,RPGASIM,QPGASIM,34)
#define TPGASIM_smallstacklocation A68_TRUE
#define UPGASIM_largestacklocation 0
#define VPGASIM_unknownstacklocation ' '
static A68_281   BQGASIM = {"SMALLSTACKLOCATION"}; 
A_GISVEC(A68_VC ,CQGASIM,BQGASIM,18)
static A68_281   RQGASIM = {"LARGESTACKLOCATION"}; 
A_GISVEC(A68_VC ,SQGASIM,RQGASIM,18)
static A68_417   HRGASIM = {"UNKNOWNSTACKLOCATION"}; 
A_GISVEC(A68_VC ,IRGASIM,HRGASIM,20)
static A68_311   BSGASIM = {"LOCATIONSTACK"}; 
A_GISVEC(A68_VC ,CSGASIM,BSGASIM,13)
static A68_95   JSGASIM = {"top "}; 
A_GISVEC(A68_VC ,KSGASIM,JSGASIM,4)
static A68_448   TXGASIM = {"SIZERECORDER"}; 
A_GISVEC(A68_VC ,UXGASIM,TXGASIM,12)
typedef struct   /* env of non-global proc */
{
A68_INT  I;
A_PAD_INT(PAD_115)
} SCFASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} DDFASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  W;
} ZEFASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_293  Ip;
} QKFASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  C;
} DMFASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_418 * S;
} CTGASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_418 * S;
} AUGASIM_generator;

A_STATIC A68_VOID  HAFASIM_generator(A68_BOOL  GAFASIM_anonymous, A68_32  *ReturnedValue);

A68_VOID  RAFASIM_ferryoutandflt(A68_160  Fp, A68_36  Ft, A68_261  *ReturnedValue);

A68_VOID  WAFASIM_ferryinandflt(A68_160  Fp, A68_36  Ft, A68_263  *ReturnedValue);

A68_VOID  BBFASIM_dump(A68_BOOL  B, A68_VC  Indent);

A68_VOID  DCFASIM_save(A68_BOOL  X, A68_261  Ff);

A68_VOID  GCFASIM_restore(A68_BOOL * X, A68_263  Ff);

A68_VOID  JCFASIM_save(A68_INT  X, A68_261  Ff);

A68_VOID  MCFASIM_restore(A68_INT * X, A68_263  Ff);

A68_VOID  OCFASIM_newword(A68_INT  I, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RCFASIM_generator(A68_BOOL  PCFASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  YCFASIM_word(A68_INT  I, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CDFASIM_generator(A68_BOOL  ADFASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RDFASIM_dump(A68_VC  W, A68_VC  Indent);

A68_VOID  VEFASIM_new(A68_VC  W, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YEFASIM_generator(A68_BOOL  WEFASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  FFFASIM_integer(A68_VC  W);

A68_INT  QFFASIM_length(A68_VC  W);

A68_VOID  UFFASIM_save(A68_VC  X, A68_261  Ff);

A68_VOID  XFFASIM_restore(A68_VC * X, A68_263  Ff);

A_STATIC A68_INT  CGFASIM_length(A68_278 * Lis);

A68_VOID  IGFASIM_dump(A68_278 * Lis, A68_VC  Indent);

A68_VOID  FHFASIM_push(A68_278 ** Lis, A68_INT  K);

A68_INT  JHFASIM_pop(A68_278 ** Lis);

A68_BOOL  NHFASIM_cleared(A68_278 * Lis);

A68_INT  QHFASIM_bytesize(A68_INT  N);

A68_VOID  SHFASIM_nullmemory(A68_285  *ReturnedValue);

A68_VOID  YHFASIM_destroy(A68_285 * M);

A68_VOID  EIFASIM_create(A68_285 * M, A68_INT  Size);

A68_VOID  JIFASIM_extend(A68_285 * M, A68_INT  Size);

A68_VOID  UIFASIM_save(A68_285 * X, A68_261  Ff);

A68_VOID  BJFASIM_restore(A68_285 * X, A68_263  Ff);

A68_VOID  LJFASIM_dump(A68_285  M, A68_VC  Indent);

A68_INT  AKFASIM_sizeof(A68_285 * X);

A68_VOID  HKFASIM_len(A68_INT  Os, A68_INT  Le, A68_293  *ReturnedValue);

A68_VOID  MKFASIM_get(A68_285 * M, A68_293  Ip, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PKFASIM_generator(A68_BOOL  NKFASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  HLFASIM_att(A68_VC  Wo, A68_INT  Os, A68_296  *ReturnedValue);

A68_VOID  MLFASIM_put(A68_285 * M, A68_296  Ip);

A68_VOID  YLFASIM_label(A68_VC  C, A68_299  *ReturnedValue);

A_STATIC A68_VOID  CMFASIM_generator(A68_BOOL  AMFASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  KMFASIM_dump(A68_299  Lab, A68_VC  Indent);

A68_VOID  FNFASIM_save(A68_299 * X, A68_261  Ff);

A68_VOID  INFASIM_restore(A68_299 * X, A68_263  Ff);

A68_BOOL  LNFASIM_(A68_299 * L1, A68_299  L2);

A68_VOID  SNFASIM_dump(A68_305  A, A68_VC  Indent);

A68_VOID  BPFASIM_labeledoffset(A68_299  Lab, A68_INT  M, A68_308  *ReturnedValue);

A68_VOID  GPFASIM_dump(A68_308  Lo, A68_VC  Indent);

A68_VOID  GQFASIM_save(A68_308 * X, A68_261  Ff);

A68_VOID  JQFASIM_restore(A68_308 * X, A68_263  Ff);

A_STATIC A68_INT  MQFASIM_length(A68_316 * Lis);

A68_VOID  SQFASIM_dump(A68_316 * Lis, A68_VC  Indent);

A68_VOID  IRFASIM_save(A68_316 * Lis, A68_261  Ff);

A68_VOID  ORFASIM_restore(A68_316 ** Lis, A68_263  Ff);

A68_INT  XRFASIM_lookup(A68_316 * Lis, A68_299  K);

A68_VOID  DSFASIM_write(A68_316 ** Lis, A68_308  K);

A68_VOID  HSFASIM_removelast(A68_316 ** Lis);

A68_BOOL  JSFASIM_cleared(A68_316 * Lis);

A_STATIC A68_INT  NSFASIM_length(A68_326 * Lis);

A68_VOID  TSFASIM_dump(A68_326 * Lis, A68_VC  Indent);

A68_VOID  JUFASIM_push(A68_326 ** Lis, A68_211  K);

A68_VOID  NUFASIM_pop(A68_326 ** Lis, A68_211  *ReturnedValue);

A68_BOOL  RUFASIM_cleared(A68_326 * Lis);

A68_VOID  VUFASIM_backpatch(A68_299  Lab, A68_326 * Ml, A68_334  *ReturnedValue);

A68_VOID  AVFASIM_dump(A68_334  Bp, A68_VC  Indent);

A_STATIC A68_INT  MVFASIM_length(A68_337 * Lis);

A68_VOID  SVFASIM_dump(A68_337 * Lis, A68_VC  Indent);

A68_VOID  IWFASIM_att(A68_211  Ml, A68_299  Lab, A68_340  *ReturnedValue);

A68_VOID  NWFASIM_write(A68_337 ** Lis, A68_340  Ip);

A68_326 * VWFASIM_lookupremove(A68_337 ** Lis, A68_299  K);

A68_BOOL  CXFASIM_cleared(A68_337 * Lis);

A68_VOID  LXFASIM_dump(A68_345  P, A68_VC  Indent);

A68_VOID  CYFASIM_save(A68_345 * X, A68_261  Ff);

A68_VOID  FYFASIM_restore(A68_345 * X, A68_263  Ff);

A68_VOID  JYFASIM_dump(A68_349 * Ip, A68_VC  Indent);

A68_VOID  OYFASIM_save(A68_349 * X, A68_261  Ff);

A68_VOID  RYFASIM_restore(A68_349 ** X, A68_263  Ff);

A68_INT  UYFASIM_length(A68_349 * P);

A68_VOID  BZFASIM_labeledparams(A68_299  Lab, A68_349 * Ip, A68_349 * Op, A68_354  *ReturnedValue);

A68_VOID  GZFASIM_dump(A68_354  P, A68_VC  Indent);

A68_VOID  UZFASIM_save(A68_354 * X, A68_261  Ff);

A68_VOID  XZFASIM_restore(A68_354 * X, A68_263  Ff);

A68_VOID  AAGASIM_labeledspec(A68_299  Lab, A68_349 * Sp, A68_359  *ReturnedValue);

A68_VOID  FAGASIM_dump(A68_359  P, A68_VC  Indent);

A_STATIC A68_INT  SAGASIM_length(A68_363 * Lis);

A68_VOID  YAGASIM_dump(A68_363 * Lis, A68_VC  Indent);

A68_BOOL  OBGASIM_present(A68_363 * Lis, A68_299  K);

A68_349 * UBGASIM_lookupremove(A68_363 ** Lis, A68_299  K);

A68_VOID  CCGASIM_write(A68_363 ** Lis, A68_359  K);

A_STATIC A68_INT  HCGASIM_length(A68_370 * Lis);

A68_VOID  NCGASIM_dump(A68_370 * Lis, A68_VC  Indent);

A68_VOID  DDGASIM_save(A68_370 * Lis, A68_261  Ff);

A68_VOID  JDGASIM_restore(A68_370 ** Lis, A68_263  Ff);

A68_VOID  SDGASIM_lookup(A68_370 * Lis, A68_299  K, A68_375  *ReturnedValue);

A_STATIC A68_VOID  AEGASIM_remove(A68_370 ** Lis, A68_299  K);

A68_VOID  GEGASIM_write(A68_370 ** Lis, A68_354  K);

A68_VOID  KEGASIM_removelast(A68_370 ** Lis);

A68_VOID  UEGASIM_rmallocator(A68_381  *ReturnedValue);

A68_VOID  ZEGASIM_dump(A68_381  R, A68_VC  Indent);

A68_VOID  YGGASIM_save(A68_381 * X, A68_261  Ff);

A68_VOID  BHGASIM_restore(A68_381 * X, A68_263  Ff);

A68_VOID  DHGASIM_clear(A68_381 * R);

A68_VOID  KHGASIM_savewindow(A68_381 * R);

A68_VOID  PHGASIM_restorewindow(A68_381 * R);

A68_BOOL  UHGASIM_willsaveonreserver(A68_381 * R);

A68_INT  XHGASIM_reserver(A68_381 * R);

A68_VOID  CIGASIM_unreserver(A68_381 * R);

A68_VOID  IIGASIM_inregister(A68_BOOL  F, A68_389  *ReturnedValue);

A68_VOID  OIGASIM_dump(A68_389  S, A68_VC  Indent);

A68_VOID  BJGASIM_copy(A68_INT  S, A68_BOOL  F, A68_393  *ReturnedValue);

A68_VOID  GJGASIM_dump(A68_393  S, A68_VC  Indent);

A68_VOID  WJGASIM_const(A68_VC  I, A68_396  *ReturnedValue);

A68_VOID  CKGASIM_dump(A68_396  S, A68_VC  Indent);

A68_VOID  OKGASIM_sumconst(A68_INT  I, A68_BOOL  Callinstf, A68_399  *ReturnedValue);

A68_VOID  TKGASIM_dump(A68_399  S, A68_VC  Indent);

A68_VOID  NLGASIM_indirected(A68_BOOL  Callinstf, A68_402  *ReturnedValue);

A68_VOID  TLGASIM_dump(A68_402  S, A68_VC  Indent);

A68_VOID  FMGASIM_condition(A68_BITS  I, A68_405  *ReturnedValue);

A68_VOID  LMGASIM_dump(A68_405  C, A68_VC  Indent);

A68_VOID  YMGASIM_dump(A68_408  R, A68_VC  Indent);

A68_VOID  INGASIM_(A68_408  R, A68_408  S, A68_408  *ReturnedValue);

A68_VOID  UOGASIM_not(A68_408  S, A68_408  *ReturnedValue);

A68_BOOL  CPGASIM_allocregisterinuse(A68_408  S);

A68_BOOL  LPGASIM_callinstpointerinuse(A68_408  S);

A68_VOID  YPGASIM_dump(A68_415  S, A68_VC  Indent);

A68_VOID  PRGASIM_locationstack(A68_418  *ReturnedValue);

A_STATIC A68_VOID  SRGASIM_generator(A68_BOOL  RRGASIM_anonymous, A68_419  *ReturnedValue);

A68_VOID  ZRGASIM_dump(A68_418  S, A68_VC  Indent);

A68_VOID  XSGASIM_new(A68_418 * S, A68_418  *ReturnedValue);

A_STATIC A68_VOID  BTGASIM_generator(A68_BOOL  ZSGASIM_anonymous, A68_419  *ReturnedValue, void *NonLocals);

A68_VOID  JTGASIM_clear(A68_418 * S);

A68_INT  MTGASIM_length(A68_418 * S);

A68_VOID  PTGASIM_pop(A68_418 * S, A68_415  *ReturnedValue);

A68_VOID  WTGASIM_push(A68_418 * S, A68_415  Loc);

A_STATIC A68_VOID  ZTGASIM_generator(A68_BOOL  XTGASIM_anonymous, A68_419  *ReturnedValue, void *NonLocals);

A68_VOID  PUGASIM_get(A68_418 * S, A68_INT  O, A68_415  *ReturnedValue);

A68_VOID  VUGASIM_att(A68_415  Lo, A68_INT  Nu, A68_429  *ReturnedValue);

A68_VOID  AVGASIM_put(A68_418 * S, A68_429  Ip);

A68_BOOL  FVGASIM_cleared(A68_418 * S);

A68_VOID  JVGASIM_typeof(A68_418 * S, A68_INT  O, A68_414  *ReturnedValue);

A68_VOID  PVGASIM_stateof(A68_418 * S, A68_INT  O, A68_408  *ReturnedValue);

A68_INT  VVGASIM_registerof(A68_418 * S, A68_INT  O);

A68_INT  BWGASIM_sizeof(A68_418 * S, A68_INT  O);

A68_VOID  HWGASIM_given(A68_INT  Nu, A68_408  Sy, A68_436  *ReturnedValue);

A68_VOID  MWGASIM_changestateof(A68_418 * S, A68_436  Ip);

A68_VOID  SWGASIM_givenn(A68_INT  Nu, A68_INT  Bi, A68_439  *ReturnedValue);

A68_VOID  XWGASIM_changesizeof(A68_418 * S, A68_439  Ip);

A68_VOID  DXGASIM_given(A68_INT  Nu, A68_INT  Op, A68_442  *ReturnedValue);

A68_VOID  IXGASIM_changeregisterof(A68_418 * S, A68_442  Ip);

A68_VOID  MXGASIM_sizerecorder(A68_445  *ReturnedValue);

A68_VOID  RXGASIM_dump(A68_445  Sr, A68_VC  Indent);

A68_VOID  GYGASIM_save(A68_445 * X, A68_261  Ff);

A68_VOID  JYGASIM_restore(A68_445 * X, A68_263  Ff);

A68_INT  LYGASIM_maxsize(A68_445 * Sr);

A68_VOID  PYGASIM_plus(A68_445 * Sr, A68_INT  N);

A68_VOID  UYGASIM_minus(A68_445 * Sr, A68_INT  N);

A68_VOID  XYGASIM_clear(A68_445 * Sr);

A_STATIC A68_VOID  RCFASIM_generator(A68_BOOL  PCFASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SCFASIM_generator *)NonLocals)->x)
{ 
A68_VC  TCFASIM;  /* clause result */
A68_VC  UCFASIM;  /* OPERATORS - dynamic generator */
{ 
UCFASIM.upb = NL(I) ;
( PCFASIM_anonymous? A_VLOC(A68_CHAR ,UCFASIM): A_VHEAP(A68_CHAR ,UCFASIM) );
TCFASIM = UCFASIM;
} 
*ReturnedValue = (TCFASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CDFASIM_generator(A68_BOOL  ADFASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DDFASIM_generator *)NonLocals)->x)
{ 
A68_VC  EDFASIM;  /* clause result */
A68_VC  FDFASIM;  /* OPERATORS - dynamic generator */
{ 
FDFASIM.upb = 4 ;
( ADFASIM_anonymous? A_VLOC(A68_CHAR ,FDFASIM): A_VHEAP(A68_CHAR ,FDFASIM) );
EDFASIM = FDFASIM;
} 
*ReturnedValue = (EDFASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YEFASIM_generator(A68_BOOL  WEFASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZEFASIM_generator *)NonLocals)->x)
{ 
A68_VC  AFFASIM;  /* clause result */
A68_VC  BFFASIM;  /* OPERATORS - dynamic generator */
{ 
BFFASIM.upb = NL(W).upb ;
( WEFASIM_anonymous? A_VLOC(A68_CHAR ,BFFASIM): A_VHEAP(A68_CHAR ,BFFASIM) );
AFFASIM = BFFASIM;
} 
*ReturnedValue = (AFFASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PKFASIM_generator(A68_BOOL  NKFASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QKFASIM_generator *)NonLocals)->x)
{ 
A68_VC  RKFASIM;  /* clause result */
A68_VC  SKFASIM;  /* OPERATORS - dynamic generator */
{ 
SKFASIM.upb = NL(Ip).Len ;
( NKFASIM_anonymous? A_VLOC(A68_CHAR ,SKFASIM): A_VHEAP(A68_CHAR ,SKFASIM) );
RKFASIM = SKFASIM;
} 
*ReturnedValue = (RKFASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CMFASIM_generator(A68_BOOL  AMFASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DMFASIM_generator *)NonLocals)->x)
{ 
A68_VC  EMFASIM;  /* clause result */
A68_VC  FMFASIM;  /* OPERATORS - dynamic generator */
{ 
FMFASIM.upb = NL(C).upb ;
( AMFASIM_anonymous? A_VLOC(A68_CHAR ,FMFASIM): A_VHEAP(A68_CHAR ,FMFASIM) );
EMFASIM = FMFASIM;
} 
*ReturnedValue = (EMFASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SRGASIM_generator(A68_BOOL  RRGASIM_anonymous, A68_419  *ReturnedValue)
{ 
A68_419  TRGASIM;  /* clause result */
A68_419  URGASIM;  /* OPERATORS - dynamic generator */
{ 
URGASIM.upb = 7 ;
( RRGASIM_anonymous? A_VLOC(A68_415 ,URGASIM): A_VHEAP(A68_415 ,URGASIM) );
TRGASIM = URGASIM;
} 
*ReturnedValue = (TRGASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BTGASIM_generator(A68_BOOL  ZSGASIM_anonymous, A68_419  *ReturnedValue, void *NonLocals)
#define NL(x) (((CTGASIM_generator *)NonLocals)->x)
{ 
A68_419  DTGASIM;  /* clause result */
A68_419  ETGASIM;  /* OPERATORS - dynamic generator */
{ 
ETGASIM.upb = (*(&(NL(S)->Stack_locations))).upb ;
( ZSGASIM_anonymous? A_VLOC(A68_415 ,ETGASIM): A_VHEAP(A68_415 ,ETGASIM) );
DTGASIM = ETGASIM;
} 
*ReturnedValue = (DTGASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZTGASIM_generator(A68_BOOL  XTGASIM_anonymous, A68_419  *ReturnedValue, void *NonLocals)
#define NL(x) (((AUGASIM_generator *)NonLocals)->x)
{ 
A68_419  BUGASIM;  /* clause result */
A68_419  CUGASIM;  /* OPERATORS - dynamic generator */
{ 
CUGASIM.upb = ((*(&(NL(S)->Stack_locations))).upb*2) ;
( XTGASIM_anonymous? A_VLOC(A68_415 ,CUGASIM): A_VHEAP(A68_415 ,CUGASIM) );
BUGASIM = CUGASIM;
} 
*ReturnedValue = (BUGASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HAFASIM_generator(A68_BOOL  GAFASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  IAFASIM;  /* clause result */
A68_32  JAFASIM;  /* OPERATORS - dynamic generator */
{ 
JAFASIM.upb = 3 ;
( GAFASIM_anonymous? A_VLOC(A68_INT ,JAFASIM): A_VHEAP(A68_INT ,JAFASIM) );
IAFASIM = JAFASIM;
} 
*ReturnedValue = (IAFASIM);
return;
} 
#undef NL
 /* line 78: */

A68_VOID  RAFASIM_ferryoutandflt(A68_160  Fp, A68_36  Ft, A68_261  *ReturnedValue)
{ 
A68_261  SAFASIM;  /* collateral clause result */
A68_261  TAFASIM;  /* clause result */
A_PROC_ENTRY(ferryoutandflt);
 /* line 81: */
SAFASIM.Ferryout = Fp;
SAFASIM.Flt = Ft;
TAFASIM = SAFASIM;
A_PROC_EXIT(ferryoutandflt);
*ReturnedValue = (TAFASIM);
return;
} 
#undef NL
 /* line 91: */

A68_VOID  WAFASIM_ferryinandflt(A68_160  Fp, A68_36  Ft, A68_263  *ReturnedValue)
{ 
A68_263  XAFASIM;  /* collateral clause result */
A68_263  YAFASIM;  /* clause result */
A_PROC_ENTRY(ferryinandflt);
 /* line 94: */
XAFASIM.Ferryin = Fp;
XAFASIM.Flt = Ft;
YAFASIM = XAFASIM;
A_PROC_EXIT(ferryinandflt);
*ReturnedValue = (YAFASIM);
return;
} 
#undef NL

A68_VOID  BBFASIM_dump(A68_BOOL  B, A68_VC  Indent)
{ 
A68_266  CBFASIM;  /* collateral clause result */
A68_52  DBFASIM;  /* OPERATORS - mode -> union mode */
A68_52  GBFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  HBFASIM;  /* YIELD */
A68_52  IBFASIM;  /* OPERATORS - mode -> union mode */
A68_56  JBFASIM;  /* procedure value */
A68_85  KBFASIM;  /* OPERATORS - istruct -> vector */
A68_268  LBFASIM;  /* collateral clause result */
A68_52  OBFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  PBFASIM;  /* YIELD */
A68_52  QBFASIM;  /* OPERATORS - mode -> union mode */
A68_56  RBFASIM;  /* procedure value */
A68_85  SBFASIM;  /* OPERATORS - istruct -> vector */
A68_268  TBFASIM;  /* collateral clause result */
A68_52  WBFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  XBFASIM;  /* YIELD */
A68_52  YBFASIM;  /* OPERATORS - mode -> union mode */
A68_56  ZBFASIM;  /* procedure value */
A68_85  ACFASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 99: */
 /* line 100: */
{ 
CBFASIM.data[0] = A_UNITE(DBFASIM,mode7,7,Indent);
HBFASIM = FBFASIM ;
CBFASIM.data[1] = A_UNITE(GBFASIM,mode7,7,HBFASIM);
JBFASIM.fn.fn_global = LRAAOSL_newline;
JBFASIM.nonlocals = A68_NIL;
CBFASIM.data[2] = A_UNITE(IBFASIM,mode12,12,JBFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KBFASIM,CBFASIM,3,A68_52 ));
 /* line 101: */
 /* line 102: */
if ( B )
{ 
PBFASIM = A_VC_PLUS(Indent,NBFASIM) ;
LBFASIM.data[0] = A_UNITE(OBFASIM,mode7,7,PBFASIM);
RBFASIM.fn.fn_global = LRAAOSL_newline;
RBFASIM.nonlocals = A68_NIL;
LBFASIM.data[1] = A_UNITE(QBFASIM,mode12,12,RBFASIM);
 /* line 103: */
 /* line 104: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(SBFASIM,LBFASIM,2,A68_52 ));
} 
else
{ 
XBFASIM = A_VC_PLUS(Indent,VBFASIM) ;
TBFASIM.data[0] = A_UNITE(WBFASIM,mode7,7,XBFASIM);
ZBFASIM.fn.fn_global = LRAAOSL_newline;
ZBFASIM.nonlocals = A68_NIL;
TBFASIM.data[1] = A_UNITE(YBFASIM,mode12,12,ZBFASIM);
 /* line 105: */
 /* line 106: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ACFASIM,TBFASIM,2,A68_52 ));
} 
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  DCFASIM_save(A68_BOOL  X, A68_261  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 111: */
 /* line 112: */
 /* line 113: */
FIBASIM_writebool(X, Ff.Ferryout, Ff.Flt);
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  GCFASIM_restore(A68_BOOL * X, A68_263  Ff)
{ 
A_PROC_ENTRY(restore);
 /* line 118: */
 /* line 119: */
 /* line 120: */
(*X) = XGBASIM_readbool(Ff.Ferryin, Ff.Flt);
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_VOID  JCFASIM_save(A68_INT  X, A68_261  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 132: */
 /* line 133: */
 /* line 134: */
PHBASIM_writeint(X, Ff.Ferryout, Ff.Flt);
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  MCFASIM_restore(A68_INT * X, A68_263  Ff)
{ 
A_PROC_ENTRY(restore);
 /* line 139: */
 /* line 140: */
 /* line 141: */
(*X) = LGBASIM_readint(Ff.Ferryin, Ff.Flt);
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_VOID  OCFASIM_newword(A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_31  QCFASIM_generator;   /* proc value of non-global proc */
A68_VC  VCFASIM;  /* clause result */
A68_VC  WCFASIM;  /* avoid structure result */
A_PROC_ENTRY(newword);
 /* line 154: */
A_CLOSURE( QCFASIM_generator, RCFASIM_generator, SCFASIM_generator );
(( SCFASIM_generator * ) ( QCFASIM_generator.nonlocals )) -> I = I;
A_CALLPROC(QCFASIM_generator,(A68_FALSE, &WCFASIM),(A68_FALSE, &WCFASIM,(QCFASIM_generator).nonlocals));
VCFASIM = WCFASIM;
A_PROC_EXIT(newword);
*ReturnedValue = (VCFASIM);
return;
} 
#undef NL

A68_VOID  YCFASIM_word(A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_INT  ZCFASIM_acc;
A68_31  BDFASIM_generator;   /* proc value of non-global proc */
A68_VC  HDFASIM;  /* avoid structure result */
A68_VC  GDFASIM_result;
A68_INT  IDFASIM_n;
A68_INT  JDFASIM;  /* YIELD */
A68_INT  KDFASIM;  /* ADICOPS - MOD */
A68_INT  LDFASIM;  /* ADICOPS - MOD */
A68_CHAR * MDFASIM;  /* YIELD */
A68_INT  NDFASIM;  /* clause result */
A68_VC  ODFASIM;  /* clause result */
A_PROC_ENTRY(word);
 /* line 160: */
 /* line 161: */
{ 
ZCFASIM_acc = I;
 /* line 162: */
A_CLOSURE( BDFASIM_generator, CDFASIM_generator, DDFASIM_generator );
A_CALLPROC(BDFASIM_generator,(A68_FALSE, &HDFASIM),(A68_FALSE, &HDFASIM,(BDFASIM_generator).nonlocals));
GDFASIM_result = HDFASIM;
 /* line 163: */
for ( IDFASIM_n = 1;
IDFASIM_n <= 4;
IDFASIM_n += 1 )
{ 
 /* line 164: */
JDFASIM = ((4-IDFASIM_n)+1) ;
LDFASIM = 256 ;
MDFASIM = (&A_VINDEX(GDFASIM_result,JDFASIM)) ;
(*MDFASIM) = (A68_CHAR)A_MOD(ZCFASIM_acc,LDFASIM,KDFASIM);
 /* line 165: */
if ( (ZCFASIM_acc>=0) )
{ 
NDFASIM = (ZCFASIM_acc/256);
} 
else
{ 
 /* line 166: */
NDFASIM = (((ZCFASIM_acc+1)/256)-1);
} 
ZCFASIM_acc = NDFASIM;
}
 /* line 167: */
 /* line 168: */
ODFASIM = GDFASIM_result;
} 
A_PROC_EXIT(word);
*ReturnedValue = (ODFASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RDFASIM_dump(A68_VC  W, A68_VC  Indent)
{ 
A68_266  SDFASIM;  /* collateral clause result */
A68_52  TDFASIM;  /* OPERATORS - mode -> union mode */
A68_52  WDFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  XDFASIM;  /* YIELD */
A68_52  YDFASIM;  /* OPERATORS - mode -> union mode */
A68_56  ZDFASIM;  /* procedure value */
A68_85  AEFASIM;  /* OPERATORS - istruct -> vector */
A68_INT  BEFASIM_i;
A68_INT  CEFASIM;  /* to part of loop */
A68_INT  DEFASIM;  /* ADICOPS - MOD */
A68_INT  EEFASIM;  /* ADICOPS - MOD */
A68_VC  FEFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  GEFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  HEFASIM;  /* YIELD */
A68_85  IEFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_268  JEFASIM;  /* collateral clause result */
A68_52  KEFASIM;  /* OPERATORS - mode -> union mode */
A68_INT  LEFASIM;  /* YIELD */
A68_52  MEFASIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  NEFASIM;  /* YIELD */
A68_85  OEFASIM;  /* OPERATORS - istruct -> vector */
A68_INT  PEFASIM;  /* ADICOPS - MOD */
A68_INT  QEFASIM;  /* ADICOPS - MOD */
A68_52  REFASIM;  /* OPERATORS - mode -> union mode */
A68_56  SEFASIM;  /* procedure value */
A68_85  TEFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 173: */
 /* line 174: */
{ 
SDFASIM.data[0] = A_UNITE(TDFASIM,mode7,7,Indent);
XDFASIM = VDFASIM ;
SDFASIM.data[1] = A_UNITE(WDFASIM,mode7,7,XDFASIM);
ZDFASIM.fn.fn_global = LRAAOSL_newline;
ZDFASIM.nonlocals = A68_NIL;
SDFASIM.data[2] = A_UNITE(YDFASIM,mode12,12,ZDFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(AEFASIM,SDFASIM,3,A68_52 ));
 /* line 175: */
CEFASIM = W.upb;
for ( BEFASIM_i = 1;
BEFASIM_i <= CEFASIM;
BEFASIM_i += 1 )
{ 
 /* line 176: */
EEFASIM = 20 ;
if ( (A_MOD(BEFASIM_i,EEFASIM,DEFASIM)==1) )
{ 
HEFASIM = A_VC_PLUS(Indent,A_HVEC(FEFASIM,' ',A68_CHAR )) ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(IEFASIM,A_UNITE(GEFASIM,mode7,7,HEFASIM),A68_52 ));
} 
 /* line 177: */
LEFASIM = (A68_INT)(unsigned char)(*(&A_VINDEX(W,BEFASIM_i))) ;
JEFASIM.data[0] = A_UNITE(KEFASIM,mode1,1,LEFASIM);
NEFASIM = ' ' ;
JEFASIM.data[1] = A_UNITE(MEFASIM,mode6,6,NEFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(OEFASIM,JEFASIM,2,A68_52 ));
 /* line 178: */
QEFASIM = 20 ;
if ( ((A_MOD(BEFASIM_i,QEFASIM,PEFASIM)==0)|(BEFASIM_i==W.upb)) )
{ 
 /* line 179: */
SEFASIM.fn.fn_global = LRAAOSL_newline;
SEFASIM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(TEFASIM,A_UNITE(REFASIM,mode12,12,SEFASIM),A68_52 ));
} 
}
 /* line 180: */
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  VEFASIM_new(A68_VC  W, A68_VC  *ReturnedValue)
{ 
A68_31  XEFASIM_generator;   /* proc value of non-global proc */
A68_VC  CFFASIM;  /* clause result */
A68_VC  DFFASIM;  /* avoid structure result */
A_PROC_ENTRY(new);
 /* line 184: */
A_CLOSURE( XEFASIM_generator, YEFASIM_generator, ZEFASIM_generator );
(( ZEFASIM_generator * ) ( XEFASIM_generator.nonlocals )) -> W = W;
A_CALLPROC(XEFASIM_generator,(A68_FALSE, &DFFASIM),(A68_FALSE, &DFFASIM,(XEFASIM_generator).nonlocals));
A_VASSIGN2(W,DFFASIM,A68_CHAR ) ;
CFFASIM = DFFASIM;
A_PROC_EXIT(new);
*ReturnedValue = (CFFASIM);
return;
} 
#undef NL

A68_INT  FFFASIM_integer(A68_VC  W)
{ 
A68_INT  GFFASIM;  /* YIELD */
A68_BOOL  HFFASIM_signed;
A68_INT  IFFASIM_ans;
A68_INT  JFFASIM_i;
A68_INT  KFFASIM;  /* to part of loop */
A68_INT  LFFASIM_unsval;
A68_INT  MFFASIM;  /* clause result */
A68_INT  NFFASIM_val;
A68_INT  OFFASIM;  /* clause result */
A_PROC_ENTRY(integer);
 /* line 190: */
 /* line 191: */
{ 
GFFASIM = 1 ;
HFFASIM_signed = ((A68_INT)(unsigned char)(*(&A_VINDEX(W,GFFASIM)))>=128);
 /* line 192: */
IFFASIM_ans = 0;
 /* line 193: */
KFFASIM = W.upb;
for ( JFFASIM_i = 1;
JFFASIM_i <= KFFASIM;
JFFASIM_i += 1 )
{ 
 /* line 194: */
LFFASIM_unsval = (A68_INT)(unsigned char)(*(&A_VINDEX(W,JFFASIM_i)));
 /* line 195: */
 /* line 196: */
if ( ((HFFASIM_signed&(LFFASIM_unsval>=128))&(JFFASIM_i==1)) )
{ 
 /* line 197: */
 /* line 198: */
MFFASIM = (LFFASIM_unsval-256);
} 
else
{ 
MFFASIM = LFFASIM_unsval;
} 
NFFASIM_val = MFFASIM;
 /* line 199: */
 /* line 200: */
IFFASIM_ans = ((256*IFFASIM_ans)+NFFASIM_val);
}
 /* line 201: */
 /* line 202: */
OFFASIM = IFFASIM_ans;
} 
A_PROC_EXIT(integer);
return( OFFASIM );
} 
#undef NL

A68_INT  QFFASIM_length(A68_VC  W)
{ 
A68_INT  RFFASIM;  /* clause result */
A_PROC_ENTRY(length);
 /* line 208: */
RFFASIM = (8*W.upb);
A_PROC_EXIT(length);
return( RFFASIM );
} 
#undef NL

A68_VOID  UFFASIM_save(A68_VC  X, A68_261  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 213: */
 /* line 214: */
 /* line 215: */
BIBASIM_writeid(X, Ff.Ferryout, Ff.Flt);
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  XFFASIM_restore(A68_VC * X, A68_263  Ff)
{ 
A68_VC  YFFASIM;  /* avoid structure result */
A_PROC_ENTRY(restore);
 /* line 220: */
 /* line 221: */
 /* line 222: */
RGBASIM_readid( Ff.Ferryin, Ff.Flt, &YFFASIM );
(*X) = YFFASIM;
A_PROC_EXIT(restore);
return;
} 
#undef NL

A_STATIC A68_INT  CGFASIM_length(A68_278 * Lis)
{ 
A68_278 * DGFASIM_var;
A68_INT  EGFASIM_count;
A68_INT  FGFASIM;  /* clause result */
A_PROC_ENTRY(length);
 /* line 246: */
 /* line 247: */
{ 
DGFASIM_var = Lis;
 /* line 248: */
EGFASIM_count = 0;
 /* line 249: */
for ( ;; )
{ 
 /* line 250: */
if ( !((DGFASIM_var!=AGFASIM_machineoffsetstack)) ) break;
EGFASIM_count+=1;
 /* line 251: */
 /* line 252: */
DGFASIM_var = (*(&(DGFASIM_var->Rest)));
}
 /* line 253: */
 /* line 254: */
FGFASIM = EGFASIM_count;
} 
A_PROC_EXIT(length);
return( FGFASIM );
} 
#undef NL

A68_VOID  IGFASIM_dump(A68_278 * Lis, A68_VC  Indent)
{ 
A68_266  JGFASIM;  /* collateral clause result */
A68_52  KGFASIM;  /* OPERATORS - mode -> union mode */
A68_52  NGFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  OGFASIM;  /* YIELD */
A68_52  PGFASIM;  /* OPERATORS - mode -> union mode */
A68_56  QGFASIM;  /* procedure value */
A68_85  RGFASIM;  /* OPERATORS - istruct -> vector */
A68_278 * SGFASIM_var;
A68_INT  TGFASIM_i;
A68_INT  UGFASIM;  /* to part of loop */
A68_52  VGFASIM;  /* OPERATORS - mode -> union mode */
A68_INT  WGFASIM;  /* YIELD */
A68_85  XGFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  YGFASIM;  /* ADICOPS - MOD */
A68_INT  ZGFASIM;  /* ADICOPS - MOD */
A68_52  AHFASIM;  /* OPERATORS - mode -> union mode */
A68_56  BHFASIM;  /* procedure value */
A68_85  CHFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 259: */
 /* line 260: */
{ 
JGFASIM.data[0] = A_UNITE(KGFASIM,mode7,7,Indent);
OGFASIM = MGFASIM ;
JGFASIM.data[1] = A_UNITE(NGFASIM,mode7,7,OGFASIM);
QGFASIM.fn.fn_global = LRAAOSL_newline;
QGFASIM.nonlocals = A68_NIL;
JGFASIM.data[2] = A_UNITE(PGFASIM,mode12,12,QGFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RGFASIM,JGFASIM,3,A68_52 ));
 /* line 261: */
SGFASIM_var = Lis;
 /* line 262: */
UGFASIM = CGFASIM_length(Lis);
for ( TGFASIM_i = 1;
TGFASIM_i <= UGFASIM;
TGFASIM_i += 1 )
{ 
 /* line 263: */
WGFASIM = (*(&(SGFASIM_var->Machine_offset))) ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(XGFASIM,A_UNITE(VGFASIM,mode1,1,WGFASIM),A68_52 ));
 /* line 264: */
ZGFASIM = 20 ;
if ( ((A_MOD(TGFASIM_i,ZGFASIM,YGFASIM)==0)|(TGFASIM_i==CGFASIM_length(Lis))) )
{ 
BHFASIM.fn.fn_global = LRAAOSL_newline;
BHFASIM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(CHFASIM,A_UNITE(AHFASIM,mode12,12,BHFASIM),A68_52 ));
} 
 /* line 265: */
 /* line 266: */
SGFASIM_var = (*(&(SGFASIM_var->Rest)));
}
 /* line 267: */
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  FHFASIM_push(A68_278 ** Lis, A68_INT  K)
{ 
A68_278  GHFASIM;  /* collateral clause result */
A68_278 * HHFASIM;  /* YIELD */
A_PROC_ENTRY(push);
 /* line 271: */
 /* line 272: */
GHFASIM.Machine_offset = K;
GHFASIM.Rest = (*Lis);
 /* line 273: */
HHFASIM = A_HEAP(A68_278 ) ;
(*HHFASIM) = GHFASIM ;
(*Lis) = HHFASIM;
A_PROC_EXIT(push);
return;
} 
#undef NL

A68_INT  JHFASIM_pop(A68_278 ** Lis)
{ 
A68_INT  KHFASIM_k;
A68_INT  LHFASIM;  /* clause result */
A_PROC_ENTRY(pop);
 /* line 277: */
 /* line 278: */
{ 
KHFASIM_k = (*(&((*Lis)->Machine_offset)));
 /* line 279: */
(*Lis) = (*(&((*Lis)->Rest)));
 /* line 280: */
 /* line 281: */
LHFASIM = KHFASIM_k;
} 
A_PROC_EXIT(pop);
return( LHFASIM );
} 
#undef NL

A68_BOOL  NHFASIM_cleared(A68_278 * Lis)
{ 
A68_BOOL  OHFASIM;  /* clause result */
A_PROC_ENTRY(cleared);
 /* line 286: */
OHFASIM = (Lis==AGFASIM_machineoffsetstack);
A_PROC_EXIT(cleared);
return( OHFASIM );
} 
#undef NL

A68_INT  QHFASIM_bytesize(A68_INT  N)
{ 
A68_INT  RHFASIM;  /* clause result */
A_PROC_ENTRY(bytesize);
 /* line 317: */
if ( (N==0) )
{ 
RHFASIM = 4;
} 
else
{ 
RHFASIM = ((((N-1)/32)+1)*4);
} 
A_PROC_EXIT(bytesize);
return( RHFASIM );
} 
#undef NL

A68_VOID  SHFASIM_nullmemory(A68_285  *ReturnedValue)
{ 
A68_285  THFASIM_result;
A68_VC  UHFASIM;  /* OPERATORS - nil -> mode */
A68_VC * VHFASIM;  /* YIELD */
A68_285  WHFASIM;  /* clause result */
A_PROC_ENTRY(nullmemory);
{ 
 /* line 331: */
VHFASIM = (&((&THFASIM_result)->Mem)) ;
(*VHFASIM) = A_VVAC(UHFASIM);
 /* line 332: */
 /* line 333: */
WHFASIM = THFASIM_result;
} 
A_PROC_EXIT(nullmemory);
*ReturnedValue = (WHFASIM);
return;
} 
#undef NL

A68_VOID  YHFASIM_destroy(A68_285 * M)
{ 
A68_VC  ZHFASIM;  /* OPERATORS - nil -> mode */
A68_VC  AIFASIM;  /* != */
A68_VC  BIFASIM;  /* != */
A_PROC_ENTRY(destroy);
 /* line 340: */
 /* line 341: */
{ 
AIFASIM = (*(&(M->Mem))) ;
BIFASIM = A_VVAC(ZHFASIM) ;
if ( ! A_VSTRUCTCOMP(AIFASIM,BIFASIM) )
{ 
 /* line 343: */
GKDASIM_free_vec_chars((&(M->Mem)));
} 
} 
A_PROC_EXIT(destroy);
return;
} 
#undef NL

A68_VOID  EIFASIM_create(A68_285 * M, A68_INT  Size)
{ 
A68_VC  FIFASIM;  /* avoid structure result */
A68_VC * GIFASIM;  /* YIELD */
A_PROC_ENTRY(create);
 /* line 348: */
 /* line 349: */
{ 
YHFASIM_destroy(M);
 /* line 350: */
 /* line 351: */
RJDASIM_get_vec_chars( QHFASIM_bytesize((Size*8)), &FIFASIM );
GIFASIM = (&(M->Mem)) ;
(*GIFASIM) = FIFASIM;
} 
A_PROC_EXIT(create);
return;
} 
#undef NL

A68_VOID  JIFASIM_extend(A68_285 * M, A68_INT  Size)
{ 
A68_285  KIFASIM_old;
A68_INT  LIFASIM_oldsize;
A68_VC  MIFASIM;  /* avoid structure result */
A68_VC * NIFASIM;  /* YIELD */
A68_VC  OIFASIM;  /* OPERATORS - trim index */
A68_VC  PIFASIM;  /* OPERATORS - trim index */
A68_VC  QIFASIM;  /* YIELD */
A68_VC  RIFASIM;  /* OPERATORS - assign op */
A_PROC_ENTRY(extend);
 /* line 356: */
 /* line 357: */
{ 
KIFASIM_old = (*M);
 /* line 358: */
LIFASIM_oldsize = (*(&((&KIFASIM_old)->Mem))).upb;
 /* line 359: */
RJDASIM_get_vec_chars( (LIFASIM_oldsize+QHFASIM_bytesize((Size*8))), &MIFASIM );
NIFASIM = (&(M->Mem)) ;
(*NIFASIM) = MIFASIM;
 /* line 360: */
OIFASIM = (*(&(M->Mem))) ;
QIFASIM = A_VTRIM(PIFASIM,(OIFASIM),A_VTSCRIPT(&(PIFASIM.upb),(OIFASIM).upb,1,LIFASIM_oldsize)) ;
RIFASIM = (*(&((&KIFASIM_old)->Mem))) ;
A_VASSIGN2(RIFASIM,QIFASIM,A68_CHAR );
 /* line 361: */
 /* line 362: */
YHFASIM_destroy((&KIFASIM_old));
} 
A_PROC_EXIT(extend);
return;
} 
#undef NL

A68_VOID  UIFASIM_save(A68_285 * X, A68_261  Ff)
{ 
A68_VC  VIFASIM;  /* OPERATORS - nil -> mode */
A68_VC  WIFASIM;  /* != */
A68_VC  XIFASIM;  /* != */
A68_160  YIFASIM;  /* CALL */
A_PROC_ENTRY(save);
 /* line 367: */
 /* line 368: */
{ 
 /* line 369: */
WIFASIM = (*(&(X->Mem))) ;
XIFASIM = A_VVAC(VIFASIM) ;
if ( ! A_VSTRUCTCOMP(WIFASIM,XIFASIM) )
{ 
DCFASIM_save(A68_TRUE, Ff);
 /* line 370: */
JCFASIM_save((*(&(X->Mem))).upb, Ff);
 /* line 371: */
 /* line 372: */
 /* line 373: */
YIFASIM = Ff.Ferryout ;
A_CALLPROC(YIFASIM,((*(&(X->Mem))), Ff.Flt),((*(&(X->Mem))), Ff.Flt,(YIFASIM).nonlocals));
} 
else
{ 
 /* line 374: */
 /* line 375: */
DCFASIM_save(A68_FALSE, Ff);
} 
} 
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  BJFASIM_restore(A68_285 * X, A68_263  Ff)
{ 
A68_BOOL  CJFASIM_exists;
A68_INT  DJFASIM_size;
A68_VC  EJFASIM;  /* avoid structure result */
A68_VC * FJFASIM;  /* YIELD */
A68_160  GJFASIM;  /* CALL */
A68_VC  HJFASIM;  /* OPERATORS - nil -> mode */
A68_VC * IJFASIM;  /* YIELD */
A_PROC_ENTRY(restore);
 /* line 380: */
 /* line 381: */
{ 
YHFASIM_destroy(X);
 /* line 382: */
GCFASIM_restore((&CJFASIM_exists), Ff);
 /* line 383: */
 /* line 384: */
if ( CJFASIM_exists )
{ 
 /* line 385: */
MCFASIM_restore((&DJFASIM_size), Ff);
 /* line 386: */
RJDASIM_get_vec_chars( DJFASIM_size, &EJFASIM );
FJFASIM = (&(X->Mem)) ;
(*FJFASIM) = EJFASIM;
 /* line 387: */
 /* line 388: */
 /* line 389: */
GJFASIM = Ff.Ferryin ;
A_CALLPROC(GJFASIM,((*(&(X->Mem))), Ff.Flt),((*(&(X->Mem))), Ff.Flt,(GJFASIM).nonlocals));
} 
else
{ 
 /* line 390: */
 /* line 391: */
IJFASIM = (&(X->Mem)) ;
(*IJFASIM) = A_VVAC(HJFASIM);
} 
} 
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_VOID  LJFASIM_dump(A68_285  M, A68_VC  Indent)
{ 
A68_266  MJFASIM;  /* collateral clause result */
A68_52  NJFASIM;  /* OPERATORS - mode -> union mode */
A68_52  QJFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  RJFASIM;  /* YIELD */
A68_52  SJFASIM;  /* OPERATORS - mode -> union mode */
A68_56  TJFASIM;  /* procedure value */
A68_85  UJFASIM;  /* OPERATORS - istruct -> vector */
A68_VC  VJFASIM;  /* OPERATORS - nil -> mode */
A68_VC  WJFASIM;  /* != */
A68_VC  XJFASIM;  /* != */
A68_VC  YJFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 396: */
 /* line 397: */
{ 
MJFASIM.data[0] = A_UNITE(NJFASIM,mode7,7,Indent);
RJFASIM = PJFASIM ;
MJFASIM.data[1] = A_UNITE(QJFASIM,mode7,7,RJFASIM);
TJFASIM.fn.fn_global = LRAAOSL_newline;
TJFASIM.nonlocals = A68_NIL;
MJFASIM.data[2] = A_UNITE(SJFASIM,mode12,12,TJFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(UJFASIM,MJFASIM,3,A68_52 ));
 /* line 398: */
 /* line 399: */
WJFASIM = M.Mem ;
XJFASIM = A_VVAC(VJFASIM) ;
if ( ! A_VSTRUCTCOMP(WJFASIM,XJFASIM) )
{ 
 /* line 400: */
 /* line 401: */
RDFASIM_dump(M.Mem, A_VC_PLUS(Indent,A_HVEC(YJFASIM,' ',A68_CHAR )));
} 
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_INT  AKFASIM_sizeof(A68_285 * X)
{ 
A68_VC  BKFASIM;  /* OPERATORS - nil -> mode */
A68_VC  CKFASIM;  /* != */
A68_VC  DKFASIM;  /* != */
A68_INT  EKFASIM;  /* clause result */
A_PROC_ENTRY(sizeof);
 /* line 406: */
 /* line 407: */
{ 
 /* line 408: */
CKFASIM = (*(&(X->Mem))) ;
DKFASIM = A_VVAC(BKFASIM) ;
if ( ! A_VSTRUCTCOMP(CKFASIM,DKFASIM) )
{ 
 /* line 409: */
 /* line 411: */
EKFASIM = (*(&(X->Mem))).upb;
} 
else
{ 
 /* line 412: */
EKFASIM = 0;
} 
} 
A_PROC_EXIT(sizeof);
return( EKFASIM );
} 
#undef NL

A68_VOID  HKFASIM_len(A68_INT  Os, A68_INT  Le, A68_293  *ReturnedValue)
{ 
A68_293  IKFASIM;  /* collateral clause result */
A68_293  JKFASIM;  /* clause result */
A_PROC_ENTRY(len);
 /* line 418: */
IKFASIM.Off = Os;
IKFASIM.Len = Le;
JKFASIM = IKFASIM;
A_PROC_EXIT(len);
*ReturnedValue = (JKFASIM);
return;
} 
#undef NL

A68_VOID  MKFASIM_get(A68_285 * M, A68_293  Ip, A68_VC  *ReturnedValue)
{ 
A68_31  OKFASIM_generator;   /* proc value of non-global proc */
A68_VC  TKFASIM;  /* avoid structure result */
A68_VC  UKFASIM_result;
A68_VC  VKFASIM;  /* OPERATORS - trim index */
A68_VC  WKFASIM;  /* OPERATORS - trim index */
A68_VC  XKFASIM;  /* OPERATORS - assign op */
A68_VC  YKFASIM_result;
A68_INT  ZKFASIM_i;
A68_INT  ALFASIM;  /* to part of loop */
A68_VC  BLFASIM;  /* OPERATORS - simple index */
A68_INT  CLFASIM;  /* YIELD */
A68_CHAR * DLFASIM;  /* YIELD */
A68_VC  ELFASIM;  /* clause result */
A_PROC_ENTRY(get);
 /* line 424: */
 /* line 426: */
{ 
A_CLOSURE( OKFASIM_generator, PKFASIM_generator, QKFASIM_generator );
(( QKFASIM_generator * ) ( OKFASIM_generator.nonlocals )) -> Ip = Ip;
A_CALLPROC(OKFASIM_generator,(A68_FALSE, &TKFASIM),(A68_FALSE, &TKFASIM,(OKFASIM_generator).nonlocals));
UKFASIM_result = TKFASIM;
 /* line 427: */
 /* line 428: */
if ( !OAFASIM_am_version.Up )
{ 
 /* line 429: */
 /* line 430: */
 /* line 431: */
VKFASIM = (*(&(M->Mem))) ;
XKFASIM = A_VTRIM(WKFASIM,(VKFASIM),A_VTSCRIPT(&(WKFASIM.upb),(VKFASIM).upb,(1+Ip.Off),(Ip.Off+Ip.Len))) ;
A_VASSIGN2(XKFASIM,UKFASIM_result,A68_CHAR );
} 
else
{ 
 /* line 432: */
ALFASIM = Ip.Len;
for ( ZKFASIM_i = 1;
ZKFASIM_i <= ALFASIM;
ZKFASIM_i += 1 )
{ 
 /* line 433: */
BLFASIM = (*(&(M->Mem))) ;
CLFASIM = (((Ip.Off+1)+Ip.Len)-ZKFASIM_i) ;
DLFASIM = (&A_VINDEX(YKFASIM_result,ZKFASIM_i)) ;
(*DLFASIM) = (*(&A_VINDEX(BLFASIM,CLFASIM)));
}
 /* line 434: */
} 
 /* line 435: */
 /* line 436: */
ELFASIM = UKFASIM_result;
} 
A_PROC_EXIT(get);
*ReturnedValue = (ELFASIM);
return;
} 
#undef NL

A68_VOID  HLFASIM_att(A68_VC  Wo, A68_INT  Os, A68_296  *ReturnedValue)
{ 
A68_296  ILFASIM;  /* collateral clause result */
A68_296  JLFASIM;  /* clause result */
A_PROC_ENTRY(att);
 /* line 442: */
ILFASIM.W = Wo;
ILFASIM.O = Os;
JLFASIM = ILFASIM;
A_PROC_EXIT(att);
*ReturnedValue = (JLFASIM);
return;
} 
#undef NL

A68_VOID  MLFASIM_put(A68_285 * M, A68_296  Ip)
{ 
A68_VC  NLFASIM;  /* OPERATORS - trim index */
A68_VC  OLFASIM;  /* OPERATORS - trim index */
A68_VC  PLFASIM;  /* YIELD */
A68_VC  QLFASIM;  /* OPERATORS - assign op */
A68_INT  RLFASIM_i;
A68_INT  SLFASIM;  /* to part of loop */
A68_VC  TLFASIM;  /* OPERATORS - simple index */
A68_INT  ULFASIM;  /* YIELD */
A68_VC  VLFASIM;  /* OPERATORS - simple index */
A68_CHAR * WLFASIM;  /* YIELD */
A_PROC_ENTRY(put);
 /* line 448: */
 /* line 449: */
if ( !OAFASIM_am_version.Up )
{ 
 /* line 450: */
 /* line 451: */
NLFASIM = (*(&(M->Mem))) ;
PLFASIM = A_VTRIM(OLFASIM,(NLFASIM),A_VTSCRIPT(&(OLFASIM.upb),(NLFASIM).upb,(Ip.O+1),(Ip.O+Ip.W.upb))) ;
QLFASIM = Ip.W ;
A_VASSIGN2(QLFASIM,PLFASIM,A68_CHAR );
} 
else
{ 
SLFASIM = Ip.W.upb;
for ( RLFASIM_i = 1;
RLFASIM_i <= SLFASIM;
RLFASIM_i += 1 )
{ 
 /* line 452: */
 /* line 453: */
TLFASIM = (*(&(M->Mem))) ;
ULFASIM = (((Ip.O+1)+Ip.W.upb)-RLFASIM_i) ;
VLFASIM = Ip.W ;
WLFASIM = (&A_VINDEX(TLFASIM,ULFASIM)) ;
(*WLFASIM) = (*(&A_VINDEX(VLFASIM,RLFASIM_i)));
}
 /* line 454: */
} 
A_PROC_EXIT(put);
return;
} 
#undef NL

A68_VOID  YLFASIM_label(A68_VC  C, A68_299  *ReturnedValue)
{ 
A68_299  ZLFASIM;  /* collateral clause result */
A68_31  BMFASIM_generator;   /* proc value of non-global proc */
A68_VC  GMFASIM;  /* avoid structure result */
A68_299  HMFASIM;  /* clause result */
A_PROC_ENTRY(label);
 /* line 467: */
ZLFASIM.Lab = 0;
A_CLOSURE( BMFASIM_generator, CMFASIM_generator, DMFASIM_generator );
(( DMFASIM_generator * ) ( BMFASIM_generator.nonlocals )) -> C = C;
A_CALLPROC(BMFASIM_generator,(A68_FALSE, &GMFASIM),(A68_FALSE, &GMFASIM,(BMFASIM_generator).nonlocals));
A_VASSIGN2(C,GMFASIM,A68_CHAR ) ;
ZLFASIM.Tag = GMFASIM;
HMFASIM = ZLFASIM;
A_PROC_EXIT(label);
*ReturnedValue = (HMFASIM);
return;
} 
#undef NL

A68_VOID  KMFASIM_dump(A68_299  Lab, A68_VC  Indent)
{ 
A68_266  LMFASIM;  /* collateral clause result */
A68_VC  MMFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  NMFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  OMFASIM;  /* YIELD */
A68_52  RMFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  SMFASIM;  /* YIELD */
A68_52  TMFASIM;  /* OPERATORS - mode -> union mode */
A68_56  UMFASIM;  /* procedure value */
A68_85  VMFASIM;  /* OPERATORS - istruct -> vector */
A68_268  WMFASIM;  /* collateral clause result */
A68_52  XMFASIM;  /* OPERATORS - mode -> union mode */
A68_INT  YMFASIM;  /* YIELD */
A68_52  ZMFASIM;  /* OPERATORS - mode -> union mode */
A68_56  ANFASIM;  /* procedure value */
A68_85  BNFASIM;  /* OPERATORS - istruct -> vector */
A68_VC  CNFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 472: */
 /* line 473: */
{ 
OMFASIM = A_VC_PLUS(Indent,A_HVEC(MMFASIM,' ',A68_CHAR )) ;
LMFASIM.data[0] = A_UNITE(NMFASIM,mode7,7,OMFASIM);
SMFASIM = QMFASIM ;
LMFASIM.data[1] = A_UNITE(RMFASIM,mode7,7,SMFASIM);
UMFASIM.fn.fn_global = LRAAOSL_newline;
UMFASIM.nonlocals = A68_NIL;
LMFASIM.data[2] = A_UNITE(TMFASIM,mode12,12,UMFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VMFASIM,LMFASIM,3,A68_52 ));
 /* line 474: */
YMFASIM = Lab.Lab ;
WMFASIM.data[0] = A_UNITE(XMFASIM,mode1,1,YMFASIM);
ANFASIM.fn.fn_global = LRAAOSL_newline;
ANFASIM.nonlocals = A68_NIL;
WMFASIM.data[1] = A_UNITE(ZMFASIM,mode12,12,ANFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BNFASIM,WMFASIM,2,A68_52 ));
 /* line 475: */
 /* line 476: */
RDFASIM_dump(Lab.Tag, A_VC_PLUS(Indent,A_HVEC(CNFASIM,' ',A68_CHAR )));
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  FNFASIM_save(A68_299 * X, A68_261  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 481: */
 /* line 483: */
{ 
JCFASIM_save((*(&(X->Lab))), Ff);
 /* line 484: */
 /* line 486: */
UFFASIM_save((*(&(X->Tag))), Ff);
} 
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  INFASIM_restore(A68_299 * X, A68_263  Ff)
{ 
A_PROC_ENTRY(restore);
 /* line 491: */
 /* line 493: */
{ 
MCFASIM_restore((&(X->Lab)), Ff);
 /* line 494: */
 /* line 496: */
XFFASIM_restore((&(X->Tag)), Ff);
} 
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_BOOL  LNFASIM_(A68_299 * L1, A68_299  L2)
{ 
A68_BOOL  MNFASIM;  /* optbool result */
A68_BOOL  NNFASIM;  /* clause result */
A_PROC_ENTRY(=);
 /* line 500: */
MNFASIM = ((*(&(L1->Lab)))==L2.Lab);
if ( MNFASIM )
{MNFASIM = A_VC_EQ((*(&(L1->Tag))),L2.Tag);
}
NNFASIM = MNFASIM;
A_PROC_EXIT(=);
return( NNFASIM );
} 
#undef NL

A68_VOID  SNFASIM_dump(A68_305  A, A68_VC  Indent)
{ 
A68_266  TNFASIM;  /* collateral clause result */
A68_52  UNFASIM;  /* OPERATORS - mode -> union mode */
A68_52  XNFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  YNFASIM;  /* YIELD */
A68_52  ZNFASIM;  /* OPERATORS - mode -> union mode */
A68_56  AOFASIM;  /* procedure value */
A68_85  BOFASIM;  /* OPERATORS - istruct -> vector */
A68_305  COFASIM;  /* united object - for case conformity */
A68_INT  DOFASIM_o;
A68_266  EOFASIM;  /* collateral clause result */
A68_VC  FOFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  GOFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  HOFASIM;  /* YIELD */
A68_52  IOFASIM;  /* OPERATORS - mode -> union mode */
A68_52  JOFASIM;  /* OPERATORS - mode -> union mode */
A68_56  KOFASIM;  /* procedure value */
A68_85  LOFASIM;  /* OPERATORS - istruct -> vector */
A68_299  MOFASIM_o;
A68_VC  NOFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_266  OOFASIM;  /* collateral clause result */
A68_VC  POFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  QOFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  ROFASIM;  /* YIELD */
A68_52  UOFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  VOFASIM;  /* YIELD */
A68_52  WOFASIM;  /* OPERATORS - mode -> union mode */
A68_56  XOFASIM;  /* procedure value */
A68_85  YOFASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 515: */
 /* line 516: */
{ 
TNFASIM.data[0] = A_UNITE(UNFASIM,mode7,7,Indent);
YNFASIM = WNFASIM ;
TNFASIM.data[1] = A_UNITE(XNFASIM,mode7,7,YNFASIM);
AOFASIM.fn.fn_global = LRAAOSL_newline;
AOFASIM.nonlocals = A68_NIL;
TNFASIM.data[2] = A_UNITE(ZNFASIM,mode12,12,AOFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BOFASIM,TNFASIM,3,A68_52 ));
 /* line 517: */
 /* line 518: */
COFASIM = A ;
switch ( COFASIM.mode )
{ 
case 1: /* INT */
DOFASIM_o = (COFASIM.data.mode1);
HOFASIM = A_VC_PLUS(Indent,A_HVEC(FOFASIM,' ',A68_CHAR )) ;
EOFASIM.data[0] = A_UNITE(GOFASIM,mode7,7,HOFASIM);
EOFASIM.data[1] = A_UNITE(IOFASIM,mode1,1,DOFASIM_o);
KOFASIM.fn.fn_global = LRAAOSL_newline;
KOFASIM.nonlocals = A68_NIL;
EOFASIM.data[2] = A_UNITE(JOFASIM,mode12,12,KOFASIM);
 /* line 519: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(LOFASIM,EOFASIM,3,A68_52 ));
break;
case 2: /* STRUCT(INT,REF MODE26)  */
MOFASIM_o = (COFASIM.data.mode2);
 /* line 520: */
KMFASIM_dump(MOFASIM_o, A_VC_PLUS(Indent,A_HVEC(NOFASIM,' ',A68_CHAR )));
break;
case 3: /* VOID */
ROFASIM = A_VC_PLUS(Indent,A_HVEC(POFASIM,' ',A68_CHAR )) ;
OOFASIM.data[0] = A_UNITE(QOFASIM,mode7,7,ROFASIM);
VOFASIM = TOFASIM ;
OOFASIM.data[1] = A_UNITE(UOFASIM,mode7,7,VOFASIM);
XOFASIM.fn.fn_global = LRAAOSL_newline;
XOFASIM.nonlocals = A68_NIL;
OOFASIM.data[2] = A_UNITE(WOFASIM,mode12,12,XOFASIM);
 /* line 521: */
 /* line 522: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(YOFASIM,OOFASIM,3,A68_52 ));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  BPFASIM_labeledoffset(A68_299  Lab, A68_INT  M, A68_308  *ReturnedValue)
{ 
A68_308  CPFASIM;  /* collateral clause result */
A68_308  DPFASIM;  /* clause result */
A_PROC_ENTRY(labeledoffset);
 /* line 534: */
CPFASIM.Label = Lab;
CPFASIM.Machine_offset = M;
DPFASIM = CPFASIM;
A_PROC_EXIT(labeledoffset);
*ReturnedValue = (DPFASIM);
return;
} 
#undef NL

A68_VOID  GPFASIM_dump(A68_308  Lo, A68_VC  Indent)
{ 
A68_266  HPFASIM;  /* collateral clause result */
A68_52  IPFASIM;  /* OPERATORS - mode -> union mode */
A68_52  LPFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  MPFASIM;  /* YIELD */
A68_52  NPFASIM;  /* OPERATORS - mode -> union mode */
A68_56  OPFASIM;  /* procedure value */
A68_85  PPFASIM;  /* OPERATORS - istruct -> vector */
A68_VC  QPFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_313  RPFASIM;  /* collateral clause result */
A68_VC  SPFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  TPFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  UPFASIM;  /* YIELD */
A68_52  XPFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  YPFASIM;  /* YIELD */
A68_52  ZPFASIM;  /* OPERATORS - mode -> union mode */
A68_INT  AQFASIM;  /* YIELD */
A68_52  BQFASIM;  /* OPERATORS - mode -> union mode */
A68_56  CQFASIM;  /* procedure value */
A68_85  DQFASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 539: */
 /* line 540: */
{ 
HPFASIM.data[0] = A_UNITE(IPFASIM,mode7,7,Indent);
MPFASIM = KPFASIM ;
HPFASIM.data[1] = A_UNITE(LPFASIM,mode7,7,MPFASIM);
OPFASIM.fn.fn_global = LRAAOSL_newline;
OPFASIM.nonlocals = A68_NIL;
HPFASIM.data[2] = A_UNITE(NPFASIM,mode12,12,OPFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(PPFASIM,HPFASIM,3,A68_52 ));
 /* line 541: */
KMFASIM_dump(Lo.Label, A_VC_PLUS(Indent,A_HVEC(QPFASIM,' ',A68_CHAR )));
 /* line 542: */
UPFASIM = A_VC_PLUS(Indent,A_HVEC(SPFASIM,' ',A68_CHAR )) ;
RPFASIM.data[0] = A_UNITE(TPFASIM,mode7,7,UPFASIM);
 /* line 543: */
YPFASIM = WPFASIM ;
RPFASIM.data[1] = A_UNITE(XPFASIM,mode7,7,YPFASIM);
AQFASIM = Lo.Machine_offset ;
RPFASIM.data[2] = A_UNITE(ZPFASIM,mode1,1,AQFASIM);
CQFASIM.fn.fn_global = LRAAOSL_newline;
CQFASIM.nonlocals = A68_NIL;
RPFASIM.data[3] = A_UNITE(BQFASIM,mode12,12,CQFASIM);
 /* line 544: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DQFASIM,RPFASIM,4,A68_52 ));
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  GQFASIM_save(A68_308 * X, A68_261  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 549: */
 /* line 551: */
{ 
FNFASIM_save((&(X->Label)), Ff);
 /* line 552: */
 /* line 554: */
JCFASIM_save((*(&(X->Machine_offset))), Ff);
} 
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  JQFASIM_restore(A68_308 * X, A68_263  Ff)
{ 
A_PROC_ENTRY(restore);
 /* line 559: */
 /* line 561: */
{ 
INFASIM_restore((&(X->Label)), Ff);
 /* line 562: */
 /* line 564: */
MCFASIM_restore((&(X->Machine_offset)), Ff);
} 
A_PROC_EXIT(restore);
return;
} 
#undef NL

A_STATIC A68_INT  MQFASIM_length(A68_316 * Lis)
{ 
A68_316 * NQFASIM_var;
A68_INT  OQFASIM_count;
A68_INT  PQFASIM;  /* clause result */
A_PROC_ENTRY(length);
 /* line 579: */
 /* line 580: */
{ 
NQFASIM_var = Lis;
 /* line 581: */
OQFASIM_count = 0;
 /* line 582: */
for ( ;; )
{ 
 /* line 583: */
if ( !((NQFASIM_var!=KQFASIM_labellist)) ) break;
OQFASIM_count+=1;
 /* line 584: */
 /* line 585: */
NQFASIM_var = (*(&(NQFASIM_var->Rest)));
}
 /* line 586: */
 /* line 587: */
PQFASIM = OQFASIM_count;
} 
A_PROC_EXIT(length);
return( PQFASIM );
} 
#undef NL

A68_VOID  SQFASIM_dump(A68_316 * Lis, A68_VC  Indent)
{ 
A68_266  TQFASIM;  /* collateral clause result */
A68_52  UQFASIM;  /* OPERATORS - mode -> union mode */
A68_52  XQFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  YQFASIM;  /* YIELD */
A68_52  ZQFASIM;  /* OPERATORS - mode -> union mode */
A68_56  ARFASIM;  /* procedure value */
A68_85  BRFASIM;  /* OPERATORS - istruct -> vector */
A68_316 * CRFASIM_var;
A68_INT  DRFASIM_i;
A68_INT  ERFASIM;  /* to part of loop */
A68_VC  FRFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 592: */
 /* line 593: */
{ 
TQFASIM.data[0] = A_UNITE(UQFASIM,mode7,7,Indent);
YQFASIM = WQFASIM ;
TQFASIM.data[1] = A_UNITE(XQFASIM,mode7,7,YQFASIM);
ARFASIM.fn.fn_global = LRAAOSL_newline;
ARFASIM.nonlocals = A68_NIL;
TQFASIM.data[2] = A_UNITE(ZQFASIM,mode12,12,ARFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BRFASIM,TQFASIM,3,A68_52 ));
 /* line 594: */
CRFASIM_var = Lis;
 /* line 595: */
ERFASIM = MQFASIM_length(Lis);
for ( DRFASIM_i = 1;
DRFASIM_i <= ERFASIM;
DRFASIM_i += 1 )
{ 
 /* line 596: */
GPFASIM_dump((*(&(CRFASIM_var->Labeled_offset))), A_VC_PLUS(Indent,A_HVEC(FRFASIM,' ',A68_CHAR )));
 /* line 597: */
 /* line 598: */
CRFASIM_var = (*(&(CRFASIM_var->Rest)));
}
 /* line 599: */
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  IRFASIM_save(A68_316 * Lis, A68_261  Ff)
{ 
A68_316 * JRFASIM_var;
A68_INT  KRFASIM_i;
A68_INT  LRFASIM;  /* to part of loop */
A_PROC_ENTRY(save);
 /* line 604: */
 /* line 605: */
{ 
JCFASIM_save(MQFASIM_length(Lis), Ff);
 /* line 606: */
JRFASIM_var = Lis;
 /* line 607: */
LRFASIM = MQFASIM_length(Lis);
for ( KRFASIM_i = 1;
KRFASIM_i <= LRFASIM;
KRFASIM_i += 1 )
{ 
 /* line 608: */
GQFASIM_save((&(JRFASIM_var->Labeled_offset)), Ff);
 /* line 609: */
 /* line 610: */
JRFASIM_var = (*(&(JRFASIM_var->Rest)));
}
 /* line 611: */
} 
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  ORFASIM_restore(A68_316 ** Lis, A68_263  Ff)
{ 
A68_INT  PRFASIM_length;
A68_308  QRFASIM_item;
A68_INT  RRFASIM_i;
A68_INT  SRFASIM;  /* to part of loop */
A68_316  TRFASIM;  /* collateral clause result */
A68_316 * URFASIM;  /* YIELD */
A_PROC_ENTRY(restore);
 /* line 616: */
 /* line 617: */
{ 
MCFASIM_restore((&PRFASIM_length), Ff);
 /* line 618: */
 /* line 619: */
(*Lis) = KQFASIM_labellist;
 /* line 620: */
SRFASIM = PRFASIM_length;
for ( RRFASIM_i = 1;
RRFASIM_i <= SRFASIM;
RRFASIM_i += 1 )
{ 
 /* line 621: */
JQFASIM_restore((&QRFASIM_item), Ff);
 /* line 622: */
TRFASIM.Labeled_offset = QRFASIM_item;
 /* line 623: */
TRFASIM.Rest = (*Lis);
URFASIM = A_HEAP(A68_316 ) ;
(*URFASIM) = TRFASIM ;
(*Lis) = URFASIM;
}
 /* line 624: */
} 
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_INT  XRFASIM_lookup(A68_316 * Lis, A68_299  K)
{ 
A68_316 * YRFASIM_var;
A68_BOOL  ZRFASIM;  /* optbool result */
A68_INT  ASFASIM;  /* clause result */
A_PROC_ENTRY(lookup);
 /* line 629: */
 /* line 630: */
{ 
YRFASIM_var = Lis;
 /* line 631: */
for ( ;; )
{ 
 /* line 632: */
ZRFASIM = (YRFASIM_var!=KQFASIM_labellist);
if ( ZRFASIM )
{ZRFASIM = !LNFASIM_((&((&(YRFASIM_var->Labeled_offset))->Label)), K);
}
 /* line 633: */
if ( !(ZRFASIM) ) break;
 /* line 634: */
YRFASIM_var = (*(&(YRFASIM_var->Rest)));
}
 /* line 635: */
 /* line 637: */
if ( (YRFASIM_var==KQFASIM_labellist) )
{ 
 /* line 639: */
ASFASIM = MPDASIM_nullmachineoffset;
} 
else
{ 
 /* line 640: */
ASFASIM = (*(&((&(YRFASIM_var->Labeled_offset))->Machine_offset)));
} 
} 
A_PROC_EXIT(lookup);
return( ASFASIM );
} 
#undef NL

A68_VOID  DSFASIM_write(A68_316 ** Lis, A68_308  K)
{ 
A68_316  ESFASIM;  /* collateral clause result */
A68_316 * FSFASIM;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 644: */
 /* line 645: */
ESFASIM.Labeled_offset = K;
ESFASIM.Rest = (*Lis);
 /* line 646: */
FSFASIM = A_HEAP(A68_316 ) ;
(*FSFASIM) = ESFASIM ;
(*Lis) = FSFASIM;
A_PROC_EXIT(write);
return;
} 
#undef NL

A68_VOID  HSFASIM_removelast(A68_316 ** Lis)
{ 
A_PROC_ENTRY(removelast);
 /* line 650: */
 /* line 651: */
 /* line 652: */
(*Lis) = (*(&((*Lis)->Rest)));
A_PROC_EXIT(removelast);
return;
} 
#undef NL

A68_BOOL  JSFASIM_cleared(A68_316 * Lis)
{ 
A68_BOOL  KSFASIM;  /* clause result */
A_PROC_ENTRY(cleared);
 /* line 657: */
KSFASIM = (Lis==KQFASIM_labellist);
A_PROC_EXIT(cleared);
return( KSFASIM );
} 
#undef NL

A_STATIC A68_INT  NSFASIM_length(A68_326 * Lis)
{ 
A68_326 * OSFASIM_var;
A68_INT  PSFASIM_count;
A68_INT  QSFASIM;  /* clause result */
A_PROC_ENTRY(length);
 /* line 672: */
 /* line 673: */
{ 
OSFASIM_var = Lis;
 /* line 674: */
PSFASIM_count = 0;
 /* line 675: */
for ( ;; )
{ 
 /* line 676: */
if ( !((OSFASIM_var!=LSFASIM_machinelabelstack)) ) break;
PSFASIM_count+=1;
 /* line 677: */
 /* line 678: */
OSFASIM_var = (*(&(OSFASIM_var->Rest)));
}
 /* line 679: */
 /* line 680: */
QSFASIM = PSFASIM_count;
} 
A_PROC_EXIT(length);
return( QSFASIM );
} 
#undef NL

A68_VOID  TSFASIM_dump(A68_326 * Lis, A68_VC  Indent)
{ 
A68_266  USFASIM;  /* collateral clause result */
A68_52  VSFASIM;  /* OPERATORS - mode -> union mode */
A68_52  YSFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  ZSFASIM;  /* YIELD */
A68_52  ATFASIM;  /* OPERATORS - mode -> union mode */
A68_56  BTFASIM;  /* procedure value */
A68_85  CTFASIM;  /* OPERATORS - istruct -> vector */
A68_326 * DTFASIM_var;
A68_INT  ETFASIM_i;
A68_INT  FTFASIM;  /* to part of loop */
A68_INT  GTFASIM;  /* ADICOPS - MOD */
A68_INT  HTFASIM;  /* ADICOPS - MOD */
A68_VC  ITFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  JTFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  KTFASIM;  /* YIELD */
A68_85  LTFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_330  MTFASIM;  /* collateral clause result */
A68_52  PTFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  QTFASIM;  /* YIELD */
A68_52  RTFASIM;  /* OPERATORS - mode -> union mode */
A68_INT  STFASIM;  /* YIELD */
A68_52  VTFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  WTFASIM;  /* YIELD */
A68_52  XTFASIM;  /* OPERATORS - mode -> union mode */
A68_INT  YTFASIM;  /* YIELD */
A68_52  ZTFASIM;  /* OPERATORS - mode -> union mode */
A68_56  AUFASIM;  /* procedure value */
A68_85  BUFASIM;  /* OPERATORS - istruct -> vector */
A68_INT  CUFASIM;  /* ADICOPS - MOD */
A68_INT  DUFASIM;  /* ADICOPS - MOD */
A68_52  EUFASIM;  /* OPERATORS - mode -> union mode */
A68_56  FUFASIM;  /* procedure value */
A68_85  GUFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 685: */
 /* line 686: */
{ 
USFASIM.data[0] = A_UNITE(VSFASIM,mode7,7,Indent);
ZSFASIM = XSFASIM ;
USFASIM.data[1] = A_UNITE(YSFASIM,mode7,7,ZSFASIM);
BTFASIM.fn.fn_global = LRAAOSL_newline;
BTFASIM.nonlocals = A68_NIL;
USFASIM.data[2] = A_UNITE(ATFASIM,mode12,12,BTFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(CTFASIM,USFASIM,3,A68_52 ));
 /* line 687: */
DTFASIM_var = Lis;
 /* line 688: */
FTFASIM = NSFASIM_length(Lis);
for ( ETFASIM_i = 1;
ETFASIM_i <= FTFASIM;
ETFASIM_i += 1 )
{ 
 /* line 689: */
HTFASIM = 20 ;
if ( (A_MOD(ETFASIM_i,HTFASIM,GTFASIM)==1) )
{ 
KTFASIM = A_VC_PLUS(Indent,A_HVEC(ITFASIM,' ',A68_CHAR )) ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(LTFASIM,A_UNITE(JTFASIM,mode7,7,KTFASIM),A68_52 ));
} 
 /* line 690: */
 /* line 691: */
QTFASIM = A_VC_PLUS(Indent,OTFASIM) ;
MTFASIM.data[0] = A_UNITE(PTFASIM,mode7,7,QTFASIM);
 /* line 692: */
STFASIM = (*(&((&(DTFASIM_var->Machine_label))->Location))) ;
MTFASIM.data[1] = A_UNITE(RTFASIM,mode1,1,STFASIM);
WTFASIM = UTFASIM ;
MTFASIM.data[2] = A_UNITE(VTFASIM,mode7,7,WTFASIM);
YTFASIM = (*(&((&(DTFASIM_var->Machine_label))->Size))) ;
MTFASIM.data[3] = A_UNITE(XTFASIM,mode1,1,YTFASIM);
AUFASIM.fn.fn_global = LRAAOSL_newline;
AUFASIM.nonlocals = A68_NIL;
MTFASIM.data[4] = A_UNITE(ZTFASIM,mode12,12,AUFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BUFASIM,MTFASIM,5,A68_52 ));
 /* line 693: */
DUFASIM = 20 ;
if ( ((A_MOD(ETFASIM_i,DUFASIM,CUFASIM)==0)|(ETFASIM_i==NSFASIM_length(Lis))) )
{ 
FUFASIM.fn.fn_global = LRAAOSL_newline;
FUFASIM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(GUFASIM,A_UNITE(EUFASIM,mode12,12,FUFASIM),A68_52 ));
} 
 /* line 694: */
 /* line 695: */
DTFASIM_var = (*(&(DTFASIM_var->Rest)));
}
 /* line 696: */
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  JUFASIM_push(A68_326 ** Lis, A68_211  K)
{ 
A68_326  KUFASIM;  /* collateral clause result */
A68_326 * LUFASIM;  /* YIELD */
A_PROC_ENTRY(push);
 /* line 700: */
 /* line 701: */
KUFASIM.Machine_label = K;
KUFASIM.Rest = (*Lis);
 /* line 702: */
LUFASIM = A_HEAP(A68_326 ) ;
(*LUFASIM) = KUFASIM ;
(*Lis) = LUFASIM;
A_PROC_EXIT(push);
return;
} 
#undef NL

A68_VOID  NUFASIM_pop(A68_326 ** Lis, A68_211  *ReturnedValue)
{ 
A68_211  OUFASIM_k;
A68_211  PUFASIM;  /* clause result */
A_PROC_ENTRY(pop);
 /* line 706: */
 /* line 707: */
{ 
OUFASIM_k = (*(&((*Lis)->Machine_label)));
 /* line 708: */
(*Lis) = (*(&((*Lis)->Rest)));
 /* line 709: */
 /* line 710: */
PUFASIM = OUFASIM_k;
} 
A_PROC_EXIT(pop);
*ReturnedValue = (PUFASIM);
return;
} 
#undef NL

A68_BOOL  RUFASIM_cleared(A68_326 * Lis)
{ 
A68_BOOL  SUFASIM;  /* clause result */
A_PROC_ENTRY(cleared);
 /* line 715: */
SUFASIM = (Lis==LSFASIM_machinelabelstack);
A_PROC_EXIT(cleared);
return( SUFASIM );
} 
#undef NL

A68_VOID  VUFASIM_backpatch(A68_299  Lab, A68_326 * Ml, A68_334  *ReturnedValue)
{ 
A68_334  WUFASIM;  /* collateral clause result */
A68_334  XUFASIM;  /* clause result */
A_PROC_ENTRY(backpatch);
 /* line 728: */
WUFASIM.Label = Lab;
WUFASIM.Machine_label_stack = Ml;
XUFASIM = WUFASIM;
A_PROC_EXIT(backpatch);
*ReturnedValue = (XUFASIM);
return;
} 
#undef NL

A68_VOID  AVFASIM_dump(A68_334  Bp, A68_VC  Indent)
{ 
A68_268  BVFASIM;  /* collateral clause result */
A68_52  CVFASIM;  /* OPERATORS - mode -> union mode */
A68_52  FVFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  GVFASIM;  /* YIELD */
A68_85  HVFASIM;  /* OPERATORS - istruct -> vector */
A68_VC  IVFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JVFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 733: */
 /* line 734: */
{ 
BVFASIM.data[0] = A_UNITE(CVFASIM,mode7,7,Indent);
GVFASIM = EVFASIM ;
BVFASIM.data[1] = A_UNITE(FVFASIM,mode7,7,GVFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HVFASIM,BVFASIM,2,A68_52 ));
 /* line 735: */
KMFASIM_dump(Bp.Label, A_VC_PLUS(Indent,A_HVEC(IVFASIM,' ',A68_CHAR )));
 /* line 736: */
 /* line 737: */
TSFASIM_dump(Bp.Machine_label_stack, A_VC_PLUS(Indent,A_HVEC(JVFASIM,' ',A68_CHAR )));
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A_STATIC A68_INT  MVFASIM_length(A68_337 * Lis)
{ 
A68_337 * NVFASIM_var;
A68_INT  OVFASIM_count;
A68_INT  PVFASIM;  /* clause result */
A_PROC_ENTRY(length);
 /* line 753: */
 /* line 754: */
{ 
NVFASIM_var = Lis;
 /* line 755: */
OVFASIM_count = 0;
 /* line 756: */
for ( ;; )
{ 
 /* line 757: */
if ( !((NVFASIM_var!=KVFASIM_backpatchlist)) ) break;
OVFASIM_count+=1;
 /* line 758: */
 /* line 759: */
NVFASIM_var = (*(&(NVFASIM_var->Rest)));
}
 /* line 760: */
 /* line 761: */
PVFASIM = OVFASIM_count;
} 
A_PROC_EXIT(length);
return( PVFASIM );
} 
#undef NL

A68_VOID  SVFASIM_dump(A68_337 * Lis, A68_VC  Indent)
{ 
A68_266  TVFASIM;  /* collateral clause result */
A68_52  UVFASIM;  /* OPERATORS - mode -> union mode */
A68_52  XVFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  YVFASIM;  /* YIELD */
A68_52  ZVFASIM;  /* OPERATORS - mode -> union mode */
A68_56  AWFASIM;  /* procedure value */
A68_85  BWFASIM;  /* OPERATORS - istruct -> vector */
A68_337 * CWFASIM_var;
A68_INT  DWFASIM_i;
A68_INT  EWFASIM;  /* to part of loop */
A68_VC  FWFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 766: */
 /* line 767: */
{ 
TVFASIM.data[0] = A_UNITE(UVFASIM,mode7,7,Indent);
YVFASIM = WVFASIM ;
TVFASIM.data[1] = A_UNITE(XVFASIM,mode7,7,YVFASIM);
AWFASIM.fn.fn_global = LRAAOSL_newline;
AWFASIM.nonlocals = A68_NIL;
TVFASIM.data[2] = A_UNITE(ZVFASIM,mode12,12,AWFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BWFASIM,TVFASIM,3,A68_52 ));
 /* line 768: */
CWFASIM_var = Lis;
 /* line 769: */
EWFASIM = MVFASIM_length(Lis);
for ( DWFASIM_i = 1;
DWFASIM_i <= EWFASIM;
DWFASIM_i += 1 )
{ 
 /* line 770: */
AVFASIM_dump((*(&(CWFASIM_var->Back_patch))), A_VC_PLUS(Indent,A_HVEC(FWFASIM,' ',A68_CHAR )));
 /* line 771: */
 /* line 772: */
CWFASIM_var = (*(&(CWFASIM_var->Rest)));
}
 /* line 773: */
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  IWFASIM_att(A68_211  Ml, A68_299  Lab, A68_340  *ReturnedValue)
{ 
A68_340  JWFASIM;  /* collateral clause result */
A68_340  KWFASIM;  /* clause result */
A_PROC_ENTRY(att);
 /* line 777: */
JWFASIM.Ml = Ml;
JWFASIM.Lab = Lab;
KWFASIM = JWFASIM;
A_PROC_EXIT(att);
*ReturnedValue = (KWFASIM);
return;
} 
#undef NL

A68_VOID  NWFASIM_write(A68_337 ** Lis, A68_340  Ip)
{ 
A68_337 ** OWFASIM_var;
A68_BOOL  PWFASIM;  /* optbool result */
A68_326 * QWFASIM_newstack;
A68_337  RWFASIM;  /* collateral clause result */
A68_337 * SWFASIM;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 781: */
 /* line 782: */
{ 
OWFASIM_var = Lis;
 /* line 783: */
for ( ;; )
{ 
 /* line 784: */
PWFASIM = ((*OWFASIM_var)!=KVFASIM_backpatchlist);
if ( PWFASIM )
{PWFASIM = !LNFASIM_((&((&((*OWFASIM_var)->Back_patch))->Label)), Ip.Lab);
}
 /* line 785: */
if ( !(PWFASIM) ) break;
 /* line 786: */
OWFASIM_var = (&((*OWFASIM_var)->Rest));
}
 /* line 787: */
 /* line 788: */
if ( ((*OWFASIM_var)==KVFASIM_backpatchlist) )
{ 
QWFASIM_newstack = LSFASIM_machinelabelstack;
 /* line 789: */
JUFASIM_push((&QWFASIM_newstack), Ip.Ml);
 /* line 790: */
RWFASIM.Back_patch.Label = Ip.Lab;
RWFASIM.Back_patch.Machine_label_stack = QWFASIM_newstack;
RWFASIM.Rest = (*Lis);
 /* line 791: */
 /* line 792: */
SWFASIM = A_HEAP(A68_337 ) ;
(*SWFASIM) = RWFASIM ;
(*Lis) = SWFASIM;
} 
else
{ 
 /* line 793: */
 /* line 794: */
JUFASIM_push((&((&((*OWFASIM_var)->Back_patch))->Machine_label_stack)), Ip.Ml);
} 
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A68_326 * VWFASIM_lookupremove(A68_337 ** Lis, A68_299  K)
{ 
A68_337 * WWFASIM_var;
A68_337 * XWFASIM_lastvar;
A68_BOOL  YWFASIM;  /* optbool result */
A68_326 * ZWFASIM;  /* clause result */
A68_337 ** AXFASIM;  /* YIELD */
A_PROC_ENTRY(lookupremove);
 /* line 799: */
 /* line 800: */
{ 
WWFASIM_var = (*Lis);
 /* line 801: */
XWFASIM_lastvar = KVFASIM_backpatchlist;
 /* line 802: */
for ( ;; )
{ 
 /* line 803: */
YWFASIM = (WWFASIM_var!=KVFASIM_backpatchlist);
if ( YWFASIM )
{YWFASIM = !LNFASIM_((&((&(WWFASIM_var->Back_patch))->Label)), K);
}
 /* line 804: */
if ( !(YWFASIM) ) break;
XWFASIM_lastvar = WWFASIM_var;
 /* line 805: */
 /* line 806: */
WWFASIM_var = (*(&(WWFASIM_var->Rest)));
}
 /* line 807: */
 /* line 809: */
if ( (WWFASIM_var==KVFASIM_backpatchlist) )
{ 
 /* line 810: */
ZWFASIM = LSFASIM_machinelabelstack;
} 
else
{ 
 /* line 811: */
if ( (XWFASIM_lastvar==KVFASIM_backpatchlist) )
{ 
 /* line 812: */
 /* line 813: */
(*Lis) = (*(&(WWFASIM_var->Rest)));
} 
else
{ 
 /* line 814: */
AXFASIM = (&(XWFASIM_lastvar->Rest)) ;
(*AXFASIM) = (*(&(WWFASIM_var->Rest)));
} 
 /* line 815: */
 /* line 816: */
 /* line 817: */
ZWFASIM = (*(&((&(WWFASIM_var->Back_patch))->Machine_label_stack)));
} 
} 
A_PROC_EXIT(lookupremove);
return( ZWFASIM );
} 
#undef NL

A68_BOOL  CXFASIM_cleared(A68_337 * Lis)
{ 
A68_BOOL  DXFASIM;  /* clause result */
A_PROC_ENTRY(cleared);
 /* line 822: */
DXFASIM = (Lis==KVFASIM_backpatchlist);
A_PROC_EXIT(cleared);
return( DXFASIM );
} 
#undef NL

A68_VOID  LXFASIM_dump(A68_345  P, A68_VC  Indent)
{ 
A68_330  MXFASIM;  /* collateral clause result */
A68_52  PXFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  QXFASIM;  /* YIELD */
A68_52  RXFASIM;  /* OPERATORS - mode -> union mode */
A68_INT  SXFASIM;  /* YIELD */
A68_52  TXFASIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  UXFASIM;  /* YIELD */
A68_52  VXFASIM;  /* OPERATORS - mode -> union mode */
A68_INT  WXFASIM;  /* YIELD */
A68_52  XXFASIM;  /* OPERATORS - mode -> union mode */
A68_56  YXFASIM;  /* procedure value */
A68_85  ZXFASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 839: */
 /* line 840: */
QXFASIM = A_VC_PLUS(Indent,OXFASIM) ;
MXFASIM.data[0] = A_UNITE(PXFASIM,mode7,7,QXFASIM);
SXFASIM = P.Sort ;
MXFASIM.data[1] = A_UNITE(RXFASIM,mode1,1,SXFASIM);
UXFASIM = ' ' ;
MXFASIM.data[2] = A_UNITE(TXFASIM,mode6,6,UXFASIM);
WXFASIM = P.Size ;
MXFASIM.data[3] = A_UNITE(VXFASIM,mode1,1,WXFASIM);
YXFASIM.fn.fn_global = LRAAOSL_newline;
YXFASIM.nonlocals = A68_NIL;
MXFASIM.data[4] = A_UNITE(XXFASIM,mode12,12,YXFASIM);
 /* line 841: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZXFASIM,MXFASIM,5,A68_52 ));
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  CYFASIM_save(A68_345 * X, A68_261  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 846: */
 /* line 848: */
{ 
JCFASIM_save((*(&(X->Sort))), Ff);
 /* line 849: */
 /* line 851: */
JCFASIM_save((*(&(X->Size))), Ff);
} 
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  FYFASIM_restore(A68_345 * X, A68_263  Ff)
{ 
A_PROC_ENTRY(restore);
 /* line 856: */
 /* line 858: */
{ 
MCFASIM_restore((&(X->Sort)), Ff);
 /* line 859: */
 /* line 861: */
MCFASIM_restore((&(X->Size)), Ff);
} 
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_VOID  JYFASIM_dump(A68_349 * Ip, A68_VC  Indent)
{ 
A68_VC  KYFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LYFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 878: */
 /* line 879: */
{ 
 /* line 880: */
if ( (Ip!=GYFASIM_nilparams) )
{ 
LXFASIM_dump((*(&(Ip->Head))), A_VC_PLUS(Indent,A_HVEC(KYFASIM,' ',A68_CHAR )));
 /* line 881: */
 /* line 882: */
 /* line 884: */
JYFASIM_dump((*(&(Ip->Tail))), A_VC_PLUS(Indent,A_HVEC(LYFASIM,' ',A68_CHAR )));
} 
else
{ 
 /* line 885: */
/*SKIP*/;
} 
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  OYFASIM_save(A68_349 * X, A68_261  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 890: */
 /* line 891: */
{ 
 /* line 892: */
if ( (X!=GYFASIM_nilparams) )
{ 
DCFASIM_save(A68_TRUE, Ff);
 /* line 893: */
CYFASIM_save((&(X->Head)), Ff);
 /* line 894: */
 /* line 895: */
 /* line 896: */
OYFASIM_save((*(&(X->Tail))), Ff);
} 
else
{ 
 /* line 897: */
 /* line 898: */
DCFASIM_save(A68_FALSE, Ff);
} 
} 
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  RYFASIM_restore(A68_349 ** X, A68_263  Ff)
{ 
A68_BOOL  SYFASIM_another;
A_PROC_ENTRY(restore);
 /* line 903: */
 /* line 904: */
{ 
GCFASIM_restore((&SYFASIM_another), Ff);
 /* line 905: */
 /* line 906: */
if ( SYFASIM_another )
{ 
(*X) = A_HEAP(A68_349 );
 /* line 907: */
FYFASIM_restore((&((*X)->Head)), Ff);
 /* line 908: */
 /* line 909: */
 /* line 910: */
RYFASIM_restore((&((*X)->Tail)), Ff);
} 
else
{ 
 /* line 911: */
 /* line 912: */
(*X) = GYFASIM_nilparams;
} 
} 
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_INT  UYFASIM_length(A68_349 * P)
{ 
A68_349 * VYFASIM_ip;
A68_INT  WYFASIM_count;
A68_INT  XYFASIM;  /* clause result */
A_PROC_ENTRY(length);
 /* line 918: */
 /* line 919: */
{ 
VYFASIM_ip = P;
 /* line 920: */
WYFASIM_count = 0;
 /* line 921: */
for ( ;; )
{ 
if ( !((VYFASIM_ip!=GYFASIM_nilparams)) ) break;
WYFASIM_count+=1;
VYFASIM_ip = (*(&(VYFASIM_ip->Tail)));
}
 /* line 922: */
 /* line 923: */
XYFASIM = WYFASIM_count;
} 
A_PROC_EXIT(length);
return( XYFASIM );
} 
#undef NL

A68_VOID  BZFASIM_labeledparams(A68_299  Lab, A68_349 * Ip, A68_349 * Op, A68_354  *ReturnedValue)
{ 
A68_354  CZFASIM;  /* collateral clause result */
A68_354  DZFASIM;  /* clause result */
A_PROC_ENTRY(labeledparams);
 /* line 934: */
CZFASIM.Label = Lab;
CZFASIM.Input_params = Ip;
CZFASIM.Output_params = Op;
DZFASIM = CZFASIM;
A_PROC_EXIT(labeledparams);
*ReturnedValue = (DZFASIM);
return;
} 
#undef NL

A68_VOID  GZFASIM_dump(A68_354  P, A68_VC  Indent)
{ 
A68_268  HZFASIM;  /* collateral clause result */
A68_52  KZFASIM;  /* OPERATORS - mode -> union mode */
A68_VC  LZFASIM;  /* YIELD */
A68_52  MZFASIM;  /* OPERATORS - mode -> union mode */
A68_56  NZFASIM;  /* procedure value */
A68_85  OZFASIM;  /* OPERATORS - istruct -> vector */
A68_VC  PZFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QZFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RZFASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 938: */
 /* line 939: */
{ 
LZFASIM = A_VC_PLUS(Indent,JZFASIM) ;
HZFASIM.data[0] = A_UNITE(KZFASIM,mode7,7,LZFASIM);
NZFASIM.fn.fn_global = LRAAOSL_newline;
NZFASIM.nonlocals = A68_NIL;
HZFASIM.data[1] = A_UNITE(MZFASIM,mode12,12,NZFASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(OZFASIM,HZFASIM,2,A68_52 ));
 /* line 940: */
KMFASIM_dump(P.Label, A_VC_PLUS(Indent,A_HVEC(PZFASIM,' ',A68_CHAR )));
 /* line 941: */
JYFASIM_dump(P.Input_params, A_VC_PLUS(Indent,A_HVEC(QZFASIM,' ',A68_CHAR )));
 /* line 942: */
 /* line 943: */
JYFASIM_dump(P.Output_params, A_VC_PLUS(Indent,A_HVEC(RZFASIM,' ',A68_CHAR )));
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  UZFASIM_save(A68_354 * X, A68_261  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 948: */
 /* line 950: */
{ 
FNFASIM_save((&(X->Label)), Ff);
 /* line 951: */
OYFASIM_save((*(&(X->Input_params))), Ff);
 /* line 952: */
 /* line 954: */
OYFASIM_save((*(&(X->Output_params))), Ff);
} 
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  XZFASIM_restore(A68_354 * X, A68_263  Ff)
{ 
A_PROC_ENTRY(restore);
 /* line 959: */
 /* line 961: */
{ 
INFASIM_restore((&(X->Label)), Ff);
 /* line 962: */
RYFASIM_restore((&(X->Input_params)), Ff);
 /* line 963: */
 /* line 965: */
RYFASIM_restore((&(X->Output_params)), Ff);
} 
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_VOID  AAGASIM_labeledspec(A68_299  Lab, A68_349 * Sp, A68_359  *ReturnedValue)
{ 
A68_359  BAGASIM;  /* collateral clause result */
A68_359  CAGASIM;  /* clause result */
A_PROC_ENTRY(labeledspec);
 /* line 976: */
BAGASIM.Label = Lab;
BAGASIM.Spec = Sp;
CAGASIM = BAGASIM;
A_PROC_EXIT(labeledspec);
*ReturnedValue = (CAGASIM);
return;
} 
#undef NL

A68_VOID  FAGASIM_dump(A68_359  P, A68_VC  Indent)
{ 
A68_268  GAGASIM;  /* collateral clause result */
A68_52  JAGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  KAGASIM;  /* YIELD */
A68_52  LAGASIM;  /* OPERATORS - mode -> union mode */
A68_56  MAGASIM;  /* procedure value */
A68_85  NAGASIM;  /* OPERATORS - istruct -> vector */
A68_VC  OAGASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PAGASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 980: */
 /* line 981: */
{ 
KAGASIM = A_VC_PLUS(Indent,IAGASIM) ;
GAGASIM.data[0] = A_UNITE(JAGASIM,mode7,7,KAGASIM);
MAGASIM.fn.fn_global = LRAAOSL_newline;
MAGASIM.nonlocals = A68_NIL;
GAGASIM.data[1] = A_UNITE(LAGASIM,mode12,12,MAGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NAGASIM,GAGASIM,2,A68_52 ));
 /* line 982: */
KMFASIM_dump(P.Label, A_VC_PLUS(Indent,A_HVEC(OAGASIM,' ',A68_CHAR )));
 /* line 983: */
 /* line 984: */
JYFASIM_dump(P.Spec, A_VC_PLUS(Indent,A_HVEC(PAGASIM,' ',A68_CHAR )));
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A_STATIC A68_INT  SAGASIM_length(A68_363 * Lis)
{ 
A68_363 * TAGASIM_var;
A68_INT  UAGASIM_count;
A68_INT  VAGASIM;  /* clause result */
A_PROC_ENTRY(length);
 /* line 999: */
 /* line 1000: */
{ 
TAGASIM_var = Lis;
 /* line 1001: */
UAGASIM_count = 0;
 /* line 1002: */
for ( ;; )
{ 
 /* line 1003: */
if ( !((TAGASIM_var!=QAGASIM_speclist)) ) break;
UAGASIM_count+=1;
 /* line 1004: */
 /* line 1005: */
TAGASIM_var = (*(&(TAGASIM_var->Rest)));
}
 /* line 1006: */
 /* line 1007: */
VAGASIM = UAGASIM_count;
} 
A_PROC_EXIT(length);
return( VAGASIM );
} 
#undef NL

A68_VOID  YAGASIM_dump(A68_363 * Lis, A68_VC  Indent)
{ 
A68_266  ZAGASIM;  /* collateral clause result */
A68_52  ABGASIM;  /* OPERATORS - mode -> union mode */
A68_52  DBGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  EBGASIM;  /* YIELD */
A68_52  FBGASIM;  /* OPERATORS - mode -> union mode */
A68_56  GBGASIM;  /* procedure value */
A68_85  HBGASIM;  /* OPERATORS - istruct -> vector */
A68_363 * IBGASIM_var;
A68_INT  JBGASIM_i;
A68_INT  KBGASIM;  /* to part of loop */
A68_VC  LBGASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 1012: */
 /* line 1013: */
{ 
ZAGASIM.data[0] = A_UNITE(ABGASIM,mode7,7,Indent);
EBGASIM = CBGASIM ;
ZAGASIM.data[1] = A_UNITE(DBGASIM,mode7,7,EBGASIM);
GBGASIM.fn.fn_global = LRAAOSL_newline;
GBGASIM.nonlocals = A68_NIL;
ZAGASIM.data[2] = A_UNITE(FBGASIM,mode12,12,GBGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HBGASIM,ZAGASIM,3,A68_52 ));
 /* line 1014: */
IBGASIM_var = Lis;
 /* line 1015: */
KBGASIM = SAGASIM_length(Lis);
for ( JBGASIM_i = 1;
JBGASIM_i <= KBGASIM;
JBGASIM_i += 1 )
{ 
 /* line 1016: */
FAGASIM_dump((*(&(IBGASIM_var->Labeled_spec))), A_VC_PLUS(Indent,A_HVEC(LBGASIM,' ',A68_CHAR )));
 /* line 1017: */
 /* line 1018: */
IBGASIM_var = (*(&(IBGASIM_var->Rest)));
}
 /* line 1019: */
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_BOOL  OBGASIM_present(A68_363 * Lis, A68_299  K)
{ 
A68_363 * PBGASIM_var;
A68_BOOL  QBGASIM;  /* optbool result */
A68_BOOL  RBGASIM;  /* clause result */
A_PROC_ENTRY(present);
 /* line 1024: */
 /* line 1025: */
{ 
PBGASIM_var = Lis;
 /* line 1026: */
for ( ;; )
{ 
 /* line 1027: */
QBGASIM = (PBGASIM_var!=QAGASIM_speclist);
if ( QBGASIM )
{QBGASIM = !LNFASIM_((&((&(PBGASIM_var->Labeled_spec))->Label)), K);
}
 /* line 1028: */
if ( !(QBGASIM) ) break;
 /* line 1029: */
PBGASIM_var = (*(&(PBGASIM_var->Rest)));
}
 /* line 1030: */
 /* line 1031: */
RBGASIM = (PBGASIM_var!=QAGASIM_speclist);
} 
A_PROC_EXIT(present);
return( RBGASIM );
} 
#undef NL

A68_349 * UBGASIM_lookupremove(A68_363 ** Lis, A68_299  K)
{ 
A68_363 * VBGASIM_var;
A68_363 * WBGASIM_lastvar;
A68_BOOL  XBGASIM;  /* optbool result */
A68_349 * YBGASIM;  /* clause result */
A68_363 ** ZBGASIM;  /* YIELD */
A_PROC_ENTRY(lookupremove);
 /* line 1036: */
 /* line 1037: */
{ 
VBGASIM_var = (*Lis);
 /* line 1038: */
WBGASIM_lastvar = QAGASIM_speclist;
 /* line 1039: */
for ( ;; )
{ 
 /* line 1040: */
XBGASIM = (VBGASIM_var!=QAGASIM_speclist);
if ( XBGASIM )
{XBGASIM = !LNFASIM_((&((&(VBGASIM_var->Labeled_spec))->Label)), K);
}
 /* line 1041: */
if ( !(XBGASIM) ) break;
WBGASIM_lastvar = VBGASIM_var;
 /* line 1042: */
 /* line 1043: */
VBGASIM_var = (*(&(VBGASIM_var->Rest)));
}
 /* line 1044: */
 /* line 1046: */
if ( (VBGASIM_var==QAGASIM_speclist) )
{ 
 /* line 1047: */
YBGASIM = GYFASIM_nilparams;
} 
else
{ 
 /* line 1048: */
if ( (WBGASIM_lastvar==QAGASIM_speclist) )
{ 
 /* line 1049: */
 /* line 1050: */
(*Lis) = (*(&(VBGASIM_var->Rest)));
} 
else
{ 
 /* line 1051: */
ZBGASIM = (&(WBGASIM_lastvar->Rest)) ;
(*ZBGASIM) = (*(&(VBGASIM_var->Rest)));
} 
 /* line 1052: */
 /* line 1053: */
 /* line 1054: */
YBGASIM = (*(&((&(VBGASIM_var->Labeled_spec))->Spec)));
} 
} 
A_PROC_EXIT(lookupremove);
return( YBGASIM );
} 
#undef NL

A68_VOID  CCGASIM_write(A68_363 ** Lis, A68_359  K)
{ 
A68_363  DCGASIM;  /* collateral clause result */
A68_363 * ECGASIM;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1058: */
 /* line 1059: */
DCGASIM.Labeled_spec = K;
DCGASIM.Rest = (*Lis);
 /* line 1060: */
ECGASIM = A_HEAP(A68_363 ) ;
(*ECGASIM) = DCGASIM ;
(*Lis) = ECGASIM;
A_PROC_EXIT(write);
return;
} 
#undef NL

A_STATIC A68_INT  HCGASIM_length(A68_370 * Lis)
{ 
A68_370 * ICGASIM_var;
A68_INT  JCGASIM_count;
A68_INT  KCGASIM;  /* clause result */
A_PROC_ENTRY(length);
 /* line 1076: */
 /* line 1077: */
{ 
ICGASIM_var = Lis;
 /* line 1078: */
JCGASIM_count = 0;
 /* line 1079: */
for ( ;; )
{ 
 /* line 1080: */
if ( !((ICGASIM_var!=FCGASIM_parameterlist)) ) break;
JCGASIM_count+=1;
 /* line 1081: */
 /* line 1082: */
ICGASIM_var = (*(&(ICGASIM_var->Rest)));
}
 /* line 1083: */
 /* line 1084: */
KCGASIM = JCGASIM_count;
} 
A_PROC_EXIT(length);
return( KCGASIM );
} 
#undef NL

A68_VOID  NCGASIM_dump(A68_370 * Lis, A68_VC  Indent)
{ 
A68_266  OCGASIM;  /* collateral clause result */
A68_52  PCGASIM;  /* OPERATORS - mode -> union mode */
A68_52  SCGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  TCGASIM;  /* YIELD */
A68_52  UCGASIM;  /* OPERATORS - mode -> union mode */
A68_56  VCGASIM;  /* procedure value */
A68_85  WCGASIM;  /* OPERATORS - istruct -> vector */
A68_370 * XCGASIM_var;
A68_INT  YCGASIM_i;
A68_INT  ZCGASIM;  /* to part of loop */
A68_VC  ADGASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 1089: */
 /* line 1090: */
{ 
OCGASIM.data[0] = A_UNITE(PCGASIM,mode7,7,Indent);
TCGASIM = RCGASIM ;
OCGASIM.data[1] = A_UNITE(SCGASIM,mode7,7,TCGASIM);
VCGASIM.fn.fn_global = LRAAOSL_newline;
VCGASIM.nonlocals = A68_NIL;
OCGASIM.data[2] = A_UNITE(UCGASIM,mode12,12,VCGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(WCGASIM,OCGASIM,3,A68_52 ));
 /* line 1091: */
XCGASIM_var = Lis;
 /* line 1092: */
ZCGASIM = HCGASIM_length(Lis);
for ( YCGASIM_i = 1;
YCGASIM_i <= ZCGASIM;
YCGASIM_i += 1 )
{ 
 /* line 1093: */
GZFASIM_dump((*(&(XCGASIM_var->Labeled_params))), A_VC_PLUS(Indent,A_HVEC(ADGASIM,' ',A68_CHAR )));
 /* line 1094: */
 /* line 1095: */
XCGASIM_var = (*(&(XCGASIM_var->Rest)));
}
 /* line 1096: */
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  DDGASIM_save(A68_370 * Lis, A68_261  Ff)
{ 
A68_370 * EDGASIM_var;
A68_INT  FDGASIM_i;
A68_INT  GDGASIM;  /* to part of loop */
A_PROC_ENTRY(save);
 /* line 1101: */
 /* line 1102: */
{ 
JCFASIM_save(HCGASIM_length(Lis), Ff);
 /* line 1103: */
EDGASIM_var = Lis;
 /* line 1104: */
GDGASIM = HCGASIM_length(Lis);
for ( FDGASIM_i = 1;
FDGASIM_i <= GDGASIM;
FDGASIM_i += 1 )
{ 
 /* line 1105: */
UZFASIM_save((&(EDGASIM_var->Labeled_params)), Ff);
 /* line 1106: */
 /* line 1107: */
EDGASIM_var = (*(&(EDGASIM_var->Rest)));
}
 /* line 1108: */
} 
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  JDGASIM_restore(A68_370 ** Lis, A68_263  Ff)
{ 
A68_INT  KDGASIM_length;
A68_354  LDGASIM_item;
A68_INT  MDGASIM_i;
A68_INT  NDGASIM;  /* to part of loop */
A68_370  ODGASIM;  /* collateral clause result */
A68_370 * PDGASIM;  /* YIELD */
A_PROC_ENTRY(restore);
 /* line 1113: */
 /* line 1114: */
{ 
MCFASIM_restore((&KDGASIM_length), Ff);
 /* line 1115: */
 /* line 1116: */
(*Lis) = FCGASIM_parameterlist;
 /* line 1117: */
NDGASIM = KDGASIM_length;
for ( MDGASIM_i = 1;
MDGASIM_i <= NDGASIM;
MDGASIM_i += 1 )
{ 
 /* line 1118: */
XZFASIM_restore((&LDGASIM_item), Ff);
 /* line 1119: */
ODGASIM.Labeled_params = LDGASIM_item;
 /* line 1120: */
ODGASIM.Rest = (*Lis);
PDGASIM = A_HEAP(A68_370 ) ;
(*PDGASIM) = ODGASIM ;
(*Lis) = PDGASIM;
}
 /* line 1121: */
} 
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_VOID  SDGASIM_lookup(A68_370 * Lis, A68_299  K, A68_375  *ReturnedValue)
{ 
A68_370 * TDGASIM_var;
A68_BOOL  UDGASIM;  /* optbool result */
A68_377  VDGASIM;  /* collateral clause result */
A68_375  WDGASIM;  /* clause result */
A68_375  XDGASIM;  /* OPERATORS - istruct to row */
A_PROC_ENTRY(lookup);
 /* line 1131: */
 /* line 1132: */
{ 
TDGASIM_var = Lis;
 /* line 1133: */
for ( ;; )
{ 
 /* line 1134: */
UDGASIM = (TDGASIM_var!=FCGASIM_parameterlist);
if ( UDGASIM )
{UDGASIM = !LNFASIM_((&((&(TDGASIM_var->Labeled_params))->Label)), K);
}
 /* line 1135: */
if ( !(UDGASIM) ) break;
 /* line 1136: */
TDGASIM_var = (*(&(TDGASIM_var->Rest)));
}
 /* line 1137: */
 /* line 1138: */
VDGASIM.data[0] = (*(&((&(TDGASIM_var->Labeled_params))->Input_params)));
 /* line 1139: */
VDGASIM.data[1] = (*(&((&(TDGASIM_var->Labeled_params))->Output_params)));
WDGASIM = A_HIS1ARR(XDGASIM,VDGASIM,A68_349 *,2);
} 
A_PROC_EXIT(lookup);
*ReturnedValue = (WDGASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  AEGASIM_remove(A68_370 ** Lis, A68_299  K)
{ 
A68_370 * BEGASIM_var;
A68_370 * CEGASIM_lastvar;
A68_BOOL  DEGASIM;  /* optbool result */
A_PROC_ENTRY(remove);
 /* line 1144: */
 /* line 1145: */
{ 
BEGASIM_var = (*Lis);
 /* line 1146: */
CEGASIM_lastvar = FCGASIM_parameterlist;
 /* line 1147: */
for ( ;; )
{ 
 /* line 1148: */
DEGASIM = (BEGASIM_var!=FCGASIM_parameterlist);
if ( DEGASIM )
{DEGASIM = !LNFASIM_((&((&(BEGASIM_var->Labeled_params))->Label)), K);
}
 /* line 1149: */
if ( !(DEGASIM) ) break;
CEGASIM_lastvar = BEGASIM_var;
 /* line 1150: */
 /* line 1151: */
BEGASIM_var = (*(&(BEGASIM_var->Rest)));
}
 /* line 1152: */
} 
A_PROC_EXIT(remove);
return;
} 
#undef NL

A68_VOID  GEGASIM_write(A68_370 ** Lis, A68_354  K)
{ 
A68_370  HEGASIM;  /* collateral clause result */
A68_370 * IEGASIM;  /* YIELD */
A_PROC_ENTRY(write);
 /* line 1156: */
 /* line 1157: */
{ 
AEGASIM_remove(Lis, K.Label);
 /* line 1158: */
HEGASIM.Labeled_params = K;
HEGASIM.Rest = (*Lis);
 /* line 1159: */
IEGASIM = A_HEAP(A68_370 ) ;
(*IEGASIM) = HEGASIM ;
(*Lis) = IEGASIM;
} 
A_PROC_EXIT(write);
return;
} 
#undef NL

A68_VOID  KEGASIM_removelast(A68_370 ** Lis)
{ 
A_PROC_ENTRY(removelast);
 /* line 1163: */
 /* line 1164: */
 /* line 1165: */
(*Lis) = (*(&((*Lis)->Rest)));
A_PROC_EXIT(removelast);
return;
} 
#undef NL

A68_VOID  UEGASIM_rmallocator(A68_381  *ReturnedValue)
{ 
A68_381  VEGASIM;  /* collateral clause result */
A68_381  WEGASIM;  /* clause result */
A_PROC_ENTRY(rmallocator);
VEGASIM.Window_offset = 0;
VEGASIM.Register_ind = (LEGASIM_maxregister+1);
VEGASIM.Memory_offset = 0;
VEGASIM.Max_offset = 0;
WEGASIM = VEGASIM;
A_PROC_EXIT(rmallocator);
*ReturnedValue = (WEGASIM);
return;
} 
#undef NL

A68_VOID  ZEGASIM_dump(A68_381  R, A68_VC  Indent)
{ 
A68_268  AFGASIM;  /* collateral clause result */
A68_52  DFGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  EFGASIM;  /* YIELD */
A68_52  FFGASIM;  /* OPERATORS - mode -> union mode */
A68_56  GFGASIM;  /* procedure value */
A68_85  HFGASIM;  /* OPERATORS - istruct -> vector */
A68_266  IFGASIM;  /* collateral clause result */
A68_52  LFGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  MFGASIM;  /* YIELD */
A68_52  NFGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  OFGASIM;  /* YIELD */
A68_52  PFGASIM;  /* OPERATORS - mode -> union mode */
A68_56  QFGASIM;  /* procedure value */
A68_85  RFGASIM;  /* OPERATORS - istruct -> vector */
A68_266  SFGASIM;  /* collateral clause result */
A68_52  VFGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  WFGASIM;  /* YIELD */
A68_52  XFGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  YFGASIM;  /* YIELD */
A68_52  ZFGASIM;  /* OPERATORS - mode -> union mode */
A68_56  AGGASIM;  /* procedure value */
A68_85  BGGASIM;  /* OPERATORS - istruct -> vector */
A68_266  CGGASIM;  /* collateral clause result */
A68_52  FGGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  GGGASIM;  /* YIELD */
A68_52  HGGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  IGGASIM;  /* YIELD */
A68_52  JGGASIM;  /* OPERATORS - mode -> union mode */
A68_56  KGGASIM;  /* procedure value */
A68_85  LGGASIM;  /* OPERATORS - istruct -> vector */
A68_266  MGGASIM;  /* collateral clause result */
A68_52  PGGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  QGGASIM;  /* YIELD */
A68_52  RGGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  SGGASIM;  /* YIELD */
A68_52  TGGASIM;  /* OPERATORS - mode -> union mode */
A68_56  UGGASIM;  /* procedure value */
A68_85  VGGASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 1203: */
 /* line 1204: */
{ 
EFGASIM = A_VC_PLUS(Indent,CFGASIM) ;
AFGASIM.data[0] = A_UNITE(DFGASIM,mode7,7,EFGASIM);
GFGASIM.fn.fn_global = LRAAOSL_newline;
GFGASIM.nonlocals = A68_NIL;
AFGASIM.data[1] = A_UNITE(FFGASIM,mode12,12,GFGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HFGASIM,AFGASIM,2,A68_52 ));
 /* line 1205: */
MFGASIM = A_VC_PLUS(Indent,KFGASIM) ;
IFGASIM.data[0] = A_UNITE(LFGASIM,mode7,7,MFGASIM);
OFGASIM = R.Window_offset ;
IFGASIM.data[1] = A_UNITE(NFGASIM,mode1,1,OFGASIM);
QFGASIM.fn.fn_global = LRAAOSL_newline;
QFGASIM.nonlocals = A68_NIL;
IFGASIM.data[2] = A_UNITE(PFGASIM,mode12,12,QFGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RFGASIM,IFGASIM,3,A68_52 ));
 /* line 1206: */
WFGASIM = A_VC_PLUS(Indent,UFGASIM) ;
SFGASIM.data[0] = A_UNITE(VFGASIM,mode7,7,WFGASIM);
YFGASIM = R.Register_ind ;
SFGASIM.data[1] = A_UNITE(XFGASIM,mode1,1,YFGASIM);
AGGASIM.fn.fn_global = LRAAOSL_newline;
AGGASIM.nonlocals = A68_NIL;
SFGASIM.data[2] = A_UNITE(ZFGASIM,mode12,12,AGGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BGGASIM,SFGASIM,3,A68_52 ));
 /* line 1207: */
GGGASIM = A_VC_PLUS(Indent,EGGASIM) ;
CGGASIM.data[0] = A_UNITE(FGGASIM,mode7,7,GGGASIM);
IGGASIM = R.Memory_offset ;
CGGASIM.data[1] = A_UNITE(HGGASIM,mode1,1,IGGASIM);
KGGASIM.fn.fn_global = LRAAOSL_newline;
KGGASIM.nonlocals = A68_NIL;
CGGASIM.data[2] = A_UNITE(JGGASIM,mode12,12,KGGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(LGGASIM,CGGASIM,3,A68_52 ));
 /* line 1208: */
QGGASIM = A_VC_PLUS(Indent,OGGASIM) ;
MGGASIM.data[0] = A_UNITE(PGGASIM,mode7,7,QGGASIM);
SGGASIM = R.Max_offset ;
MGGASIM.data[1] = A_UNITE(RGGASIM,mode1,1,SGGASIM);
UGGASIM.fn.fn_global = LRAAOSL_newline;
UGGASIM.nonlocals = A68_NIL;
MGGASIM.data[2] = A_UNITE(TGGASIM,mode12,12,UGGASIM);
 /* line 1209: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VGGASIM,MGGASIM,3,A68_52 ));
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  YGGASIM_save(A68_381 * X, A68_261  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 1214: */
 /* line 1220: */
 /* line 1222: */
JCFASIM_save((*(&(X->Max_offset))), Ff);
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  BHGASIM_restore(A68_381 * X, A68_263  Ff)
{ 
A_PROC_ENTRY(restore);
 /* line 1227: */
 /* line 1233: */
 /* line 1235: */
MCFASIM_restore((&(X->Max_offset)), Ff);
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_VOID  DHGASIM_clear(A68_381 * R)
{ 
A68_INT * EHGASIM;  /* YIELD */
A68_INT * FHGASIM;  /* YIELD */
A68_217  GHGASIM;  /* collateral clause result */
A68_219  HHGASIM;  /* OPERATORS - mode -> union mode */
A68_INT * IHGASIM;  /* YIELD */
A_PROC_ENTRY(clear);
 /* line 1241: */
 /* line 1242: */
{ 
EHGASIM = (&(R->Register_ind)) ;
(*EHGASIM) = (LEGASIM_maxregister+1);
 /* line 1243: */
FHGASIM = (&(R->Memory_offset)) ;
(*FHGASIM) = 0;
 /* line 1244: */
for ( ;; )
{ 
 /* line 1245: */
if ( !(((*(&(R->Window_offset)))!=0)) ) break;
GHGASIM.Rs1 = FVEASIM_g0;
GHGASIM.Rs2 = FVEASIM_g0;
GHGASIM.Rd = FVEASIM_g0;
ISEASIM_using(PEEASIM_restore, A_UNITE(HHGASIM,mode1,1,GHGASIM));
 /* line 1246: */
 /* line 1247: */
IHGASIM = (&(R->Window_offset)) ;
(*IHGASIM)-=16;
}
 /* line 1248: */
} 
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_VOID  KHGASIM_savewindow(A68_381 * R)
{ 
A68_INT * LHGASIM;  /* YIELD */
A68_218  MHGASIM;  /* collateral clause result */
A68_219  NHGASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(savewindow);
 /* line 1252: */
 /* line 1253: */
{ 
LHGASIM = (&(R->Window_offset)) ;
(*LHGASIM)+=16;
 /* line 1254: */
MHGASIM.Rs1 = IWEASIM_sp;
MHGASIM.Imm = ((-(23+1))*4);
 /* line 1255: */
MHGASIM.Rd = IWEASIM_sp;
ISEASIM_using(LEEASIM_save, A_UNITE(NHGASIM,mode2,2,MHGASIM));
} 
A_PROC_EXIT(savewindow);
return;
} 
#undef NL

A68_VOID  PHGASIM_restorewindow(A68_381 * R)
{ 
A68_INT * QHGASIM;  /* YIELD */
A68_217  RHGASIM;  /* collateral clause result */
A68_219  SHGASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(restorewindow);
 /* line 1259: */
 /* line 1260: */
if ( ((*(&(R->Window_offset)))>0) )
{ 
QHGASIM = (&(R->Window_offset)) ;
(*QHGASIM)-=16;
 /* line 1261: */
RHGASIM.Rs1 = FVEASIM_g0;
RHGASIM.Rs2 = FVEASIM_g0;
 /* line 1262: */
RHGASIM.Rd = FVEASIM_g0;
ISEASIM_using(PEEASIM_restore, A_UNITE(SHGASIM,mode1,1,RHGASIM));
} 
A_PROC_EXIT(restorewindow);
return;
} 
#undef NL

A68_BOOL  UHGASIM_willsaveonreserver(A68_381 * R)
{ 
A68_BOOL  VHGASIM;  /* clause result */
A_PROC_ENTRY(willsaveonreserver);
 /* line 1266: */
VHGASIM = (((*(&(R->Register_ind)))+(*(&(R->Window_offset))))==A_ABS(MEGASIM_minregister));
A_PROC_EXIT(willsaveonreserver);
return( VHGASIM );
} 
#undef NL

A68_INT  XHGASIM_reserver(A68_381 * R)
{ 
A68_INT * YHGASIM;  /* YIELD */
A68_INT * ZHGASIM;  /* YIELD */
A68_INT  AIGASIM;  /* clause result */
A_PROC_ENTRY(reserver);
 /* line 1270: */
 /* line 1271: */
{ 
YHGASIM = (&(R->Register_ind)) ;
(*YHGASIM)-=1;
 /* line 1273: */
 /* line 1275: */
if ( (((*(&(R->Register_ind)))+(*(&(R->Window_offset))))<A_ABS(MEGASIM_minregister)) )
{ 
KHGASIM_savewindow(R);
} 
else
{ 
 /* line 1276: */
if ( (((*(&(R->Register_ind)))+(*(&(R->Window_offset))))==(A68_INT )JWEASIM_r15) )
{ 
 /* line 1277: */
ZHGASIM = (&(R->Register_ind)) ;
(*ZHGASIM) = ((A68_INT )EWEASIM_r13-(*(&(R->Window_offset))));
} 
} 
 /* line 1279: */
 /* line 1280: */
AIGASIM = (*(&(R->Register_ind)));
} 
A_PROC_EXIT(reserver);
return( AIGASIM );
} 
#undef NL

A68_VOID  CIGASIM_unreserver(A68_381 * R)
{ 
A68_INT * DIGASIM;  /* YIELD */
A68_BOOL  EIGASIM;  /* optbool result */
A68_INT * FIGASIM;  /* YIELD */
A68_INT * GIGASIM;  /* YIELD */
A_PROC_ENTRY(unreserver);
 /* line 1284: */
 /* line 1285: */
{ 
DIGASIM = (&(R->Register_ind)) ;
(*DIGASIM)+=1;
 /* line 1287: */
 /* line 1288: */
EIGASIM = (((*(&(R->Register_ind)))+(*(&(R->Window_offset))))==(A68_INT )CXEASIM_i0);
if ( EIGASIM )
{ /* line 1289: */
EIGASIM = ((*(&(R->Window_offset)))!=0);
}
 /* line 1290: */
if ( EIGASIM )
{ 
PHGASIM_restorewindow(R);
 /* line 1291: */
 /* line 1292: */
FIGASIM = (&(R->Register_ind)) ;
(*FIGASIM) = ((A68_INT )UVEASIM_r8-(*(&(R->Window_offset))));
} 
else
{ 
 /* line 1293: */
if ( (((*(&(R->Register_ind)))+(*(&(R->Window_offset))))==(A68_INT )GWEASIM_r14) )
{ 
 /* line 1294: */
 /* line 1295: */
GIGASIM = (&(R->Register_ind)) ;
(*GIGASIM) = ((A68_INT )LWEASIM_r16-(*(&(R->Window_offset))));
} 
} 
} 
A_PROC_EXIT(unreserver);
return;
} 
#undef NL

A68_VOID  IIGASIM_inregister(A68_BOOL  F, A68_389  *ReturnedValue)
{ 
A68_389  JIGASIM_r;
A68_BOOL * KIGASIM;  /* YIELD */
A68_389  LIGASIM;  /* clause result */
A_PROC_ENTRY(inregister);
 /* line 1312: */
 /* line 1313: */
{ 
 /* line 1314: */
KIGASIM = (&((&JIGASIM_r)->Ircallinst_flag)) ;
(*KIGASIM) = F;
 /* line 1315: */
 /* line 1316: */
LIGASIM = JIGASIM_r;
} 
A_PROC_EXIT(inregister);
*ReturnedValue = (LIGASIM);
return;
} 
#undef NL

A68_VOID  OIGASIM_dump(A68_389  S, A68_VC  Indent)
{ 
A68_266  PIGASIM;  /* collateral clause result */
A68_52  SIGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  TIGASIM;  /* YIELD */
A68_52  UIGASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  VIGASIM;  /* YIELD */
A68_52  WIGASIM;  /* OPERATORS - mode -> union mode */
A68_56  XIGASIM;  /* procedure value */
A68_85  YIGASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 1321: */
 /* line 1322: */
TIGASIM = A_VC_PLUS(Indent,RIGASIM) ;
PIGASIM.data[0] = A_UNITE(SIGASIM,mode7,7,TIGASIM);
VIGASIM = S.Ircallinst_flag ;
PIGASIM.data[1] = A_UNITE(UIGASIM,mode8,8,VIGASIM);
XIGASIM.fn.fn_global = LRAAOSL_newline;
XIGASIM.nonlocals = A68_NIL;
PIGASIM.data[2] = A_UNITE(WIGASIM,mode12,12,XIGASIM);
 /* line 1323: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(YIGASIM,PIGASIM,3,A68_52 ));
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  BJGASIM_copy(A68_INT  S, A68_BOOL  F, A68_393  *ReturnedValue)
{ 
A68_393  CJGASIM;  /* collateral clause result */
A68_393  DJGASIM;  /* clause result */
A_PROC_ENTRY(copy);
 /* line 1337: */
CJGASIM.Copy_stack_number = S;
CJGASIM.Register_flag = F;
DJGASIM = CJGASIM;
A_PROC_EXIT(copy);
*ReturnedValue = (DJGASIM);
return;
} 
#undef NL

A68_VOID  GJGASIM_dump(A68_393  S, A68_VC  Indent)
{ 
A68_330  HJGASIM;  /* collateral clause result */
A68_52  KJGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  LJGASIM;  /* YIELD */
A68_52  MJGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  NJGASIM;  /* YIELD */
A68_52  OJGASIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  PJGASIM;  /* YIELD */
A68_52  QJGASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  RJGASIM;  /* YIELD */
A68_52  SJGASIM;  /* OPERATORS - mode -> union mode */
A68_56  TJGASIM;  /* procedure value */
A68_85  UJGASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 1342: */
 /* line 1343: */
LJGASIM = A_VC_PLUS(Indent,JJGASIM) ;
HJGASIM.data[0] = A_UNITE(KJGASIM,mode7,7,LJGASIM);
NJGASIM = S.Copy_stack_number ;
HJGASIM.data[1] = A_UNITE(MJGASIM,mode1,1,NJGASIM);
 /* line 1344: */
PJGASIM = ' ' ;
HJGASIM.data[2] = A_UNITE(OJGASIM,mode6,6,PJGASIM);
RJGASIM = S.Register_flag ;
HJGASIM.data[3] = A_UNITE(QJGASIM,mode8,8,RJGASIM);
TJGASIM.fn.fn_global = LRAAOSL_newline;
TJGASIM.nonlocals = A68_NIL;
HJGASIM.data[4] = A_UNITE(SJGASIM,mode12,12,TJGASIM);
 /* line 1345: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(UJGASIM,HJGASIM,5,A68_52 ));
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  WJGASIM_const(A68_VC  I, A68_396  *ReturnedValue)
{ 
A68_396  XJGASIM_c;
A68_VC * YJGASIM;  /* YIELD */
A68_396  ZJGASIM;  /* clause result */
A_PROC_ENTRY(const);
 /* line 1360: */
 /* line 1361: */
{ 
 /* line 1362: */
YJGASIM = (&((&XJGASIM_c)->Constant)) ;
(*YJGASIM) = I;
 /* line 1363: */
 /* line 1364: */
ZJGASIM = XJGASIM_c;
} 
A_PROC_EXIT(const);
*ReturnedValue = (ZJGASIM);
return;
} 
#undef NL

A68_VOID  CKGASIM_dump(A68_396  S, A68_VC  Indent)
{ 
A68_268  DKGASIM;  /* collateral clause result */
A68_52  GKGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  HKGASIM;  /* YIELD */
A68_52  IKGASIM;  /* OPERATORS - mode -> union mode */
A68_56  JKGASIM;  /* procedure value */
A68_85  KKGASIM;  /* OPERATORS - istruct -> vector */
A68_VC  LKGASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 1369: */
 /* line 1370: */
{ 
HKGASIM = A_VC_PLUS(Indent,FKGASIM) ;
DKGASIM.data[0] = A_UNITE(GKGASIM,mode7,7,HKGASIM);
JKGASIM.fn.fn_global = LRAAOSL_newline;
JKGASIM.nonlocals = A68_NIL;
DKGASIM.data[1] = A_UNITE(IKGASIM,mode12,12,JKGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KKGASIM,DKGASIM,2,A68_52 ));
 /* line 1371: */
 /* line 1372: */
RDFASIM_dump(S.Constant, A_VC_PLUS(Indent,A_HVEC(LKGASIM,' ',A68_CHAR )));
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  OKGASIM_sumconst(A68_INT  I, A68_BOOL  Callinstf, A68_399  *ReturnedValue)
{ 
A68_399  PKGASIM;  /* collateral clause result */
A68_399  QKGASIM;  /* clause result */
A_PROC_ENTRY(sumconst);
 /* line 1385: */
PKGASIM.Sumconstant = I;
PKGASIM.Callinst_flag = Callinstf;
QKGASIM = PKGASIM;
A_PROC_EXIT(sumconst);
*ReturnedValue = (QKGASIM);
return;
} 
#undef NL

A68_VOID  TKGASIM_dump(A68_399  S, A68_VC  Indent)
{ 
A68_268  UKGASIM;  /* collateral clause result */
A68_52  XKGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  YKGASIM;  /* YIELD */
A68_52  ZKGASIM;  /* OPERATORS - mode -> union mode */
A68_56  ALGASIM;  /* procedure value */
A68_85  BLGASIM;  /* OPERATORS - istruct -> vector */
A68_VC  CLGASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_305  DLGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ELGASIM;  /* YIELD */
A68_266  FLGASIM;  /* collateral clause result */
A68_52  GLGASIM;  /* OPERATORS - mode -> union mode */
A68_52  HLGASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  ILGASIM;  /* YIELD */
A68_52  JLGASIM;  /* OPERATORS - mode -> union mode */
A68_56  KLGASIM;  /* procedure value */
A68_85  LLGASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 1390: */
 /* line 1391: */
{ 
YKGASIM = A_VC_PLUS(Indent,WKGASIM) ;
UKGASIM.data[0] = A_UNITE(XKGASIM,mode7,7,YKGASIM);
ALGASIM.fn.fn_global = LRAAOSL_newline;
ALGASIM.nonlocals = A68_NIL;
UKGASIM.data[1] = A_UNITE(ZKGASIM,mode12,12,ALGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BLGASIM,UKGASIM,2,A68_52 ));
 /* line 1392: */
ELGASIM = S.Sumconstant ;
SNFASIM_dump(A_UNITE(DLGASIM,mode1,1,ELGASIM), A_VC_PLUS(Indent,A_HVEC(CLGASIM,' ',A68_CHAR )));
 /* line 1393: */
FLGASIM.data[0] = A_UNITE(GLGASIM,mode7,7,Indent);
ILGASIM = S.Callinst_flag ;
FLGASIM.data[1] = A_UNITE(HLGASIM,mode8,8,ILGASIM);
KLGASIM.fn.fn_global = LRAAOSL_newline;
KLGASIM.nonlocals = A68_NIL;
FLGASIM.data[2] = A_UNITE(JLGASIM,mode12,12,KLGASIM);
 /* line 1394: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(LLGASIM,FLGASIM,3,A68_52 ));
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  NLGASIM_indirected(A68_BOOL  Callinstf, A68_402  *ReturnedValue)
{ 
A68_402  OLGASIM_i;
A68_BOOL * PLGASIM;  /* YIELD */
A68_402  QLGASIM;  /* clause result */
A_PROC_ENTRY(indirected);
 /* line 1407: */
 /* line 1408: */
{ 
 /* line 1409: */
PLGASIM = (&((&OLGASIM_i)->Indcallinst_flag)) ;
(*PLGASIM) = Callinstf;
 /* line 1410: */
 /* line 1411: */
QLGASIM = OLGASIM_i;
} 
A_PROC_EXIT(indirected);
*ReturnedValue = (QLGASIM);
return;
} 
#undef NL

A68_VOID  TLGASIM_dump(A68_402  S, A68_VC  Indent)
{ 
A68_266  ULGASIM;  /* collateral clause result */
A68_52  XLGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  YLGASIM;  /* YIELD */
A68_52  ZLGASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  AMGASIM;  /* YIELD */
A68_52  BMGASIM;  /* OPERATORS - mode -> union mode */
A68_56  CMGASIM;  /* procedure value */
A68_85  DMGASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 1416: */
 /* line 1417: */
YLGASIM = A_VC_PLUS(Indent,WLGASIM) ;
ULGASIM.data[0] = A_UNITE(XLGASIM,mode7,7,YLGASIM);
AMGASIM = S.Indcallinst_flag ;
ULGASIM.data[1] = A_UNITE(ZLGASIM,mode8,8,AMGASIM);
CMGASIM.fn.fn_global = LRAAOSL_newline;
CMGASIM.nonlocals = A68_NIL;
ULGASIM.data[2] = A_UNITE(BMGASIM,mode12,12,CMGASIM);
 /* line 1418: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DMGASIM,ULGASIM,3,A68_52 ));
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  FMGASIM_condition(A68_BITS  I, A68_405  *ReturnedValue)
{ 
A68_405  GMGASIM_c;
A68_BITS * HMGASIM;  /* YIELD */
A68_405  IMGASIM;  /* clause result */
A_PROC_ENTRY(condition);
 /* line 1434: */
 /* line 1435: */
{ 
 /* line 1436: */
HMGASIM = (&((&GMGASIM_c)->Condition)) ;
(*HMGASIM) = I;
 /* line 1437: */
 /* line 1438: */
IMGASIM = GMGASIM_c;
} 
A_PROC_EXIT(condition);
*ReturnedValue = (IMGASIM);
return;
} 
#undef NL

A68_VOID  LMGASIM_dump(A68_405  C, A68_VC  Indent)
{ 
A68_266  MMGASIM;  /* collateral clause result */
A68_52  PMGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  QMGASIM;  /* YIELD */
A68_52  RMGASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  SMGASIM;  /* YIELD */
A68_52  TMGASIM;  /* OPERATORS - mode -> union mode */
A68_56  UMGASIM;  /* procedure value */
A68_85  VMGASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 1443: */
QMGASIM = A_VC_PLUS(Indent,OMGASIM) ;
MMGASIM.data[0] = A_UNITE(PMGASIM,mode7,7,QMGASIM);
SMGASIM = C.Condition ;
MMGASIM.data[1] = A_UNITE(RMGASIM,mode3,3,SMGASIM);
UMGASIM.fn.fn_global = LRAAOSL_newline;
UMGASIM.nonlocals = A68_NIL;
MMGASIM.data[2] = A_UNITE(TMGASIM,mode12,12,UMGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VMGASIM,MMGASIM,3,A68_52 ));
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  YMGASIM_dump(A68_408  R, A68_VC  Indent)
{ 
A68_408  ZMGASIM;  /* united object - for case conformity */
A68_389  ANGASIM_s;
A68_393  BNGASIM_s;
A68_396  CNGASIM_s;
A68_399  DNGASIM_s;
A68_402  ENGASIM_s;
A68_405  FNGASIM_s;
A_PROC_ENTRY(dump);
 /* line 1460: */
 /* line 1461: */
ZMGASIM = R ;
switch ( ZMGASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
ANGASIM_s = (ZMGASIM.data.mode1);
 /* line 1462: */
OIGASIM_dump(ANGASIM_s, Indent);
break;
case 2: /* STRUCT(INT,BOOL)  */
BNGASIM_s = (ZMGASIM.data.mode2);
 /* line 1463: */
GJGASIM_dump(BNGASIM_s, Indent);
break;
case 3: /* STRUCT(REF MODE26)  */
CNGASIM_s = (ZMGASIM.data.mode3);
 /* line 1464: */
CKGASIM_dump(CNGASIM_s, Indent);
break;
case 4: /* STRUCT(INT,BOOL)  */
DNGASIM_s = (ZMGASIM.data.mode4);
 /* line 1465: */
TKGASIM_dump(DNGASIM_s, Indent);
break;
case 5: /* STRUCT(BOOL)  */
ENGASIM_s = (ZMGASIM.data.mode5);
 /* line 1466: */
TLGASIM_dump(ENGASIM_s, Indent);
break;
case 6: /* STRUCT(BITS)  */
FNGASIM_s = (ZMGASIM.data.mode6);
 /* line 1467: */
LMGASIM_dump(FNGASIM_s, Indent);
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  INGASIM_(A68_408  R, A68_408  S, A68_408  *ReturnedValue)
{ 
A68_408  JNGASIM;  /* united object - for case conformity */
A68_389  KNGASIM_rr;
A68_408  LNGASIM;  /* united object - for case conformity */
A68_396  MNGASIM_c;
A68_408  NNGASIM;  /* clause result */
A68_399  ONGASIM;  /* avoid structure result */
A68_408  PNGASIM;  /* OPERATORS - mode -> union mode */
A68_408  QNGASIM;  /* OPERATORS - mode -> union mode */
A68_396  RNGASIM_rc;
A68_408  SNGASIM;  /* united object - for case conformity */
A68_389  TNGASIM_sr;
A68_399  UNGASIM;  /* avoid structure result */
A68_408  VNGASIM;  /* OPERATORS - mode -> union mode */
A68_408  WNGASIM;  /* OPERATORS - mode -> union mode */
A68_396  XNGASIM_sc;
A68_INT  YNGASIM_total;
A68_408  ZNGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  AOGASIM;  /* avoid structure result */
A68_396  BOGASIM;  /* avoid structure result */
A68_408  COGASIM;  /* OPERATORS - mode -> union mode */
A68_399  DOGASIM_ssc;
A68_INT  EOGASIM_total;
A68_408  FOGASIM;  /* OPERATORS - mode -> union mode */
A68_399  GOGASIM;  /* avoid structure result */
A68_408  HOGASIM;  /* OPERATORS - mode -> union mode */
A68_408  IOGASIM;  /* OPERATORS - mode -> union mode */
A68_408  JOGASIM;  /* OPERATORS - mode -> union mode */
A68_399  KOGASIM_rsc;
A68_408  LOGASIM;  /* united object - for case conformity */
A68_396  MOGASIM_sc;
A68_INT  NOGASIM_total;
A68_408  OOGASIM;  /* OPERATORS - mode -> union mode */
A68_399  POGASIM;  /* avoid structure result */
A68_408  QOGASIM;  /* OPERATORS - mode -> union mode */
A68_408  ROGASIM;  /* OPERATORS - mode -> union mode */
A68_408  SOGASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(+);
 /* line 1472: */
 /* line 1473: */
JNGASIM = R ;
switch ( JNGASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
KNGASIM_rr = (JNGASIM.data.mode1);
 /* line 1474: */
 /* line 1475: */
LNGASIM = S ;
switch ( LNGASIM.mode )
{ 
case 3: /* STRUCT(REF MODE26)  */
MNGASIM_c = (LNGASIM.data.mode3);
 /* line 1476: */
 /* line 1477: */
OKGASIM_sumconst( FFFASIM_integer(MNGASIM_c.Constant), KNGASIM_rr.Ircallinst_flag, &ONGASIM );
NNGASIM = A_UNITE(PNGASIM,mode4,4,ONGASIM);
break;
default: 
 /* line 1478: */
NNGASIM = A_EMPTY(QNGASIM,7);
break;
} 
break;
case 3: /* STRUCT(REF MODE26)  */
RNGASIM_rc = (JNGASIM.data.mode3);
 /* line 1479: */
 /* line 1480: */
SNGASIM = S ;
switch ( SNGASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
TNGASIM_sr = (SNGASIM.data.mode1);
 /* line 1481: */
 /* line 1482: */
if ( TNGASIM_sr.Ircallinst_flag )
{ 
 /* line 1483: */
 /* line 1485: */
OKGASIM_sumconst( FFFASIM_integer(RNGASIM_rc.Constant), A68_TRUE, &UNGASIM );
NNGASIM = A_UNITE(VNGASIM,mode4,4,UNGASIM);
} 
else
{ 
 /* line 1486: */
NNGASIM = A_EMPTY(WNGASIM,7);
} 
break;
case 3: /* STRUCT(REF MODE26)  */
XNGASIM_sc = (SNGASIM.data.mode3);
 /* line 1487: */
 /* line 1488: */
{ 
YNGASIM_total = (FFFASIM_integer(RNGASIM_rc.Constant)+FFFASIM_integer(XNGASIM_sc.Constant));
 /* line 1489: */
 /* line 1491: */
if ( ((YNGASIM_total>JQDASIM_maximm13)|(YNGASIM_total<KQDASIM_minimm13)) )
{ 
 /* line 1492: */
NNGASIM = A_EMPTY(ZNGASIM,7);
} 
else
{ 
 /* line 1493: */
 /* line 1494: */
 /* line 1495: */
YCFASIM_word( YNGASIM_total, &AOGASIM );
WJGASIM_const( AOGASIM, &BOGASIM );
NNGASIM = A_UNITE(COGASIM,mode3,3,BOGASIM);
} 
} 
break;
case 4: /* STRUCT(INT,BOOL)  */
DOGASIM_ssc = (SNGASIM.data.mode4);
 /* line 1496: */
 /* line 1497: */
if ( DOGASIM_ssc.Callinst_flag )
{ 
EOGASIM_total = (FFFASIM_integer(RNGASIM_rc.Constant)+DOGASIM_ssc.Sumconstant);
 /* line 1498: */
 /* line 1500: */
if ( ((EOGASIM_total>JQDASIM_maximm13)|(EOGASIM_total<KQDASIM_minimm13)) )
{ 
 /* line 1501: */
NNGASIM = A_EMPTY(FOGASIM,7);
} 
else
{ 
 /* line 1502: */
 /* line 1503: */
OKGASIM_sumconst( EOGASIM_total, A68_TRUE, &GOGASIM );
NNGASIM = A_UNITE(HOGASIM,mode4,4,GOGASIM);
} 
} 
else
{ 
 /* line 1504: */
NNGASIM = A_EMPTY(IOGASIM,7);
} 
break;
default: 
 /* line 1505: */
NNGASIM = A_EMPTY(JOGASIM,7);
break;
} 
break;
case 4: /* STRUCT(INT,BOOL)  */
KOGASIM_rsc = (JNGASIM.data.mode4);
 /* line 1506: */
 /* line 1507: */
LOGASIM = S ;
switch ( LOGASIM.mode )
{ 
case 3: /* STRUCT(REF MODE26)  */
MOGASIM_sc = (LOGASIM.data.mode3);
 /* line 1508: */
 /* line 1509: */
{ 
NOGASIM_total = (KOGASIM_rsc.Sumconstant+FFFASIM_integer(MOGASIM_sc.Constant));
 /* line 1510: */
 /* line 1512: */
if ( ((NOGASIM_total>JQDASIM_maximm13)|(NOGASIM_total<KQDASIM_minimm13)) )
{ 
 /* line 1513: */
NNGASIM = A_EMPTY(OOGASIM,7);
} 
else
{ 
 /* line 1514: */
 /* line 1515: */
 /* line 1516: */
OKGASIM_sumconst( NOGASIM_total, KOGASIM_rsc.Callinst_flag, &POGASIM );
NNGASIM = A_UNITE(QOGASIM,mode4,4,POGASIM);
} 
} 
break;
default: 
 /* line 1517: */
 /* line 1519: */
NNGASIM = A_EMPTY(ROGASIM,7);
break;
} 
break;
default: 
NNGASIM = A_EMPTY(SOGASIM,7);
break;
} 
A_PROC_EXIT(+);
*ReturnedValue = (NNGASIM);
return;
} 
#undef NL

A68_VOID  UOGASIM_not(A68_408  S, A68_408  *ReturnedValue)
{ 
A68_408  VOGASIM;  /* united object - for case conformity */
A68_405  WOGASIM_cd;
A68_408  XOGASIM;  /* clause result */
A68_405  YOGASIM;  /* avoid structure result */
A68_408  ZOGASIM;  /* OPERATORS - mode -> union mode */
A68_408  APGASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(not);
 /* line 1524: */
 /* line 1525: */
VOGASIM = S ;
switch ( VOGASIM.mode )
{ 
case 6: /* STRUCT(BITS)  */
WOGASIM_cd = (VOGASIM.data.mode6);
 /* line 1526: */
 /* line 1527: */
 /* line 1529: */
FMGASIM_condition( MXDASIM_invcondition(WOGASIM_cd.Condition), &YOGASIM );
XOGASIM = A_UNITE(ZOGASIM,mode6,6,YOGASIM);
break;
default: 
XOGASIM = A_EMPTY(APGASIM,7);
break;
} 
A_PROC_EXIT(not);
*ReturnedValue = (XOGASIM);
return;
} 
#undef NL

A68_BOOL  CPGASIM_allocregisterinuse(A68_408  S)
{ 
A68_408  DPGASIM;  /* united object - for case conformity */
A68_BOOL  EPGASIM;  /* clause result */
A68_399  FPGASIM_sc;
A68_402  GPGASIM_i;
A68_389  JPGASIM_ir;
A_PROC_ENTRY(allocregisterinuse);
 /* line 1536: */
 /* line 1537: */
DPGASIM = S ;
switch ( DPGASIM.mode )
{ 
case 2: /* STRUCT(INT,BOOL)  */
 /* line 1538: */
EPGASIM = A68_FALSE;
break;
case 3: /* STRUCT(REF MODE26)  */
 /* line 1539: */
EPGASIM = A68_FALSE;
break;
case 4: /* STRUCT(INT,BOOL)  */
FPGASIM_sc = (DPGASIM.data.mode4);
 /* line 1540: */
EPGASIM = !FPGASIM_sc.Callinst_flag;
break;
case 5: /* STRUCT(BOOL)  */
GPGASIM_i = (DPGASIM.data.mode5);
 /* line 1541: */
EPGASIM = !GPGASIM_i.Indcallinst_flag;
break;
case 6: /* STRUCT(BITS)  */
 /* line 1542: */
 /* line 1543: */
{ 
ZIDASIM_simfault(IPGASIM);
 /* line 1544: */
 /* line 1545: */
 /* line 1546: */
EPGASIM = A68_FALSE;
} 
break;
case 1: /* STRUCT(BOOL)  */
JPGASIM_ir = (DPGASIM.data.mode1);
 /* line 1547: */
EPGASIM = !JPGASIM_ir.Ircallinst_flag;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(allocregisterinuse);
return( EPGASIM );
} 
#undef NL

A68_BOOL  LPGASIM_callinstpointerinuse(A68_408  S)
{ 
A68_408  MPGASIM;  /* united object - for case conformity */
A68_BOOL  NPGASIM;  /* clause result */
A68_399  OPGASIM_sc;
A68_402  PPGASIM_i;
A68_389  SPGASIM_ir;
A_PROC_ENTRY(callinstpointerinuse);
 /* line 1554: */
 /* line 1555: */
MPGASIM = S ;
switch ( MPGASIM.mode )
{ 
case 2: /* STRUCT(INT,BOOL)  */
 /* line 1556: */
NPGASIM = A68_FALSE;
break;
case 3: /* STRUCT(REF MODE26)  */
 /* line 1557: */
NPGASIM = A68_FALSE;
break;
case 4: /* STRUCT(INT,BOOL)  */
OPGASIM_sc = (MPGASIM.data.mode4);
 /* line 1558: */
NPGASIM = OPGASIM_sc.Callinst_flag;
break;
case 5: /* STRUCT(BOOL)  */
PPGASIM_i = (MPGASIM.data.mode5);
 /* line 1559: */
NPGASIM = PPGASIM_i.Indcallinst_flag;
break;
case 6: /* STRUCT(BITS)  */
 /* line 1560: */
 /* line 1561: */
{ 
ZIDASIM_simfault(RPGASIM);
 /* line 1562: */
 /* line 1563: */
 /* line 1564: */
NPGASIM = A68_FALSE;
} 
break;
case 1: /* STRUCT(BOOL)  */
SPGASIM_ir = (MPGASIM.data.mode1);
 /* line 1565: */
NPGASIM = SPGASIM_ir.Ircallinst_flag;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(callinstpointerinuse);
return( NPGASIM );
} 
#undef NL

A68_VOID  YPGASIM_dump(A68_415  S, A68_VC  Indent)
{ 
A68_414  ZPGASIM;  /* united object - for case conformity */
A68_268  AQGASIM;  /* collateral clause result */
A68_52  DQGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  EQGASIM;  /* YIELD */
A68_52  FQGASIM;  /* OPERATORS - mode -> union mode */
A68_56  GQGASIM;  /* procedure value */
A68_85  HQGASIM;  /* OPERATORS - istruct -> vector */
A68_VC  IQGASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_266  JQGASIM;  /* collateral clause result */
A68_52  KQGASIM;  /* OPERATORS - mode -> union mode */
A68_52  LQGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  MQGASIM;  /* YIELD */
A68_52  NQGASIM;  /* OPERATORS - mode -> union mode */
A68_56  OQGASIM;  /* procedure value */
A68_85  PQGASIM;  /* OPERATORS - istruct -> vector */
A68_268  QQGASIM;  /* collateral clause result */
A68_52  TQGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  UQGASIM;  /* YIELD */
A68_52  VQGASIM;  /* OPERATORS - mode -> union mode */
A68_56  WQGASIM;  /* procedure value */
A68_85  XQGASIM;  /* OPERATORS - istruct -> vector */
A68_VC  YQGASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_266  ZQGASIM;  /* collateral clause result */
A68_52  ARGASIM;  /* OPERATORS - mode -> union mode */
A68_52  BRGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  CRGASIM;  /* YIELD */
A68_52  DRGASIM;  /* OPERATORS - mode -> union mode */
A68_56  ERGASIM;  /* procedure value */
A68_85  FRGASIM;  /* OPERATORS - istruct -> vector */
A68_268  GRGASIM;  /* collateral clause result */
A68_52  JRGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  KRGASIM;  /* YIELD */
A68_52  LRGASIM;  /* OPERATORS - mode -> union mode */
A68_56  MRGASIM;  /* procedure value */
A68_85  NRGASIM;  /* OPERATORS - istruct -> vector */
A68_VC  ORGASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 1601: */
 /* line 1602: */
ZPGASIM = S.Location_type ;
switch ( ZPGASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1603: */
 /* line 1604: */
{ 
EQGASIM = A_VC_PLUS(Indent,CQGASIM) ;
AQGASIM.data[0] = A_UNITE(DQGASIM,mode7,7,EQGASIM);
GQGASIM.fn.fn_global = LRAAOSL_newline;
GQGASIM.nonlocals = A68_NIL;
AQGASIM.data[1] = A_UNITE(FQGASIM,mode12,12,GQGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HQGASIM,AQGASIM,2,A68_52 ));
 /* line 1605: */
YMGASIM_dump(S.Symbolic_state, A_VC_PLUS(Indent,A_HVEC(IQGASIM,' ',A68_CHAR )));
 /* line 1606: */
JQGASIM.data[0] = A_UNITE(KQGASIM,mode7,7,Indent);
MQGASIM = S.Bit_length ;
JQGASIM.data[1] = A_UNITE(LQGASIM,mode1,1,MQGASIM);
OQGASIM.fn.fn_global = LRAAOSL_newline;
OQGASIM.nonlocals = A68_NIL;
JQGASIM.data[2] = A_UNITE(NQGASIM,mode12,12,OQGASIM);
 /* line 1607: */
 /* line 1608: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(PQGASIM,JQGASIM,3,A68_52 ));
} 
break;
case 2: /* INT */
 /* line 1609: */
 /* line 1610: */
{ 
UQGASIM = A_VC_PLUS(Indent,SQGASIM) ;
QQGASIM.data[0] = A_UNITE(TQGASIM,mode7,7,UQGASIM);
WQGASIM.fn.fn_global = LRAAOSL_newline;
WQGASIM.nonlocals = A68_NIL;
QQGASIM.data[1] = A_UNITE(VQGASIM,mode12,12,WQGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(XQGASIM,QQGASIM,2,A68_52 ));
 /* line 1611: */
YMGASIM_dump(S.Symbolic_state, A_VC_PLUS(Indent,A_HVEC(YQGASIM,' ',A68_CHAR )));
 /* line 1612: */
ZQGASIM.data[0] = A_UNITE(ARGASIM,mode7,7,Indent);
CRGASIM = S.Bit_length ;
ZQGASIM.data[1] = A_UNITE(BRGASIM,mode1,1,CRGASIM);
ERGASIM.fn.fn_global = LRAAOSL_newline;
ERGASIM.nonlocals = A68_NIL;
ZQGASIM.data[2] = A_UNITE(DRGASIM,mode12,12,ERGASIM);
 /* line 1613: */
 /* line 1614: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(FRGASIM,ZQGASIM,3,A68_52 ));
} 
break;
case 3: /* CHAR */
 /* line 1615: */
 /* line 1616: */
{ 
KRGASIM = A_VC_PLUS(Indent,IRGASIM) ;
GRGASIM.data[0] = A_UNITE(JRGASIM,mode7,7,KRGASIM);
MRGASIM.fn.fn_global = LRAAOSL_newline;
MRGASIM.nonlocals = A68_NIL;
GRGASIM.data[1] = A_UNITE(LRGASIM,mode12,12,MRGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NRGASIM,GRGASIM,2,A68_52 ));
 /* line 1617: */
 /* line 1618: */
 /* line 1619: */
YMGASIM_dump(S.Symbolic_state, A_VC_PLUS(Indent,A_HVEC(ORGASIM,' ',A68_CHAR )));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  PRGASIM_locationstack(A68_418  *ReturnedValue)
{ 
A68_418  QRGASIM;  /* collateral clause result */
A68_419  VRGASIM;  /* avoid structure result */
A68_418  WRGASIM;  /* clause result */
A_PROC_ENTRY(locationstack);
SRGASIM_generator( A68_FALSE, &VRGASIM );
QRGASIM.Stack_locations = VRGASIM;
QRGASIM.Top = 0;
WRGASIM = QRGASIM;
A_PROC_EXIT(locationstack);
*ReturnedValue = (WRGASIM);
return;
} 
#undef NL

A68_VOID  ZRGASIM_dump(A68_418  S, A68_VC  Indent)
{ 
A68_268  ASGASIM;  /* collateral clause result */
A68_52  DSGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  ESGASIM;  /* YIELD */
A68_52  FSGASIM;  /* OPERATORS - mode -> union mode */
A68_56  GSGASIM;  /* procedure value */
A68_85  HSGASIM;  /* OPERATORS - istruct -> vector */
A68_266  ISGASIM;  /* collateral clause result */
A68_52  LSGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  MSGASIM;  /* YIELD */
A68_52  NSGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  OSGASIM;  /* YIELD */
A68_52  PSGASIM;  /* OPERATORS - mode -> union mode */
A68_56  QSGASIM;  /* procedure value */
A68_85  RSGASIM;  /* OPERATORS - istruct -> vector */
A68_INT  SSGASIM_i;
A68_INT  TSGASIM;  /* to part of loop */
A68_VC  USGASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_419  VSGASIM;  /* OPERATORS - simple index */
A_PROC_ENTRY(dump);
 /* line 1638: */
 /* line 1639: */
{ 
ESGASIM = A_VC_PLUS(Indent,CSGASIM) ;
ASGASIM.data[0] = A_UNITE(DSGASIM,mode7,7,ESGASIM);
GSGASIM.fn.fn_global = LRAAOSL_newline;
GSGASIM.nonlocals = A68_NIL;
ASGASIM.data[1] = A_UNITE(FSGASIM,mode12,12,GSGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HSGASIM,ASGASIM,2,A68_52 ));
 /* line 1640: */
MSGASIM = A_VC_PLUS(Indent,KSGASIM) ;
ISGASIM.data[0] = A_UNITE(LSGASIM,mode7,7,MSGASIM);
OSGASIM = S.Top ;
ISGASIM.data[1] = A_UNITE(NSGASIM,mode1,1,OSGASIM);
QSGASIM.fn.fn_global = LRAAOSL_newline;
QSGASIM.nonlocals = A68_NIL;
ISGASIM.data[2] = A_UNITE(PSGASIM,mode12,12,QSGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RSGASIM,ISGASIM,3,A68_52 ));
 /* line 1641: */
TSGASIM = S.Top;
for ( SSGASIM_i = 1;
SSGASIM_i <= TSGASIM;
SSGASIM_i += 1 )
{ 
 /* line 1642: */
 /* line 1643: */
VSGASIM = S.Stack_locations ;
YPGASIM_dump((*(&A_VINDEX(VSGASIM,SSGASIM_i))), A_VC_PLUS(Indent,A_HVEC(USGASIM,' ',A68_CHAR )));
}
 /* line 1644: */
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  XSGASIM_new(A68_418 * S, A68_418  *ReturnedValue)
{ 
A68_418  YSGASIM;  /* collateral clause result */
A68_421  ATGASIM_generator;   /* proc value of non-global proc */
A68_419  FTGASIM;  /* avoid structure result */
A68_419  GTGASIM;  /* OPERATORS - assign op */
A68_418  HTGASIM;  /* clause result */
A_PROC_ENTRY(new);
 /* line 1649: */
A_CLOSURE( ATGASIM_generator, BTGASIM_generator, CTGASIM_generator );
(( CTGASIM_generator * ) ( ATGASIM_generator.nonlocals )) -> S = S;
 /* line 1650: */
A_CALLPROC(ATGASIM_generator,(A68_FALSE, &FTGASIM),(A68_FALSE, &FTGASIM,(ATGASIM_generator).nonlocals));
GTGASIM = (*(&(S->Stack_locations))) ;
A_VASSIGN2(GTGASIM,FTGASIM,A68_415 ) ;
YSGASIM.Stack_locations = FTGASIM;
YSGASIM.Top = (*(&(S->Top)));
HTGASIM = YSGASIM;
A_PROC_EXIT(new);
*ReturnedValue = (HTGASIM);
return;
} 
#undef NL

A68_VOID  JTGASIM_clear(A68_418 * S)
{ 
A68_INT * KTGASIM;  /* YIELD */
A_PROC_ENTRY(clear);
 /* line 1656: */
KTGASIM = (&(S->Top)) ;
(*KTGASIM) = 0;
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_INT  MTGASIM_length(A68_418 * S)
{ 
A68_INT  NTGASIM;  /* clause result */
A_PROC_ENTRY(length);
 /* line 1660: */
NTGASIM = (*(&(S->Top)));
A_PROC_EXIT(length);
return( NTGASIM );
} 
#undef NL

A68_VOID  PTGASIM_pop(A68_418 * S, A68_415  *ReturnedValue)
{ 
A68_INT * QTGASIM;  /* YIELD */
A68_415  RTGASIM;  /* clause result */
A68_419  STGASIM;  /* OPERATORS - simple index */
A68_INT  TTGASIM;  /* YIELD */
A_PROC_ENTRY(pop);
 /* line 1666: */
 /* line 1667: */
{ 
QTGASIM = (&(S->Top)) ;
(*QTGASIM)-=1;
 /* line 1668: */
 /* line 1669: */
STGASIM = (*(&(S->Stack_locations))) ;
TTGASIM = ((*(&(S->Top)))+1) ;
RTGASIM = (*(&A_VINDEX(STGASIM,TTGASIM)));
} 
A_PROC_EXIT(pop);
*ReturnedValue = (RTGASIM);
return;
} 
#undef NL

A68_VOID  WTGASIM_push(A68_418 * S, A68_415  Loc)
{ 
A68_421  YTGASIM_generator;   /* proc value of non-global proc */
A68_419  DUGASIM;  /* avoid structure result */
A68_419  EUGASIM_newlocs;
A68_419  FUGASIM;  /* OPERATORS - trim index */
A68_419  GUGASIM;  /* YIELD */
A68_419  HUGASIM;  /* OPERATORS - assign op */
A68_419 * IUGASIM;  /* YIELD */
A68_INT * JUGASIM;  /* YIELD */
A68_419  KUGASIM;  /* OPERATORS - simple index */
A68_INT  LUGASIM;  /* YIELD */
A68_415 * MUGASIM;  /* YIELD */
A_PROC_ENTRY(push);
 /* line 1675: */
 /* line 1676: */
{ 
 /* line 1677: */
if ( ((*(&(S->Top)))==(*(&(S->Stack_locations))).upb) )
{ 
A_CLOSURE( YTGASIM_generator, ZTGASIM_generator, AUGASIM_generator );
(( AUGASIM_generator * ) ( YTGASIM_generator.nonlocals )) -> S = S;
A_CALLPROC(YTGASIM_generator,(A68_FALSE, &DUGASIM),(A68_FALSE, &DUGASIM,(YTGASIM_generator).nonlocals));
EUGASIM_newlocs = DUGASIM;
 /* line 1678: */
GUGASIM = A_VTRIM(FUGASIM,(EUGASIM_newlocs),A_VTSCRIPT(&(FUGASIM.upb),(EUGASIM_newlocs).upb,1,(*(&(S->Stack_locations))).upb)) ;
HUGASIM = (*(&(S->Stack_locations))) ;
A_VASSIGN2(HUGASIM,GUGASIM,A68_415 );
 /* line 1679: */
 /* line 1680: */
IUGASIM = (&(S->Stack_locations)) ;
(*IUGASIM) = EUGASIM_newlocs;
} 
 /* line 1682: */
JUGASIM = (&(S->Top)) ;
(*JUGASIM)+=1;
 /* line 1683: */
 /* line 1684: */
KUGASIM = (*(&(S->Stack_locations))) ;
LUGASIM = (*(&(S->Top))) ;
MUGASIM = (&A_VINDEX(KUGASIM,LUGASIM)) ;
(*MUGASIM) = Loc;
} 
A_PROC_EXIT(push);
return;
} 
#undef NL

A68_VOID  PUGASIM_get(A68_418 * S, A68_INT  O, A68_415  *ReturnedValue)
{ 
A68_415  QUGASIM;  /* clause result */
A68_419  RUGASIM;  /* OPERATORS - simple index */
A68_INT  SUGASIM;  /* YIELD */
A_PROC_ENTRY(get);
 /* line 1690: */
RUGASIM = (*(&(S->Stack_locations))) ;
SUGASIM = ((*(&(S->Top)))-O) ;
QUGASIM = (*(&A_VINDEX(RUGASIM,SUGASIM)));
A_PROC_EXIT(get);
*ReturnedValue = (QUGASIM);
return;
} 
#undef NL

A68_VOID  VUGASIM_att(A68_415  Lo, A68_INT  Nu, A68_429  *ReturnedValue)
{ 
A68_429  WUGASIM;  /* collateral clause result */
A68_429  XUGASIM;  /* clause result */
A_PROC_ENTRY(att);
 /* line 1696: */
WUGASIM.Loc = Lo;
WUGASIM.O = Nu;
XUGASIM = WUGASIM;
A_PROC_EXIT(att);
*ReturnedValue = (XUGASIM);
return;
} 
#undef NL

A68_VOID  AVGASIM_put(A68_418 * S, A68_429  Ip)
{ 
A68_419  BVGASIM;  /* OPERATORS - simple index */
A68_INT  CVGASIM;  /* YIELD */
A68_415 * DVGASIM;  /* YIELD */
A_PROC_ENTRY(put);
 /* line 1702: */
BVGASIM = (*(&(S->Stack_locations))) ;
CVGASIM = ((*(&(S->Top)))-Ip.O) ;
DVGASIM = (&A_VINDEX(BVGASIM,CVGASIM)) ;
(*DVGASIM) = Ip.Loc;
A_PROC_EXIT(put);
return;
} 
#undef NL

A68_BOOL  FVGASIM_cleared(A68_418 * S)
{ 
A68_BOOL  GVGASIM;  /* clause result */
A_PROC_ENTRY(cleared);
 /* line 1708: */
GVGASIM = ((*(&(S->Top)))==0);
A_PROC_EXIT(cleared);
return( GVGASIM );
} 
#undef NL

A68_VOID  JVGASIM_typeof(A68_418 * S, A68_INT  O, A68_414  *ReturnedValue)
{ 
A68_414  KVGASIM;  /* clause result */
A68_419  LVGASIM;  /* OPERATORS - simple index */
A68_INT  MVGASIM;  /* YIELD */
A_PROC_ENTRY(typeof);
 /* line 1714: */
LVGASIM = (*(&(S->Stack_locations))) ;
MVGASIM = ((*(&(S->Top)))-O) ;
KVGASIM = (*(&((&A_VINDEX(LVGASIM,MVGASIM))->Location_type)));
A_PROC_EXIT(typeof);
*ReturnedValue = (KVGASIM);
return;
} 
#undef NL

A68_VOID  PVGASIM_stateof(A68_418 * S, A68_INT  O, A68_408  *ReturnedValue)
{ 
A68_408  QVGASIM;  /* clause result */
A68_419  RVGASIM;  /* OPERATORS - simple index */
A68_INT  SVGASIM;  /* YIELD */
A_PROC_ENTRY(stateof);
 /* line 1720: */
RVGASIM = (*(&(S->Stack_locations))) ;
SVGASIM = ((*(&(S->Top)))-O) ;
QVGASIM = (*(&((&A_VINDEX(RVGASIM,SVGASIM))->Symbolic_state)));
A_PROC_EXIT(stateof);
*ReturnedValue = (QVGASIM);
return;
} 
#undef NL

A68_INT  VVGASIM_registerof(A68_418 * S, A68_INT  O)
{ 
A68_INT  WVGASIM;  /* clause result */
A68_419  XVGASIM;  /* OPERATORS - simple index */
A68_INT  YVGASIM;  /* YIELD */
A_PROC_ENTRY(registerof);
 /* line 1726: */
XVGASIM = (*(&(S->Stack_locations))) ;
YVGASIM = ((*(&(S->Top)))-O) ;
WVGASIM = (*(&((&A_VINDEX(XVGASIM,YVGASIM))->Alloc_register)));
A_PROC_EXIT(registerof);
return( WVGASIM );
} 
#undef NL

A68_INT  BWGASIM_sizeof(A68_418 * S, A68_INT  O)
{ 
A68_INT  CWGASIM;  /* clause result */
A68_419  DWGASIM;  /* OPERATORS - simple index */
A68_INT  EWGASIM;  /* YIELD */
A_PROC_ENTRY(sizeof);
 /* line 1732: */
DWGASIM = (*(&(S->Stack_locations))) ;
EWGASIM = ((*(&(S->Top)))-O) ;
CWGASIM = (*(&((&A_VINDEX(DWGASIM,EWGASIM))->Bit_length)));
A_PROC_EXIT(sizeof);
return( CWGASIM );
} 
#undef NL

A68_VOID  HWGASIM_given(A68_INT  Nu, A68_408  Sy, A68_436  *ReturnedValue)
{ 
A68_436  IWGASIM;  /* collateral clause result */
A68_436  JWGASIM;  /* clause result */
A_PROC_ENTRY(given);
 /* line 1739: */
IWGASIM.O = Nu;
IWGASIM.Ss = Sy;
JWGASIM = IWGASIM;
A_PROC_EXIT(given);
*ReturnedValue = (JWGASIM);
return;
} 
#undef NL
 /* line 1742: */

A68_VOID  MWGASIM_changestateof(A68_418 * S, A68_436  Ip)
{ 
A68_419  NWGASIM;  /* OPERATORS - simple index */
A68_INT  OWGASIM;  /* YIELD */
A68_408 * PWGASIM;  /* YIELD */
A_PROC_ENTRY(changestateof);
 /* line 1747: */
NWGASIM = (*(&(S->Stack_locations))) ;
OWGASIM = ((*(&(S->Top)))-Ip.O) ;
PWGASIM = (&((&A_VINDEX(NWGASIM,OWGASIM))->Symbolic_state)) ;
(*PWGASIM) = Ip.Ss;
A_PROC_EXIT(changestateof);
return;
} 
#undef NL

A68_VOID  SWGASIM_givenn(A68_INT  Nu, A68_INT  Bi, A68_439  *ReturnedValue)
{ 
A68_439  TWGASIM;  /* collateral clause result */
A68_439  UWGASIM;  /* clause result */
A_PROC_ENTRY(givenn);
 /* line 1753: */
TWGASIM.O = Nu;
TWGASIM.Bl = Bi;
UWGASIM = TWGASIM;
A_PROC_EXIT(givenn);
*ReturnedValue = (UWGASIM);
return;
} 
#undef NL

A68_VOID  XWGASIM_changesizeof(A68_418 * S, A68_439  Ip)
{ 
A68_419  YWGASIM;  /* OPERATORS - simple index */
A68_INT  ZWGASIM;  /* YIELD */
A68_INT * AXGASIM;  /* YIELD */
A_PROC_ENTRY(changesizeof);
 /* line 1760: */
YWGASIM = (*(&(S->Stack_locations))) ;
ZWGASIM = ((*(&(S->Top)))-Ip.O) ;
AXGASIM = (&((&A_VINDEX(YWGASIM,ZWGASIM))->Bit_length)) ;
(*AXGASIM) = Ip.Bl;
A_PROC_EXIT(changesizeof);
return;
} 
#undef NL

A68_VOID  DXGASIM_given(A68_INT  Nu, A68_INT  Op, A68_442  *ReturnedValue)
{ 
A68_442  EXGASIM;  /* collateral clause result */
A68_442  FXGASIM;  /* clause result */
A_PROC_ENTRY(given);
 /* line 1767: */
EXGASIM.O = Nu;
EXGASIM.R = Op;
FXGASIM = EXGASIM;
A_PROC_EXIT(given);
*ReturnedValue = (FXGASIM);
return;
} 
#undef NL
 /* line 1771: */

A68_VOID  IXGASIM_changeregisterof(A68_418 * S, A68_442  Ip)
{ 
A68_419  JXGASIM;  /* OPERATORS - simple index */
A68_INT  KXGASIM;  /* YIELD */
A68_INT * LXGASIM;  /* YIELD */
A_PROC_ENTRY(changeregisterof);
 /* line 1776: */
JXGASIM = (*(&(S->Stack_locations))) ;
KXGASIM = ((*(&(S->Top)))-Ip.O) ;
LXGASIM = (&((&A_VINDEX(JXGASIM,KXGASIM))->Alloc_register)) ;
(*LXGASIM) = Ip.R;
A_PROC_EXIT(changeregisterof);
return;
} 
#undef NL

A68_VOID  MXGASIM_sizerecorder(A68_445  *ReturnedValue)
{ 
A68_445  NXGASIM;  /* collateral clause result */
A68_445  OXGASIM;  /* clause result */
A_PROC_ENTRY(sizerecorder);
NXGASIM.Current_size = 0;
NXGASIM.Max_size = 0;
OXGASIM = NXGASIM;
A_PROC_EXIT(sizerecorder);
*ReturnedValue = (OXGASIM);
return;
} 
#undef NL

A68_VOID  RXGASIM_dump(A68_445  Sr, A68_VC  Indent)
{ 
A68_313  SXGASIM;  /* collateral clause result */
A68_52  VXGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  WXGASIM;  /* YIELD */
A68_52  XXGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  YXGASIM;  /* YIELD */
A68_52  ZXGASIM;  /* OPERATORS - mode -> union mode */
A68_INT  AYGASIM;  /* YIELD */
A68_52  BYGASIM;  /* OPERATORS - mode -> union mode */
A68_56  CYGASIM;  /* procedure value */
A68_85  DYGASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(dump);
 /* line 1797: */
WXGASIM = A_VC_PLUS(Indent,UXGASIM) ;
SXGASIM.data[0] = A_UNITE(VXGASIM,mode7,7,WXGASIM);
 /* line 1798: */
YXGASIM = Sr.Current_size ;
SXGASIM.data[1] = A_UNITE(XXGASIM,mode1,1,YXGASIM);
AYGASIM = Sr.Max_size ;
SXGASIM.data[2] = A_UNITE(ZXGASIM,mode1,1,AYGASIM);
CYGASIM.fn.fn_global = LRAAOSL_newline;
CYGASIM.nonlocals = A68_NIL;
SXGASIM.data[3] = A_UNITE(BYGASIM,mode12,12,CYGASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DYGASIM,SXGASIM,4,A68_52 ));
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  GYGASIM_save(A68_445 * X, A68_261  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 1803: */
 /* line 1805: */
{ 
JCFASIM_save((*(&(X->Current_size))), Ff);
 /* line 1806: */
 /* line 1808: */
JCFASIM_save((*(&(X->Max_size))), Ff);
} 
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  JYGASIM_restore(A68_445 * X, A68_263  Ff)
{ 
A_PROC_ENTRY(restore);
 /* line 1813: */
 /* line 1815: */
{ 
MCFASIM_restore((&(X->Current_size)), Ff);
 /* line 1816: */
 /* line 1818: */
MCFASIM_restore((&(X->Max_size)), Ff);
} 
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_INT  LYGASIM_maxsize(A68_445 * Sr)
{ 
A68_INT  MYGASIM;  /* clause result */
A_PROC_ENTRY(maxsize);
 /* line 1823: */
MYGASIM = (*(&(Sr->Max_size)));
A_PROC_EXIT(maxsize);
return( MYGASIM );
} 
#undef NL

A68_VOID  PYGASIM_plus(A68_445 * Sr, A68_INT  N)
{ 
A68_INT * QYGASIM;  /* YIELD */
A68_INT * RYGASIM;  /* YIELD */
A_PROC_ENTRY(plus);
 /* line 1828: */
 /* line 1829: */
{ 
QYGASIM = (&(Sr->Current_size)) ;
(*QYGASIM)+=N;
 /* line 1830: */
 /* line 1831: */
if ( ((*(&(Sr->Current_size)))>(*(&(Sr->Max_size)))) )
{ 
 /* line 1832: */
 /* line 1833: */
RYGASIM = (&(Sr->Max_size)) ;
(*RYGASIM) = (*(&(Sr->Current_size)));
} 
} 
A_PROC_EXIT(plus);
return;
} 
#undef NL

A68_VOID  UYGASIM_minus(A68_445 * Sr, A68_INT  N)
{ 
A68_INT * VYGASIM;  /* YIELD */
A_PROC_ENTRY(minus);
 /* line 1838: */
VYGASIM = (&(Sr->Current_size)) ;
(*VYGASIM)-=N;
A_PROC_EXIT(minus);
return;
} 
#undef NL

A68_VOID  XYGASIM_clear(A68_445 * Sr)
{ 
A68_INT * YYGASIM;  /* YIELD */
A_PROC_ENTRY(clear);
 /* line 1843: */
 /* line 1845: */
YYGASIM = (&(Sr->Current_size)) ;
(*YYGASIM) = 0;
A_PROC_EXIT(clear);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void AAFASIM(void)   /* initialise DECS kecodegenserversparc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kecodegenserversparc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kemassemsparc.m","./mfiles/kesave.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_259  FAFASIM;  /* collateral clause result */
A68_260  KAFASIM;  /* collateral clause result */
A68_32  LAFASIM;  /* avoid structure result */
A68_32  MAFASIM;  /* OPERATORS - istruct -> vector */
A68_32  NAFASIM;  /* OPERATORS - assign op */
A68_305  PNFASIM;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
KIDASIM();   /* USE kemassemsparc */
EFBASIM();   /* USE kesave */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kecodegenserversparc.a68";
A_config.translation_time = "Tue Apr  4 11:06:30 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ZZEASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:06:30 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kecodegenserversparc);
UEAALIB_a68config(LGAALIB_configinfo, EAFASIM);
 /* line 58: */
 /* line 65: */
 /* line 67: */
FAFASIM.Ws = 4;
FAFASIM.Up = A68_FALSE;
FAFASIM.Sizeunit = 4;
KAFASIM.data[0] = 1;
KAFASIM.data[1] = 2;
KAFASIM.data[2] = 4;
HAFASIM_generator( A68_FALSE, &LAFASIM );
NAFASIM = A_HISVEC(MAFASIM,KAFASIM,3,A68_INT ) ;
A_VASSIGN2(NAFASIM,LAFASIM,A68_INT ) ;
FAFASIM.Al = LAFASIM;
OAFASIM_am_version = FAFASIM;
 /* line 71: */
 /* line 75: */
 /* line 77: */
 /* line 84: */
 /* line 88: */
 /* line 90: */
 /* line 96: */
 /* line 108: */
 /* line 115: */
 /* line 123: */
 /* line 127: */
 /* line 129: */
 /* line 136: */
 /* line 144: */
 /* line 148: */
 /* line 150: */
 /* line 156: */
 /* line 170: */
 /* line 182: */
 /* line 186: */
 /* line 204: */
 /* line 210: */
 /* line 217: */
 /* line 225: */
 /* line 229: */
 /* line 231: */
ZFFASIM_nullstacknumber = (-1);
 /* line 234: */
 /* line 238: */
 /* line 240: */
AGFASIM_machineoffsetstack = (A68_278 *)A68_NIL;
 /* line 243: */
 /* line 256: */
 /* line 269: */
 /* line 275: */
 /* line 283: */
 /* line 290: */
 /* line 294: */
 /* line 298: */
 /* line 302: */
 /* line 306: */
 /* line 310: */
 /* line 312: */
 /* line 320: */
 /* line 324: */
 /* line 326: */
 /* line 329: */
 /* line 330: */
 /* line 335: */
 /* line 345: */
 /* line 353: */
 /* line 364: */
 /* line 377: */
 /* line 393: */
 /* line 403: */
 /* line 414: */
 /* line 420: */
 /* line 438: */
 /* line 444: */
 /* line 457: */
 /* line 461: */
 /* line 463: */
 /* line 469: */
 /* line 478: */
 /* line 488: */
 /* line 498: */
 /* line 504: */
 /* line 508: */
 /* line 510: */
ONFASIM_indirect = A_EMPTY(PNFASIM,3);
 /* line 512: */
 /* line 525: */
 /* line 529: */
 /* line 531: */
 /* line 536: */
 /* line 546: */
 /* line 556: */
 /* line 567: */
 /* line 571: */
 /* line 573: */
KQFASIM_labellist = (A68_316 *)A68_NIL;
 /* line 576: */
 /* line 589: */
 /* line 601: */
 /* line 613: */
 /* line 626: */
 /* line 642: */
 /* line 648: */
 /* line 654: */
 /* line 660: */
 /* line 664: */
 /* line 666: */
LSFASIM_machinelabelstack = (A68_326 *)A68_NIL;
 /* line 669: */
 /* line 682: */
 /* line 698: */
 /* line 704: */
 /* line 712: */
 /* line 719: */
 /* line 723: */
 /* line 725: */
 /* line 730: */
 /* line 741: */
 /* line 745: */
 /* line 747: */
KVFASIM_backpatchlist = (A68_337 *)A68_NIL;
 /* line 750: */
 /* line 763: */
 /* line 775: */
 /* line 779: */
 /* line 796: */
 /* line 819: */
 /* line 826: */
 /* line 830: */
 /* line 832: */
 /* line 833: */
 /* line 837: */
 /* line 843: */
 /* line 853: */
 /* line 864: */
 /* line 870: */
 /* line 872: */
GYFASIM_nilparams = (A68_349 *)A68_NIL;
 /* line 876: */
 /* line 887: */
 /* line 900: */
 /* line 914: */
 /* line 926: */
 /* line 930: */
 /* line 932: */
 /* line 936: */
 /* line 945: */
 /* line 956: */
 /* line 968: */
 /* line 972: */
 /* line 974: */
 /* line 978: */
 /* line 987: */
 /* line 991: */
 /* line 993: */
QAGASIM_speclist = (A68_363 *)A68_NIL;
 /* line 996: */
 /* line 1009: */
 /* line 1021: */
 /* line 1033: */
 /* line 1056: */
 /* line 1064: */
 /* line 1068: */
 /* line 1070: */
FCGASIM_parameterlist = (A68_370 *)A68_NIL;
 /* line 1073: */
 /* line 1086: */
 /* line 1098: */
 /* line 1110: */
 /* line 1123: */
 /* line 1141: */
 /* line 1154: */
 /* line 1161: */
 /* line 1168: */
 /* line 1179: */
 /* line 1182: */
LEGASIM_maxregister = (A68_INT )MXEASIM_i5;
 /* line 1183: */
MEGASIM_minregister = (A68_INT )VVEASIM_o0;
 /* line 1185: */
NEGASIM_tempreg1 = NVEASIM_g4;
 /* line 1186: */
OEGASIM_tempreg2 = PVEASIM_g5;
 /* line 1187: */
PEGASIM_tempreg3 = RVEASIM_g6;
 /* line 1188: */
QEGASIM_tempreg4 = TVEASIM_g7;
 /* line 1190: */
REGASIM_callinstpointer = LVEASIM_g3;
 /* line 1191: */
SEGASIM_dynamicpointer = JVEASIM_g2;
 /* line 1192: */
TEGASIM_globalpointer = HVEASIM_g1;
 /* line 1195: */
 /* line 1198: */
 /* line 1200: */
 /* line 1211: */
 /* line 1224: */
 /* line 1237: */
 /* line 1250: */
 /* line 1257: */
 /* line 1264: */
 /* line 1268: */
 /* line 1282: */
 /* line 1298: */
 /* line 1308: */
 /* line 1310: */
 /* line 1318: */
 /* line 1326: */
 /* line 1333: */
 /* line 1335: */
 /* line 1339: */
 /* line 1348: */
 /* line 1355: */
 /* line 1357: */
 /* line 1366: */
 /* line 1375: */
 /* line 1380: */
 /* line 1382: */
 /* line 1387: */
 /* line 1397: */
 /* line 1402: */
 /* line 1404: */
 /* line 1413: */
 /* line 1421: */
 /* line 1429: */
 /* line 1431: */
 /* line 1440: */
 /* line 1446: */
 /* line 1455: */
 /* line 1457: */
 /* line 1469: */
 /* line 1521: */
 /* line 1531: */
 /* line 1549: */
 /* line 1571: */
 /* line 1573: */
 /* line 1575: */
 /* line 1577: */
 /* line 1579: */
 /* line 1581: */
 /* line 1584: */
 /* line 1588: */
 /* line 1591: */
 /* line 1596: */
 /* line 1598: */
 /* line 1622: */
 /* line 1627: */
 /* line 1630: */
 /* line 1633: */
 /* line 1635: */
 /* line 1646: */
 /* line 1652: */
 /* line 1658: */
 /* line 1662: */
 /* line 1671: */
 /* line 1686: */
 /* line 1692: */
 /* line 1698: */
 /* line 1704: */
 /* line 1710: */
 /* line 1716: */
 /* line 1722: */
 /* line 1728: */
 /* line 1734: */
 /* line 1741: */
 /* line 1749: */
 /* line 1755: */
 /* line 1762: */
 /* line 1770: */
 /* line 1779: */
 /* line 1784: */
 /* line 1789: */
 /* line 1792: */
 /* line 1794: */
 /* line 1800: */
 /* line 1810: */
 /* line 1820: */
 /* line 1825: */
 /* line 1835: */
 /* line 1840: */
 /* line 2049: */
A_PROC_EXIT(DECS kecodegenserversparc);
} 
#undef NL
/* end of translation of ./a68files/kecodegenserversparc.a68 */
