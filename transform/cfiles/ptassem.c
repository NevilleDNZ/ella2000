
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
/* UNAME:MCGATRN */
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
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t93 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,REF MODE93,BITS)  */
A_VECTOR(struct A68t95 ,A68t94);
typedef struct A68t94  A68_94 ;    /* VECTOR [] MODE95 */
struct A68t95{
struct A68t92  Msgno;
A68_VC  Text;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE92,REF MODE26)  */
struct A68t93{
A68_VC  Name;
struct A68t94  Messages;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE94)  */

A_PROCEDURE(A68_VOID ,A68t96,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BOOL) MODE46 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t92 ,struct A68t46 ),(struct A68t92 ,struct A68t46 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE92,MODE46) VOID */
A_VECTOR(struct A68t100 ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] MODE100 */
struct A68t100{
A68_INT  Number;
A_PAD_INT(PAD_22)
A68_BITS  Class;
A_PAD_BITS(PAD_23)
A68_VC  Text;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t98{
A68_VC  Name;
struct A68t94  Messages;
A68_BOOL * Initialised;
struct A68t99  Setup;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE26,REF MODE94,REF BOOL,MODE99)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t98 *),(A68_BOOL ,struct A68t98 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE98 */
A_VECTOR(A68_VC ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t46 ,struct A68t102 *),(struct A68t46 ,struct A68t102 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE46) MODE102 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t102 ,struct A68t46 *),(struct A68t102 ,struct A68t46 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE102) MODE46 */
struct A68t106 ;

A_PROCEDURE(A68_BOOL ,A68t105,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE106) BOOL */
struct A68t106 { A68_INT mode; union {
struct A68t92  mode1;
struct A68t95  mode2;
} data; };
typedef struct A68t106  A68_106 ;    /* UNION(MODE92,MODE95)  */

A_PROCEDURE(A68_INT ,A68t107,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE92) INT */

A_PROCEDURE(A68_VOID ,A68t108,(A68_INT ,struct A68t98 ,struct A68t92 *),(A68_INT ,struct A68t98 ,struct A68t92 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT,MODE98) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t109,(struct A68t92 ,struct A68t98 ),(struct A68t92 ,struct A68t98 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE92,MODE98) BOOL */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t92 ,struct A68t46 ,struct A68t95 *),(struct A68t92 ,struct A68t46 ,struct A68t95 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE92,MODE46) MODE95 */
struct A68t111{
A68_BITS  Options;
A_PAD_BITS(PAD_24)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(BITS)  */
struct A68t113 ;

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE113) VOID */
struct A68t113 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t111  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t113  A68_113 ;    /* UNION(BOOL,MODE111,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t114,(void),(void *));
typedef struct A68t114  A68_114 ;    /* PROC BOOL */
struct A68t116 ;

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t116 *,A68_VC *),(struct A68t116 *,A68_VC *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE116) MODE26 */
struct A68t116{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_INT ,A68t117,(A68_INT ),(A68_INT ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t118,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t119,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 4 CHAR */
struct A68t120{
struct A68t121  Access;
A_PAD_ISTRUCT(A68_121 ,PAD_25)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(MODE121)  */

A_PROCEDURE(struct A68t116 *,A68t122,(A68_VC ,struct A68t120 ,struct A68t97 ),(A68_VC ,struct A68t120 ,struct A68t97 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE26,MODE120,MODE97) REF MODE116 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t116 *,struct A68t97 ),(struct A68t116 *,struct A68t97 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE116,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t116 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t116 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE116,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t116 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t116 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE116,MODE26,MODE97) MODE35 */
struct A68t126{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_26)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_27)
A68_SINT  Device;
A_PAD_SINT(PAD_28)
A68_SINT  Links;
A_PAD_SINT(PAD_29)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_30)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_31)
A68_LINT  Size;
A_PAD_LINT(PAD_32)
A68_LINT  Accessed;
A_PAD_LINT(PAD_33)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_34)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_35)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t128 ;

A_PROCEDURE(struct A68t126 *,A68t127,(struct A68t128 ,struct A68t97 ),(struct A68t128 ,struct A68t97 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE128,MODE97) REF MODE126 */
struct A68t128 { A68_INT mode; union {
struct A68t116 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t128  A68_128 ;    /* UNION(REF MODE116,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t116 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t116 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE116,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t116 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t116 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE116,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t116 *,struct A68t97 ,struct A68t35 *),(struct A68t116 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE116,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_INT ),(A68_INT ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t134,(void),(void *));
typedef struct A68t134  A68_134 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t135,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t136,(void),(void *));
typedef struct A68t136  A68_136 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t139{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t139 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t139 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,MODE26,MODE97) MODE139 */

A_PROCEDURE(A68_VOID ,A68t141,(A68_VC *),(A68_VC *,void *));
typedef struct A68t141  A68_141 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t143,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,MODE97) MODE46 */
struct A68t145 ;

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t145 ,struct A68t97 ),(struct A68t145 ,struct A68t97 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE145,MODE97) VOID */
A_VECTOR(struct A68t146 ,A68t145);
typedef struct A68t145  A68_145 ;    /* VECTOR [] MODE146 */
struct A68t146{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_36)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t147,(void),(void *));
typedef struct A68t147  A68_147 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t148,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t151,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REAL) REAL */
struct A68t152{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t152  A68_152 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t153,(A68_BOOL ,struct A68t152 *),(A68_BOOL ,struct A68t152 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(BOOL) MODE152 */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t152 ,A68_BOOL ),(struct A68t152 ,A68_BOOL ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE152,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t152 *),(struct A68t152 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC MODE152 */

A_PROCEDURE(A68_BOOL ,A68t156,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t158 ;
struct A68t159 ;

A_PROCEDURE(A68_VOID ,A68t157,(A68_VC ,struct A68t147 ,struct A68t158 ,struct A68t159 ),(A68_VC ,struct A68t147 ,struct A68t158 ,struct A68t159 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE26,MODE147,MODE158,MODE159) VOID */

A_PROCEDURE(A68_BOOL ,A68t158,(A68_VC ,struct A68t141 ),(A68_VC ,struct A68t141 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,MODE141) BOOL */

A_PROCEDURE(A68_BOOL ,A68t159,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t160 ,struct A68t97 ),(struct A68t160 ,struct A68t97 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE160,MODE97) VOID */
struct A68t162{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164) VOID */
struct A68t164 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t164  A68_164 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t165,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t166,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(BITS,BITS) BITS */
struct A68t168 ;

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t168 ,A68_INT ),(struct A68t168 ,A68_INT ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE168,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(CHAR) VOID */
struct A68t170 ;

A_PROCEDURE(A68_INT ,A68t169,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170) INT */

A_PROCEDURE(A68_CHAR ,A68t170,(void),(void *));
typedef struct A68t170  A68_170 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t171,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t172,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC *),(A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t174,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t175,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t176{
A68_VC  Id;
struct A68t176 * Rest;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE26,REF MODE176)  */
struct A68t177{
A68_INT  Int;
A_PAD_INT(PAD_37)
struct A68t177 * Rest;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(INT,REF MODE177)  */
struct A68t178 { A68_INT mode; union {
struct A68t179 * mode1;
struct A68t180 * mode2;
struct A68t181 * mode3;
struct A68t182 * mode4;
struct A68t183 * mode5;
} data; };
typedef struct A68t178  A68_178 ;    /* UNION(REF MODE179,REF MODE180,REF MODE181,REF MODE182,REF MODE183)  */
struct A68t179{
A68_INT  Attrno;
A_PAD_INT(PAD_38)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t180{
A68_VC  Classname;
struct A68t176 * Strings;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(REF MODE26,REF MODE176)  */
struct A68t181{
struct A68t178  Elem;
struct A68t181 * Rest;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE178,REF MODE181)  */
struct A68t182{
struct A68t178  Attr;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE178)  */
struct A68t183{
A68_INT  Attrnull;
A_PAD_INT(PAD_39)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT)  */
struct A68t184{
A68_INT  Sort;
A_PAD_INT(PAD_40)
A68_VC  Attrname;
struct A68t178  Value;
struct A68t185 * Usage;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,REF MODE26,MODE178,REF MODE185)  */
struct A68t185{
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
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t186{
struct A68t178  Tag;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(MODE178)  */
struct A68t187 { A68_INT mode; union {
struct A68t188 * mode1;
struct A68t189 * mode2;
struct A68t190 * mode3;
struct A68t191 * mode4;
struct A68t192 * mode5;
struct A68t193 * mode6;
struct A68t194 * mode7;
struct A68t195 * mode8;
struct A68t196 * mode9;
struct A68t197 * mode10;
} data; };
typedef struct A68t187  A68_187 ;    /* UNION(REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197)  */
struct A68t188{
A68_INT  Int;
A_PAD_INT(PAD_47)
A68_VC  Text;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t189{
A68_INT  Sort;
A_PAD_INT(PAD_48)
struct A68t187  Test;
struct A68t187  Standard;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,MODE187,MODE187)  */
struct A68t190{
A68_INT  Nameno;
A_PAD_INT(PAD_49)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT)  */
struct A68t191{
A68_INT  Intno;
A_PAD_INT(PAD_50)
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT)  */
struct A68t192{
struct A68t187  Left;
A68_INT  Sort;
A_PAD_INT(PAD_51)
struct A68t187  Right;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE187,INT,MODE187)  */
struct A68t193{
A68_INT  Sort;
A_PAD_INT(PAD_52)
struct A68t187  Right;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,MODE187)  */
struct A68t194{
struct A68t187  Cond;
struct A68t187  True;
struct A68t187  False;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(MODE187,MODE187,MODE187)  */
struct A68t195{
struct A68t187  Formula;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE187)  */
struct A68t196{
A68_INT  Macparno;
A_PAD_INT(PAD_53)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT)  */
struct A68t197{
A68_INT  Fnull;
A_PAD_INT(PAD_54)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t198{
struct A68t187  Tag;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE187)  */
struct A68t199{
struct A68t187  Formula;
struct A68t199 * Rest;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE187,REF MODE199)  */
struct A68t202{
struct A68t187  Lwb;
struct A68t187  Upb;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE187,MODE187)  */
struct A68t201 { A68_INT mode; union {
struct A68t188 * mode1;
struct A68t189 * mode2;
struct A68t190 * mode3;
struct A68t191 * mode4;
struct A68t192 * mode5;
struct A68t193 * mode6;
struct A68t194 * mode7;
struct A68t195 * mode8;
struct A68t196 * mode9;
struct A68t197 * mode10;
struct A68t202  mode11;
} data; };
typedef struct A68t201  A68_201 ;    /* UNION(REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,MODE202)  */
struct A68t200{
A68_INT  Sort;
A_PAD_INT(PAD_55)
A68_VC  Intname;
struct A68t178  Attr;
struct A68t201  Value;
struct A68t185 * Usage;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,REF MODE26,MODE178,MODE201,REF MODE185)  */
struct A68t203 { A68_INT mode; union {
struct A68t204 * mode1;
struct A68t205 * mode2;
struct A68t206 * mode3;
struct A68t207 * mode4;
struct A68t208 * mode5;
struct A68t209 * mode6;
struct A68t210 * mode7;
struct A68t196 * mode8;
struct A68t211 * mode9;
} data; };
typedef struct A68t203  A68_203 ;    /* UNION(REF MODE204,REF MODE205,REF MODE206,REF MODE207,REF MODE208,REF MODE209,REF MODE210,REF MODE196,REF MODE211)  */
struct A68t204{
A68_INT  Typeno;
A_PAD_INT(PAD_56)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT)  */
struct A68t205{
struct A68t187  Size;
struct A68t203  Elem;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE187,MODE203)  */
struct A68t206{
struct A68t203  Elem;
struct A68t206 * Rest;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE203,REF MODE206)  */
struct A68t207{
struct A68t203  From;
struct A68t203  To;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(MODE203,MODE203)  */
struct A68t208{
struct A68t203  Type;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(MODE203)  */
struct A68t209{
struct A68t187  Size;
struct A68t203  Char;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE187,MODE203)  */
struct A68t210{
A68_INT  Tvoid;
A_PAD_INT(PAD_57)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT)  */
struct A68t211{
A68_INT  Tnull;
A_PAD_INT(PAD_58)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT)  */
struct A68t212{
struct A68t203  Tag;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE203)  */
struct A68t213{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t214{
A68_VC  Altname;
struct A68t203  Assoc;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(REF MODE26,MODE203)  */
struct A68t215{
A68_VC  Tagname;
struct A68t202  Range;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(REF MODE26,MODE202)  */
A_VECTOR(struct A68t214 ,A68t217);
typedef struct A68t217  A68_217 ;    /* VECTOR [] MODE214 */
struct A68t216 { A68_INT mode; union {
struct A68t217  mode1;
struct A68t215 * mode2;
struct A68t212 * mode3;
struct A68t213 * mode4;
} data; };
typedef struct A68t216  A68_216 ;    /* UNION(REF MODE217,REF MODE215,REF MODE212,REF MODE213)  */
struct A68t218{
A68_INT  Sort;
A_PAD_INT(PAD_59)
A68_VC  Typename;
struct A68t178  Attr;
struct A68t216  Body;
struct A68t185 * Usage;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT,REF MODE26,MODE178,MODE216,REF MODE185)  */
struct A68t219{
A68_INT  Constno;
A_PAD_INT(PAD_60)
};
typedef struct A68t219  A68_219 ;    /* STRUCT(INT)  */
struct A68t220{
A68_INT  Typeno;
A_PAD_INT(PAD_61)
A68_INT  Primno;
A_PAD_INT(PAD_62)
};
typedef struct A68t220  A68_220 ;    /* STRUCT(INT,INT)  */
struct A68t221{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
struct A68t187  Index;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(INT,MODE187)  */
struct A68t222{
A68_INT  Typeno;
A_PAD_INT(PAD_64)
struct A68t202  Range;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(INT,MODE202)  */
struct A68t223{
struct A68t203  Querytype;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE203)  */
struct A68t225 { A68_INT mode; union {
struct A68t219 * mode1;
struct A68t220 * mode2;
struct A68t221 * mode3;
struct A68t223 * mode4;
struct A68t226 * mode5;
struct A68t227 * mode6;
struct A68t208 * mode7;
struct A68t222 * mode8;
struct A68t228 * mode9;
struct A68t229 * mode10;
struct A68t230 * mode11;
struct A68t231 * mode12;
struct A68t232 * mode13;
struct A68t233 * mode14;
struct A68t234 * mode15;
struct A68t235 * mode16;
struct A68t236 * mode17;
struct A68t237 * mode18;
struct A68t238 * mode19;
struct A68t239 * mode20;
struct A68t240 * mode21;
struct A68t241 * mode22;
struct A68t242 * mode23;
struct A68t243 * mode24;
struct A68t244 * mode25;
struct A68t245 * mode26;
struct A68t246 * mode27;
struct A68t247 * mode28;
struct A68t248 * mode29;
struct A68t249 * mode30;
struct A68t250 * mode31;
struct A68t251 * mode32;
struct A68t252 * mode33;
struct A68t253 * mode34;
} data; };
typedef struct A68t225  A68_225 ;    /* UNION(REF MODE219,REF MODE220,REF MODE221,REF MODE223,REF MODE226,REF MODE227,REF MODE208,REF MODE222,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253)  */
struct A68t224{
A68_INT  Sort;
A_PAD_INT(PAD_65)
A68_VC  Constname;
struct A68t178  Attr;
struct A68t225  Value;
struct A68t185 * Usage;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(INT,REF MODE26,MODE178,MODE225,REF MODE185)  */
struct A68t226{
A68_INT  Typeno;
A_PAD_INT(PAD_66)
struct A68t32  String;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t227{
A68_INT  Cvoid;
A_PAD_INT(PAD_67)
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT)  */
struct A68t228{
A68_INT  Typeno;
A_PAD_INT(PAD_68)
A68_INT  Firstno;
A_PAD_INT(PAD_69)
A68_INT  Lastno;
A_PAD_INT(PAD_70)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(INT,INT,INT)  */
struct A68t229{
struct A68t225  Alt;
struct A68t229 * Rest;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE225,REF MODE229)  */
struct A68t230{
A68_INT  Sort;
A_PAD_INT(PAD_71)
A68_INT  Nameno;
A_PAD_INT(PAD_72)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT,INT)  */
struct A68t231{
struct A68t225  Sink;
struct A68t225  Source;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE225,MODE225)  */
struct A68t232{
A68_INT  Typeno;
A_PAD_INT(PAD_73)
A68_INT  Altno;
A_PAD_INT(PAD_74)
struct A68t225  Assoc;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT,INT,MODE225)  */
struct A68t233{
struct A68t225  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_75)
A68_INT  Altno;
A_PAD_INT(PAD_76)
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE225,INT,INT)  */
struct A68t234{
struct A68t225  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_77)
A68_INT  Nameno;
A_PAD_INT(PAD_78)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE225,INT,INT)  */
struct A68t235{
struct A68t225  Unit;
struct A68t187  Index;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE225,MODE187)  */
struct A68t236{
struct A68t225  Unit;
struct A68t202  Range;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE225,MODE202)  */
struct A68t237{
struct A68t225  Unit;
struct A68t225  Index;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE225,MODE225)  */
struct A68t238{
struct A68t225  Unit;
struct A68t225  Index;
struct A68t225  From;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE225,MODE225,MODE225)  */
struct A68t239{
struct A68t187  Size;
struct A68t225  Elem;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE187,MODE225)  */
struct A68t240{
struct A68t225  Elem;
struct A68t240 * Rest;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE225,REF MODE240)  */
struct A68t241{
A68_BOOL  String;
A_PAD_BOOL(PAD_79)
A68_INT  Sort;
A_PAD_INT(PAD_80)
struct A68t225  Left;
struct A68t225  Right;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(BOOL,INT,MODE225,MODE225)  */
A_VECTOR(struct A68t268 ,A68t267);
typedef struct A68t267  A68_267 ;    /* VECTOR [] MODE268 */
struct A68t270{
struct A68t225  Tag;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(MODE225)  */
struct A68t265{
A68_INT  Fnno;
A_PAD_INT(PAD_81)
struct A68t267  Macparams;
struct A68t178  Attr;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,REF MODE267,MODE178)  */
struct A68t269 { A68_INT mode; union {
struct A68t186  mode1;
struct A68t198  mode2;
struct A68t212  mode3;
struct A68t270  mode4;
struct A68t265  mode5;
} data; };
typedef struct A68t269  A68_269 ;    /* UNION(MODE186,MODE198,MODE212,MODE270,MODE265)  */
struct A68t268{
A68_INT  Sort;
A_PAD_INT(PAD_82)
struct A68t269  Param;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(INT,MODE269)  */
struct A68t242{
struct A68t265  Inst;
struct A68t225  Right;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE265,MODE225)  */
struct A68t243{
struct A68t225  Left;
struct A68t265  Inst;
struct A68t225  Right;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE225,MODE265,MODE225)  */
struct A68t244{
struct A68t225  Input;
struct A68t285 * Choices;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE225,REF MODE285)  */
struct A68t245{
struct A68t187  Cond;
struct A68t225  True;
struct A68t225  False;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(MODE187,MODE225,MODE225)  */
struct A68t246{
struct A68t187  Repl;
struct A68t225  Body;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE187,MODE225)  */
struct A68t247{
struct A68t273 * Body;
struct A68t225  Output;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(REF MODE273,MODE225)  */
struct A68t248{
struct A68t254 * Body;
struct A68t225  Output;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(REF MODE254,MODE225)  */
struct A68t249{
struct A68t225  Unit;
struct A68t178  Attr;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE225,MODE178)  */
struct A68t250{
struct A68t225  Unit;
struct A68t189  Check;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE225,MODE189)  */
struct A68t251{
struct A68t225  Unit;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE225)  */
struct A68t252{
struct A68t187  Size;
struct A68t225  Char;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE187,MODE225)  */
struct A68t253{
A68_INT  Unull;
A_PAD_INT(PAD_83)
};
typedef struct A68t253  A68_253 ;    /* STRUCT(INT)  */
struct A68t256{
A68_INT  Fnno;
A_PAD_INT(PAD_84)
};
typedef struct A68t256  A68_256 ;    /* STRUCT(INT)  */
struct A68t255 { A68_INT mode; union {
struct A68t179  mode1;
struct A68t191  mode2;
struct A68t204  mode3;
struct A68t219  mode4;
struct A68t256  mode5;
struct A68t257 * mode6;
struct A68t258 * mode7;
struct A68t259 * mode8;
struct A68t260 * mode9;
struct A68t261 * mode10;
struct A68t262 * mode11;
struct A68t263 * mode12;
} data; };
typedef struct A68t255  A68_255 ;    /* UNION(MODE179,MODE191,MODE204,MODE219,MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263)  */
struct A68t254{
struct A68t255  Step;
struct A68t254 * Rest;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE255,REF MODE254)  */
struct A68t257{
struct A68t187  Cond;
struct A68t271 * Print;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE187,REF MODE271)  */
struct A68t258{
struct A68t187  Cond;
struct A68t271 * Fault;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE187,REF MODE271)  */
struct A68t259{
struct A68t266 * Letnames;
struct A68t225  Unit;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(REF MODE266,MODE225)  */
struct A68t260{
struct A68t199 * Sizes;
struct A68t265  Inst;
struct A68t266 * Makenames;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(REF MODE199,MODE265,REF MODE266)  */
struct A68t261{
struct A68t225  From;
struct A68t225  To;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE225,MODE225)  */
struct A68t262{
struct A68t199 * Repls;
struct A68t264 * Joins;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(REF MODE199,REF MODE264)  */
struct A68t263{
A68_INT  Stepnull;
A_PAD_INT(PAD_85)
};
typedef struct A68t263  A68_263 ;    /* STRUCT(INT)  */
struct A68t264{
struct A68t261  Join;
struct A68t264 * Rest;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE261,REF MODE264)  */
struct A68t266{
A68_INT  Nameno;
A_PAD_INT(PAD_86)
struct A68t266 * Rest;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(INT,REF MODE266)  */
struct A68t272 { A68_INT mode; union {
A68_VC  mode1;
struct A68t198 * mode2;
} data; };
typedef struct A68t272  A68_272 ;    /* UNION(REF MODE26,REF MODE198)  */
struct A68t271{
struct A68t272  Item;
struct A68t271 * Rest;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE272,REF MODE271)  */
struct A68t274 { A68_INT mode; union {
struct A68t179  mode1;
struct A68t191  mode2;
struct A68t204  mode3;
struct A68t219  mode4;
struct A68t256  mode5;
struct A68t257 * mode6;
struct A68t258 * mode7;
struct A68t275 * mode8;
struct A68t276 * mode9;
struct A68t277 * mode10;
struct A68t278 * mode11;
struct A68t279 * mode12;
struct A68t280 * mode13;
struct A68t281 * mode14;
struct A68t282 * mode15;
struct A68t273 * mode16;
struct A68t283 * mode17;
} data; };
typedef struct A68t274  A68_274 ;    /* UNION(MODE179,MODE191,MODE204,MODE219,MODE256,REF MODE257,REF MODE258,REF MODE275,REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE273,REF MODE283)  */
struct A68t273{
struct A68t274  Step;
struct A68t273 * Rest;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE274,REF MODE273)  */
struct A68t275{
struct A68t259  Seqlet;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE259)  */
struct A68t276{
struct A68t259  Seqvar;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE259)  */
struct A68t277{
struct A68t266 * Pvarnames;
struct A68t225  Init;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(REF MODE266,MODE225)  */
struct A68t278{
struct A68t225  To;
struct A68t225  From;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE225,MODE225)  */
struct A68t279{
struct A68t225  Input;
struct A68t284 * Choices;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE225,REF MODE284)  */
struct A68t280{
struct A68t187  Cond;
struct A68t274  True;
struct A68t274  False;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(MODE187,MODE274,MODE274)  */
struct A68t281{
struct A68t187  Repl;
struct A68t274  Body;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE187,MODE274)  */
struct A68t282{
A68_INT  Seqnull;
A_PAD_INT(PAD_87)
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT)  */
struct A68t283{
struct A68t187  Size;
struct A68t274  Elem;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE187,MODE274)  */
struct A68t284{
A68_BOOL  Check;
A_PAD_BOOL(PAD_88)
A68_INT  Sort;
A_PAD_INT(PAD_89)
struct A68t225  Test;
struct A68t274  Output;
struct A68t284 * Rest;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(BOOL,INT,MODE225,MODE274,REF MODE284)  */
struct A68t285{
A68_BOOL  Check;
A_PAD_BOOL(PAD_90)
A68_INT  Sort;
A_PAD_INT(PAD_91)
struct A68t225  Test;
struct A68t225  Output;
struct A68t285 * Rest;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(BOOL,INT,MODE225,MODE225,REF MODE285)  */
struct A68t286 { A68_INT mode; union {
struct A68t179  mode1;
struct A68t191  mode2;
struct A68t204  mode3;
struct A68t219  mode4;
struct A68t256  mode5;
} data; };
typedef struct A68t286  A68_286 ;    /* UNION(MODE179,MODE191,MODE204,MODE219,MODE256)  */
struct A68t287{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_92)
A68_VC  Name;
struct A68t267  Macparams;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(BOOL,REF MODE26,REF MODE267)  */
struct A68t288{
struct A68t187  Output;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE187)  */
struct A68t289{
A68_INT  Reform;
A_PAD_INT(PAD_93)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(INT)  */
struct A68t290{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_94)
struct A68t162  Ctname;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(REF MODE26,INT,MODE162)  */
struct A68t291{
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t225  Init;
struct A68t187  Ambigtime;
struct A68t225  Ambig;
struct A68t187  Delaytime;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(INT,MODE225,MODE187,MODE225,MODE187)  */
struct A68t292{
struct A68t225  Init;
struct A68t187  Delaytime;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(MODE225,MODE187)  */
struct A68t293{
struct A68t225  Init;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(MODE225)  */
struct A68t294{
A68_INT  Sort;
A_PAD_INT(PAD_96)
struct A68t187  Interval;
struct A68t225  Init;
struct A68t187  Skew;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(INT,MODE187,MODE225,MODE187)  */
struct A68t295{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_97)
A68_INT  Sort;
A_PAD_INT(PAD_98)
struct A68t265  Inst;
struct A68t187  Scale;
struct A68t225  Init;
struct A68t187  Skew;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(BOOL,INT,MODE265,MODE187,MODE225,MODE187)  */
struct A68t297 { A68_INT mode; union {
struct A68t270 * mode1;
struct A68t287 * mode2;
struct A68t288 * mode3;
struct A68t289 * mode4;
struct A68t290 * mode5;
struct A68t291 * mode6;
struct A68t292 * mode7;
struct A68t293 * mode8;
struct A68t294 * mode9;
struct A68t295 * mode10;
struct A68t296 * mode11;
struct A68t298 * mode12;
} data; };
typedef struct A68t297  A68_297 ;    /* UNION(REF MODE270,REF MODE287,REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE295,REF MODE296,REF MODE298)  */
struct A68t296{
struct A68t177 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_99)
struct A68t297  Fnbody;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(REF MODE177,BOOL,MODE297)  */
struct A68t298{
A68_INT  Bodynull;
A_PAD_INT(PAD_100)
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT)  */
struct A68t299{
A68_INT  Sort;
A_PAD_INT(PAD_101)
struct A68t286  Spec;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(INT,MODE286)  */
struct A68t300{
A68_VC  Name;
struct A68t203  Type;
struct A68t178  Attr;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(REF MODE26,MODE203,MODE178)  */
A_VECTOR(struct A68t299 ,A68t302);
typedef struct A68t302  A68_302 ;    /* VECTOR [] MODE299 */
A_VECTOR(struct A68t300 ,A68t303);
typedef struct A68t303  A68_303 ;    /* VECTOR [] MODE300 */
struct A68t301{
A68_INT  Sort;
A_PAD_INT(PAD_102)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_103)
A68_VC  Fnname;
struct A68t302  Macspecs;
struct A68t178  Attr;
struct A68t266 * Inputs;
struct A68t266 * Outputs;
struct A68t303  Nametypes;
struct A68t297  Fnbody;
struct A68t185 * Usage;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE302,MODE178,REF MODE266,REF MODE266,REF MODE303,MODE297,REF MODE185)  */
A_VECTOR(struct A68t184 *,A68t305);
typedef struct A68t305  A68_305 ;    /* VECTOR [] REF MODE184 */
A_VECTOR(struct A68t200 *,A68t306);
typedef struct A68t306  A68_306 ;    /* VECTOR [] REF MODE200 */
A_VECTOR(struct A68t218 *,A68t307);
typedef struct A68t307  A68_307 ;    /* VECTOR [] REF MODE218 */
A_VECTOR(struct A68t224 *,A68t308);
typedef struct A68t308  A68_308 ;    /* VECTOR [] REF MODE224 */
A_VECTOR(struct A68t301 *,A68t309);
typedef struct A68t309  A68_309 ;    /* VECTOR [] REF MODE301 */
struct A68t304{
struct A68t305  Attrs;
struct A68t306  Ints;
struct A68t307  Types;
struct A68t308  Consts;
struct A68t309  Fns;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(REF MODE305,REF MODE306,REF MODE307,REF MODE308,REF MODE309)  */
struct A68t310{
A68_INT  Closureno;
A_PAD_INT(PAD_104)
A68_INT  Sort;
A_PAD_INT(PAD_105)
struct A68t304 * Environ;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(INT,INT,REF MODE304)  */
struct A68t311{
struct A68t310  Outer;
struct A68t311 * Rest;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(MODE310,REF MODE311)  */
A_VECTOR(struct A68t311 ,A68t313);
typedef struct A68t313  A68_313 ;    /* VECTOR [] MODE311 */
struct A68t312{
struct A68t313  Outers;
struct A68t312 * Rest;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE313,REF MODE312)  */
struct A68t314{
A68_INT  Max_closureno;
A_PAD_INT(PAD_106)
struct A68t311 * Outers;
struct A68t311 * Freelist;
struct A68t312 * Outerslist;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(INT,REF MODE311,REF MODE311,REF MODE312)  */
A_VECTOR(struct A68t311 *,A68t315);
typedef struct A68t315  A68_315 ;    /* VECTOR [] REF MODE311 */

A_PROCEDURE(struct A68t190 *,A68t316,(A68_INT ),(A68_INT ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(INT) REF MODE190 */

A_PROCEDURE(struct A68t191 *,A68t317,(A68_INT ),(A68_INT ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(INT) REF MODE191 */

A_PROCEDURE(struct A68t195 *,A68t318,(struct A68t187 ),(struct A68t187 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE187) REF MODE195 */

A_PROCEDURE(struct A68t198 *,A68t319,(struct A68t187 ),(struct A68t187 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE187) REF MODE198 */

A_PROCEDURE(struct A68t204 *,A68t320,(A68_INT ),(A68_INT ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(INT) REF MODE204 */

A_PROCEDURE(struct A68t208 *,A68t321,(struct A68t203 ),(struct A68t203 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE203) REF MODE208 */

A_PROCEDURE(struct A68t212 *,A68t322,(struct A68t203 ),(struct A68t203 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE203) REF MODE212 */

A_PROCEDURE(struct A68t219 *,A68t323,(A68_INT ),(A68_INT ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(INT) REF MODE219 */

A_PROCEDURE(struct A68t223 *,A68t324,(struct A68t203 ),(struct A68t203 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE203) REF MODE223 */

A_PROCEDURE(struct A68t275 *,A68t325,(struct A68t259 ),(struct A68t259 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE259) REF MODE275 */

A_PROCEDURE(struct A68t276 *,A68t326,(struct A68t259 ),(struct A68t259 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE259) REF MODE276 */

A_PROCEDURE(struct A68t251 *,A68t327,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE225) REF MODE251 */

A_PROCEDURE(struct A68t270 *,A68t328,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE225) REF MODE270 */

A_PROCEDURE(struct A68t256 *,A68t329,(A68_INT ),(A68_INT ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(INT) REF MODE256 */

A_PROCEDURE(struct A68t288 *,A68t330,(struct A68t187 ),(struct A68t187 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE187) REF MODE288 */

A_PROCEDURE(struct A68t293 *,A68t331,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE225) REF MODE293 */

A_PROCEDURE(struct A68t196 *,A68t332,(A68_INT ),(A68_INT ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(INT) REF MODE196 */

A_PROCEDURE(struct A68t179 *,A68t333,(A68_INT ),(A68_INT ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(INT) REF MODE179 */

A_PROCEDURE(struct A68t186 *,A68t334,(struct A68t178 ),(struct A68t178 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE178) REF MODE186 */

A_PROCEDURE(struct A68t182 *,A68t335,(struct A68t178 ),(struct A68t178 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE178) REF MODE182 */
A_VECTOR(struct A68t176 *,A68t336);
typedef struct A68t336  A68_336 ;    /* VECTOR [] REF MODE176 */

A_PROCEDURE(A68_INT ,A68t337,(struct A68t314 *),(struct A68t314 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC(REF MODE314) INT */

A_PROCEDURE(struct A68t311 *,A68t338,(A68_INT ,struct A68t314 *,struct A68t97 ),(A68_INT ,struct A68t314 *,struct A68t97 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(INT,REF MODE314,MODE97) REF MODE311 */

A_PROCEDURE(struct A68t311 *,A68t339,(struct A68t314 *),(struct A68t314 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE314) REF MODE311 */

A_PROCEDURE(struct A68t311 **,A68t340,(struct A68t310 ,struct A68t311 **,struct A68t314 *,struct A68t97 ),(struct A68t310 ,struct A68t311 **,struct A68t314 *,struct A68t97 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE310,REF REF MODE311,REF MODE314,MODE97) REF REF MODE311 */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t311 **,struct A68t314 *,struct A68t97 ),(struct A68t311 **,struct A68t314 *,struct A68t97 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF REF MODE311,REF MODE314,MODE97) VOID */

A_PROCEDURE(struct A68t314 *,A68t342,(void),(void *));
typedef struct A68t342  A68_342 ;    /* PROC REF MODE314 */

A_PROCEDURE(A68_INT ,A68t343,(struct A68t314 *,struct A68t97 ),(struct A68t314 *,struct A68t97 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF MODE314,MODE97) INT */

A_PROCEDURE(struct A68t314 *,A68t344,(struct A68t314 *,struct A68t97 ),(struct A68t314 *,struct A68t97 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF MODE314,MODE97) REF MODE314 */
struct A68t345{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_107)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_108)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_109)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_110)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_111)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_112)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_113)
A68_INT  Width;
A_PAD_INT(PAD_114)
A68_INT  Page_count;
A_PAD_INT(PAD_115)
A68_INT  Page_length;
A_PAD_INT(PAD_116)
A68_INT  Eof_count;
A_PAD_INT(PAD_117)
struct A68t346 * Standard_reader;
struct A68t347 * Infile;
struct A68t173  Prompt;
struct A68t116 * Logfile;
struct A68t116 * Outfile;
};
typedef struct A68t345  A68_345 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE346,REF MODE347,MODE173,REF MODE116,REF MODE116)  */

A_PROCEDURE(A68_INT ,A68t348,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t346{
A68_VC  Rdbuffer;
struct A68t348  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_118)
A68_INT  Rdcharno;
A_PAD_INT(PAD_119)
A68_INT  Start_of_word;
A_PAD_INT(PAD_120)
struct A68t349 * Stack;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(REF MODE26,MODE348,INT,INT,INT,REF MODE349)  */
struct A68t347{
struct A68t116 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_121)
A68_INT  Number;
A_PAD_INT(PAD_122)
A68_VC  Name;
struct A68t346 * Reader;
struct A68t347 * Previous;
};
typedef struct A68t347  A68_347 ;    /* STRUCT(REF MODE116,BOOL,INT,REF MODE26,REF MODE346,REF MODE347)  */
struct A68t349{
A68_VC  Line;
struct A68t349 * Rest;
};
typedef struct A68t349  A68_349 ;    /* STRUCT(REF MODE26,REF MODE349)  */

A_PROCEDURE(struct A68t345 *,A68t350,(void),(void *));
typedef struct A68t350  A68_350 ;    /* PROC REF MODE345 */

A_PROCEDURE(A68_VOID ,A68t351,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t352,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t353,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE173) VOID */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t147 ),(struct A68t147 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE147) VOID */

A_PROCEDURE(A68_VOID ,A68t356,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t357);
typedef struct A68t357  A68_357 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE85) VOID */

A_PROCEDURE(A68_VOID ,A68t359,(A68_BOOL ,A68_INT ),(A68_BOOL ,A68_INT ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(BOOL,INT) VOID */
A_ISTRUCT(A68_CHAR ,23,A68t360);
typedef struct A68t360  A68_360 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t361);
typedef struct A68t361  A68_361 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,7,A68t362);
typedef struct A68t362  A68_362 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t363);
typedef struct A68t363  A68_363 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,3,A68t364);
typedef struct A68t364  A68_364 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t365);
typedef struct A68t365  A68_365 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t366);
typedef struct A68t366  A68_366 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t176 *,A68_INT ),(struct A68t176 *,A68_INT ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE176,INT) VOID */
A_ISTRUCT(struct A68t52 ,3,A68t368);
typedef struct A68t368  A68_368 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t178 ,A68_INT ),(struct A68t178 ,A68_INT ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE178,INT) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t370);
typedef struct A68t370  A68_370 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t371);
typedef struct A68t371  A68_371 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t372);
typedef struct A68t372  A68_372 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t187 ,A68_INT ),(struct A68t187 ,A68_INT ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE187,INT) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t374);
typedef struct A68t374  A68_374 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t375);
typedef struct A68t375  A68_375 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t202 ,A68_INT ),(struct A68t202 ,A68_INT ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE202,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t201 ,A68_INT ),(struct A68t201 ,A68_INT ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE201,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t199 *,A68_INT ),(struct A68t199 *,A68_INT ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(REF MODE199,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t203 ,A68_INT ),(struct A68t203 ,A68_INT ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE203,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t265 ,A68_INT ),(struct A68t265 ,A68_INT ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE265,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t266 *,A68_INT ),(struct A68t266 *,A68_INT ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(REF MODE266,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t274 ,A68_INT ),(struct A68t274 ,A68_INT ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE274,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t255 ,A68_INT ),(struct A68t255 ,A68_INT ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE255,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t225 ,A68_INT ),(struct A68t225 ,A68_INT ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE225,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t285 *,A68_INT ),(struct A68t285 *,A68_INT ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE285,INT) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t386);
typedef struct A68t386  A68_386 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t387);
typedef struct A68t387  A68_387 ;    /* STRUCT 7 MODE52 */
A_ISTRUCT(A68_CHAR ,10,A68t388);
typedef struct A68t388  A68_388 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t268 ,A68_INT ),(struct A68t268 ,A68_INT ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE268,INT) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t390);
typedef struct A68t390  A68_390 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t391);
typedef struct A68t391  A68_391 ;    /* STRUCT 15 CHAR */
struct A68t392 { A68_INT mode; union {
struct A68t212 * mode1;
struct A68t198 * mode2;
struct A68t270 * mode3;
} data; };
typedef struct A68t392  A68_392 ;    /* UNION(REF MODE212,REF MODE198,REF MODE270)  */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t392 ,A68_INT ),(struct A68t392 ,A68_INT ,void *));
typedef struct A68t393  A68_393 ;    /* PROC(MODE392,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t286 ,A68_INT ),(struct A68t286 ,A68_INT ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE286,INT) VOID */
struct A68t395 { A68_INT mode; union {
struct A68t257 * mode1;
struct A68t258 * mode2;
} data; };
typedef struct A68t395  A68_395 ;    /* UNION(REF MODE257,REF MODE258)  */

A_PROCEDURE(A68_VOID ,A68t396,(struct A68t395 ,A68_INT ),(struct A68t395 ,A68_INT ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(MODE395,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t284 *,A68_INT ),(struct A68t284 *,A68_INT ,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE284,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t216 ,A68_INT ),(struct A68t216 ,A68_INT ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE216,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t297 ,A68_INT ),(struct A68t297 ,A68_INT ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE297,INT) VOID */
A_ISTRUCT(struct A68t52 ,6,A68t400);
typedef struct A68t400  A68_400 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,12,A68t401);
typedef struct A68t401  A68_401 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t185 *,A68_INT ),(struct A68t185 *,A68_INT ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE185,INT) VOID */
A_ISTRUCT(A68_CHAR ,1,A68t403);
typedef struct A68t403  A68_403 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t52 ,12,A68t404);
typedef struct A68t404  A68_404 ;    /* STRUCT 12 MODE52 */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t301 *,A68_INT ),(struct A68t301 *,A68_INT ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF MODE301,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t406,(struct A68t218 *,A68_INT ),(struct A68t218 *,A68_INT ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(REF MODE218,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t184 *,A68_INT ),(struct A68t184 *,A68_INT ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(REF MODE184,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t200 *,A68_INT ),(struct A68t200 *,A68_INT ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(REF MODE200,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t224 *,A68_INT ),(struct A68t224 *,A68_INT ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE224,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t310 ,A68_INT ),(struct A68t310 ,A68_INT ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(MODE310,INT) VOID */
A_ISTRUCT(A68_CHAR ,16,A68t411);
typedef struct A68t411  A68_411 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t412,(struct A68t314 *,A68_INT ),(struct A68t314 *,A68_INT ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(REF MODE314,INT) VOID */
A_ISTRUCT(A68_CHAR ,37,A68t413);
typedef struct A68t413  A68_413 ;    /* STRUCT 37 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ZKCATRN_maxclosureno(struct A68t314 *);
/* --- End of imports from closureprocs --- */


/* --- Imports from assmodes --- */
extern A68_206 * GAAATRN_niltstr;
extern A68_229 * HAAATRN_nilualts;
extern A68_240 * IAAATRN_nilustr;
extern A68_285 * JAAATRN_niluchoices;
extern A68_176 * LAAATRN_nilids;
extern A68_177 * OAAATRN_nilints;
extern A68_271 * MAAATRN_nilprintitems;
extern A68_266 * NAAATRN_nilnames;
extern A68_284 * PAAATRN_nilseqchoices;
extern A68_273 * QAAATRN_nilsequence;
extern A68_264 * RAAATRN_niljoins;
extern A68_254 * SAAATRN_nilseries;
extern A68_290 * TAAATRN_nilimport;
extern A68_184 * UAAATRN_nilattrdec;
extern A68_200 * VAAATRN_nilintdec;
extern A68_218 * WAAATRN_niltypedec;
extern A68_224 * XAAATRN_nilconstdec;
extern A68_301 * YAAATRN_nilfndec;
extern A68_267  ABAATRN_nilmacparams;
extern A68_199 * BBAATRN_nilformulas;
extern A68_185 * CBAATRN_nilusage;
extern A68_181 * DBAATRN_nilattrstr;
extern A68_302  FBAATRN_nilmacspecs;
extern A68_311 * HBAATRN_nilouters;
#define WIAATRN_normalchoice 1
#define XIAATRN_elseofchoice 2
#define YIAATRN_elsechoice 3
#define ZIAATRN_noelsechoice 4
extern A68_336  BLAATRN_idstable;
/* --- End of imports from assmodes --- */


/* --- Imports from basics --- */
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_120  BOBAOSI_update_access;
extern A68_120  FOBAOSI_update_truncate_access;
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
extern A68_34 * LEAAOST_out;
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from testmode --- */
extern A68_VOID  JIBAOST_version_str(A68_INT ,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  ZXAAOSL_intwidth(A68_INT ,A68_INT ,A68_57 *);
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  MZAAOSL_setindent(A68_INT ,A68_65 *);
extern A68_VOID  RZAAOSL_resetindent(struct A68t34 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TIGAOST(void);   /* ioprocs */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void QFBAOST(void);   /* testmode */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_357   QCGATRN = {"$Id: ptassem.a68,v 34.2 1995/03/29 13:02:48 ella Exp $"}; 
A_GISVEC(A68_VC ,RCGATRN,QCGATRN,54)
#define SCGATRN_mparamtype 1
#define TCGATRN_mparamint 2
static A68_360   CDGATRN = {"Ids hash table width = "}; 
A_GISVEC(A68_VC ,DDGATRN,CDGATRN,23)
static A68_362   ODGATRN = {"Sizes ="}; 
A_GISVEC(A68_VC ,PDGATRN,ODGATRN,7)
static A68_121   IEGATRN = {"Arm "}; 
A_GISVEC(A68_VC ,JEGATRN,IEGATRN,4)
static A68_364   NEGATRN = {":  "}; 
A_GISVEC(A68_VC ,OEGATRN,NEGATRN,3)
static A68_365   UEGATRN = {"  "}; 
A_GISVEC(A68_VC ,VEGATRN,UEGATRN,2)
static A68_364   ZEGATRN = {": \""}; 
A_GISVEC(A68_VC ,AFGATRN,ZEGATRN,3)
static A68_365   DGGATRN = {"\" "}; 
A_GISVEC(A68_VC ,EGGATRN,DGGATRN,2)
static A68_370   RGGATRN = {"Attrname "}; 
A_GISVEC(A68_VC ,SGGATRN,RGGATRN,9)
static A68_370   CHGATRN = {"Attrdata "}; 
A_GISVEC(A68_VC ,DHGATRN,CHGATRN,9)
static A68_362   NHGATRN = {"Attrstr"}; 
A_GISVEC(A68_VC ,OHGATRN,NHGATRN,7)
static A68_371   THGATRN = {"Attrbracket"}; 
A_GISVEC(A68_VC ,UHGATRN,THGATRN,11)
static A68_372   YHGATRN = {"Attrnull"}; 
A_GISVEC(A68_VC ,ZHGATRN,YHGATRN,8)
static A68_374   MIGATRN = {"Fint "}; 
A_GISVEC(A68_VC ,NIGATRN,MIGATRN,5)
static A68_362   BJGATRN = {"Fcheck "}; 
A_GISVEC(A68_VC ,CJGATRN,BJGATRN,7)
static A68_365   IJGATRN = {"EQ"}; 
A_GISVEC(A68_VC ,JJGATRN,IJGATRN,2)
static A68_365   MJGATRN = {"<="}; 
A_GISVEC(A68_VC ,NJGATRN,MJGATRN,2)
static A68_365   QJGATRN = {">="}; 
A_GISVEC(A68_VC ,RJGATRN,QJGATRN,2)
static A68_365   WJGATRN = {"/="}; 
A_GISVEC(A68_VC ,XJGATRN,WJGATRN,2)
static A68_365   AKGATRN = {"??"}; 
A_GISVEC(A68_VC ,BKGATRN,AKGATRN,2)
static A68_362   JKGATRN = {"Farith "}; 
A_GISVEC(A68_VC ,KKGATRN,JKGATRN,7)
static A68_375   UKGATRN = {"Fname "}; 
A_GISVEC(A68_VC ,VKGATRN,UKGATRN,6)
static A68_374   FLGATRN = {"Fdop "}; 
A_GISVEC(A68_VC ,GLGATRN,FLGATRN,5)
static A68_374   QLGATRN = {"Fmop "}; 
A_GISVEC(A68_VC ,RLGATRN,QLGATRN,5)
static A68_374   BMGATRN = {"Fcond"}; 
A_GISVEC(A68_VC ,CMGATRN,BMGATRN,5)
static A68_372   KMGATRN = {"Fbracket"}; 
A_GISVEC(A68_VC ,LMGATRN,KMGATRN,8)
static A68_372   TMGATRN = {"Fmacpar "}; 
A_GISVEC(A68_VC ,UMGATRN,TMGATRN,8)
static A68_375   ENGATRN = {"Fnull "}; 
A_GISVEC(A68_VC ,FNGATRN,ENGATRN,6)
static A68_362   LNGATRN = {"formula"}; 
A_GISVEC(A68_VC ,MNGATRN,LNGATRN,7)
static A68_375   TNGATRN = {"Range "}; 
A_GISVEC(A68_VC ,UNGATRN,TNGATRN,6)
static A68_375   UOGATRN = {"Tname "}; 
A_GISVEC(A68_VC ,VOGATRN,UOGATRN,6)
static A68_374   FPGATRN = {"Trow "}; 
A_GISVEC(A68_VC ,GPGATRN,FPGATRN,5)
static A68_121   OPGATRN = {"Tstr"}; 
A_GISVEC(A68_VC ,PPGATRN,OPGATRN,4)
static A68_364   XPGATRN = {"Tfn"}; 
A_GISVEC(A68_VC ,YPGATRN,XPGATRN,3)
static A68_372   GQGATRN = {"Tbracket"}; 
A_GISVEC(A68_VC ,HQGATRN,GQGATRN,8)
static A68_362   PQGATRN = {"Tstring"}; 
A_GISVEC(A68_VC ,QQGATRN,PQGATRN,7)
static A68_372   YQGATRN = {"Tmacpar "}; 
A_GISVEC(A68_VC ,ZQGATRN,YQGATRN,8)
static A68_375   JRGATRN = {"Tnull "}; 
A_GISVEC(A68_VC ,KRGATRN,JRGATRN,6)
static A68_375   SRGATRN = {"Tvoid "}; 
A_GISVEC(A68_VC ,TRGATRN,SRGATRN,6)
static A68_121   ZRGATRN = {"type"}; 
A_GISVEC(A68_VC ,ASGATRN,ZRGATRN,4)
static A68_380  BSGATRN_pt_instance;
static A68_362   JSGATRN = {"Names  "}; 
A_GISVEC(A68_VC ,KSGATRN,JSGATRN,7)
static A68_382  XSGATRN_pt_seqstep;
static A68_383  YSGATRN_pt_step;
static A68_370   KTGATRN = {"Uchoices "}; 
A_GISVEC(A68_VC ,LTGATRN,KTGATRN,9)
static A68_375   UTGATRN = {" check"}; 
A_GISVEC(A68_VC ,VTGATRN,UTGATRN,6)
static A68_372   EUGATRN = {" nocheck"}; 
A_GISVEC(A68_VC ,FUGATRN,EUGATRN,8)
static A68_386   PUGATRN = {"Normalchoice "}; 
A_GISVEC(A68_VC ,QUGATRN,PUGATRN,13)
static A68_386   XUGATRN = {"Elseofchoice "}; 
A_GISVEC(A68_VC ,YUGATRN,XUGATRN,13)
static A68_371   FVGATRN = {"Elsechoice "}; 
A_GISVEC(A68_VC ,GVGATRN,FVGATRN,11)
static A68_386   NVGATRN = {"Noelsechoice "}; 
A_GISVEC(A68_VC ,OVGATRN,NVGATRN,13)
static A68_374   VVGATRN = {"sort "}; 
A_GISVEC(A68_VC ,WVGATRN,VVGATRN,5)
static A68_375   KWGATRN = {"Cname "}; 
A_GISVEC(A68_VC ,LWGATRN,KWGATRN,6)
static A68_375   VWGATRN = {"Cprim "}; 
A_GISVEC(A68_VC ,WWGATRN,VWGATRN,6)
static A68_374   KXGATRN = {"Cint "}; 
A_GISVEC(A68_VC ,LXGATRN,KXGATRN,5)
static A68_375   VXGATRN = {"Ctype "}; 
A_GISVEC(A68_VC ,WXGATRN,VXGATRN,6)
static A68_362   EYGATRN = {"Crange "}; 
A_GISVEC(A68_VC ,FYGATRN,EYGATRN,7)
static A68_371   PYGATRN = {"Cprimrange "}; 
A_GISVEC(A68_VC ,QYGATRN,PYGATRN,11)
static A68_375   IZGATRN = {"Cquery"}; 
A_GISVEC(A68_VC ,JZGATRN,IZGATRN,6)
static A68_362   RZGATRN = {"Cquote "}; 
A_GISVEC(A68_VC ,SZGATRN,RZGATRN,7)
static A68_365   XZGATRN = {"  "}; 
A_GISVEC(A68_VC ,YZGATRN,XZGATRN,2)
static A68_375   QAHATRN = {"Cvoid "}; 
A_GISVEC(A68_VC ,RAHATRN,QAHATRN,6)
static A68_374   ZAHATRN = {"Ualts"}; 
A_GISVEC(A68_VC ,ABHATRN,ZAHATRN,5)
static A68_375   IBHATRN = {"Uname "}; 
A_GISVEC(A68_VC ,JBHATRN,IBHATRN,6)
static A68_362   NBHATRN = {"source "}; 
A_GISVEC(A68_VC ,OBHATRN,NBHATRN,7)
static A68_374   SBHATRN = {"sink "}; 
A_GISVEC(A68_VC ,TBHATRN,SBHATRN,5)
static A68_370   XBHATRN = {"iosource "}; 
A_GISVEC(A68_VC ,YBHATRN,XBHATRN,9)
static A68_362   CCHATRN = {"iosink "}; 
A_GISVEC(A68_VC ,DCHATRN,CCHATRN,7)
static A68_370   PCHATRN = {"Ureplace "}; 
A_GISVEC(A68_VC ,QCHATRN,PCHATRN,9)
static A68_362   YCHATRN = {"Uassoc "}; 
A_GISVEC(A68_VC ,ZCHATRN,YCHATRN,7)
static A68_370   NDHATRN = {"Uextract "}; 
A_GISVEC(A68_VC ,ODHATRN,NDHATRN,9)
static A68_388   CEHATRN = {"Uportname "}; 
A_GISVEC(A68_VC ,DEHATRN,CEHATRN,10)
static A68_362   REHATRN = {"Uindex "}; 
A_GISVEC(A68_VC ,SEHATRN,REHATRN,7)
static A68_375   AFHATRN = {"Utrim "}; 
A_GISVEC(A68_VC ,BFHATRN,AFHATRN,6)
static A68_370   JFHATRN = {"Udyindex "}; 
A_GISVEC(A68_VC ,KFHATRN,JFHATRN,9)
static A68_374   SFHATRN = {"Urow "}; 
A_GISVEC(A68_VC ,TFHATRN,SFHATRN,5)
static A68_374   CGHATRN = {"Ustr "}; 
A_GISVEC(A68_VC ,DGHATRN,CGHATRN,5)
static A68_375   LGHATRN = {"Uconc "}; 
A_GISVEC(A68_VC ,MGHATRN,LGHATRN,6)
static A68_362   PGHATRN = {"string "}; 
A_GISVEC(A68_VC ,QGHATRN,PGHATRN,7)
static A68_121   TGHATRN = {"row "}; 
A_GISVEC(A68_VC ,UGHATRN,TGHATRN,4)
static A68_362   EHHATRN = {"Uminst "}; 
A_GISVEC(A68_VC ,FHHATRN,EHHATRN,7)
static A68_362   NHHATRN = {"Udinst "}; 
A_GISVEC(A68_VC ,OHHATRN,NHHATRN,7)
static A68_375   WHHATRN = {"Ucase "}; 
A_GISVEC(A68_VC ,XHHATRN,WHHATRN,6)
static A68_375   FIHATRN = {"Ucond "}; 
A_GISVEC(A68_VC ,GIHATRN,FIHATRN,6)
static A68_375   OIHATRN = {"Urepl "}; 
A_GISVEC(A68_VC ,PIHATRN,OIHATRN,6)
static A68_388   XIHATRN = {"Usequence "}; 
A_GISVEC(A68_VC ,YIHATRN,XIHATRN,10)
static A68_372   IJHATRN = {"Useries "}; 
A_GISVEC(A68_VC ,JJHATRN,IJHATRN,8)
static A68_362   TJHATRN = {"Series "}; 
A_GISVEC(A68_VC ,UJHATRN,TJHATRN,7)
static A68_372   CKHATRN = {"Ubracket"}; 
A_GISVEC(A68_VC ,DKHATRN,CKHATRN,8)
static A68_375   LKHATRN = {"Uattr "}; 
A_GISVEC(A68_VC ,MKHATRN,LKHATRN,6)
static A68_362   XKHATRN = {"Ucheck "}; 
A_GISVEC(A68_VC ,YKHATRN,XKHATRN,7)
static A68_362   ILHATRN = {"Ustring"}; 
A_GISVEC(A68_VC ,JLHATRN,ILHATRN,7)
static A68_364   RLHATRN = {"Ufn"}; 
A_GISVEC(A68_VC ,SLHATRN,RLHATRN,3)
static A68_375   AMHATRN = {"Unull "}; 
A_GISVEC(A68_VC ,BMHATRN,AMHATRN,6)
static A68_121   HMHATRN = {"unit"}; 
A_GISVEC(A68_VC ,IMHATRN,HMHATRN,4)
static A68_374   PMHATRN = {"Sort "}; 
A_GISVEC(A68_VC ,QMHATRN,PMHATRN,5)
static A68_370   NNHATRN = {"Instance "}; 
A_GISVEC(A68_VC ,ONHATRN,NNHATRN,9)
static A68_390   VNHATRN = {" nilmacparams "}; 
A_GISVEC(A68_VC ,WNHATRN,VNHATRN,14)
static A68_391   AOHATRN = {" nullmacparams "}; 
A_GISVEC(A68_VC ,BOHATRN,AOHATRN,15)
static A68_372   XOHATRN = {"Typetag "}; 
A_GISVEC(A68_VC ,YOHATRN,XOHATRN,8)
static A68_371   IPHATRN = {"Formulatag "}; 
A_GISVEC(A68_VC ,JPHATRN,IPHATRN,11)
static A68_372   TPHATRN = {"Unittag "}; 
A_GISVEC(A68_VC ,UPHATRN,TPHATRN,8)
static A68_364   AQHATRN = {"tag"}; 
A_GISVEC(A68_VC ,BQHATRN,AQHATRN,3)
static A68_370   KQHATRN = {"Attrname "}; 
A_GISVEC(A68_VC ,LQHATRN,KQHATRN,9)
static A68_375   XQHATRN = {"Fname "}; 
A_GISVEC(A68_VC ,YQHATRN,XQHATRN,6)
static A68_375   KRHATRN = {"Tname "}; 
A_GISVEC(A68_VC ,LRHATRN,KRHATRN,6)
static A68_375   XRHATRN = {"Cname "}; 
A_GISVEC(A68_VC ,YRHATRN,XRHATRN,6)
static A68_362   KSHATRN = {"Fnname "}; 
A_GISVEC(A68_VC ,LSHATRN,KSHATRN,7)
static A68_371   TSHATRN = {"declaration"}; 
A_GISVEC(A68_VC ,USHATRN,TSHATRN,11)
static A68_374   DTHATRN = {"Print"}; 
A_GISVEC(A68_VC ,ETHATRN,DTHATRN,5)
static A68_374   PTHATRN = {"Fault"}; 
A_GISVEC(A68_VC ,QTHATRN,PTHATRN,5)
static A68_374   WTHATRN = {"print"}; 
A_GISVEC(A68_VC ,XTHATRN,WTHATRN,5)
static A68_388   CUHATRN = {"Printitems"}; 
A_GISVEC(A68_VC ,DUHATRN,CUHATRN,10)
static A68_371   FVHATRN = {"Seqchoices "}; 
A_GISVEC(A68_VC ,GVHATRN,FVHATRN,11)
static A68_362   QVHATRN = {" check "}; 
A_GISVEC(A68_VC ,RVHATRN,QVHATRN,7)
static A68_370   YVHATRN = {" nocheck "}; 
A_GISVEC(A68_VC ,ZVHATRN,YVHATRN,9)
static A68_386   JWHATRN = {"Normalchoice "}; 
A_GISVEC(A68_VC ,KWHATRN,JWHATRN,13)
static A68_386   RWHATRN = {"Elseofchoice "}; 
A_GISVEC(A68_VC ,SWHATRN,RWHATRN,13)
static A68_371   ZWHATRN = {"Elsechoice "}; 
A_GISVEC(A68_VC ,AXHATRN,ZWHATRN,11)
static A68_386   HXHATRN = {"Noelsechoice "}; 
A_GISVEC(A68_VC ,IXHATRN,HXHATRN,13)
static A68_374   PXHATRN = {"sort "}; 
A_GISVEC(A68_VC ,QXHATRN,PXHATRN,5)
static A68_362   IYHATRN = {"Seqlet "}; 
A_GISVEC(A68_VC ,JYHATRN,IYHATRN,7)
static A68_362   TYHATRN = {"Seqvar "}; 
A_GISVEC(A68_VC ,UYHATRN,TYHATRN,7)
static A68_372   EZHATRN = {"Seqpvar "}; 
A_GISVEC(A68_VC ,FZHATRN,EZHATRN,8)
static A68_370   PZHATRN = {"Seqassign"}; 
A_GISVEC(A68_VC ,QZHATRN,PZHATRN,9)
static A68_362   AAIATRN = {"Seqcase"}; 
A_GISVEC(A68_VC ,BAIATRN,AAIATRN,7)
static A68_372   LAIATRN = {"Seqcond "}; 
A_GISVEC(A68_VC ,MAIATRN,LAIATRN,8)
static A68_372   WAIATRN = {"Seqrepl "}; 
A_GISVEC(A68_VC ,XAIATRN,WAIATRN,8)
static A68_362   HBIATRN = {"Seqrow "}; 
A_GISVEC(A68_VC ,IBIATRN,HBIATRN,7)
static A68_372   SBIATRN = {"Seqnull "}; 
A_GISVEC(A68_VC ,TBIATRN,SBIATRN,8)
static A68_370   ECIATRN = {"Sequence "}; 
A_GISVEC(A68_VC ,FCIATRN,ECIATRN,9)
static A68_362   LCIATRN = {"seqstep"}; 
A_GISVEC(A68_VC ,MCIATRN,LCIATRN,7)
static A68_121   BDIATRN = {"Let "}; 
A_GISVEC(A68_VC ,CDIATRN,BDIATRN,4)
static A68_374   MDIATRN = {"Make "}; 
A_GISVEC(A68_VC ,NDIATRN,MDIATRN,5)
static A68_374   XDIATRN = {"Join "}; 
A_GISVEC(A68_VC ,YDIATRN,XDIATRN,5)
static A68_370   IEIATRN = {"Repljoin "}; 
A_GISVEC(A68_VC ,JEIATRN,IEIATRN,9)
static A68_375   TEIATRN = {"joins "}; 
A_GISVEC(A68_VC ,UEIATRN,TEIATRN,6)
static A68_370   FFIATRN = {"Stepnull "}; 
A_GISVEC(A68_VC ,GFIATRN,FFIATRN,9)
static A68_121   MFIATRN = {"step"}; 
A_GISVEC(A68_VC ,NFIATRN,MFIATRN,4)
static A68_370   XFIATRN = {"Newnames "}; 
A_GISVEC(A68_VC ,YFIATRN,XFIATRN,9)
static A68_372   SGIATRN = {"Newints "}; 
A_GISVEC(A68_VC ,TGIATRN,SGIATRN,8)
static A68_370   FHIATRN = {"Newchars "}; 
A_GISVEC(A68_VC ,GHIATRN,FHIATRN,9)
static A68_372   FIIATRN = {"typebody"}; 
A_GISVEC(A68_VC ,GIIATRN,FIIATRN,8)
static A68_375   RIIATRN = {"Arith "}; 
A_GISVEC(A68_VC ,SIIATRN,RIIATRN,6)
static A68_374   CJIATRN = {"Biop "}; 
A_GISVEC(A68_VC ,DJIATRN,CJIATRN,5)
static A68_375   OJIATRN = {"Alien "}; 
A_GISVEC(A68_VC ,PJIATRN,OJIATRN,6)
static A68_362   FKIATRN = {"Import "}; 
A_GISVEC(A68_VC ,GKIATRN,FKIATRN,7)
static A68_362   WKIATRN = {"Ctname "}; 
A_GISVEC(A68_VC ,XKIATRN,WKIATRN,7)
static A68_370   MLIATRN = {"Nilimport"}; 
A_GISVEC(A68_VC ,NLIATRN,MLIATRN,9)
static A68_362   XLIATRN = {"Idelay "}; 
A_GISVEC(A68_VC ,YLIATRN,XLIATRN,7)
static A68_362   IMIATRN = {"Adelay "}; 
A_GISVEC(A68_VC ,JMIATRN,IMIATRN,7)
static A68_364   VMIATRN = {"Ram"}; 
A_GISVEC(A68_VC ,WMIATRN,VMIATRN,3)
static A68_362   GNIATRN = {"Sample "}; 
A_GISVEC(A68_VC ,HNIATRN,GNIATRN,7)
static A68_388   TNIATRN = {"Timescale "}; 
A_GISVEC(A68_VC ,UNIATRN,TNIATRN,10)
static A68_362   KOIATRN = {"Reform "}; 
A_GISVEC(A68_VC ,LOIATRN,KOIATRN,7)
static A68_388   VOIATRN = {"Bodycheck "}; 
A_GISVEC(A68_VC ,WOIATRN,VOIATRN,10)
static A68_371   FPIATRN = {"joincheck: "}; 
A_GISVEC(A68_VC ,GPIATRN,FPIATRN,11)
static A68_374   XPIATRN = {"check"}; 
A_GISVEC(A68_VC ,YPIATRN,XPIATRN,5)
static A68_362   HQIATRN = {"nocheck"}; 
A_GISVEC(A68_VC ,IQIATRN,HQIATRN,7)
static A68_372   SQIATRN = {"Bodynull"}; 
A_GISVEC(A68_VC ,TQIATRN,SQIATRN,8)
static A68_375   ZQIATRN = {"fnbody"}; 
A_GISVEC(A68_VC ,ARIATRN,ZQIATRN,6)
static A68_362   DRIATRN = {" Outer "}; 
A_GISVEC(A68_VC ,FRIATRN,DRIATRN,7)
static A68_362   GRIATRN = {" Local "}; 
A_GISVEC(A68_VC ,HRIATRN,GRIATRN,7)
static A68_372   IRIATRN = {" Macpar "}; 
A_GISVEC(A68_VC ,JRIATRN,IRIATRN,8)
static A68_401   KRIATRN = {"illegal sort"}; 
A_GISVEC(A68_VC ,LRIATRN,KRIATRN,12)
static A68_372   TRIATRN = {"nilusage"}; 
A_GISVEC(A68_VC ,URIATRN,TRIATRN,8)
static A68_375   DSIATRN = {"Usage "}; 
A_GISVEC(A68_VC ,ESIATRN,DSIATRN,6)
static A68_401   NSIATRN = {"Contextno = "}; 
A_GISVEC(A68_VC ,OSIATRN,NSIATRN,12)
static A68_386   TSIATRN = {" Closureno = "}; 
A_GISVEC(A68_VC ,USIATRN,TSIATRN,13)
static A68_386   ZSIATRN = {" Libv_spec = "}; 
A_GISVEC(A68_VC ,ATIATRN,ZSIATRN,13)
static A68_386   FTIATRN = {" Libv_body = "}; 
A_GISVEC(A68_VC ,GTIATRN,FTIATRN,13)
static A68_372   LTIATRN = {" Import "}; 
A_GISVEC(A68_VC ,MTIATRN,LTIATRN,8)
static A68_403   PTIATRN = {""}; 
A_GISVEC(A68_VC ,QTIATRN,PTIATRN,0)
static A68_372   TTIATRN = {" Export "}; 
A_GISVEC(A68_VC ,UTIATRN,TTIATRN,8)
static A68_403   XTIATRN = {""}; 
A_GISVEC(A68_VC ,YTIATRN,XTIATRN,0)
static A68_372   KUIATRN = {"nilfndec"}; 
A_GISVEC(A68_VC ,LUIATRN,KUIATRN,8)
static A68_375   WUIATRN = {"Fndec "}; 
A_GISVEC(A68_VC ,XUIATRN,WUIATRN,6)
static A68_375   IVIATRN = {" macro"}; 
A_GISVEC(A68_VC ,JVIATRN,IVIATRN,6)
static A68_388   SVIATRN = {" not macro"}; 
A_GISVEC(A68_VC ,TVIATRN,SVIATRN,10)
static A68_401   DWIATRN = {" nilmacspecs"}; 
A_GISVEC(A68_VC ,EWIATRN,DWIATRN,12)
static A68_386   NWIATRN = {" nullmacspecs"}; 
A_GISVEC(A68_VC ,OWIATRN,NWIATRN,13)
static A68_386   AXIATRN = {"Macspec Sort "}; 
A_GISVEC(A68_VC ,BXIATRN,AXIATRN,13)
static A68_375   PXIATRN = {"Inputs"}; 
A_GISVEC(A68_VC ,QXIATRN,PXIATRN,6)
static A68_362   ZXIATRN = {"Outputs"}; 
A_GISVEC(A68_VC ,AYIATRN,ZXIATRN,7)
static A68_391   JYIATRN = {"Nametypes table"}; 
A_GISVEC(A68_VC ,KYIATRN,JYIATRN,15)
static A68_388   KZIATRN = {"niltypedec"}; 
A_GISVEC(A68_VC ,LZIATRN,KZIATRN,10)
static A68_372   WZIATRN = {"Typedec "}; 
A_GISVEC(A68_VC ,XZIATRN,WZIATRN,8)
static A68_388   OAJATRN = {"nilattrdec"}; 
A_GISVEC(A68_VC ,PAJATRN,OAJATRN,10)
static A68_372   ABJATRN = {"Attrdec "}; 
A_GISVEC(A68_VC ,BBJATRN,ABJATRN,8)
static A68_370   VBJATRN = {"nilintdec"}; 
A_GISVEC(A68_VC ,WBJATRN,VBJATRN,9)
static A68_362   HCJATRN = {"Intdec "}; 
A_GISVEC(A68_VC ,ICJATRN,HCJATRN,7)
static A68_371   ZCJATRN = {"nilconstdec"}; 
A_GISVEC(A68_VC ,ADJATRN,ZCJATRN,11)
static A68_370   LDJATRN = {"Constdec "}; 
A_GISVEC(A68_VC ,MDJATRN,LDJATRN,9)
static A68_375   DEJATRN = {"Outer "}; 
A_GISVEC(A68_VC ,EEJATRN,DEJATRN,6)
static A68_121   HEJATRN = {"Attr"}; 
A_GISVEC(A68_VC ,IEJATRN,HEJATRN,4)
static A68_364   LEJATRN = {"Int"}; 
A_GISVEC(A68_VC ,MEJATRN,LEJATRN,3)
static A68_121   PEJATRN = {"Type"}; 
A_GISVEC(A68_VC ,QEJATRN,PEJATRN,4)
static A68_374   TEJATRN = {"Const"}; 
A_GISVEC(A68_VC ,UEJATRN,TEJATRN,5)
static A68_365   XEJATRN = {"FN"}; 
A_GISVEC(A68_VC ,YEJATRN,XEJATRN,2)
static A68_411   BFJATRN = {" closure number "}; 
A_GISVEC(A68_VC ,CFJATRN,BFJATRN,16)
static A68_386   LGJATRN = {"Closure with "}; 
A_GISVEC(A68_VC ,MGJATRN,LGJATRN,13)
static A68_413   QGJATRN = {" Outer declarations (max closureno = "}; 
A_GISVEC(A68_VC ,RGJATRN,QGJATRN,37)

A_STATIC A68_VOID  VCGATRN_print(A68_85  Line);

A_STATIC A68_VOID  YCGATRN_pt_ids_table(A68_BOOL  Full, A68_INT  Sp);

A_STATIC A68_VOID  TFGATRN_pt_ids(A68_176 * Ids, A68_INT  Sp);

A_STATIC A68_VOID  KGGATRN_pt_attr(A68_178  At, A68_INT  Sp);

A_STATIC A68_VOID  FIGATRN_pt_formula(A68_187  Int, A68_INT  Sp);

A_STATIC A68_VOID  PNGATRN_pt_range(A68_202  Rg, A68_INT  Sp);

A_STATIC A68_VOID  COGATRN_pt_formularange(A68_201  Fg, A68_INT  Sp);

A_STATIC A68_VOID  IOGATRN_pt_formulas(A68_199 * Fs, A68_INT  Sp);

A_STATIC A68_VOID  MOGATRN_pt_type(A68_203  Type, A68_INT  Sp);

A_STATIC A68_VOID  ESGATRN_pt_names(A68_266 * Ns, A68_INT  Sp);

A_STATIC A68_VOID  BTGATRN_pt_unit(A68_225  Unit, A68_INT  Sp);

A_STATIC A68_VOID  FTGATRN_pt_uchoices(A68_285 * Uc, A68_INT  Sp);

A_STATIC A68_VOID  LMHATRN_pt_macparam(A68_268  P, A68_INT  Sp);

A_STATIC A68_VOID  JNHATRN_anonymous(A68_265  Ins, A68_INT  Sp);

A_STATIC A68_VOID  ROHATRN_pt_tag(A68_392  Tag, A68_INT  Sp);

A_STATIC A68_VOID  EQHATRN_pt_declaration(A68_286  Dec, A68_INT  Sp);

A_STATIC A68_VOID  XSHATRN_pt_print(A68_395  Pf, A68_INT  Sp);

A_STATIC A68_VOID  WUHATRN_anonymous(A68_274  Step, A68_INT  Sp);

A_STATIC A68_VOID  AVHATRN_pt_seqchoices(A68_284 * Sc, A68_INT  Sp);

A_STATIC A68_VOID  QCIATRN_anonymous(A68_255  Step, A68_INT  Sp);

A_STATIC A68_VOID  RFIATRN_pt_typebody(A68_216  Body, A68_INT  Sp);

A_STATIC A68_VOID  JIIATRN_pt_fnbody(A68_297  Body, A68_INT  Sp);

A_STATIC A68_VOID  CRIATRN_pt_decsort(A68_INT  Sort, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PRIATRN_pt_usage(A68_185 * Us, A68_INT  Sp);

A_STATIC A68_VOID  GUIATRN_pt_fndec(A68_301 * Fd, A68_INT  Sp);

A_STATIC A68_VOID  GZIATRN_pt_typedec(A68_218 * Ty, A68_INT  Sp);

A_STATIC A68_VOID  KAJATRN_pt_attrdec(A68_184 * Ad, A68_INT  Sp);

A_STATIC A68_VOID  RBJATRN_pt_intdec(A68_200 * Id, A68_INT  Sp);

A_STATIC A68_VOID  VCJATRN_pt_constdec(A68_224 * Cd, A68_INT  Sp);

A68_VOID  ZDJATRN_pt_outer(A68_310  O, A68_INT  Sp);

A68_VOID  FGJATRN_pt_closure(A68_314 * Close, A68_INT  Sp);

A68_VOID  HHJATRN_pt_idstable(void);

A_STATIC A68_VOID  FTGATRN_pt_uchoices(A68_285 * Uc, A68_INT  Sp)
{ 
A68_285 * GTGATRN_uchoices;
A68_368  HTGATRN;  /* collateral clause result */
A68_65  ITGATRN;  /* avoid structure result */
A68_52  JTGATRN;  /* OPERATORS - mode -> union mode */
A68_52  MTGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NTGATRN;  /* YIELD */
A68_52  OTGATRN;  /* OPERATORS - mode -> union mode */
A68_56  PTGATRN;  /* procedure value */
A68_85  QTGATRN;  /* OPERATORS - istruct -> vector */
A68_368  RTGATRN;  /* collateral clause result */
A68_65  STGATRN;  /* avoid structure result */
A68_52  TTGATRN;  /* OPERATORS - mode -> union mode */
A68_52  WTGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  XTGATRN;  /* YIELD */
A68_52  YTGATRN;  /* OPERATORS - mode -> union mode */
A68_56  ZTGATRN;  /* procedure value */
A68_85  AUGATRN;  /* OPERATORS - istruct -> vector */
A68_368  BUGATRN;  /* collateral clause result */
A68_65  CUGATRN;  /* avoid structure result */
A68_52  DUGATRN;  /* OPERATORS - mode -> union mode */
A68_52  GUGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  HUGATRN;  /* YIELD */
A68_52  IUGATRN;  /* OPERATORS - mode -> union mode */
A68_56  JUGATRN;  /* procedure value */
A68_85  KUGATRN;  /* OPERATORS - istruct -> vector */
A68_65  LUGATRN;  /* avoid structure result */
A68_52  MUGATRN;  /* OPERATORS - mode -> union mode */
A68_85  NUGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_363  OUGATRN;  /* collateral clause result */
A68_52  RUGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SUGATRN;  /* YIELD */
A68_52  TUGATRN;  /* OPERATORS - mode -> union mode */
A68_56  UUGATRN;  /* procedure value */
A68_85  VUGATRN;  /* OPERATORS - istruct -> vector */
A68_363  WUGATRN;  /* collateral clause result */
A68_52  ZUGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  AVGATRN;  /* YIELD */
A68_52  BVGATRN;  /* OPERATORS - mode -> union mode */
A68_56  CVGATRN;  /* procedure value */
A68_85  DVGATRN;  /* OPERATORS - istruct -> vector */
A68_363  EVGATRN;  /* collateral clause result */
A68_52  HVGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  IVGATRN;  /* YIELD */
A68_52  JVGATRN;  /* OPERATORS - mode -> union mode */
A68_56  KVGATRN;  /* procedure value */
A68_85  LVGATRN;  /* OPERATORS - istruct -> vector */
A68_363  MVGATRN;  /* collateral clause result */
A68_52  PVGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QVGATRN;  /* YIELD */
A68_52  RVGATRN;  /* OPERATORS - mode -> union mode */
A68_56  SVGATRN;  /* procedure value */
A68_85  TVGATRN;  /* OPERATORS - istruct -> vector */
A68_368  UVGATRN;  /* collateral clause result */
A68_52  XVGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  YVGATRN;  /* YIELD */
A68_52  ZVGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  AWGATRN;  /* YIELD */
A68_52  BWGATRN;  /* OPERATORS - mode -> union mode */
A68_56  CWGATRN;  /* procedure value */
A68_85  DWGATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_uchoices);
 /* line 292: */
 /* line 293: */
{ 
GTGATRN_uchoices = Uc;
 /* line 294: */
MZAAOSL_setindent( Sp, &ITGATRN );
HTGATRN.data[0] = A_UNITE(JTGATRN,mode21,21,ITGATRN);
NTGATRN = LTGATRN ;
HTGATRN.data[1] = A_UNITE(MTGATRN,mode7,7,NTGATRN);
PTGATRN.fn.fn_global = LRAAOSL_newline;
PTGATRN.nonlocals = A68_NIL;
HTGATRN.data[2] = A_UNITE(OTGATRN,mode12,12,PTGATRN);
VCGATRN_print(A_HISVEC(QTGATRN,HTGATRN,3,A68_52 ));
 /* line 295: */
for ( ;; )
{ 
 /* line 296: */
if ( !((GTGATRN_uchoices!=JAAATRN_niluchoices)) ) break;
 /* line 297: */
if ( (*(&(GTGATRN_uchoices->Check))) )
{ 
MZAAOSL_setindent( Sp, &STGATRN );
RTGATRN.data[0] = A_UNITE(TTGATRN,mode21,21,STGATRN);
XTGATRN = VTGATRN ;
RTGATRN.data[1] = A_UNITE(WTGATRN,mode7,7,XTGATRN);
ZTGATRN.fn.fn_global = LRAAOSL_newline;
ZTGATRN.nonlocals = A68_NIL;
RTGATRN.data[2] = A_UNITE(YTGATRN,mode12,12,ZTGATRN);
 /* line 298: */
VCGATRN_print(A_HISVEC(AUGATRN,RTGATRN,3,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( Sp, &CUGATRN );
BUGATRN.data[0] = A_UNITE(DUGATRN,mode21,21,CUGATRN);
HUGATRN = FUGATRN ;
BUGATRN.data[1] = A_UNITE(GUGATRN,mode7,7,HUGATRN);
JUGATRN.fn.fn_global = LRAAOSL_newline;
JUGATRN.nonlocals = A68_NIL;
BUGATRN.data[2] = A_UNITE(IUGATRN,mode12,12,JUGATRN);
 /* line 299: */
VCGATRN_print(A_HISVEC(KUGATRN,BUGATRN,3,A68_52 ));
} 
 /* line 300: */
MZAAOSL_setindent( Sp, &LUGATRN );
VCGATRN_print(A_HVEC(NUGATRN,A_UNITE(MUGATRN,mode21,21,LUGATRN),A68_52 ));
 /* line 301: */
 /* line 302: */
if ( ((*(&(GTGATRN_uchoices->Sort)))==WIAATRN_normalchoice) )
{ 
SUGATRN = QUGATRN ;
OUGATRN.data[0] = A_UNITE(RUGATRN,mode7,7,SUGATRN);
UUGATRN.fn.fn_global = LRAAOSL_newline;
UUGATRN.nonlocals = A68_NIL;
OUGATRN.data[1] = A_UNITE(TUGATRN,mode12,12,UUGATRN);
 /* line 303: */
VCGATRN_print(A_HISVEC(VUGATRN,OUGATRN,2,A68_52 ));
} 
else
{ 
 /* line 304: */
if ( ((*(&(GTGATRN_uchoices->Sort)))==XIAATRN_elseofchoice) )
{ 
AVGATRN = YUGATRN ;
WUGATRN.data[0] = A_UNITE(ZUGATRN,mode7,7,AVGATRN);
CVGATRN.fn.fn_global = LRAAOSL_newline;
CVGATRN.nonlocals = A68_NIL;
WUGATRN.data[1] = A_UNITE(BVGATRN,mode12,12,CVGATRN);
 /* line 305: */
VCGATRN_print(A_HISVEC(DVGATRN,WUGATRN,2,A68_52 ));
} 
else
{ 
 /* line 306: */
if ( ((*(&(GTGATRN_uchoices->Sort)))==YIAATRN_elsechoice) )
{ 
IVGATRN = GVGATRN ;
EVGATRN.data[0] = A_UNITE(HVGATRN,mode7,7,IVGATRN);
KVGATRN.fn.fn_global = LRAAOSL_newline;
KVGATRN.nonlocals = A68_NIL;
EVGATRN.data[1] = A_UNITE(JVGATRN,mode12,12,KVGATRN);
 /* line 307: */
VCGATRN_print(A_HISVEC(LVGATRN,EVGATRN,2,A68_52 ));
} 
else
{ 
 /* line 308: */
if ( ((*(&(GTGATRN_uchoices->Sort)))==ZIAATRN_noelsechoice) )
{ 
QVGATRN = OVGATRN ;
MVGATRN.data[0] = A_UNITE(PVGATRN,mode7,7,QVGATRN);
SVGATRN.fn.fn_global = LRAAOSL_newline;
SVGATRN.nonlocals = A68_NIL;
MVGATRN.data[1] = A_UNITE(RVGATRN,mode12,12,SVGATRN);
 /* line 309: */
VCGATRN_print(A_HISVEC(TVGATRN,MVGATRN,2,A68_52 ));
} 
else
{ 
YVGATRN = WVGATRN ;
UVGATRN.data[0] = A_UNITE(XVGATRN,mode7,7,YVGATRN);
AWGATRN = (*(&(GTGATRN_uchoices->Sort))) ;
UVGATRN.data[1] = A_UNITE(ZVGATRN,mode1,1,AWGATRN);
CWGATRN.fn.fn_global = LRAAOSL_newline;
CWGATRN.nonlocals = A68_NIL;
UVGATRN.data[2] = A_UNITE(BWGATRN,mode12,12,CWGATRN);
 /* line 310: */
VCGATRN_print(A_HISVEC(DWGATRN,UVGATRN,3,A68_52 ));
} 
} 
} 
} 
 /* line 311: */
BTGATRN_pt_unit((*(&(GTGATRN_uchoices->Test))), (Sp+3));
 /* line 312: */
BTGATRN_pt_unit((*(&(GTGATRN_uchoices->Output))), (Sp+3));
 /* line 313: */
 /* line 314: */
GTGATRN_uchoices = (*(&(GTGATRN_uchoices->Rest)));
}
 /* line 315: */
} 
A_PROC_EXIT(pt_uchoices);
return;
} 
#undef NL

A_STATIC A68_VOID  AVHATRN_pt_seqchoices(A68_284 * Sc, A68_INT  Sp)
{ 
A68_284 * BVHATRN_seqchoices;
A68_368  CVHATRN;  /* collateral clause result */
A68_65  DVHATRN;  /* avoid structure result */
A68_52  EVHATRN;  /* OPERATORS - mode -> union mode */
A68_52  HVHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  IVHATRN;  /* YIELD */
A68_52  JVHATRN;  /* OPERATORS - mode -> union mode */
A68_56  KVHATRN;  /* procedure value */
A68_85  LVHATRN;  /* OPERATORS - istruct -> vector */
A68_65  MVHATRN;  /* avoid structure result */
A68_52  NVHATRN;  /* OPERATORS - mode -> union mode */
A68_85  OVHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_363  PVHATRN;  /* collateral clause result */
A68_52  SVHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  TVHATRN;  /* YIELD */
A68_52  UVHATRN;  /* OPERATORS - mode -> union mode */
A68_56  VVHATRN;  /* procedure value */
A68_85  WVHATRN;  /* OPERATORS - istruct -> vector */
A68_363  XVHATRN;  /* collateral clause result */
A68_52  AWHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  BWHATRN;  /* YIELD */
A68_52  CWHATRN;  /* OPERATORS - mode -> union mode */
A68_56  DWHATRN;  /* procedure value */
A68_85  EWHATRN;  /* OPERATORS - istruct -> vector */
A68_65  FWHATRN;  /* avoid structure result */
A68_52  GWHATRN;  /* OPERATORS - mode -> union mode */
A68_85  HWHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_363  IWHATRN;  /* collateral clause result */
A68_52  LWHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  MWHATRN;  /* YIELD */
A68_52  NWHATRN;  /* OPERATORS - mode -> union mode */
A68_56  OWHATRN;  /* procedure value */
A68_85  PWHATRN;  /* OPERATORS - istruct -> vector */
A68_363  QWHATRN;  /* collateral clause result */
A68_52  TWHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  UWHATRN;  /* YIELD */
A68_52  VWHATRN;  /* OPERATORS - mode -> union mode */
A68_56  WWHATRN;  /* procedure value */
A68_85  XWHATRN;  /* OPERATORS - istruct -> vector */
A68_363  YWHATRN;  /* collateral clause result */
A68_52  BXHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  CXHATRN;  /* YIELD */
A68_52  DXHATRN;  /* OPERATORS - mode -> union mode */
A68_56  EXHATRN;  /* procedure value */
A68_85  FXHATRN;  /* OPERATORS - istruct -> vector */
A68_363  GXHATRN;  /* collateral clause result */
A68_52  JXHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KXHATRN;  /* YIELD */
A68_52  LXHATRN;  /* OPERATORS - mode -> union mode */
A68_56  MXHATRN;  /* procedure value */
A68_85  NXHATRN;  /* OPERATORS - istruct -> vector */
A68_368  OXHATRN;  /* collateral clause result */
A68_52  RXHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SXHATRN;  /* YIELD */
A68_52  TXHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  UXHATRN;  /* YIELD */
A68_52  VXHATRN;  /* OPERATORS - mode -> union mode */
A68_56  WXHATRN;  /* procedure value */
A68_85  XXHATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_seqchoices);
 /* line 577: */
{ 
BVHATRN_seqchoices = Sc;
 /* line 578: */
MZAAOSL_setindent( Sp, &DVHATRN );
CVHATRN.data[0] = A_UNITE(EVHATRN,mode21,21,DVHATRN);
IVHATRN = GVHATRN ;
CVHATRN.data[1] = A_UNITE(HVHATRN,mode7,7,IVHATRN);
KVHATRN.fn.fn_global = LRAAOSL_newline;
KVHATRN.nonlocals = A68_NIL;
CVHATRN.data[2] = A_UNITE(JVHATRN,mode12,12,KVHATRN);
VCGATRN_print(A_HISVEC(LVHATRN,CVHATRN,3,A68_52 ));
 /* line 579: */
for ( ;; )
{ 
 /* line 580: */
if ( !((BVHATRN_seqchoices!=PAAATRN_nilseqchoices)) ) break;
MZAAOSL_setindent( Sp, &MVHATRN );
VCGATRN_print(A_HVEC(OVHATRN,A_UNITE(NVHATRN,mode21,21,MVHATRN),A68_52 ));
 /* line 581: */
 /* line 582: */
if ( (*(&(BVHATRN_seqchoices->Check))) )
{ 
TVHATRN = RVHATRN ;
PVHATRN.data[0] = A_UNITE(SVHATRN,mode7,7,TVHATRN);
VVHATRN.fn.fn_global = LRAAOSL_newline;
VVHATRN.nonlocals = A68_NIL;
PVHATRN.data[1] = A_UNITE(UVHATRN,mode12,12,VVHATRN);
 /* line 583: */
VCGATRN_print(A_HISVEC(WVHATRN,PVHATRN,2,A68_52 ));
} 
else
{ 
BWHATRN = ZVHATRN ;
XVHATRN.data[0] = A_UNITE(AWHATRN,mode7,7,BWHATRN);
DWHATRN.fn.fn_global = LRAAOSL_newline;
DWHATRN.nonlocals = A68_NIL;
XVHATRN.data[1] = A_UNITE(CWHATRN,mode12,12,DWHATRN);
 /* line 584: */
VCGATRN_print(A_HISVEC(EWHATRN,XVHATRN,2,A68_52 ));
} 
 /* line 585: */
MZAAOSL_setindent( Sp, &FWHATRN );
VCGATRN_print(A_HVEC(HWHATRN,A_UNITE(GWHATRN,mode21,21,FWHATRN),A68_52 ));
 /* line 586: */
 /* line 587: */
if ( ((*(&(BVHATRN_seqchoices->Sort)))==WIAATRN_normalchoice) )
{ 
MWHATRN = KWHATRN ;
IWHATRN.data[0] = A_UNITE(LWHATRN,mode7,7,MWHATRN);
OWHATRN.fn.fn_global = LRAAOSL_newline;
OWHATRN.nonlocals = A68_NIL;
IWHATRN.data[1] = A_UNITE(NWHATRN,mode12,12,OWHATRN);
 /* line 588: */
VCGATRN_print(A_HISVEC(PWHATRN,IWHATRN,2,A68_52 ));
} 
else
{ 
 /* line 589: */
if ( ((*(&(BVHATRN_seqchoices->Sort)))==XIAATRN_elseofchoice) )
{ 
UWHATRN = SWHATRN ;
QWHATRN.data[0] = A_UNITE(TWHATRN,mode7,7,UWHATRN);
WWHATRN.fn.fn_global = LRAAOSL_newline;
WWHATRN.nonlocals = A68_NIL;
QWHATRN.data[1] = A_UNITE(VWHATRN,mode12,12,WWHATRN);
 /* line 590: */
VCGATRN_print(A_HISVEC(XWHATRN,QWHATRN,2,A68_52 ));
} 
else
{ 
 /* line 591: */
if ( ((*(&(BVHATRN_seqchoices->Sort)))==YIAATRN_elsechoice) )
{ 
CXHATRN = AXHATRN ;
YWHATRN.data[0] = A_UNITE(BXHATRN,mode7,7,CXHATRN);
EXHATRN.fn.fn_global = LRAAOSL_newline;
EXHATRN.nonlocals = A68_NIL;
YWHATRN.data[1] = A_UNITE(DXHATRN,mode12,12,EXHATRN);
 /* line 592: */
VCGATRN_print(A_HISVEC(FXHATRN,YWHATRN,2,A68_52 ));
} 
else
{ 
 /* line 593: */
if ( ((*(&(BVHATRN_seqchoices->Sort)))==ZIAATRN_noelsechoice) )
{ 
KXHATRN = IXHATRN ;
GXHATRN.data[0] = A_UNITE(JXHATRN,mode7,7,KXHATRN);
MXHATRN.fn.fn_global = LRAAOSL_newline;
MXHATRN.nonlocals = A68_NIL;
GXHATRN.data[1] = A_UNITE(LXHATRN,mode12,12,MXHATRN);
 /* line 594: */
VCGATRN_print(A_HISVEC(NXHATRN,GXHATRN,2,A68_52 ));
} 
else
{ 
SXHATRN = QXHATRN ;
OXHATRN.data[0] = A_UNITE(RXHATRN,mode7,7,SXHATRN);
UXHATRN = (*(&(BVHATRN_seqchoices->Sort))) ;
OXHATRN.data[1] = A_UNITE(TXHATRN,mode1,1,UXHATRN);
WXHATRN.fn.fn_global = LRAAOSL_newline;
WXHATRN.nonlocals = A68_NIL;
OXHATRN.data[2] = A_UNITE(VXHATRN,mode12,12,WXHATRN);
 /* line 595: */
VCGATRN_print(A_HISVEC(XXHATRN,OXHATRN,3,A68_52 ));
} 
} 
} 
} 
 /* line 596: */
BTGATRN_pt_unit((*(&(BVHATRN_seqchoices->Test))), (Sp+3));
 /* line 597: */
A_CALLPROC(XSGATRN_pt_seqstep,((*(&(BVHATRN_seqchoices->Output))), (Sp+3)),((*(&(BVHATRN_seqchoices->Output))), (Sp+3),(XSGATRN_pt_seqstep).nonlocals));
 /* line 598: */
 /* line 599: */
BVHATRN_seqchoices = (*(&(BVHATRN_seqchoices->Rest)));
}
 /* line 600: */
} 
A_PROC_EXIT(pt_seqchoices);
return;
} 
#undef NL

A_STATIC A68_VOID  VCGATRN_print(A68_85  Line)
{ 
A_PROC_ENTRY(print);
 /* line 98: */
{ 
GFBAOSL_put(LEAAOST_out, Line);
SOAAOST_flt_if_interrupted(ZLBAOSI_global_msg);
} 
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_VOID  YCGATRN_pt_ids_table(A68_BOOL  Full, A68_INT  Sp)
{ 
A68_361  ZCGATRN;  /* collateral clause result */
A68_65  ADGATRN;  /* avoid structure result */
A68_52  BDGATRN;  /* OPERATORS - mode -> union mode */
A68_52  EDGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FDGATRN;  /* YIELD */
A68_52  GDGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  HDGATRN;  /* YIELD */
A68_52  IDGATRN;  /* OPERATORS - mode -> union mode */
A68_56  JDGATRN;  /* procedure value */
A68_85  KDGATRN;  /* OPERATORS - istruct -> vector */
A68_363  LDGATRN;  /* collateral clause result */
A68_65  MDGATRN;  /* avoid structure result */
A68_52  NDGATRN;  /* OPERATORS - mode -> union mode */
A68_52  QDGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  RDGATRN;  /* YIELD */
A68_85  SDGATRN;  /* OPERATORS - istruct -> vector */
A68_INT  TDGATRN_n;
A68_176 * UDGATRN_ptr;
A68_176 ** VDGATRN_arm;
A68_INT  WDGATRN;  /* forall loop counter */
A68_57  XDGATRN;  /* avoid structure result */
A68_52  YDGATRN;  /* OPERATORS - mode -> union mode */
A68_85  ZDGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  AEGATRN;  /* OPERATORS - mode -> union mode */
A68_56  BEGATRN;  /* procedure value */
A68_85  CEGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  DEGATRN_i;
A68_INT  EEGATRN;  /* to part of loop */
A68_361  FEGATRN;  /* collateral clause result */
A68_65  GEGATRN;  /* avoid structure result */
A68_52  HEGATRN;  /* OPERATORS - mode -> union mode */
A68_52  KEGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LEGATRN;  /* YIELD */
A68_52  MEGATRN;  /* OPERATORS - mode -> union mode */
A68_52  PEGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QEGATRN;  /* YIELD */
A68_85  REGATRN;  /* OPERATORS - istruct -> vector */
A68_INT  SEGATRN_j;
A68_366  TEGATRN;  /* collateral clause result */
A68_52  WEGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  XEGATRN;  /* YIELD */
A68_52  YEGATRN;  /* OPERATORS - mode -> union mode */
A68_52  BFGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  CFGATRN;  /* YIELD */
A68_52  DFGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  EFGATRN;  /* YIELD */
A68_52  FFGATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  GFGATRN;  /* YIELD */
A68_85  HFGATRN;  /* OPERATORS - istruct -> vector */
A68_52  IFGATRN;  /* OPERATORS - mode -> union mode */
A68_56  JFGATRN;  /* procedure value */
A68_85  KFGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_363  LFGATRN;  /* collateral clause result */
A68_52  MFGATRN;  /* OPERATORS - mode -> union mode */
A68_56  NFGATRN;  /* procedure value */
A68_52  OFGATRN;  /* OPERATORS - mode -> union mode */
A68_56  PFGATRN;  /* procedure value */
A68_85  QFGATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_ids_table);
 /* line 101: */
 /* line 102: */
{ 
MZAAOSL_setindent( Sp, &ADGATRN );
ZCGATRN.data[0] = A_UNITE(BDGATRN,mode21,21,ADGATRN);
FDGATRN = DDGATRN ;
ZCGATRN.data[1] = A_UNITE(EDGATRN,mode7,7,FDGATRN);
HDGATRN = BLAATRN_idstable.upb ;
ZCGATRN.data[2] = A_UNITE(GDGATRN,mode1,1,HDGATRN);
JDGATRN.fn.fn_global = LRAAOSL_newline;
JDGATRN.nonlocals = A68_NIL;
ZCGATRN.data[3] = A_UNITE(IDGATRN,mode12,12,JDGATRN);
VCGATRN_print(A_HISVEC(KDGATRN,ZCGATRN,4,A68_52 ));
 /* line 103: */
MZAAOSL_setindent( (Sp+3), &MDGATRN );
LDGATRN.data[0] = A_UNITE(NDGATRN,mode21,21,MDGATRN);
RDGATRN = PDGATRN ;
LDGATRN.data[1] = A_UNITE(QDGATRN,mode7,7,RDGATRN);
VCGATRN_print(A_HISVEC(SDGATRN,LDGATRN,2,A68_52 ));
 /* line 104: */
TDGATRN_n = 0;
 /* line 105: */
UDGATRN_ptr = LAAATRN_nilids;
 /* line 106: */
 /* line 107: */
WDGATRN = BLAATRN_idstable.upb -1;
VDGATRN_arm = BLAATRN_idstable.data;
for (;WDGATRN-- >= 0;
(VDGATRN_arm++
) )
{
TDGATRN_n = 0;
UDGATRN_ptr = (*VDGATRN_arm);
 /* line 108: */
for ( ;; )
{ 
if ( !((UDGATRN_ptr!=LAAATRN_nilids)) ) break;
UDGATRN_ptr = (*(&(UDGATRN_ptr->Rest)));
TDGATRN_n+=1;
}
 /* line 109: */
 /* line 110: */
ZXAAOSL_intwidth( TDGATRN_n, 4, &XDGATRN );
VCGATRN_print(A_HVEC(ZDGATRN,A_UNITE(YDGATRN,mode13,13,XDGATRN),A68_52 ));
}
 /* line 111: */
BEGATRN.fn.fn_global = LRAAOSL_newline;
BEGATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(CEGATRN,A_UNITE(AEGATRN,mode12,12,BEGATRN),A68_52 ));
 /* line 112: */
 /* line 113: */
if ( Full )
{ 
 /* line 114: */
EEGATRN = BLAATRN_idstable.upb;
for ( DEGATRN_i = 1;
DEGATRN_i <= EEGATRN;
DEGATRN_i += 1 )
{ 
MZAAOSL_setindent( (Sp+6), &GEGATRN );
FEGATRN.data[0] = A_UNITE(HEGATRN,mode21,21,GEGATRN);
LEGATRN = JEGATRN ;
FEGATRN.data[1] = A_UNITE(KEGATRN,mode7,7,LEGATRN);
FEGATRN.data[2] = A_UNITE(MEGATRN,mode1,1,DEGATRN_i);
QEGATRN = OEGATRN ;
FEGATRN.data[3] = A_UNITE(PEGATRN,mode7,7,QEGATRN);
VCGATRN_print(A_HISVEC(REGATRN,FEGATRN,4,A68_52 ));
 /* line 115: */
UDGATRN_ptr = (*(&A_VINDEX(BLAATRN_idstable,DEGATRN_i)));
 /* line 116: */
for ( SEGATRN_j = 1;;
SEGATRN_j += 1 ) 
{ 
 /* line 117: */
if ( !((UDGATRN_ptr!=LAAATRN_nilids)) ) break;
XEGATRN = VEGATRN ;
TEGATRN.data[0] = A_UNITE(WEGATRN,mode7,7,XEGATRN);
TEGATRN.data[1] = A_UNITE(YEGATRN,mode1,1,SEGATRN_j);
CFGATRN = AFGATRN ;
TEGATRN.data[2] = A_UNITE(BFGATRN,mode7,7,CFGATRN);
EFGATRN = (*(&(UDGATRN_ptr->Id))) ;
TEGATRN.data[3] = A_UNITE(DFGATRN,mode7,7,EFGATRN);
GFGATRN = '\"' ;
TEGATRN.data[4] = A_UNITE(FFGATRN,mode6,6,GFGATRN);
VCGATRN_print(A_HISVEC(HFGATRN,TEGATRN,5,A68_52 ));
 /* line 118: */
 /* line 119: */
UDGATRN_ptr = (*(&(UDGATRN_ptr->Rest)));
}
 /* line 120: */
 /* line 121: */
JFGATRN.fn.fn_global = LRAAOSL_newline;
JFGATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(KFGATRN,A_UNITE(IFGATRN,mode12,12,JFGATRN),A68_52 ));
}
 /* line 122: */
} 
 /* line 123: */
NFGATRN.fn.fn_global = RZAAOSL_resetindent;
NFGATRN.nonlocals = A68_NIL;
LFGATRN.data[0] = A_UNITE(MFGATRN,mode12,12,NFGATRN);
PFGATRN.fn.fn_global = LRAAOSL_newline;
PFGATRN.nonlocals = A68_NIL;
LFGATRN.data[1] = A_UNITE(OFGATRN,mode12,12,PFGATRN);
 /* line 124: */
VCGATRN_print(A_HISVEC(QFGATRN,LFGATRN,2,A68_52 ));
} 
A_PROC_EXIT(pt_ids_table);
return;
} 
#undef NL

A_STATIC A68_VOID  TFGATRN_pt_ids(A68_176 * Ids, A68_INT  Sp)
{ 
A68_65  UFGATRN;  /* avoid structure result */
A68_52  VFGATRN;  /* OPERATORS - mode -> union mode */
A68_85  WFGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_176 * XFGATRN_s;
A68_368  YFGATRN;  /* collateral clause result */
A68_52  ZFGATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  AGGATRN;  /* YIELD */
A68_52  BGGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  CGGATRN;  /* YIELD */
A68_52  FGGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  GGGATRN;  /* YIELD */
A68_85  HGGATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_ids);
 /* line 127: */
 /* line 128: */
{ 
MZAAOSL_setindent( Sp, &UFGATRN );
VCGATRN_print(A_HVEC(WFGATRN,A_UNITE(VFGATRN,mode21,21,UFGATRN),A68_52 ));
 /* line 129: */
XFGATRN_s = Ids;
 /* line 130: */
for ( ;; )
{ 
 /* line 131: */
if ( !((XFGATRN_s!=LAAATRN_nilids)) ) break;
AGGATRN = '\"' ;
YFGATRN.data[0] = A_UNITE(ZFGATRN,mode6,6,AGGATRN);
CGGATRN = (*(&(XFGATRN_s->Id))) ;
YFGATRN.data[1] = A_UNITE(BGGATRN,mode7,7,CGGATRN);
GGGATRN = EGGATRN ;
YFGATRN.data[2] = A_UNITE(FGGATRN,mode7,7,GGGATRN);
VCGATRN_print(A_HISVEC(HGGATRN,YFGATRN,3,A68_52 ));
 /* line 132: */
 /* line 133: */
XFGATRN_s = (*(&(XFGATRN_s->Rest)));
}
 /* line 134: */
} 
A_PROC_EXIT(pt_ids);
return;
} 
#undef NL

A_STATIC A68_VOID  KGGATRN_pt_attr(A68_178  At, A68_INT  Sp)
{ 
A68_65  LGGATRN;  /* avoid structure result */
A68_52  MGGATRN;  /* OPERATORS - mode -> union mode */
A68_85  NGGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_178  OGGATRN;  /* united object - for case conformity */
A68_179 * PGGATRN_an;
A68_368  QGGATRN;  /* collateral clause result */
A68_52  TGGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  UGGATRN;  /* YIELD */
A68_52  VGGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  WGGATRN;  /* YIELD */
A68_52  XGGATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  YGGATRN;  /* YIELD */
A68_85  ZGGATRN;  /* OPERATORS - istruct -> vector */
A68_180 * AHGATRN_ad;
A68_368  BHGATRN;  /* collateral clause result */
A68_52  EHGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FHGATRN;  /* YIELD */
A68_52  GHGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  HHGATRN;  /* YIELD */
A68_52  IHGATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  JHGATRN;  /* YIELD */
A68_85  KHGATRN;  /* OPERATORS - istruct -> vector */
A68_181 * LHGATRN_at;
A68_181 * MHGATRN_as;
A68_52  PHGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QHGATRN;  /* YIELD */
A68_85  RHGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_182 * SHGATRN_ab;
A68_52  VHGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WHGATRN;  /* YIELD */
A68_85  XHGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  AIGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  BIGATRN;  /* YIELD */
A68_85  CIGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_attr);
 /* line 137: */
 /* line 138: */
{ 
MZAAOSL_setindent( Sp, &LGGATRN );
VCGATRN_print(A_HVEC(NGGATRN,A_UNITE(MGGATRN,mode21,21,LGGATRN),A68_52 ));
 /* line 139: */
 /* line 140: */
OGGATRN = At ;
switch ( OGGATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
PGGATRN_an = (OGGATRN.data.mode1);
 /* line 141: */
UGGATRN = SGGATRN ;
QGGATRN.data[0] = A_UNITE(TGGATRN,mode7,7,UGGATRN);
WGGATRN = (*(&(PGGATRN_an->Attrno))) ;
QGGATRN.data[1] = A_UNITE(VGGATRN,mode1,1,WGGATRN);
YGGATRN = ' ' ;
QGGATRN.data[2] = A_UNITE(XGGATRN,mode6,6,YGGATRN);
 /* line 142: */
VCGATRN_print(A_HISVEC(ZGGATRN,QGGATRN,3,A68_52 ));
break;
case 2: /* REF STRUCT(REF MODE26,REF MODE176)  */
AHGATRN_ad = (OGGATRN.data.mode2);
 /* line 143: */
{ 
FHGATRN = DHGATRN ;
BHGATRN.data[0] = A_UNITE(EHGATRN,mode7,7,FHGATRN);
HHGATRN = (*(&(AHGATRN_ad->Classname))) ;
BHGATRN.data[1] = A_UNITE(GHGATRN,mode7,7,HHGATRN);
JHGATRN = ':' ;
BHGATRN.data[2] = A_UNITE(IHGATRN,mode6,6,JHGATRN);
VCGATRN_print(A_HISVEC(KHGATRN,BHGATRN,3,A68_52 ));
 /* line 144: */
 /* line 145: */
 /* line 146: */
TFGATRN_pt_ids((*(&(AHGATRN_ad->Strings))), 0);
} 
break;
case 3: /* REF STRUCT(MODE178,REF MODE181)  */
LHGATRN_at = (OGGATRN.data.mode3);
 /* line 147: */
{ 
MHGATRN_as = LHGATRN_at;
 /* line 148: */
QHGATRN = OHGATRN ;
VCGATRN_print(A_HVEC(RHGATRN,A_UNITE(PHGATRN,mode7,7,QHGATRN),A68_52 ));
 /* line 149: */
for ( ;; )
{ 
 /* line 150: */
if ( !((MHGATRN_as!=DBAATRN_nilattrstr)) ) break;
KGGATRN_pt_attr((*(&(MHGATRN_as->Elem))), 3);
 /* line 151: */
 /* line 152: */
MHGATRN_as = (*(&(MHGATRN_as->Rest)));
}
 /* line 153: */
 /* line 154: */
} 
break;
case 4: /* REF STRUCT(MODE178)  */
SHGATRN_ab = (OGGATRN.data.mode4);
 /* line 155: */
{ 
WHGATRN = UHGATRN ;
VCGATRN_print(A_HVEC(XHGATRN,A_UNITE(VHGATRN,mode7,7,WHGATRN),A68_52 ));
 /* line 156: */
 /* line 157: */
 /* line 158: */
KGGATRN_pt_attr((*(&(SHGATRN_ab->Attr))), 3);
} 
break;
case 5: /* REF STRUCT(INT)  */
 /* line 159: */
 /* line 160: */
BIGATRN = ZHGATRN ;
VCGATRN_print(A_HVEC(CIGATRN,A_UNITE(AIGATRN,mode7,7,BIGATRN),A68_52 ));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(pt_attr);
return;
} 
#undef NL

A_STATIC A68_VOID  FIGATRN_pt_formula(A68_187  Int, A68_INT  Sp)
{ 
A68_65  GIGATRN;  /* avoid structure result */
A68_52  HIGATRN;  /* OPERATORS - mode -> union mode */
A68_85  IIGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_187  JIGATRN;  /* united object - for case conformity */
A68_188 * KIGATRN_i;
A68_366  LIGATRN;  /* collateral clause result */
A68_52  OIGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  PIGATRN;  /* YIELD */
A68_52  QIGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  RIGATRN;  /* YIELD */
A68_52  SIGATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  TIGATRN;  /* YIELD */
A68_52  UIGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VIGATRN;  /* YIELD */
A68_52  WIGATRN;  /* OPERATORS - mode -> union mode */
A68_56  XIGATRN;  /* procedure value */
A68_85  YIGATRN;  /* OPERATORS - istruct -> vector */
A68_189 * ZIGATRN_fc;
A68_368  AJGATRN;  /* collateral clause result */
A68_52  DJGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  EJGATRN;  /* YIELD */
A68_INT  FJGATRN;  /* ADICOPS - MOD */
A68_INT  GJGATRN;  /* ADICOPS - MOD */
A68_INT  HJGATRN;  /* ADICOPS - MOD */
A68_52  KJGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LJGATRN;  /* YIELD */
A68_52  OJGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  PJGATRN;  /* YIELD */
A68_52  SJGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  TJGATRN;  /* YIELD */
A68_52  UJGATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  VJGATRN;  /* YIELD */
A68_52  YJGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZJGATRN;  /* YIELD */
A68_52  CKGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  DKGATRN;  /* YIELD */
A68_52  EKGATRN;  /* OPERATORS - mode -> union mode */
A68_56  FKGATRN;  /* procedure value */
A68_85  GKGATRN;  /* OPERATORS - istruct -> vector */
A68_190 * HKGATRN_fa;
A68_368  IKGATRN;  /* collateral clause result */
A68_52  LKGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  MKGATRN;  /* YIELD */
A68_52  NKGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  OKGATRN;  /* YIELD */
A68_52  PKGATRN;  /* OPERATORS - mode -> union mode */
A68_56  QKGATRN;  /* procedure value */
A68_85  RKGATRN;  /* OPERATORS - istruct -> vector */
A68_191 * SKGATRN_fn;
A68_368  TKGATRN;  /* collateral clause result */
A68_52  WKGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  XKGATRN;  /* YIELD */
A68_52  YKGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  ZKGATRN;  /* YIELD */
A68_52  ALGATRN;  /* OPERATORS - mode -> union mode */
A68_56  BLGATRN;  /* procedure value */
A68_85  CLGATRN;  /* OPERATORS - istruct -> vector */
A68_192 * DLGATRN_fd;
A68_368  ELGATRN;  /* collateral clause result */
A68_52  HLGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ILGATRN;  /* YIELD */
A68_52  JLGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  KLGATRN;  /* YIELD */
A68_52  LLGATRN;  /* OPERATORS - mode -> union mode */
A68_56  MLGATRN;  /* procedure value */
A68_85  NLGATRN;  /* OPERATORS - istruct -> vector */
A68_193 * OLGATRN_fm;
A68_368  PLGATRN;  /* collateral clause result */
A68_52  SLGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  TLGATRN;  /* YIELD */
A68_52  ULGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  VLGATRN;  /* YIELD */
A68_52  WLGATRN;  /* OPERATORS - mode -> union mode */
A68_56  XLGATRN;  /* procedure value */
A68_85  YLGATRN;  /* OPERATORS - istruct -> vector */
A68_194 * ZLGATRN_fc;
A68_363  AMGATRN;  /* collateral clause result */
A68_52  DMGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  EMGATRN;  /* YIELD */
A68_52  FMGATRN;  /* OPERATORS - mode -> union mode */
A68_56  GMGATRN;  /* procedure value */
A68_85  HMGATRN;  /* OPERATORS - istruct -> vector */
A68_195 * IMGATRN_fb;
A68_363  JMGATRN;  /* collateral clause result */
A68_52  MMGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NMGATRN;  /* YIELD */
A68_52  OMGATRN;  /* OPERATORS - mode -> union mode */
A68_56  PMGATRN;  /* procedure value */
A68_85  QMGATRN;  /* OPERATORS - istruct -> vector */
A68_196 * RMGATRN_fm;
A68_368  SMGATRN;  /* collateral clause result */
A68_52  VMGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WMGATRN;  /* YIELD */
A68_52  XMGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  YMGATRN;  /* YIELD */
A68_52  ZMGATRN;  /* OPERATORS - mode -> union mode */
A68_56  ANGATRN;  /* procedure value */
A68_85  BNGATRN;  /* OPERATORS - istruct -> vector */
A68_197 * CNGATRN_fn;
A68_363  DNGATRN;  /* collateral clause result */
A68_52  GNGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  HNGATRN;  /* YIELD */
A68_52  INGATRN;  /* OPERATORS - mode -> union mode */
A68_56  JNGATRN;  /* procedure value */
A68_85  KNGATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_formula);
 /* line 164: */
 /* line 165: */
{ 
MZAAOSL_setindent( Sp, &GIGATRN );
VCGATRN_print(A_HVEC(IIGATRN,A_UNITE(HIGATRN,mode21,21,GIGATRN),A68_52 ));
 /* line 166: */
 /* line 167: */
JIGATRN = Int ;
switch ( JIGATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
KIGATRN_i = (JIGATRN.data.mode1);
 /* line 168: */
PIGATRN = NIGATRN ;
LIGATRN.data[0] = A_UNITE(OIGATRN,mode7,7,PIGATRN);
RIGATRN = (*(&(KIGATRN_i->Int))) ;
LIGATRN.data[1] = A_UNITE(QIGATRN,mode1,1,RIGATRN);
TIGATRN = ' ' ;
LIGATRN.data[2] = A_UNITE(SIGATRN,mode6,6,TIGATRN);
VIGATRN = (*(&(KIGATRN_i->Text))) ;
LIGATRN.data[3] = A_UNITE(UIGATRN,mode7,7,VIGATRN);
XIGATRN.fn.fn_global = LRAAOSL_newline;
XIGATRN.nonlocals = A68_NIL;
LIGATRN.data[4] = A_UNITE(WIGATRN,mode12,12,XIGATRN);
 /* line 169: */
VCGATRN_print(A_HISVEC(YIGATRN,LIGATRN,5,A68_52 ));
break;
case 2: /* REF STRUCT(INT,MODE187,MODE187)  */
ZIGATRN_fc = (JIGATRN.data.mode2);
 /* line 170: */
{ 
 /* line 171: */
EJGATRN = CJGATRN ;
AJGATRN.data[0] = A_UNITE(DJGATRN,mode7,7,EJGATRN);
GJGATRN = (*(&(ZIGATRN_fc->Sort))) ;
HJGATRN = 8 ;
switch ( A_MOD(GJGATRN,HJGATRN,FJGATRN) )
{ 
case 1: 
LJGATRN = JJGATRN ;
AJGATRN.data[1] = A_UNITE(KJGATRN,mode7,7,LJGATRN);
break;
case 2: 
PJGATRN = NJGATRN ;
AJGATRN.data[1] = A_UNITE(OJGATRN,mode7,7,PJGATRN);
break;
case 3: 
TJGATRN = RJGATRN ;
AJGATRN.data[1] = A_UNITE(SJGATRN,mode7,7,TJGATRN);
break;
case 4: 
VJGATRN = '=' ;
AJGATRN.data[1] = A_UNITE(UJGATRN,mode6,6,VJGATRN);
break;
case 5: 
ZJGATRN = XJGATRN ;
AJGATRN.data[1] = A_UNITE(YJGATRN,mode7,7,ZJGATRN);
break;
default: 
DKGATRN = BKGATRN ;
AJGATRN.data[1] = A_UNITE(CKGATRN,mode7,7,DKGATRN);
break;
} 
FKGATRN.fn.fn_global = LRAAOSL_newline;
FKGATRN.nonlocals = A68_NIL;
AJGATRN.data[2] = A_UNITE(EKGATRN,mode12,12,FKGATRN);
VCGATRN_print(A_HISVEC(GKGATRN,AJGATRN,3,A68_52 ));
 /* line 172: */
FIGATRN_pt_formula((*(&(ZIGATRN_fc->Test))), (Sp+3));
 /* line 173: */
 /* line 174: */
 /* line 175: */
FIGATRN_pt_formula((*(&(ZIGATRN_fc->Standard))), (Sp+3));
} 
break;
case 3: /* REF STRUCT(INT)  */
HKGATRN_fa = (JIGATRN.data.mode3);
 /* line 176: */
MKGATRN = KKGATRN ;
IKGATRN.data[0] = A_UNITE(LKGATRN,mode7,7,MKGATRN);
OKGATRN = (*(&(HKGATRN_fa->Nameno))) ;
IKGATRN.data[1] = A_UNITE(NKGATRN,mode1,1,OKGATRN);
QKGATRN.fn.fn_global = LRAAOSL_newline;
QKGATRN.nonlocals = A68_NIL;
IKGATRN.data[2] = A_UNITE(PKGATRN,mode12,12,QKGATRN);
 /* line 177: */
VCGATRN_print(A_HISVEC(RKGATRN,IKGATRN,3,A68_52 ));
break;
case 4: /* REF STRUCT(INT)  */
SKGATRN_fn = (JIGATRN.data.mode4);
 /* line 178: */
XKGATRN = VKGATRN ;
TKGATRN.data[0] = A_UNITE(WKGATRN,mode7,7,XKGATRN);
ZKGATRN = (*(&(SKGATRN_fn->Intno))) ;
TKGATRN.data[1] = A_UNITE(YKGATRN,mode1,1,ZKGATRN);
BLGATRN.fn.fn_global = LRAAOSL_newline;
BLGATRN.nonlocals = A68_NIL;
TKGATRN.data[2] = A_UNITE(ALGATRN,mode12,12,BLGATRN);
 /* line 179: */
VCGATRN_print(A_HISVEC(CLGATRN,TKGATRN,3,A68_52 ));
break;
case 5: /* REF STRUCT(MODE187,INT,MODE187)  */
DLGATRN_fd = (JIGATRN.data.mode5);
 /* line 180: */
{ 
ILGATRN = GLGATRN ;
ELGATRN.data[0] = A_UNITE(HLGATRN,mode7,7,ILGATRN);
KLGATRN = (*(&(DLGATRN_fd->Sort))) ;
ELGATRN.data[1] = A_UNITE(JLGATRN,mode1,1,KLGATRN);
MLGATRN.fn.fn_global = LRAAOSL_newline;
MLGATRN.nonlocals = A68_NIL;
ELGATRN.data[2] = A_UNITE(LLGATRN,mode12,12,MLGATRN);
VCGATRN_print(A_HISVEC(NLGATRN,ELGATRN,3,A68_52 ));
 /* line 181: */
FIGATRN_pt_formula((*(&(DLGATRN_fd->Left))), (Sp+3));
 /* line 182: */
 /* line 183: */
 /* line 184: */
FIGATRN_pt_formula((*(&(DLGATRN_fd->Right))), (Sp+3));
} 
break;
case 6: /* REF STRUCT(INT,MODE187)  */
OLGATRN_fm = (JIGATRN.data.mode6);
 /* line 185: */
{ 
TLGATRN = RLGATRN ;
PLGATRN.data[0] = A_UNITE(SLGATRN,mode7,7,TLGATRN);
VLGATRN = (*(&(OLGATRN_fm->Sort))) ;
PLGATRN.data[1] = A_UNITE(ULGATRN,mode1,1,VLGATRN);
XLGATRN.fn.fn_global = LRAAOSL_newline;
XLGATRN.nonlocals = A68_NIL;
PLGATRN.data[2] = A_UNITE(WLGATRN,mode12,12,XLGATRN);
VCGATRN_print(A_HISVEC(YLGATRN,PLGATRN,3,A68_52 ));
 /* line 186: */
 /* line 187: */
 /* line 188: */
FIGATRN_pt_formula((*(&(OLGATRN_fm->Right))), (Sp+3));
} 
break;
case 7: /* REF STRUCT(MODE187,MODE187,MODE187)  */
ZLGATRN_fc = (JIGATRN.data.mode7);
 /* line 189: */
{ 
EMGATRN = CMGATRN ;
AMGATRN.data[0] = A_UNITE(DMGATRN,mode7,7,EMGATRN);
GMGATRN.fn.fn_global = LRAAOSL_newline;
GMGATRN.nonlocals = A68_NIL;
AMGATRN.data[1] = A_UNITE(FMGATRN,mode12,12,GMGATRN);
VCGATRN_print(A_HISVEC(HMGATRN,AMGATRN,2,A68_52 ));
 /* line 190: */
FIGATRN_pt_formula((*(&(ZLGATRN_fc->Cond))), (Sp+3));
 /* line 191: */
FIGATRN_pt_formula((*(&(ZLGATRN_fc->True))), (Sp+3));
 /* line 192: */
 /* line 193: */
 /* line 194: */
FIGATRN_pt_formula((*(&(ZLGATRN_fc->False))), (Sp+3));
} 
break;
case 8: /* REF STRUCT(MODE187)  */
IMGATRN_fb = (JIGATRN.data.mode8);
 /* line 195: */
{ 
NMGATRN = LMGATRN ;
JMGATRN.data[0] = A_UNITE(MMGATRN,mode7,7,NMGATRN);
PMGATRN.fn.fn_global = LRAAOSL_newline;
PMGATRN.nonlocals = A68_NIL;
JMGATRN.data[1] = A_UNITE(OMGATRN,mode12,12,PMGATRN);
VCGATRN_print(A_HISVEC(QMGATRN,JMGATRN,2,A68_52 ));
 /* line 196: */
 /* line 197: */
 /* line 198: */
FIGATRN_pt_formula((*(&(IMGATRN_fb->Formula))), (Sp+3));
} 
break;
case 9: /* REF STRUCT(INT)  */
RMGATRN_fm = (JIGATRN.data.mode9);
 /* line 199: */
WMGATRN = UMGATRN ;
SMGATRN.data[0] = A_UNITE(VMGATRN,mode7,7,WMGATRN);
YMGATRN = (*(&(RMGATRN_fm->Macparno))) ;
SMGATRN.data[1] = A_UNITE(XMGATRN,mode1,1,YMGATRN);
ANGATRN.fn.fn_global = LRAAOSL_newline;
ANGATRN.nonlocals = A68_NIL;
SMGATRN.data[2] = A_UNITE(ZMGATRN,mode12,12,ANGATRN);
 /* line 200: */
VCGATRN_print(A_HISVEC(BNGATRN,SMGATRN,3,A68_52 ));
break;
case 10: /* REF STRUCT(INT)  */
CNGATRN_fn = (JIGATRN.data.mode10);
 /* line 201: */
HNGATRN = FNGATRN ;
DNGATRN.data[0] = A_UNITE(GNGATRN,mode7,7,HNGATRN);
JNGATRN.fn.fn_global = LRAAOSL_newline;
JNGATRN.nonlocals = A68_NIL;
DNGATRN.data[1] = A_UNITE(INGATRN,mode12,12,JNGATRN);
 /* line 202: */
VCGATRN_print(A_HISVEC(KNGATRN,DNGATRN,2,A68_52 ));
break;
default: 
 /* line 203: */
 /* line 204: */
NKDAOST_sysfault(MNGATRN);
break;
} 
} 
A_PROC_EXIT(pt_formula);
return;
} 
#undef NL

A_STATIC A68_VOID  PNGATRN_pt_range(A68_202  Rg, A68_INT  Sp)
{ 
A68_368  QNGATRN;  /* collateral clause result */
A68_65  RNGATRN;  /* avoid structure result */
A68_52  SNGATRN;  /* OPERATORS - mode -> union mode */
A68_52  VNGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WNGATRN;  /* YIELD */
A68_52  XNGATRN;  /* OPERATORS - mode -> union mode */
A68_56  YNGATRN;  /* procedure value */
A68_85  ZNGATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_range);
 /* line 207: */
 /* line 208: */
{ 
MZAAOSL_setindent( Sp, &RNGATRN );
QNGATRN.data[0] = A_UNITE(SNGATRN,mode21,21,RNGATRN);
WNGATRN = UNGATRN ;
QNGATRN.data[1] = A_UNITE(VNGATRN,mode7,7,WNGATRN);
YNGATRN.fn.fn_global = LRAAOSL_newline;
YNGATRN.nonlocals = A68_NIL;
QNGATRN.data[2] = A_UNITE(XNGATRN,mode12,12,YNGATRN);
VCGATRN_print(A_HISVEC(ZNGATRN,QNGATRN,3,A68_52 ));
 /* line 209: */
FIGATRN_pt_formula(Rg.Lwb, (Sp+3));
 /* line 210: */
 /* line 211: */
FIGATRN_pt_formula(Rg.Upb, (Sp+3));
} 
A_PROC_EXIT(pt_range);
return;
} 
#undef NL

A_STATIC A68_VOID  COGATRN_pt_formularange(A68_201  Fg, A68_INT  Sp)
{ 
A68_201  DOGATRN;  /* united object - for case conformity */
A68_202  EOGATRN_rg;
A68_187  FOGATRN_f;
A_PROC_ENTRY(pt_formularange);
 /* line 214: */
 /* line 215: */
DOGATRN = Fg ;
switch ( DOGATRN.mode )
{ 
case 11: /* STRUCT(MODE187,MODE187)  */
EOGATRN_rg = (DOGATRN.data.mode11);
 /* line 216: */
PNGATRN_pt_range(EOGATRN_rg, Sp);
break;
case 1: /* REF STRUCT(INT,REF MODE26)  */
case 2: /* REF STRUCT(INT,MODE187,MODE187)  */
case 3: /* REF STRUCT(INT)  */
case 4: /* REF STRUCT(INT)  */
case 5: /* REF STRUCT(MODE187,INT,MODE187)  */
case 6: /* REF STRUCT(INT,MODE187)  */
case 7: /* REF STRUCT(MODE187,MODE187,MODE187)  */
case 8: /* REF STRUCT(MODE187)  */
case 9: /* REF STRUCT(INT)  */
case 10: /* REF STRUCT(INT)  */
A_UNCPY(FOGATRN_f,DOGATRN);
 /* line 217: */
FIGATRN_pt_formula(FOGATRN_f, Sp);
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(pt_formularange);
return;
} 
#undef NL

A_STATIC A68_VOID  IOGATRN_pt_formulas(A68_199 * Fs, A68_INT  Sp)
{ 
A68_199 * JOGATRN_formulas;
A_PROC_ENTRY(pt_formulas);
 /* line 220: */
 /* line 221: */
{ 
JOGATRN_formulas = Fs;
 /* line 222: */
for ( ;; )
{ 
 /* line 223: */
if ( !((JOGATRN_formulas!=BBAATRN_nilformulas)) ) break;
FIGATRN_pt_formula((*(&(JOGATRN_formulas->Formula))), Sp);
 /* line 224: */
 /* line 225: */
JOGATRN_formulas = (*(&(JOGATRN_formulas->Rest)));
}
 /* line 226: */
} 
A_PROC_EXIT(pt_formulas);
return;
} 
#undef NL

A_STATIC A68_VOID  MOGATRN_pt_type(A68_203  Type, A68_INT  Sp)
{ 
A68_206 * NOGATRN_tstr;
A68_65  OOGATRN;  /* avoid structure result */
A68_52  POGATRN;  /* OPERATORS - mode -> union mode */
A68_85  QOGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_203  ROGATRN;  /* united object - for case conformity */
A68_204 * SOGATRN_tn;
A68_368  TOGATRN;  /* collateral clause result */
A68_52  WOGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  XOGATRN;  /* YIELD */
A68_52  YOGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  ZOGATRN;  /* YIELD */
A68_52  APGATRN;  /* OPERATORS - mode -> union mode */
A68_56  BPGATRN;  /* procedure value */
A68_85  CPGATRN;  /* OPERATORS - istruct -> vector */
A68_205 * DPGATRN_tr;
A68_363  EPGATRN;  /* collateral clause result */
A68_52  HPGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  IPGATRN;  /* YIELD */
A68_52  JPGATRN;  /* OPERATORS - mode -> union mode */
A68_56  KPGATRN;  /* procedure value */
A68_85  LPGATRN;  /* OPERATORS - istruct -> vector */
A68_206 * MPGATRN_ts;
A68_363  NPGATRN;  /* collateral clause result */
A68_52  QPGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  RPGATRN;  /* YIELD */
A68_52  SPGATRN;  /* OPERATORS - mode -> union mode */
A68_56  TPGATRN;  /* procedure value */
A68_85  UPGATRN;  /* OPERATORS - istruct -> vector */
A68_207 * VPGATRN_tf;
A68_363  WPGATRN;  /* collateral clause result */
A68_52  ZPGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  AQGATRN;  /* YIELD */
A68_52  BQGATRN;  /* OPERATORS - mode -> union mode */
A68_56  CQGATRN;  /* procedure value */
A68_85  DQGATRN;  /* OPERATORS - istruct -> vector */
A68_208 * EQGATRN_tb;
A68_363  FQGATRN;  /* collateral clause result */
A68_52  IQGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  JQGATRN;  /* YIELD */
A68_52  KQGATRN;  /* OPERATORS - mode -> union mode */
A68_56  LQGATRN;  /* procedure value */
A68_85  MQGATRN;  /* OPERATORS - istruct -> vector */
A68_209 * NQGATRN_ts;
A68_363  OQGATRN;  /* collateral clause result */
A68_52  RQGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SQGATRN;  /* YIELD */
A68_52  TQGATRN;  /* OPERATORS - mode -> union mode */
A68_56  UQGATRN;  /* procedure value */
A68_85  VQGATRN;  /* OPERATORS - istruct -> vector */
A68_196 * WQGATRN_tm;
A68_368  XQGATRN;  /* collateral clause result */
A68_52  ARGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  BRGATRN;  /* YIELD */
A68_52  CRGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  DRGATRN;  /* YIELD */
A68_52  ERGATRN;  /* OPERATORS - mode -> union mode */
A68_56  FRGATRN;  /* procedure value */
A68_85  GRGATRN;  /* OPERATORS - istruct -> vector */
A68_211 * HRGATRN_tn;
A68_363  IRGATRN;  /* collateral clause result */
A68_52  LRGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  MRGATRN;  /* YIELD */
A68_52  NRGATRN;  /* OPERATORS - mode -> union mode */
A68_56  ORGATRN;  /* procedure value */
A68_85  PRGATRN;  /* OPERATORS - istruct -> vector */
A68_210 * QRGATRN_tv;
A68_363  RRGATRN;  /* collateral clause result */
A68_52  URGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VRGATRN;  /* YIELD */
A68_52  WRGATRN;  /* OPERATORS - mode -> union mode */
A68_56  XRGATRN;  /* procedure value */
A68_85  YRGATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_type);
 /* line 229: */
 /* line 230: */
{ 
 /* line 231: */
MZAAOSL_setindent( Sp, &OOGATRN );
VCGATRN_print(A_HVEC(QOGATRN,A_UNITE(POGATRN,mode21,21,OOGATRN),A68_52 ));
 /* line 232: */
 /* line 233: */
ROGATRN = Type ;
switch ( ROGATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
SOGATRN_tn = (ROGATRN.data.mode1);
 /* line 234: */
XOGATRN = VOGATRN ;
TOGATRN.data[0] = A_UNITE(WOGATRN,mode7,7,XOGATRN);
ZOGATRN = (*(&(SOGATRN_tn->Typeno))) ;
TOGATRN.data[1] = A_UNITE(YOGATRN,mode1,1,ZOGATRN);
BPGATRN.fn.fn_global = LRAAOSL_newline;
BPGATRN.nonlocals = A68_NIL;
TOGATRN.data[2] = A_UNITE(APGATRN,mode12,12,BPGATRN);
 /* line 235: */
VCGATRN_print(A_HISVEC(CPGATRN,TOGATRN,3,A68_52 ));
break;
case 2: /* REF STRUCT(MODE187,MODE203)  */
DPGATRN_tr = (ROGATRN.data.mode2);
 /* line 236: */
{ 
IPGATRN = GPGATRN ;
EPGATRN.data[0] = A_UNITE(HPGATRN,mode7,7,IPGATRN);
KPGATRN.fn.fn_global = LRAAOSL_newline;
KPGATRN.nonlocals = A68_NIL;
EPGATRN.data[1] = A_UNITE(JPGATRN,mode12,12,KPGATRN);
VCGATRN_print(A_HISVEC(LPGATRN,EPGATRN,2,A68_52 ));
 /* line 237: */
FIGATRN_pt_formula((*(&(DPGATRN_tr->Size))), (Sp+3));
 /* line 238: */
 /* line 239: */
 /* line 240: */
MOGATRN_pt_type((*(&(DPGATRN_tr->Elem))), (Sp+3));
} 
break;
case 3: /* REF STRUCT(MODE203,REF MODE206)  */
MPGATRN_ts = (ROGATRN.data.mode3);
 /* line 241: */
{ 
RPGATRN = PPGATRN ;
NPGATRN.data[0] = A_UNITE(QPGATRN,mode7,7,RPGATRN);
TPGATRN.fn.fn_global = LRAAOSL_newline;
TPGATRN.nonlocals = A68_NIL;
NPGATRN.data[1] = A_UNITE(SPGATRN,mode12,12,TPGATRN);
VCGATRN_print(A_HISVEC(UPGATRN,NPGATRN,2,A68_52 ));
 /* line 242: */
NOGATRN_tstr = MPGATRN_ts;
 /* line 243: */
for ( ;; )
{ 
 /* line 244: */
if ( !((NOGATRN_tstr!=GAAATRN_niltstr)) ) break;
MOGATRN_pt_type((*(&(NOGATRN_tstr->Elem))), (Sp+3));
 /* line 245: */
 /* line 246: */
NOGATRN_tstr = (*(&(NOGATRN_tstr->Rest)));
}
 /* line 247: */
 /* line 248: */
} 
break;
case 4: /* REF STRUCT(MODE203,MODE203)  */
VPGATRN_tf = (ROGATRN.data.mode4);
 /* line 249: */
{ 
AQGATRN = YPGATRN ;
WPGATRN.data[0] = A_UNITE(ZPGATRN,mode7,7,AQGATRN);
CQGATRN.fn.fn_global = LRAAOSL_newline;
CQGATRN.nonlocals = A68_NIL;
WPGATRN.data[1] = A_UNITE(BQGATRN,mode12,12,CQGATRN);
VCGATRN_print(A_HISVEC(DQGATRN,WPGATRN,2,A68_52 ));
 /* line 250: */
MOGATRN_pt_type((*(&(VPGATRN_tf->From))), (Sp+3));
 /* line 251: */
 /* line 252: */
 /* line 253: */
MOGATRN_pt_type((*(&(VPGATRN_tf->To))), (Sp+3));
} 
break;
case 5: /* REF STRUCT(MODE203)  */
EQGATRN_tb = (ROGATRN.data.mode5);
 /* line 254: */
{ 
JQGATRN = HQGATRN ;
FQGATRN.data[0] = A_UNITE(IQGATRN,mode7,7,JQGATRN);
LQGATRN.fn.fn_global = LRAAOSL_newline;
LQGATRN.nonlocals = A68_NIL;
FQGATRN.data[1] = A_UNITE(KQGATRN,mode12,12,LQGATRN);
VCGATRN_print(A_HISVEC(MQGATRN,FQGATRN,2,A68_52 ));
 /* line 255: */
 /* line 256: */
 /* line 257: */
MOGATRN_pt_type((*(&(EQGATRN_tb->Type))), (Sp+3));
} 
break;
case 6: /* REF STRUCT(MODE187,MODE203)  */
NQGATRN_ts = (ROGATRN.data.mode6);
 /* line 258: */
{ 
SQGATRN = QQGATRN ;
OQGATRN.data[0] = A_UNITE(RQGATRN,mode7,7,SQGATRN);
UQGATRN.fn.fn_global = LRAAOSL_newline;
UQGATRN.nonlocals = A68_NIL;
OQGATRN.data[1] = A_UNITE(TQGATRN,mode12,12,UQGATRN);
VCGATRN_print(A_HISVEC(VQGATRN,OQGATRN,2,A68_52 ));
 /* line 259: */
FIGATRN_pt_formula((*(&(NQGATRN_ts->Size))), (Sp+3));
 /* line 260: */
 /* line 261: */
 /* line 262: */
MOGATRN_pt_type((*(&(NQGATRN_ts->Char))), (Sp+3));
} 
break;
case 8: /* REF STRUCT(INT)  */
WQGATRN_tm = (ROGATRN.data.mode8);
 /* line 263: */
BRGATRN = ZQGATRN ;
XQGATRN.data[0] = A_UNITE(ARGATRN,mode7,7,BRGATRN);
DRGATRN = (*(&(WQGATRN_tm->Macparno))) ;
XQGATRN.data[1] = A_UNITE(CRGATRN,mode1,1,DRGATRN);
FRGATRN.fn.fn_global = LRAAOSL_newline;
FRGATRN.nonlocals = A68_NIL;
XQGATRN.data[2] = A_UNITE(ERGATRN,mode12,12,FRGATRN);
 /* line 264: */
VCGATRN_print(A_HISVEC(GRGATRN,XQGATRN,3,A68_52 ));
break;
case 9: /* REF STRUCT(INT)  */
HRGATRN_tn = (ROGATRN.data.mode9);
 /* line 265: */
MRGATRN = KRGATRN ;
IRGATRN.data[0] = A_UNITE(LRGATRN,mode7,7,MRGATRN);
ORGATRN.fn.fn_global = LRAAOSL_newline;
ORGATRN.nonlocals = A68_NIL;
IRGATRN.data[1] = A_UNITE(NRGATRN,mode12,12,ORGATRN);
 /* line 266: */
VCGATRN_print(A_HISVEC(PRGATRN,IRGATRN,2,A68_52 ));
break;
case 7: /* REF STRUCT(INT)  */
QRGATRN_tv = (ROGATRN.data.mode7);
 /* line 267: */
VRGATRN = TRGATRN ;
RRGATRN.data[0] = A_UNITE(URGATRN,mode7,7,VRGATRN);
XRGATRN.fn.fn_global = LRAAOSL_newline;
XRGATRN.nonlocals = A68_NIL;
RRGATRN.data[1] = A_UNITE(WRGATRN,mode12,12,XRGATRN);
 /* line 268: */
VCGATRN_print(A_HISVEC(YRGATRN,RRGATRN,2,A68_52 ));
break;
default: 
 /* line 269: */
 /* line 270: */
NKDAOST_sysfault(ASGATRN);
break;
} 
} 
A_PROC_EXIT(pt_type);
return;
} 
#undef NL

A_STATIC A68_VOID  ESGATRN_pt_names(A68_266 * Ns, A68_INT  Sp)
{ 
A68_266 * FSGATRN_ids;
A68_363  GSGATRN;  /* collateral clause result */
A68_65  HSGATRN;  /* avoid structure result */
A68_52  ISGATRN;  /* OPERATORS - mode -> union mode */
A68_52  LSGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  MSGATRN;  /* YIELD */
A68_85  NSGATRN;  /* OPERATORS - istruct -> vector */
A68_363  OSGATRN;  /* collateral clause result */
A68_52  PSGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  QSGATRN;  /* YIELD */
A68_52  RSGATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  SSGATRN;  /* YIELD */
A68_85  TSGATRN;  /* OPERATORS - istruct -> vector */
A68_52  USGATRN;  /* OPERATORS - mode -> union mode */
A68_56  VSGATRN;  /* procedure value */
A68_85  WSGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_names);
 /* line 276: */
 /* line 277: */
{ 
FSGATRN_ids = Ns;
 /* line 278: */
MZAAOSL_setindent( Sp, &HSGATRN );
GSGATRN.data[0] = A_UNITE(ISGATRN,mode21,21,HSGATRN);
MSGATRN = KSGATRN ;
GSGATRN.data[1] = A_UNITE(LSGATRN,mode7,7,MSGATRN);
VCGATRN_print(A_HISVEC(NSGATRN,GSGATRN,2,A68_52 ));
 /* line 279: */
for ( ;; )
{ 
 /* line 280: */
if ( !((FSGATRN_ids!=NAAATRN_nilnames)) ) break;
QSGATRN = (*(&(FSGATRN_ids->Nameno))) ;
OSGATRN.data[0] = A_UNITE(PSGATRN,mode1,1,QSGATRN);
SSGATRN = ' ' ;
OSGATRN.data[1] = A_UNITE(RSGATRN,mode6,6,SSGATRN);
VCGATRN_print(A_HISVEC(TSGATRN,OSGATRN,2,A68_52 ));
 /* line 281: */
 /* line 282: */
FSGATRN_ids = (*(&(FSGATRN_ids->Rest)));
}
 /* line 283: */
 /* line 284: */
VSGATRN.fn.fn_global = LRAAOSL_newline;
VSGATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(WSGATRN,A_UNITE(USGATRN,mode12,12,VSGATRN),A68_52 ));
} 
A_PROC_EXIT(pt_names);
return;
} 
#undef NL

A_STATIC A68_VOID  BTGATRN_pt_unit(A68_225  Unit, A68_INT  Sp)
{ 
A68_65  EWGATRN;  /* avoid structure result */
A68_52  FWGATRN;  /* OPERATORS - mode -> union mode */
A68_85  GWGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_225  HWGATRN;  /* united object - for case conformity */
A68_219 * IWGATRN_cn;
A68_368  JWGATRN;  /* collateral clause result */
A68_52  MWGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NWGATRN;  /* YIELD */
A68_52  OWGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  PWGATRN;  /* YIELD */
A68_52  QWGATRN;  /* OPERATORS - mode -> union mode */
A68_56  RWGATRN;  /* procedure value */
A68_85  SWGATRN;  /* OPERATORS - istruct -> vector */
A68_220 * TWGATRN_cp;
A68_366  UWGATRN;  /* collateral clause result */
A68_52  XWGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  YWGATRN;  /* YIELD */
A68_52  ZWGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  AXGATRN;  /* YIELD */
A68_52  BXGATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  CXGATRN;  /* YIELD */
A68_52  DXGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  EXGATRN;  /* YIELD */
A68_52  FXGATRN;  /* OPERATORS - mode -> union mode */
A68_56  GXGATRN;  /* procedure value */
A68_85  HXGATRN;  /* OPERATORS - istruct -> vector */
A68_221 * IXGATRN_ci;
A68_368  JXGATRN;  /* collateral clause result */
A68_52  MXGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NXGATRN;  /* YIELD */
A68_52  OXGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  PXGATRN;  /* YIELD */
A68_52  QXGATRN;  /* OPERATORS - mode -> union mode */
A68_56  RXGATRN;  /* procedure value */
A68_85  SXGATRN;  /* OPERATORS - istruct -> vector */
A68_208 * TXGATRN_ct;
A68_363  UXGATRN;  /* collateral clause result */
A68_52  XXGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  YXGATRN;  /* YIELD */
A68_52  ZXGATRN;  /* OPERATORS - mode -> union mode */
A68_56  AYGATRN;  /* procedure value */
A68_85  BYGATRN;  /* OPERATORS - istruct -> vector */
A68_222 * CYGATRN_cr;
A68_368  DYGATRN;  /* collateral clause result */
A68_52  GYGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  HYGATRN;  /* YIELD */
A68_52  IYGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  JYGATRN;  /* YIELD */
A68_52  KYGATRN;  /* OPERATORS - mode -> union mode */
A68_56  LYGATRN;  /* procedure value */
A68_85  MYGATRN;  /* OPERATORS - istruct -> vector */
A68_228 * NYGATRN_cpr;
A68_387  OYGATRN;  /* collateral clause result */
A68_52  RYGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SYGATRN;  /* YIELD */
A68_52  TYGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  UYGATRN;  /* YIELD */
A68_52  VYGATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  WYGATRN;  /* YIELD */
A68_52  XYGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  YYGATRN;  /* YIELD */
A68_52  ZYGATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  AZGATRN;  /* YIELD */
A68_52  BZGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  CZGATRN;  /* YIELD */
A68_52  DZGATRN;  /* OPERATORS - mode -> union mode */
A68_56  EZGATRN;  /* procedure value */
A68_85  FZGATRN;  /* OPERATORS - istruct -> vector */
A68_223 * GZGATRN_cq;
A68_363  HZGATRN;  /* collateral clause result */
A68_52  KZGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LZGATRN;  /* YIELD */
A68_52  MZGATRN;  /* OPERATORS - mode -> union mode */
A68_56  NZGATRN;  /* procedure value */
A68_85  OZGATRN;  /* OPERATORS - istruct -> vector */
A68_226 * PZGATRN_cq;
A68_368  QZGATRN;  /* collateral clause result */
A68_52  TZGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  UZGATRN;  /* YIELD */
A68_52  VZGATRN;  /* OPERATORS - mode -> union mode */
A68_INT  WZGATRN;  /* YIELD */
A68_52  ZZGATRN;  /* OPERATORS - mode -> union mode */
A68_VC  AAHATRN;  /* YIELD */
A68_85  BAHATRN;  /* OPERATORS - istruct -> vector */
A68_INT  CAHATRN_i;
A68_INT  DAHATRN;  /* to part of loop */
A68_363  EAHATRN;  /* collateral clause result */
A68_32  FAHATRN;  /* OPERATORS - simple index */
A68_52  GAHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  HAHATRN;  /* YIELD */
A68_52  IAHATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  JAHATRN;  /* YIELD */
A68_85  KAHATRN;  /* OPERATORS - istruct -> vector */
A68_52  LAHATRN;  /* OPERATORS - mode -> union mode */
A68_56  MAHATRN;  /* procedure value */
A68_85  NAHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_227 * OAHATRN_cv;
A68_363  PAHATRN;  /* collateral clause result */
A68_52  SAHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  TAHATRN;  /* YIELD */
A68_52  UAHATRN;  /* OPERATORS - mode -> union mode */
A68_56  VAHATRN;  /* procedure value */
A68_85  WAHATRN;  /* OPERATORS - istruct -> vector */
A68_229 * XAHATRN_ua;
A68_363  YAHATRN;  /* collateral clause result */
A68_52  BBHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  CBHATRN;  /* YIELD */
A68_52  DBHATRN;  /* OPERATORS - mode -> union mode */
A68_56  EBHATRN;  /* procedure value */
A68_85  FBHATRN;  /* OPERATORS - istruct -> vector */
A68_229 * GBHATRN_ualts;
A68_230 * HBHATRN_un;
A68_52  KBHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LBHATRN;  /* YIELD */
A68_85  MBHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  PBHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QBHATRN;  /* YIELD */
A68_85  RBHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  UBHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VBHATRN;  /* YIELD */
A68_85  WBHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  ZBHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ACHATRN;  /* YIELD */
A68_85  BCHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  ECHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FCHATRN;  /* YIELD */
A68_85  GCHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_363  HCHATRN;  /* collateral clause result */
A68_52  ICHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  JCHATRN;  /* YIELD */
A68_52  KCHATRN;  /* OPERATORS - mode -> union mode */
A68_56  LCHATRN;  /* procedure value */
A68_85  MCHATRN;  /* OPERATORS - istruct -> vector */
A68_238 * NCHATRN_ud;
A68_363  OCHATRN;  /* collateral clause result */
A68_52  RCHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SCHATRN;  /* YIELD */
A68_52  TCHATRN;  /* OPERATORS - mode -> union mode */
A68_56  UCHATRN;  /* procedure value */
A68_85  VCHATRN;  /* OPERATORS - istruct -> vector */
A68_232 * WCHATRN_ua;
A68_366  XCHATRN;  /* collateral clause result */
A68_52  ADHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  BDHATRN;  /* YIELD */
A68_52  CDHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  DDHATRN;  /* YIELD */
A68_52  EDHATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  FDHATRN;  /* YIELD */
A68_52  GDHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  HDHATRN;  /* YIELD */
A68_52  IDHATRN;  /* OPERATORS - mode -> union mode */
A68_56  JDHATRN;  /* procedure value */
A68_85  KDHATRN;  /* OPERATORS - istruct -> vector */
A68_233 * LDHATRN_ue;
A68_366  MDHATRN;  /* collateral clause result */
A68_52  PDHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QDHATRN;  /* YIELD */
A68_52  RDHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  SDHATRN;  /* YIELD */
A68_52  TDHATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  UDHATRN;  /* YIELD */
A68_52  VDHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  WDHATRN;  /* YIELD */
A68_52  XDHATRN;  /* OPERATORS - mode -> union mode */
A68_56  YDHATRN;  /* procedure value */
A68_85  ZDHATRN;  /* OPERATORS - istruct -> vector */
A68_234 * AEHATRN_uti;
A68_366  BEHATRN;  /* collateral clause result */
A68_52  EEHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FEHATRN;  /* YIELD */
A68_52  GEHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  HEHATRN;  /* YIELD */
A68_52  IEHATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  JEHATRN;  /* YIELD */
A68_52  KEHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  LEHATRN;  /* YIELD */
A68_52  MEHATRN;  /* OPERATORS - mode -> union mode */
A68_56  NEHATRN;  /* procedure value */
A68_85  OEHATRN;  /* OPERATORS - istruct -> vector */
A68_235 * PEHATRN_ui;
A68_363  QEHATRN;  /* collateral clause result */
A68_52  TEHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  UEHATRN;  /* YIELD */
A68_52  VEHATRN;  /* OPERATORS - mode -> union mode */
A68_56  WEHATRN;  /* procedure value */
A68_85  XEHATRN;  /* OPERATORS - istruct -> vector */
A68_236 * YEHATRN_ut;
A68_363  ZEHATRN;  /* collateral clause result */
A68_52  CFHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  DFHATRN;  /* YIELD */
A68_52  EFHATRN;  /* OPERATORS - mode -> union mode */
A68_56  FFHATRN;  /* procedure value */
A68_85  GFHATRN;  /* OPERATORS - istruct -> vector */
A68_237 * HFHATRN_ud;
A68_363  IFHATRN;  /* collateral clause result */
A68_52  LFHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  MFHATRN;  /* YIELD */
A68_52  NFHATRN;  /* OPERATORS - mode -> union mode */
A68_56  OFHATRN;  /* procedure value */
A68_85  PFHATRN;  /* OPERATORS - istruct -> vector */
A68_239 * QFHATRN_ur;
A68_363  RFHATRN;  /* collateral clause result */
A68_52  UFHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VFHATRN;  /* YIELD */
A68_52  WFHATRN;  /* OPERATORS - mode -> union mode */
A68_56  XFHATRN;  /* procedure value */
A68_85  YFHATRN;  /* OPERATORS - istruct -> vector */
A68_240 * ZFHATRN_us;
A68_240 * AGHATRN_ustr;
A68_363  BGHATRN;  /* collateral clause result */
A68_52  EGHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FGHATRN;  /* YIELD */
A68_52  GGHATRN;  /* OPERATORS - mode -> union mode */
A68_56  HGHATRN;  /* procedure value */
A68_85  IGHATRN;  /* OPERATORS - istruct -> vector */
A68_241 * JGHATRN_uc;
A68_361  KGHATRN;  /* collateral clause result */
A68_52  NGHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  OGHATRN;  /* YIELD */
A68_52  RGHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SGHATRN;  /* YIELD */
A68_52  VGHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WGHATRN;  /* YIELD */
A68_52  XGHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  YGHATRN;  /* YIELD */
A68_52  ZGHATRN;  /* OPERATORS - mode -> union mode */
A68_56  AHHATRN;  /* procedure value */
A68_85  BHHATRN;  /* OPERATORS - istruct -> vector */
A68_242 * CHHATRN_um;
A68_363  DHHATRN;  /* collateral clause result */
A68_52  GHHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  HHHATRN;  /* YIELD */
A68_52  IHHATRN;  /* OPERATORS - mode -> union mode */
A68_56  JHHATRN;  /* procedure value */
A68_85  KHHATRN;  /* OPERATORS - istruct -> vector */
A68_243 * LHHATRN_ud;
A68_363  MHHATRN;  /* collateral clause result */
A68_52  PHHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QHHATRN;  /* YIELD */
A68_52  RHHATRN;  /* OPERATORS - mode -> union mode */
A68_56  SHHATRN;  /* procedure value */
A68_85  THHATRN;  /* OPERATORS - istruct -> vector */
A68_244 * UHHATRN_uc;
A68_363  VHHATRN;  /* collateral clause result */
A68_52  YHHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZHHATRN;  /* YIELD */
A68_52  AIHATRN;  /* OPERATORS - mode -> union mode */
A68_56  BIHATRN;  /* procedure value */
A68_85  CIHATRN;  /* OPERATORS - istruct -> vector */
A68_245 * DIHATRN_ucond;
A68_363  EIHATRN;  /* collateral clause result */
A68_52  HIHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  IIHATRN;  /* YIELD */
A68_52  JIHATRN;  /* OPERATORS - mode -> union mode */
A68_56  KIHATRN;  /* procedure value */
A68_85  LIHATRN;  /* OPERATORS - istruct -> vector */
A68_246 * MIHATRN_ur;
A68_363  NIHATRN;  /* collateral clause result */
A68_52  QIHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  RIHATRN;  /* YIELD */
A68_52  SIHATRN;  /* OPERATORS - mode -> union mode */
A68_56  TIHATRN;  /* procedure value */
A68_85  UIHATRN;  /* OPERATORS - istruct -> vector */
A68_247 * VIHATRN_us;
A68_363  WIHATRN;  /* collateral clause result */
A68_52  ZIHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  AJHATRN;  /* YIELD */
A68_52  BJHATRN;  /* OPERATORS - mode -> union mode */
A68_56  CJHATRN;  /* procedure value */
A68_85  DJHATRN;  /* OPERATORS - istruct -> vector */
A68_274  EJHATRN;  /* OPERATORS - mode -> union mode */
A68_273 * FJHATRN;  /* YIELD */
A68_248 * GJHATRN_us;
A68_363  HJHATRN;  /* collateral clause result */
A68_52  KJHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LJHATRN;  /* YIELD */
A68_52  MJHATRN;  /* OPERATORS - mode -> union mode */
A68_56  NJHATRN;  /* procedure value */
A68_85  OJHATRN;  /* OPERATORS - istruct -> vector */
A68_254 * PJHATRN_series;
A68_368  QJHATRN;  /* collateral clause result */
A68_65  RJHATRN;  /* avoid structure result */
A68_52  SJHATRN;  /* OPERATORS - mode -> union mode */
A68_52  VJHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WJHATRN;  /* YIELD */
A68_52  XJHATRN;  /* OPERATORS - mode -> union mode */
A68_56  YJHATRN;  /* procedure value */
A68_85  ZJHATRN;  /* OPERATORS - istruct -> vector */
A68_251 * AKHATRN_ub;
A68_363  BKHATRN;  /* collateral clause result */
A68_52  EKHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FKHATRN;  /* YIELD */
A68_52  GKHATRN;  /* OPERATORS - mode -> union mode */
A68_56  HKHATRN;  /* procedure value */
A68_85  IKHATRN;  /* OPERATORS - istruct -> vector */
A68_249 * JKHATRN_ua;
A68_363  KKHATRN;  /* collateral clause result */
A68_52  NKHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  OKHATRN;  /* YIELD */
A68_52  PKHATRN;  /* OPERATORS - mode -> union mode */
A68_56  QKHATRN;  /* procedure value */
A68_85  RKHATRN;  /* OPERATORS - istruct -> vector */
A68_52  SKHATRN;  /* OPERATORS - mode -> union mode */
A68_56  TKHATRN;  /* procedure value */
A68_85  UKHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_250 * VKHATRN_uc;
A68_363  WKHATRN;  /* collateral clause result */
A68_52  ZKHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ALHATRN;  /* YIELD */
A68_52  BLHATRN;  /* OPERATORS - mode -> union mode */
A68_56  CLHATRN;  /* procedure value */
A68_85  DLHATRN;  /* OPERATORS - istruct -> vector */
A68_187  ELHATRN;  /* OPERATORS - mode -> union mode */
A68_189 * FLHATRN;  /* YIELD */
A68_252 * GLHATRN_us;
A68_363  HLHATRN;  /* collateral clause result */
A68_52  KLHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LLHATRN;  /* YIELD */
A68_52  MLHATRN;  /* OPERATORS - mode -> union mode */
A68_56  NLHATRN;  /* procedure value */
A68_85  OLHATRN;  /* OPERATORS - istruct -> vector */
A68_231 * PLHATRN_ufn;
A68_363  QLHATRN;  /* collateral clause result */
A68_52  TLHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ULHATRN;  /* YIELD */
A68_52  VLHATRN;  /* OPERATORS - mode -> union mode */
A68_56  WLHATRN;  /* procedure value */
A68_85  XLHATRN;  /* OPERATORS - istruct -> vector */
A68_253 * YLHATRN_un;
A68_363  ZLHATRN;  /* collateral clause result */
A68_52  CMHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  DMHATRN;  /* YIELD */
A68_52  EMHATRN;  /* OPERATORS - mode -> union mode */
A68_56  FMHATRN;  /* procedure value */
A68_85  GMHATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_unit);
 /* line 290: */
 /* line 291: */
{ 
 /* line 317: */
MZAAOSL_setindent( Sp, &EWGATRN );
VCGATRN_print(A_HVEC(GWGATRN,A_UNITE(FWGATRN,mode21,21,EWGATRN),A68_52 ));
 /* line 318: */
 /* line 319: */
HWGATRN = Unit ;
switch ( HWGATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
IWGATRN_cn = (HWGATRN.data.mode1);
 /* line 320: */
NWGATRN = LWGATRN ;
JWGATRN.data[0] = A_UNITE(MWGATRN,mode7,7,NWGATRN);
PWGATRN = (*(&(IWGATRN_cn->Constno))) ;
JWGATRN.data[1] = A_UNITE(OWGATRN,mode1,1,PWGATRN);
RWGATRN.fn.fn_global = LRAAOSL_newline;
RWGATRN.nonlocals = A68_NIL;
JWGATRN.data[2] = A_UNITE(QWGATRN,mode12,12,RWGATRN);
 /* line 321: */
VCGATRN_print(A_HISVEC(SWGATRN,JWGATRN,3,A68_52 ));
break;
case 2: /* REF STRUCT(INT,INT)  */
TWGATRN_cp = (HWGATRN.data.mode2);
 /* line 322: */
YWGATRN = WWGATRN ;
UWGATRN.data[0] = A_UNITE(XWGATRN,mode7,7,YWGATRN);
AXGATRN = (*(&(TWGATRN_cp->Typeno))) ;
UWGATRN.data[1] = A_UNITE(ZWGATRN,mode1,1,AXGATRN);
CXGATRN = ' ' ;
UWGATRN.data[2] = A_UNITE(BXGATRN,mode6,6,CXGATRN);
EXGATRN = (*(&(TWGATRN_cp->Primno))) ;
UWGATRN.data[3] = A_UNITE(DXGATRN,mode1,1,EXGATRN);
GXGATRN.fn.fn_global = LRAAOSL_newline;
GXGATRN.nonlocals = A68_NIL;
UWGATRN.data[4] = A_UNITE(FXGATRN,mode12,12,GXGATRN);
 /* line 323: */
VCGATRN_print(A_HISVEC(HXGATRN,UWGATRN,5,A68_52 ));
break;
case 3: /* REF STRUCT(INT,MODE187)  */
IXGATRN_ci = (HWGATRN.data.mode3);
 /* line 324: */
{ 
NXGATRN = LXGATRN ;
JXGATRN.data[0] = A_UNITE(MXGATRN,mode7,7,NXGATRN);
PXGATRN = (*(&(IXGATRN_ci->Typeno))) ;
JXGATRN.data[1] = A_UNITE(OXGATRN,mode1,1,PXGATRN);
RXGATRN.fn.fn_global = LRAAOSL_newline;
RXGATRN.nonlocals = A68_NIL;
JXGATRN.data[2] = A_UNITE(QXGATRN,mode12,12,RXGATRN);
VCGATRN_print(A_HISVEC(SXGATRN,JXGATRN,3,A68_52 ));
 /* line 325: */
 /* line 326: */
 /* line 327: */
FIGATRN_pt_formula((*(&(IXGATRN_ci->Index))), (Sp+3));
} 
break;
case 7: /* REF STRUCT(MODE203)  */
TXGATRN_ct = (HWGATRN.data.mode7);
 /* line 328: */
{ 
YXGATRN = WXGATRN ;
UXGATRN.data[0] = A_UNITE(XXGATRN,mode7,7,YXGATRN);
AYGATRN.fn.fn_global = LRAAOSL_newline;
AYGATRN.nonlocals = A68_NIL;
UXGATRN.data[1] = A_UNITE(ZXGATRN,mode12,12,AYGATRN);
VCGATRN_print(A_HISVEC(BYGATRN,UXGATRN,2,A68_52 ));
 /* line 329: */
 /* line 330: */
 /* line 331: */
MOGATRN_pt_type((*(&(TXGATRN_ct->Type))), (Sp+3));
} 
break;
case 8: /* REF STRUCT(INT,MODE202)  */
CYGATRN_cr = (HWGATRN.data.mode8);
 /* line 332: */
{ 
HYGATRN = FYGATRN ;
DYGATRN.data[0] = A_UNITE(GYGATRN,mode7,7,HYGATRN);
JYGATRN = (*(&(CYGATRN_cr->Typeno))) ;
DYGATRN.data[1] = A_UNITE(IYGATRN,mode1,1,JYGATRN);
LYGATRN.fn.fn_global = LRAAOSL_newline;
LYGATRN.nonlocals = A68_NIL;
DYGATRN.data[2] = A_UNITE(KYGATRN,mode12,12,LYGATRN);
VCGATRN_print(A_HISVEC(MYGATRN,DYGATRN,3,A68_52 ));
 /* line 333: */
 /* line 334: */
 /* line 335: */
PNGATRN_pt_range((*(&(CYGATRN_cr->Range))), (Sp+3));
} 
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
NYGATRN_cpr = (HWGATRN.data.mode9);
 /* line 336: */
SYGATRN = QYGATRN ;
OYGATRN.data[0] = A_UNITE(RYGATRN,mode7,7,SYGATRN);
UYGATRN = (*(&(NYGATRN_cpr->Typeno))) ;
OYGATRN.data[1] = A_UNITE(TYGATRN,mode1,1,UYGATRN);
WYGATRN = ' ' ;
OYGATRN.data[2] = A_UNITE(VYGATRN,mode6,6,WYGATRN);
 /* line 337: */
YYGATRN = (*(&(NYGATRN_cpr->Firstno))) ;
OYGATRN.data[3] = A_UNITE(XYGATRN,mode1,1,YYGATRN);
AZGATRN = ' ' ;
OYGATRN.data[4] = A_UNITE(ZYGATRN,mode6,6,AZGATRN);
CZGATRN = (*(&(NYGATRN_cpr->Lastno))) ;
OYGATRN.data[5] = A_UNITE(BZGATRN,mode1,1,CZGATRN);
EZGATRN.fn.fn_global = LRAAOSL_newline;
EZGATRN.nonlocals = A68_NIL;
OYGATRN.data[6] = A_UNITE(DZGATRN,mode12,12,EZGATRN);
 /* line 338: */
VCGATRN_print(A_HISVEC(FZGATRN,OYGATRN,7,A68_52 ));
break;
case 4: /* REF STRUCT(MODE203)  */
GZGATRN_cq = (HWGATRN.data.mode4);
 /* line 339: */
{ 
LZGATRN = JZGATRN ;
HZGATRN.data[0] = A_UNITE(KZGATRN,mode7,7,LZGATRN);
NZGATRN.fn.fn_global = LRAAOSL_newline;
NZGATRN.nonlocals = A68_NIL;
HZGATRN.data[1] = A_UNITE(MZGATRN,mode12,12,NZGATRN);
VCGATRN_print(A_HISVEC(OZGATRN,HZGATRN,2,A68_52 ));
 /* line 340: */
 /* line 341: */
 /* line 342: */
MOGATRN_pt_type((*(&(GZGATRN_cq->Querytype))), (Sp+3));
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
PZGATRN_cq = (HWGATRN.data.mode5);
 /* line 343: */
{ 
UZGATRN = SZGATRN ;
QZGATRN.data[0] = A_UNITE(TZGATRN,mode7,7,UZGATRN);
WZGATRN = (*(&(PZGATRN_cq->Typeno))) ;
QZGATRN.data[1] = A_UNITE(VZGATRN,mode1,1,WZGATRN);
AAHATRN = YZGATRN ;
QZGATRN.data[2] = A_UNITE(ZZGATRN,mode7,7,AAHATRN);
VCGATRN_print(A_HISVEC(BAHATRN,QZGATRN,3,A68_52 ));
 /* line 344: */
 /* line 345: */
DAHATRN = (*(&(PZGATRN_cq->String))).upb;
for ( CAHATRN_i = 1;
CAHATRN_i <= DAHATRN;
CAHATRN_i += 1 )
{ 
FAHATRN = (*(&(PZGATRN_cq->String))) ;
HAHATRN = (*(&A_VINDEX(FAHATRN,CAHATRN_i))) ;
EAHATRN.data[0] = A_UNITE(GAHATRN,mode1,1,HAHATRN);
JAHATRN = ' ' ;
EAHATRN.data[1] = A_UNITE(IAHATRN,mode6,6,JAHATRN);
VCGATRN_print(A_HISVEC(KAHATRN,EAHATRN,2,A68_52 ));
}
 /* line 346: */
 /* line 347: */
 /* line 348: */
MAHATRN.fn.fn_global = LRAAOSL_newline;
MAHATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(NAHATRN,A_UNITE(LAHATRN,mode12,12,MAHATRN),A68_52 ));
} 
break;
case 6: /* REF STRUCT(INT)  */
OAHATRN_cv = (HWGATRN.data.mode6);
TAHATRN = RAHATRN ;
PAHATRN.data[0] = A_UNITE(SAHATRN,mode7,7,TAHATRN);
VAHATRN.fn.fn_global = LRAAOSL_newline;
VAHATRN.nonlocals = A68_NIL;
PAHATRN.data[1] = A_UNITE(UAHATRN,mode12,12,VAHATRN);
 /* line 349: */
VCGATRN_print(A_HISVEC(WAHATRN,PAHATRN,2,A68_52 ));
break;
case 10: /* REF STRUCT(MODE225,REF MODE229)  */
XAHATRN_ua = (HWGATRN.data.mode10);
 /* line 350: */
{ 
CBHATRN = ABHATRN ;
YAHATRN.data[0] = A_UNITE(BBHATRN,mode7,7,CBHATRN);
EBHATRN.fn.fn_global = LRAAOSL_newline;
EBHATRN.nonlocals = A68_NIL;
YAHATRN.data[1] = A_UNITE(DBHATRN,mode12,12,EBHATRN);
VCGATRN_print(A_HISVEC(FBHATRN,YAHATRN,2,A68_52 ));
 /* line 351: */
GBHATRN_ualts = XAHATRN_ua;
 /* line 352: */
for ( ;; )
{ 
 /* line 353: */
if ( !((GBHATRN_ualts!=HAAATRN_nilualts)) ) break;
BTGATRN_pt_unit((*(&(GBHATRN_ualts->Alt))), (Sp+3));
 /* line 354: */
 /* line 355: */
GBHATRN_ualts = (*(&(GBHATRN_ualts->Rest)));
}
 /* line 356: */
 /* line 357: */
} 
break;
case 11: /* REF STRUCT(INT,INT)  */
HBHATRN_un = (HWGATRN.data.mode11);
 /* line 358: */
{ 
LBHATRN = JBHATRN ;
VCGATRN_print(A_HVEC(MBHATRN,A_UNITE(KBHATRN,mode7,7,LBHATRN),A68_52 ));
 /* line 359: */
if ( ((*(&(HBHATRN_un->Sort)))==1) )
{ 
 /* line 360: */
QBHATRN = OBHATRN ;
VCGATRN_print(A_HVEC(RBHATRN,A_UNITE(PBHATRN,mode7,7,QBHATRN),A68_52 ));
} 
else
{ 
if ( ((*(&(HBHATRN_un->Sort)))==2) )
{ 
 /* line 361: */
VBHATRN = TBHATRN ;
VCGATRN_print(A_HVEC(WBHATRN,A_UNITE(UBHATRN,mode7,7,VBHATRN),A68_52 ));
} 
else
{ 
if ( ((*(&(HBHATRN_un->Sort)))==3) )
{ 
 /* line 362: */
ACHATRN = YBHATRN ;
VCGATRN_print(A_HVEC(BCHATRN,A_UNITE(ZBHATRN,mode7,7,ACHATRN),A68_52 ));
} 
else
{ 
 /* line 363: */
FCHATRN = DCHATRN ;
VCGATRN_print(A_HVEC(GCHATRN,A_UNITE(ECHATRN,mode7,7,FCHATRN),A68_52 ));
} 
} 
} 
 /* line 364: */
JCHATRN = (*(&(HBHATRN_un->Nameno))) ;
HCHATRN.data[0] = A_UNITE(ICHATRN,mode1,1,JCHATRN);
LCHATRN.fn.fn_global = LRAAOSL_newline;
LCHATRN.nonlocals = A68_NIL;
HCHATRN.data[1] = A_UNITE(KCHATRN,mode12,12,LCHATRN);
 /* line 365: */
 /* line 366: */
VCGATRN_print(A_HISVEC(MCHATRN,HCHATRN,2,A68_52 ));
} 
break;
case 19: /* REF STRUCT(MODE225,MODE225,MODE225)  */
NCHATRN_ud = (HWGATRN.data.mode19);
 /* line 367: */
{ 
SCHATRN = QCHATRN ;
OCHATRN.data[0] = A_UNITE(RCHATRN,mode7,7,SCHATRN);
UCHATRN.fn.fn_global = LRAAOSL_newline;
UCHATRN.nonlocals = A68_NIL;
OCHATRN.data[1] = A_UNITE(TCHATRN,mode12,12,UCHATRN);
VCGATRN_print(A_HISVEC(VCHATRN,OCHATRN,2,A68_52 ));
 /* line 368: */
BTGATRN_pt_unit((*(&(NCHATRN_ud->Unit))), (Sp+3));
 /* line 369: */
BTGATRN_pt_unit((*(&(NCHATRN_ud->Index))), (Sp+3));
 /* line 370: */
 /* line 371: */
 /* line 372: */
BTGATRN_pt_unit((*(&(NCHATRN_ud->From))), (Sp+3));
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE225)  */
WCHATRN_ua = (HWGATRN.data.mode13);
 /* line 373: */
{ 
BDHATRN = ZCHATRN ;
XCHATRN.data[0] = A_UNITE(ADHATRN,mode7,7,BDHATRN);
DDHATRN = (*(&(WCHATRN_ua->Typeno))) ;
XCHATRN.data[1] = A_UNITE(CDHATRN,mode1,1,DDHATRN);
FDHATRN = ' ' ;
XCHATRN.data[2] = A_UNITE(EDHATRN,mode6,6,FDHATRN);
HDHATRN = (*(&(WCHATRN_ua->Altno))) ;
XCHATRN.data[3] = A_UNITE(GDHATRN,mode1,1,HDHATRN);
JDHATRN.fn.fn_global = LRAAOSL_newline;
JDHATRN.nonlocals = A68_NIL;
XCHATRN.data[4] = A_UNITE(IDHATRN,mode12,12,JDHATRN);
VCGATRN_print(A_HISVEC(KDHATRN,XCHATRN,5,A68_52 ));
 /* line 374: */
 /* line 375: */
 /* line 376: */
BTGATRN_pt_unit((*(&(WCHATRN_ua->Assoc))), (Sp+3));
} 
break;
case 14: /* REF STRUCT(MODE225,INT,INT)  */
LDHATRN_ue = (HWGATRN.data.mode14);
 /* line 377: */
{ 
QDHATRN = ODHATRN ;
MDHATRN.data[0] = A_UNITE(PDHATRN,mode7,7,QDHATRN);
SDHATRN = (*(&(LDHATRN_ue->Typeno))) ;
MDHATRN.data[1] = A_UNITE(RDHATRN,mode1,1,SDHATRN);
UDHATRN = ' ' ;
MDHATRN.data[2] = A_UNITE(TDHATRN,mode6,6,UDHATRN);
WDHATRN = (*(&(LDHATRN_ue->Altno))) ;
MDHATRN.data[3] = A_UNITE(VDHATRN,mode1,1,WDHATRN);
YDHATRN.fn.fn_global = LRAAOSL_newline;
YDHATRN.nonlocals = A68_NIL;
MDHATRN.data[4] = A_UNITE(XDHATRN,mode12,12,YDHATRN);
VCGATRN_print(A_HISVEC(ZDHATRN,MDHATRN,5,A68_52 ));
 /* line 378: */
 /* line 379: */
 /* line 380: */
BTGATRN_pt_unit((*(&(LDHATRN_ue->Extract))), (Sp+3));
} 
break;
case 15: /* REF STRUCT(MODE225,INT,INT)  */
AEHATRN_uti = (HWGATRN.data.mode15);
 /* line 381: */
{ 
FEHATRN = DEHATRN ;
BEHATRN.data[0] = A_UNITE(EEHATRN,mode7,7,FEHATRN);
HEHATRN = (*(&(AEHATRN_uti->Fnno))) ;
BEHATRN.data[1] = A_UNITE(GEHATRN,mode1,1,HEHATRN);
JEHATRN = ' ' ;
BEHATRN.data[2] = A_UNITE(IEHATRN,mode6,6,JEHATRN);
LEHATRN = (*(&(AEHATRN_uti->Nameno))) ;
BEHATRN.data[3] = A_UNITE(KEHATRN,mode1,1,LEHATRN);
NEHATRN.fn.fn_global = LRAAOSL_newline;
NEHATRN.nonlocals = A68_NIL;
BEHATRN.data[4] = A_UNITE(MEHATRN,mode12,12,NEHATRN);
VCGATRN_print(A_HISVEC(OEHATRN,BEHATRN,5,A68_52 ));
 /* line 382: */
 /* line 383: */
 /* line 384: */
BTGATRN_pt_unit((*(&(AEHATRN_uti->Unit))), (Sp+3));
} 
break;
case 16: /* REF STRUCT(MODE225,MODE187)  */
PEHATRN_ui = (HWGATRN.data.mode16);
 /* line 385: */
{ 
UEHATRN = SEHATRN ;
QEHATRN.data[0] = A_UNITE(TEHATRN,mode7,7,UEHATRN);
WEHATRN.fn.fn_global = LRAAOSL_newline;
WEHATRN.nonlocals = A68_NIL;
QEHATRN.data[1] = A_UNITE(VEHATRN,mode12,12,WEHATRN);
VCGATRN_print(A_HISVEC(XEHATRN,QEHATRN,2,A68_52 ));
 /* line 386: */
BTGATRN_pt_unit((*(&(PEHATRN_ui->Unit))), (Sp+3));
 /* line 387: */
 /* line 388: */
 /* line 389: */
FIGATRN_pt_formula((*(&(PEHATRN_ui->Index))), (Sp+3));
} 
break;
case 17: /* REF STRUCT(MODE225,MODE202)  */
YEHATRN_ut = (HWGATRN.data.mode17);
 /* line 390: */
{ 
DFHATRN = BFHATRN ;
ZEHATRN.data[0] = A_UNITE(CFHATRN,mode7,7,DFHATRN);
FFHATRN.fn.fn_global = LRAAOSL_newline;
FFHATRN.nonlocals = A68_NIL;
ZEHATRN.data[1] = A_UNITE(EFHATRN,mode12,12,FFHATRN);
VCGATRN_print(A_HISVEC(GFHATRN,ZEHATRN,2,A68_52 ));
 /* line 391: */
BTGATRN_pt_unit((*(&(YEHATRN_ut->Unit))), (Sp+3));
 /* line 392: */
 /* line 393: */
 /* line 394: */
PNGATRN_pt_range((*(&(YEHATRN_ut->Range))), (Sp+3));
} 
break;
case 18: /* REF STRUCT(MODE225,MODE225)  */
HFHATRN_ud = (HWGATRN.data.mode18);
 /* line 395: */
{ 
MFHATRN = KFHATRN ;
IFHATRN.data[0] = A_UNITE(LFHATRN,mode7,7,MFHATRN);
OFHATRN.fn.fn_global = LRAAOSL_newline;
OFHATRN.nonlocals = A68_NIL;
IFHATRN.data[1] = A_UNITE(NFHATRN,mode12,12,OFHATRN);
VCGATRN_print(A_HISVEC(PFHATRN,IFHATRN,2,A68_52 ));
 /* line 396: */
BTGATRN_pt_unit((*(&(HFHATRN_ud->Unit))), (Sp+3));
 /* line 397: */
 /* line 398: */
 /* line 399: */
BTGATRN_pt_unit((*(&(HFHATRN_ud->Index))), (Sp+3));
} 
break;
case 20: /* REF STRUCT(MODE187,MODE225)  */
QFHATRN_ur = (HWGATRN.data.mode20);
 /* line 400: */
{ 
VFHATRN = TFHATRN ;
RFHATRN.data[0] = A_UNITE(UFHATRN,mode7,7,VFHATRN);
XFHATRN.fn.fn_global = LRAAOSL_newline;
XFHATRN.nonlocals = A68_NIL;
RFHATRN.data[1] = A_UNITE(WFHATRN,mode12,12,XFHATRN);
VCGATRN_print(A_HISVEC(YFHATRN,RFHATRN,2,A68_52 ));
 /* line 401: */
FIGATRN_pt_formula((*(&(QFHATRN_ur->Size))), (Sp+3));
 /* line 402: */
 /* line 403: */
 /* line 404: */
BTGATRN_pt_unit((*(&(QFHATRN_ur->Elem))), (Sp+3));
} 
break;
case 21: /* REF STRUCT(MODE225,REF MODE240)  */
ZFHATRN_us = (HWGATRN.data.mode21);
 /* line 405: */
{ 
AGHATRN_ustr = ZFHATRN_us;
 /* line 406: */
FGHATRN = DGHATRN ;
BGHATRN.data[0] = A_UNITE(EGHATRN,mode7,7,FGHATRN);
HGHATRN.fn.fn_global = LRAAOSL_newline;
HGHATRN.nonlocals = A68_NIL;
BGHATRN.data[1] = A_UNITE(GGHATRN,mode12,12,HGHATRN);
VCGATRN_print(A_HISVEC(IGHATRN,BGHATRN,2,A68_52 ));
 /* line 407: */
for ( ;; )
{ 
 /* line 408: */
if ( !((AGHATRN_ustr!=IAAATRN_nilustr)) ) break;
BTGATRN_pt_unit((*(&(AGHATRN_ustr->Elem))), (Sp+3));
 /* line 409: */
 /* line 410: */
AGHATRN_ustr = (*(&(AGHATRN_ustr->Rest)));
}
 /* line 411: */
 /* line 412: */
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE225,MODE225)  */
JGHATRN_uc = (HWGATRN.data.mode22);
 /* line 413: */
{ 
OGHATRN = MGHATRN ;
KGHATRN.data[0] = A_UNITE(NGHATRN,mode7,7,OGHATRN);
if ( (*(&(JGHATRN_uc->String))) )
{ 
SGHATRN = QGHATRN ;
KGHATRN.data[1] = A_UNITE(RGHATRN,mode7,7,SGHATRN);
} 
else
{ 
 /* line 414: */
WGHATRN = UGHATRN ;
KGHATRN.data[1] = A_UNITE(VGHATRN,mode7,7,WGHATRN);
} 
YGHATRN = (*(&(JGHATRN_uc->Sort))) ;
KGHATRN.data[2] = A_UNITE(XGHATRN,mode1,1,YGHATRN);
AHHATRN.fn.fn_global = LRAAOSL_newline;
AHHATRN.nonlocals = A68_NIL;
KGHATRN.data[3] = A_UNITE(ZGHATRN,mode12,12,AHHATRN);
VCGATRN_print(A_HISVEC(BHHATRN,KGHATRN,4,A68_52 ));
 /* line 415: */
BTGATRN_pt_unit((*(&(JGHATRN_uc->Left))), (Sp+3));
 /* line 416: */
 /* line 417: */
 /* line 418: */
BTGATRN_pt_unit((*(&(JGHATRN_uc->Right))), (Sp+3));
} 
break;
case 23: /* REF STRUCT(MODE265,MODE225)  */
CHHATRN_um = (HWGATRN.data.mode23);
 /* line 419: */
{ 
HHHATRN = FHHATRN ;
DHHATRN.data[0] = A_UNITE(GHHATRN,mode7,7,HHHATRN);
JHHATRN.fn.fn_global = LRAAOSL_newline;
JHHATRN.nonlocals = A68_NIL;
DHHATRN.data[1] = A_UNITE(IHHATRN,mode12,12,JHHATRN);
VCGATRN_print(A_HISVEC(KHHATRN,DHHATRN,2,A68_52 ));
 /* line 420: */
A_CALLPROC(BSGATRN_pt_instance,((*(&(CHHATRN_um->Inst))), (Sp+3)),((*(&(CHHATRN_um->Inst))), (Sp+3),(BSGATRN_pt_instance).nonlocals));
 /* line 421: */
 /* line 422: */
 /* line 423: */
BTGATRN_pt_unit((*(&(CHHATRN_um->Right))), (Sp+3));
} 
break;
case 24: /* REF STRUCT(MODE225,MODE265,MODE225)  */
LHHATRN_ud = (HWGATRN.data.mode24);
 /* line 424: */
{ 
QHHATRN = OHHATRN ;
MHHATRN.data[0] = A_UNITE(PHHATRN,mode7,7,QHHATRN);
SHHATRN.fn.fn_global = LRAAOSL_newline;
SHHATRN.nonlocals = A68_NIL;
MHHATRN.data[1] = A_UNITE(RHHATRN,mode12,12,SHHATRN);
VCGATRN_print(A_HISVEC(THHATRN,MHHATRN,2,A68_52 ));
 /* line 425: */
A_CALLPROC(BSGATRN_pt_instance,((*(&(LHHATRN_ud->Inst))), (Sp+3)),((*(&(LHHATRN_ud->Inst))), (Sp+3),(BSGATRN_pt_instance).nonlocals));
 /* line 426: */
BTGATRN_pt_unit((*(&(LHHATRN_ud->Left))), (Sp+3));
 /* line 427: */
 /* line 428: */
 /* line 429: */
BTGATRN_pt_unit((*(&(LHHATRN_ud->Right))), (Sp+3));
} 
break;
case 25: /* REF STRUCT(MODE225,REF MODE285)  */
UHHATRN_uc = (HWGATRN.data.mode25);
 /* line 430: */
{ 
ZHHATRN = XHHATRN ;
VHHATRN.data[0] = A_UNITE(YHHATRN,mode7,7,ZHHATRN);
BIHATRN.fn.fn_global = LRAAOSL_newline;
BIHATRN.nonlocals = A68_NIL;
VHHATRN.data[1] = A_UNITE(AIHATRN,mode12,12,BIHATRN);
VCGATRN_print(A_HISVEC(CIHATRN,VHHATRN,2,A68_52 ));
 /* line 431: */
BTGATRN_pt_unit((*(&(UHHATRN_uc->Input))), (Sp+3));
 /* line 432: */
 /* line 433: */
 /* line 434: */
FTGATRN_pt_uchoices((*(&(UHHATRN_uc->Choices))), (Sp+3));
} 
break;
case 26: /* REF STRUCT(MODE187,MODE225,MODE225)  */
DIHATRN_ucond = (HWGATRN.data.mode26);
 /* line 435: */
{ 
IIHATRN = GIHATRN ;
EIHATRN.data[0] = A_UNITE(HIHATRN,mode7,7,IIHATRN);
KIHATRN.fn.fn_global = LRAAOSL_newline;
KIHATRN.nonlocals = A68_NIL;
EIHATRN.data[1] = A_UNITE(JIHATRN,mode12,12,KIHATRN);
VCGATRN_print(A_HISVEC(LIHATRN,EIHATRN,2,A68_52 ));
 /* line 436: */
FIGATRN_pt_formula((*(&(DIHATRN_ucond->Cond))), (Sp+3));
 /* line 437: */
BTGATRN_pt_unit((*(&(DIHATRN_ucond->True))), (Sp+3));
 /* line 438: */
 /* line 439: */
 /* line 440: */
BTGATRN_pt_unit((*(&(DIHATRN_ucond->False))), (Sp+3));
} 
break;
case 27: /* REF STRUCT(MODE187,MODE225)  */
MIHATRN_ur = (HWGATRN.data.mode27);
 /* line 441: */
{ 
RIHATRN = PIHATRN ;
NIHATRN.data[0] = A_UNITE(QIHATRN,mode7,7,RIHATRN);
TIHATRN.fn.fn_global = LRAAOSL_newline;
TIHATRN.nonlocals = A68_NIL;
NIHATRN.data[1] = A_UNITE(SIHATRN,mode12,12,TIHATRN);
VCGATRN_print(A_HISVEC(UIHATRN,NIHATRN,2,A68_52 ));
 /* line 442: */
FIGATRN_pt_formula((*(&(MIHATRN_ur->Repl))), (Sp+3));
 /* line 443: */
 /* line 444: */
 /* line 445: */
BTGATRN_pt_unit((*(&(MIHATRN_ur->Body))), (Sp+3));
} 
break;
case 28: /* REF STRUCT(REF MODE273,MODE225)  */
VIHATRN_us = (HWGATRN.data.mode28);
 /* line 446: */
{ 
AJHATRN = YIHATRN ;
WIHATRN.data[0] = A_UNITE(ZIHATRN,mode7,7,AJHATRN);
CJHATRN.fn.fn_global = LRAAOSL_newline;
CJHATRN.nonlocals = A68_NIL;
WIHATRN.data[1] = A_UNITE(BJHATRN,mode12,12,CJHATRN);
VCGATRN_print(A_HISVEC(DJHATRN,WIHATRN,2,A68_52 ));
 /* line 447: */
FJHATRN = (*(&(VIHATRN_us->Body))) ;
A_CALLPROC(XSGATRN_pt_seqstep,(A_UNITE(EJHATRN,mode16,16,FJHATRN), (Sp+3)),(A_UNITE(EJHATRN,mode16,16,FJHATRN), (Sp+3),(XSGATRN_pt_seqstep).nonlocals));
 /* line 448: */
 /* line 449: */
 /* line 450: */
BTGATRN_pt_unit((*(&(VIHATRN_us->Output))), (Sp+3));
} 
break;
case 29: /* REF STRUCT(REF MODE254,MODE225)  */
GJHATRN_us = (HWGATRN.data.mode29);
 /* line 451: */
{ 
LJHATRN = JJHATRN ;
HJHATRN.data[0] = A_UNITE(KJHATRN,mode7,7,LJHATRN);
NJHATRN.fn.fn_global = LRAAOSL_newline;
NJHATRN.nonlocals = A68_NIL;
HJHATRN.data[1] = A_UNITE(MJHATRN,mode12,12,NJHATRN);
VCGATRN_print(A_HISVEC(OJHATRN,HJHATRN,2,A68_52 ));
 /* line 452: */
PJHATRN_series = (*(&(GJHATRN_us->Body)));
 /* line 453: */
MZAAOSL_setindent( (Sp+3), &RJHATRN );
QJHATRN.data[0] = A_UNITE(SJHATRN,mode21,21,RJHATRN);
WJHATRN = UJHATRN ;
QJHATRN.data[1] = A_UNITE(VJHATRN,mode7,7,WJHATRN);
YJHATRN.fn.fn_global = LRAAOSL_newline;
YJHATRN.nonlocals = A68_NIL;
QJHATRN.data[2] = A_UNITE(XJHATRN,mode12,12,YJHATRN);
VCGATRN_print(A_HISVEC(ZJHATRN,QJHATRN,3,A68_52 ));
 /* line 454: */
for ( ;; )
{ 
 /* line 455: */
if ( !((PJHATRN_series!=SAAATRN_nilseries)) ) break;
A_CALLPROC(YSGATRN_pt_step,((*(&(PJHATRN_series->Step))), (Sp+3)),((*(&(PJHATRN_series->Step))), (Sp+3),(YSGATRN_pt_step).nonlocals));
 /* line 456: */
 /* line 457: */
PJHATRN_series = (*(&(PJHATRN_series->Rest)));
}
 /* line 458: */
 /* line 459: */
 /* line 460: */
BTGATRN_pt_unit((*(&(GJHATRN_us->Output))), (Sp+3));
} 
break;
case 32: /* REF STRUCT(MODE225)  */
AKHATRN_ub = (HWGATRN.data.mode32);
 /* line 461: */
{ 
FKHATRN = DKHATRN ;
BKHATRN.data[0] = A_UNITE(EKHATRN,mode7,7,FKHATRN);
HKHATRN.fn.fn_global = LRAAOSL_newline;
HKHATRN.nonlocals = A68_NIL;
BKHATRN.data[1] = A_UNITE(GKHATRN,mode12,12,HKHATRN);
VCGATRN_print(A_HISVEC(IKHATRN,BKHATRN,2,A68_52 ));
 /* line 462: */
 /* line 463: */
 /* line 464: */
BTGATRN_pt_unit((*(&(AKHATRN_ub->Unit))), (Sp+3));
} 
break;
case 30: /* REF STRUCT(MODE225,MODE178)  */
JKHATRN_ua = (HWGATRN.data.mode30);
 /* line 465: */
{ 
OKHATRN = MKHATRN ;
KKHATRN.data[0] = A_UNITE(NKHATRN,mode7,7,OKHATRN);
QKHATRN.fn.fn_global = LRAAOSL_newline;
QKHATRN.nonlocals = A68_NIL;
KKHATRN.data[1] = A_UNITE(PKHATRN,mode12,12,QKHATRN);
VCGATRN_print(A_HISVEC(RKHATRN,KKHATRN,2,A68_52 ));
 /* line 466: */
BTGATRN_pt_unit((*(&(JKHATRN_ua->Unit))), (Sp+3));
 /* line 467: */
KGGATRN_pt_attr((*(&(JKHATRN_ua->Attr))), Sp);
 /* line 468: */
 /* line 469: */
 /* line 470: */
TKHATRN.fn.fn_global = LRAAOSL_newline;
TKHATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(UKHATRN,A_UNITE(SKHATRN,mode12,12,TKHATRN),A68_52 ));
} 
break;
case 31: /* REF STRUCT(MODE225,MODE189)  */
VKHATRN_uc = (HWGATRN.data.mode31);
 /* line 471: */
{ 
ALHATRN = YKHATRN ;
WKHATRN.data[0] = A_UNITE(ZKHATRN,mode7,7,ALHATRN);
CLHATRN.fn.fn_global = LRAAOSL_newline;
CLHATRN.nonlocals = A68_NIL;
WKHATRN.data[1] = A_UNITE(BLHATRN,mode12,12,CLHATRN);
VCGATRN_print(A_HISVEC(DLHATRN,WKHATRN,2,A68_52 ));
 /* line 472: */
BTGATRN_pt_unit((*(&(VKHATRN_uc->Unit))), (Sp+3));
 /* line 473: */
 /* line 474: */
 /* line 475: */
FLHATRN = (&(VKHATRN_uc->Check)) ;
FIGATRN_pt_formula(A_UNITE(ELHATRN,mode2,2,FLHATRN), (Sp+3));
} 
break;
case 33: /* REF STRUCT(MODE187,MODE225)  */
GLHATRN_us = (HWGATRN.data.mode33);
 /* line 476: */
{ 
LLHATRN = JLHATRN ;
HLHATRN.data[0] = A_UNITE(KLHATRN,mode7,7,LLHATRN);
NLHATRN.fn.fn_global = LRAAOSL_newline;
NLHATRN.nonlocals = A68_NIL;
HLHATRN.data[1] = A_UNITE(MLHATRN,mode12,12,NLHATRN);
VCGATRN_print(A_HISVEC(OLHATRN,HLHATRN,2,A68_52 ));
 /* line 477: */
FIGATRN_pt_formula((*(&(GLHATRN_us->Size))), (Sp+3));
 /* line 478: */
 /* line 479: */
 /* line 480: */
BTGATRN_pt_unit((*(&(GLHATRN_us->Char))), (Sp+3));
} 
break;
case 12: /* REF STRUCT(MODE225,MODE225)  */
PLHATRN_ufn = (HWGATRN.data.mode12);
 /* line 481: */
{ 
ULHATRN = SLHATRN ;
QLHATRN.data[0] = A_UNITE(TLHATRN,mode7,7,ULHATRN);
WLHATRN.fn.fn_global = LRAAOSL_newline;
WLHATRN.nonlocals = A68_NIL;
QLHATRN.data[1] = A_UNITE(VLHATRN,mode12,12,WLHATRN);
VCGATRN_print(A_HISVEC(XLHATRN,QLHATRN,2,A68_52 ));
 /* line 482: */
BTGATRN_pt_unit((*(&(PLHATRN_ufn->Sink))), (Sp+3));
 /* line 483: */
 /* line 484: */
 /* line 485: */
BTGATRN_pt_unit((*(&(PLHATRN_ufn->Source))), (Sp+3));
} 
break;
case 34: /* REF STRUCT(INT)  */
YLHATRN_un = (HWGATRN.data.mode34);
DMHATRN = BMHATRN ;
ZLHATRN.data[0] = A_UNITE(CMHATRN,mode7,7,DMHATRN);
FMHATRN.fn.fn_global = LRAAOSL_newline;
FMHATRN.nonlocals = A68_NIL;
ZLHATRN.data[1] = A_UNITE(EMHATRN,mode12,12,FMHATRN);
 /* line 486: */
VCGATRN_print(A_HISVEC(GMHATRN,ZLHATRN,2,A68_52 ));
break;
default: 
 /* line 487: */
 /* line 488: */
NKDAOST_sysfault(IMHATRN);
break;
} 
} 
A_PROC_EXIT(pt_unit);
return;
} 
#undef NL

A_STATIC A68_VOID  LMHATRN_pt_macparam(A68_268  P, A68_INT  Sp)
{ 
A68_361  MMHATRN;  /* collateral clause result */
A68_65  NMHATRN;  /* avoid structure result */
A68_52  OMHATRN;  /* OPERATORS - mode -> union mode */
A68_52  RMHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SMHATRN;  /* YIELD */
A68_52  TMHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  UMHATRN;  /* YIELD */
A68_52  VMHATRN;  /* OPERATORS - mode -> union mode */
A68_56  WMHATRN;  /* procedure value */
A68_85  XMHATRN;  /* OPERATORS - istruct -> vector */
A68_269  YMHATRN;  /* united object - for case conformity */
A68_186  ZMHATRN_at;
A68_52  ANHATRN;  /* OPERATORS - mode -> union mode */
A68_56  BNHATRN;  /* procedure value */
A68_85  CNHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_198  DNHATRN_ft;
A68_212  ENHATRN_tg;
A68_270  FNHATRN_ug;
A68_265  GNHATRN_inst;
A_PROC_ENTRY(pt_macparam);
 /* line 491: */
 /* line 492: */
{ 
MZAAOSL_setindent( Sp, &NMHATRN );
MMHATRN.data[0] = A_UNITE(OMHATRN,mode21,21,NMHATRN);
SMHATRN = QMHATRN ;
MMHATRN.data[1] = A_UNITE(RMHATRN,mode7,7,SMHATRN);
UMHATRN = P.Sort ;
MMHATRN.data[2] = A_UNITE(TMHATRN,mode1,1,UMHATRN);
WMHATRN.fn.fn_global = LRAAOSL_newline;
WMHATRN.nonlocals = A68_NIL;
MMHATRN.data[3] = A_UNITE(VMHATRN,mode12,12,WMHATRN);
VCGATRN_print(A_HISVEC(XMHATRN,MMHATRN,4,A68_52 ));
 /* line 493: */
 /* line 494: */
YMHATRN = P.Param ;
switch ( YMHATRN.mode )
{ 
case 1: /* STRUCT(MODE178)  */
ZMHATRN_at = (YMHATRN.data.mode1);
{ 
KGGATRN_pt_attr(ZMHATRN_at.Tag, (Sp+3));
 /* line 495: */
BNHATRN.fn.fn_global = LRAAOSL_newline;
BNHATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(CNHATRN,A_UNITE(ANHATRN,mode12,12,BNHATRN),A68_52 ));
} 
break;
case 2: /* STRUCT(MODE187)  */
DNHATRN_ft = (YMHATRN.data.mode2);
 /* line 496: */
FIGATRN_pt_formula(DNHATRN_ft.Tag, (Sp+3));
break;
case 3: /* STRUCT(MODE203)  */
ENHATRN_tg = (YMHATRN.data.mode3);
 /* line 497: */
MOGATRN_pt_type(ENHATRN_tg.Tag, (Sp+3));
break;
case 4: /* STRUCT(MODE225)  */
FNHATRN_ug = (YMHATRN.data.mode4);
 /* line 498: */
BTGATRN_pt_unit(FNHATRN_ug.Tag, (Sp+3));
break;
case 5: /* STRUCT(INT,REF MODE267,MODE178)  */
GNHATRN_inst = (YMHATRN.data.mode5);
 /* line 499: */
 /* line 500: */
A_CALLPROC(BSGATRN_pt_instance,(GNHATRN_inst, (Sp+3)),(GNHATRN_inst, (Sp+3),(BSGATRN_pt_instance).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(pt_macparam);
return;
} 
#undef NL

A_STATIC A68_VOID  JNHATRN_anonymous(A68_265  Ins, A68_INT  Sp)
{ 
A68_368  KNHATRN;  /* collateral clause result */
A68_65  LNHATRN;  /* avoid structure result */
A68_52  MNHATRN;  /* OPERATORS - mode -> union mode */
A68_52  PNHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QNHATRN;  /* YIELD */
A68_52  RNHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  SNHATRN;  /* YIELD */
A68_85  TNHATRN;  /* OPERATORS - istruct -> vector */
A68_267  UNHATRN;  /* == */
A68_52  XNHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  YNHATRN;  /* YIELD */
A68_85  ZNHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  COHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  DOHATRN;  /* YIELD */
A68_85  EOHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  FOHATRN;  /* OPERATORS - mode -> union mode */
A68_56  GOHATRN;  /* procedure value */
A68_85  HOHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_268 * IOHATRN_p;
A68_267  JOHATRN;  /* forall yield */
A68_INT  KOHATRN;  /* forall loop counter */
A68_52  LOHATRN;  /* OPERATORS - mode -> union mode */
A68_56  MOHATRN;  /* procedure value */
A68_85  NOHATRN;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 503: */
 /* line 504: */
{ 
MZAAOSL_setindent( Sp, &LNHATRN );
KNHATRN.data[0] = A_UNITE(MNHATRN,mode21,21,LNHATRN);
QNHATRN = ONHATRN ;
KNHATRN.data[1] = A_UNITE(PNHATRN,mode7,7,QNHATRN);
SNHATRN = Ins.Fnno ;
KNHATRN.data[2] = A_UNITE(RNHATRN,mode1,1,SNHATRN);
VCGATRN_print(A_HISVEC(TNHATRN,KNHATRN,3,A68_52 ));
 /* line 505: */
 /* line 506: */
UNHATRN = Ins.Macparams ;
if ( A_VSTRUCTCOMP(UNHATRN,ABAATRN_nilmacparams) )
{ 
YNHATRN = WNHATRN ;
VCGATRN_print(A_HVEC(ZNHATRN,A_UNITE(XNHATRN,mode7,7,YNHATRN),A68_52 ));
 /* line 507: */
KGGATRN_pt_attr(Ins.Attr, 0);
} 
else
{ 
 /* line 508: */
if ( (Ins.Macparams.upb==0) )
{ 
DOHATRN = BOHATRN ;
VCGATRN_print(A_HVEC(EOHATRN,A_UNITE(COHATRN,mode7,7,DOHATRN),A68_52 ));
 /* line 509: */
KGGATRN_pt_attr(Ins.Attr, 0);
} 
else
{ 
GOHATRN.fn.fn_global = LRAAOSL_newline;
GOHATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(HOHATRN,A_UNITE(FOHATRN,mode12,12,GOHATRN),A68_52 ));
 /* line 510: */
JOHATRN = Ins.Macparams ;
KOHATRN = JOHATRN.upb -1;
IOHATRN_p = JOHATRN.data;
for (;KOHATRN-- >= 0;
(IOHATRN_p++
) )
{
LMHATRN_pt_macparam((*IOHATRN_p), Sp);
}
 /* line 511: */
 /* line 512: */
KGGATRN_pt_attr(Ins.Attr, (Sp+3));
} 
} 
 /* line 513: */
 /* line 514: */
MOHATRN.fn.fn_global = LRAAOSL_newline;
MOHATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(NOHATRN,A_UNITE(LOHATRN,mode12,12,MOHATRN),A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  ROHATRN_pt_tag(A68_392  Tag, A68_INT  Sp)
{ 
A68_392  SOHATRN;  /* united object - for case conformity */
A68_212 * TOHATRN_tg;
A68_368  UOHATRN;  /* collateral clause result */
A68_65  VOHATRN;  /* avoid structure result */
A68_52  WOHATRN;  /* OPERATORS - mode -> union mode */
A68_52  ZOHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  APHATRN;  /* YIELD */
A68_52  BPHATRN;  /* OPERATORS - mode -> union mode */
A68_56  CPHATRN;  /* procedure value */
A68_85  DPHATRN;  /* OPERATORS - istruct -> vector */
A68_198 * EPHATRN_fg;
A68_368  FPHATRN;  /* collateral clause result */
A68_65  GPHATRN;  /* avoid structure result */
A68_52  HPHATRN;  /* OPERATORS - mode -> union mode */
A68_52  KPHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LPHATRN;  /* YIELD */
A68_52  MPHATRN;  /* OPERATORS - mode -> union mode */
A68_56  NPHATRN;  /* procedure value */
A68_85  OPHATRN;  /* OPERATORS - istruct -> vector */
A68_270 * PPHATRN_ug;
A68_368  QPHATRN;  /* collateral clause result */
A68_65  RPHATRN;  /* avoid structure result */
A68_52  SPHATRN;  /* OPERATORS - mode -> union mode */
A68_52  VPHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WPHATRN;  /* YIELD */
A68_52  XPHATRN;  /* OPERATORS - mode -> union mode */
A68_56  YPHATRN;  /* procedure value */
A68_85  ZPHATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_tag);
 /* line 518: */
 /* line 519: */
{ 
 /* line 520: */
SOHATRN = Tag ;
switch ( SOHATRN.mode )
{ 
case 1: /* REF STRUCT(MODE203)  */
TOHATRN_tg = (SOHATRN.data.mode1);
 /* line 521: */
{ 
MZAAOSL_setindent( Sp, &VOHATRN );
UOHATRN.data[0] = A_UNITE(WOHATRN,mode21,21,VOHATRN);
APHATRN = YOHATRN ;
UOHATRN.data[1] = A_UNITE(ZOHATRN,mode7,7,APHATRN);
CPHATRN.fn.fn_global = LRAAOSL_newline;
CPHATRN.nonlocals = A68_NIL;
UOHATRN.data[2] = A_UNITE(BPHATRN,mode12,12,CPHATRN);
VCGATRN_print(A_HISVEC(DPHATRN,UOHATRN,3,A68_52 ));
 /* line 522: */
 /* line 523: */
 /* line 524: */
MOGATRN_pt_type((*(&(TOHATRN_tg->Tag))), (Sp+3));
} 
break;
case 2: /* REF STRUCT(MODE187)  */
EPHATRN_fg = (SOHATRN.data.mode2);
 /* line 525: */
{ 
MZAAOSL_setindent( Sp, &GPHATRN );
FPHATRN.data[0] = A_UNITE(HPHATRN,mode21,21,GPHATRN);
LPHATRN = JPHATRN ;
FPHATRN.data[1] = A_UNITE(KPHATRN,mode7,7,LPHATRN);
NPHATRN.fn.fn_global = LRAAOSL_newline;
NPHATRN.nonlocals = A68_NIL;
FPHATRN.data[2] = A_UNITE(MPHATRN,mode12,12,NPHATRN);
VCGATRN_print(A_HISVEC(OPHATRN,FPHATRN,3,A68_52 ));
 /* line 526: */
 /* line 527: */
 /* line 528: */
FIGATRN_pt_formula((*(&(EPHATRN_fg->Tag))), (Sp+3));
} 
break;
case 3: /* REF STRUCT(MODE225)  */
PPHATRN_ug = (SOHATRN.data.mode3);
 /* line 529: */
{ 
MZAAOSL_setindent( Sp, &RPHATRN );
QPHATRN.data[0] = A_UNITE(SPHATRN,mode21,21,RPHATRN);
WPHATRN = UPHATRN ;
QPHATRN.data[1] = A_UNITE(VPHATRN,mode7,7,WPHATRN);
YPHATRN.fn.fn_global = LRAAOSL_newline;
YPHATRN.nonlocals = A68_NIL;
QPHATRN.data[2] = A_UNITE(XPHATRN,mode12,12,YPHATRN);
VCGATRN_print(A_HISVEC(ZPHATRN,QPHATRN,3,A68_52 ));
 /* line 530: */
 /* line 531: */
 /* line 532: */
BTGATRN_pt_unit((*(&(PPHATRN_ug->Tag))), (Sp+3));
} 
break;
default: 
 /* line 533: */
 /* line 534: */
NKDAOST_sysfault(BQHATRN);
break;
} 
} 
A_PROC_EXIT(pt_tag);
return;
} 
#undef NL

A_STATIC A68_VOID  EQHATRN_pt_declaration(A68_286  Dec, A68_INT  Sp)
{ 
A68_286  FQHATRN;  /* united object - for case conformity */
A68_179  GQHATRN_an;
A68_361  HQHATRN;  /* collateral clause result */
A68_65  IQHATRN;  /* avoid structure result */
A68_52  JQHATRN;  /* OPERATORS - mode -> union mode */
A68_52  MQHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NQHATRN;  /* YIELD */
A68_52  OQHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  PQHATRN;  /* YIELD */
A68_52  QQHATRN;  /* OPERATORS - mode -> union mode */
A68_56  RQHATRN;  /* procedure value */
A68_85  SQHATRN;  /* OPERATORS - istruct -> vector */
A68_191  TQHATRN_fn;
A68_361  UQHATRN;  /* collateral clause result */
A68_65  VQHATRN;  /* avoid structure result */
A68_52  WQHATRN;  /* OPERATORS - mode -> union mode */
A68_52  ZQHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ARHATRN;  /* YIELD */
A68_52  BRHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  CRHATRN;  /* YIELD */
A68_52  DRHATRN;  /* OPERATORS - mode -> union mode */
A68_56  ERHATRN;  /* procedure value */
A68_85  FRHATRN;  /* OPERATORS - istruct -> vector */
A68_204  GRHATRN_tn;
A68_361  HRHATRN;  /* collateral clause result */
A68_65  IRHATRN;  /* avoid structure result */
A68_52  JRHATRN;  /* OPERATORS - mode -> union mode */
A68_52  MRHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NRHATRN;  /* YIELD */
A68_52  ORHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  PRHATRN;  /* YIELD */
A68_52  QRHATRN;  /* OPERATORS - mode -> union mode */
A68_56  RRHATRN;  /* procedure value */
A68_85  SRHATRN;  /* OPERATORS - istruct -> vector */
A68_219  TRHATRN_cn;
A68_361  URHATRN;  /* collateral clause result */
A68_65  VRHATRN;  /* avoid structure result */
A68_52  WRHATRN;  /* OPERATORS - mode -> union mode */
A68_52  ZRHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ASHATRN;  /* YIELD */
A68_52  BSHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  CSHATRN;  /* YIELD */
A68_52  DSHATRN;  /* OPERATORS - mode -> union mode */
A68_56  ESHATRN;  /* procedure value */
A68_85  FSHATRN;  /* OPERATORS - istruct -> vector */
A68_256  GSHATRN_fnn;
A68_361  HSHATRN;  /* collateral clause result */
A68_65  ISHATRN;  /* avoid structure result */
A68_52  JSHATRN;  /* OPERATORS - mode -> union mode */
A68_52  MSHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NSHATRN;  /* YIELD */
A68_52  OSHATRN;  /* OPERATORS - mode -> union mode */
A68_INT  PSHATRN;  /* YIELD */
A68_52  QSHATRN;  /* OPERATORS - mode -> union mode */
A68_56  RSHATRN;  /* procedure value */
A68_85  SSHATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_declaration);
 /* line 537: */
 /* line 538: */
{ 
 /* line 539: */
FQHATRN = Dec ;
switch ( FQHATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
GQHATRN_an = (FQHATRN.data.mode1);
MZAAOSL_setindent( Sp, &IQHATRN );
HQHATRN.data[0] = A_UNITE(JQHATRN,mode21,21,IQHATRN);
NQHATRN = LQHATRN ;
HQHATRN.data[1] = A_UNITE(MQHATRN,mode7,7,NQHATRN);
PQHATRN = GQHATRN_an.Attrno ;
HQHATRN.data[2] = A_UNITE(OQHATRN,mode1,1,PQHATRN);
RQHATRN.fn.fn_global = LRAAOSL_newline;
RQHATRN.nonlocals = A68_NIL;
HQHATRN.data[3] = A_UNITE(QQHATRN,mode12,12,RQHATRN);
 /* line 540: */
VCGATRN_print(A_HISVEC(SQHATRN,HQHATRN,4,A68_52 ));
break;
case 2: /* STRUCT(INT)  */
TQHATRN_fn = (FQHATRN.data.mode2);
MZAAOSL_setindent( Sp, &VQHATRN );
UQHATRN.data[0] = A_UNITE(WQHATRN,mode21,21,VQHATRN);
ARHATRN = YQHATRN ;
UQHATRN.data[1] = A_UNITE(ZQHATRN,mode7,7,ARHATRN);
CRHATRN = TQHATRN_fn.Intno ;
UQHATRN.data[2] = A_UNITE(BRHATRN,mode1,1,CRHATRN);
ERHATRN.fn.fn_global = LRAAOSL_newline;
ERHATRN.nonlocals = A68_NIL;
UQHATRN.data[3] = A_UNITE(DRHATRN,mode12,12,ERHATRN);
 /* line 541: */
VCGATRN_print(A_HISVEC(FRHATRN,UQHATRN,4,A68_52 ));
break;
case 3: /* STRUCT(INT)  */
GRHATRN_tn = (FQHATRN.data.mode3);
MZAAOSL_setindent( Sp, &IRHATRN );
HRHATRN.data[0] = A_UNITE(JRHATRN,mode21,21,IRHATRN);
NRHATRN = LRHATRN ;
HRHATRN.data[1] = A_UNITE(MRHATRN,mode7,7,NRHATRN);
PRHATRN = GRHATRN_tn.Typeno ;
HRHATRN.data[2] = A_UNITE(ORHATRN,mode1,1,PRHATRN);
RRHATRN.fn.fn_global = LRAAOSL_newline;
RRHATRN.nonlocals = A68_NIL;
HRHATRN.data[3] = A_UNITE(QRHATRN,mode12,12,RRHATRN);
 /* line 542: */
VCGATRN_print(A_HISVEC(SRHATRN,HRHATRN,4,A68_52 ));
break;
case 4: /* STRUCT(INT)  */
TRHATRN_cn = (FQHATRN.data.mode4);
MZAAOSL_setindent( Sp, &VRHATRN );
URHATRN.data[0] = A_UNITE(WRHATRN,mode21,21,VRHATRN);
ASHATRN = YRHATRN ;
URHATRN.data[1] = A_UNITE(ZRHATRN,mode7,7,ASHATRN);
CSHATRN = TRHATRN_cn.Constno ;
URHATRN.data[2] = A_UNITE(BSHATRN,mode1,1,CSHATRN);
ESHATRN.fn.fn_global = LRAAOSL_newline;
ESHATRN.nonlocals = A68_NIL;
URHATRN.data[3] = A_UNITE(DSHATRN,mode12,12,ESHATRN);
 /* line 543: */
VCGATRN_print(A_HISVEC(FSHATRN,URHATRN,4,A68_52 ));
break;
case 5: /* STRUCT(INT)  */
GSHATRN_fnn = (FQHATRN.data.mode5);
MZAAOSL_setindent( Sp, &ISHATRN );
HSHATRN.data[0] = A_UNITE(JSHATRN,mode21,21,ISHATRN);
NSHATRN = LSHATRN ;
HSHATRN.data[1] = A_UNITE(MSHATRN,mode7,7,NSHATRN);
PSHATRN = GSHATRN_fnn.Fnno ;
HSHATRN.data[2] = A_UNITE(OSHATRN,mode1,1,PSHATRN);
RSHATRN.fn.fn_global = LRAAOSL_newline;
RSHATRN.nonlocals = A68_NIL;
HSHATRN.data[3] = A_UNITE(QSHATRN,mode12,12,RSHATRN);
 /* line 544: */
VCGATRN_print(A_HISVEC(SSHATRN,HSHATRN,4,A68_52 ));
break;
default: 
 /* line 545: */
 /* line 546: */
NKDAOST_sysfault(USHATRN);
break;
} 
} 
A_PROC_EXIT(pt_declaration);
return;
} 
#undef NL

A_STATIC A68_VOID  XSHATRN_pt_print(A68_395  Pf, A68_INT  Sp)
{ 
A68_395  YSHATRN;  /* united object - for case conformity */
A68_257 * ZSHATRN_ps;
A68_368  ATHATRN;  /* collateral clause result */
A68_65  BTHATRN;  /* avoid structure result */
A68_52  CTHATRN;  /* OPERATORS - mode -> union mode */
A68_52  FTHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  GTHATRN;  /* YIELD */
A68_52  HTHATRN;  /* OPERATORS - mode -> union mode */
A68_56  ITHATRN;  /* procedure value */
A68_85  JTHATRN;  /* OPERATORS - istruct -> vector */
A68_271 * KTHATRN;  /* clause result */
A68_258 * LTHATRN_fs;
A68_368  MTHATRN;  /* collateral clause result */
A68_65  NTHATRN;  /* avoid structure result */
A68_52  OTHATRN;  /* OPERATORS - mode -> union mode */
A68_52  RTHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  STHATRN;  /* YIELD */
A68_52  TTHATRN;  /* OPERATORS - mode -> union mode */
A68_56  UTHATRN;  /* procedure value */
A68_85  VTHATRN;  /* OPERATORS - istruct -> vector */
A68_271 * YTHATRN_printitems;
A68_368  ZTHATRN;  /* collateral clause result */
A68_65  AUHATRN;  /* avoid structure result */
A68_52  BUHATRN;  /* OPERATORS - mode -> union mode */
A68_52  EUHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FUHATRN;  /* YIELD */
A68_52  GUHATRN;  /* OPERATORS - mode -> union mode */
A68_56  HUHATRN;  /* procedure value */
A68_85  IUHATRN;  /* OPERATORS - istruct -> vector */
A68_272  JUHATRN;  /* united object - for case conformity */
A68_VC  KUHATRN_id;
A68_368  LUHATRN;  /* collateral clause result */
A68_65  MUHATRN;  /* avoid structure result */
A68_52  NUHATRN;  /* OPERATORS - mode -> union mode */
A68_52  OUHATRN;  /* OPERATORS - mode -> union mode */
A68_52  PUHATRN;  /* OPERATORS - mode -> union mode */
A68_56  QUHATRN;  /* procedure value */
A68_85  RUHATRN;  /* OPERATORS - istruct -> vector */
A68_198 * SUHATRN_ftg;
A68_392  TUHATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(pt_print);
 /* line 549: */
 /* line 551: */
{ 
 /* line 552: */
YSHATRN = Pf ;
switch ( YSHATRN.mode )
{ 
case 1: /* REF STRUCT(MODE187,REF MODE271)  */
ZSHATRN_ps = (YSHATRN.data.mode1);
 /* line 553: */
{ 
MZAAOSL_setindent( Sp, &BTHATRN );
ATHATRN.data[0] = A_UNITE(CTHATRN,mode21,21,BTHATRN);
GTHATRN = ETHATRN ;
ATHATRN.data[1] = A_UNITE(FTHATRN,mode7,7,GTHATRN);
ITHATRN.fn.fn_global = LRAAOSL_newline;
ITHATRN.nonlocals = A68_NIL;
ATHATRN.data[2] = A_UNITE(HTHATRN,mode12,12,ITHATRN);
VCGATRN_print(A_HISVEC(JTHATRN,ATHATRN,3,A68_52 ));
 /* line 554: */
FIGATRN_pt_formula((*(&(ZSHATRN_ps->Cond))), (Sp+3));
 /* line 555: */
 /* line 556: */
 /* line 557: */
KTHATRN = (*(&(ZSHATRN_ps->Print)));
} 
break;
case 2: /* REF STRUCT(MODE187,REF MODE271)  */
LTHATRN_fs = (YSHATRN.data.mode2);
 /* line 558: */
{ 
MZAAOSL_setindent( Sp, &NTHATRN );
MTHATRN.data[0] = A_UNITE(OTHATRN,mode21,21,NTHATRN);
STHATRN = QTHATRN ;
MTHATRN.data[1] = A_UNITE(RTHATRN,mode7,7,STHATRN);
UTHATRN.fn.fn_global = LRAAOSL_newline;
UTHATRN.nonlocals = A68_NIL;
MTHATRN.data[2] = A_UNITE(TTHATRN,mode12,12,UTHATRN);
VCGATRN_print(A_HISVEC(VTHATRN,MTHATRN,3,A68_52 ));
 /* line 559: */
FIGATRN_pt_formula((*(&(LTHATRN_fs->Cond))), (Sp+3));
 /* line 560: */
 /* line 561: */
 /* line 562: */
KTHATRN = (*(&(LTHATRN_fs->Fault)));
} 
break;
default: 
NKDAOST_sysfault(XTHATRN);
 /* line 563: */
KTHATRN = (A68_271 *)A68_NIL;
break;
} 
YTHATRN_printitems = KTHATRN;
 /* line 564: */
MZAAOSL_setindent( (Sp+3), &AUHATRN );
ZTHATRN.data[0] = A_UNITE(BUHATRN,mode21,21,AUHATRN);
FUHATRN = DUHATRN ;
ZTHATRN.data[1] = A_UNITE(EUHATRN,mode7,7,FUHATRN);
HUHATRN.fn.fn_global = LRAAOSL_newline;
HUHATRN.nonlocals = A68_NIL;
ZTHATRN.data[2] = A_UNITE(GUHATRN,mode12,12,HUHATRN);
VCGATRN_print(A_HISVEC(IUHATRN,ZTHATRN,3,A68_52 ));
 /* line 565: */
for ( ;; )
{ 
 /* line 566: */
if ( !((YTHATRN_printitems!=MAAATRN_nilprintitems)) ) break;
 /* line 567: */
JUHATRN = (*(&(YTHATRN_printitems->Item))) ;
switch ( JUHATRN.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
KUHATRN_id = (JUHATRN.data.mode1);
MZAAOSL_setindent( (Sp+6), &MUHATRN );
LUHATRN.data[0] = A_UNITE(NUHATRN,mode21,21,MUHATRN);
LUHATRN.data[1] = A_UNITE(OUHATRN,mode7,7,KUHATRN_id);
QUHATRN.fn.fn_global = LRAAOSL_newline;
QUHATRN.nonlocals = A68_NIL;
LUHATRN.data[2] = A_UNITE(PUHATRN,mode12,12,QUHATRN);
 /* line 568: */
VCGATRN_print(A_HISVEC(RUHATRN,LUHATRN,3,A68_52 ));
break;
case 2: /* REF STRUCT(MODE187)  */
SUHATRN_ftg = (JUHATRN.data.mode2);
 /* line 569: */
ROHATRN_pt_tag(A_UNITE(TUHATRN,mode2,2,SUHATRN_ftg), (Sp+6));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 570: */
 /* line 571: */
YTHATRN_printitems = (*(&(YTHATRN_printitems->Rest)));
}
 /* line 572: */
} 
A_PROC_EXIT(pt_print);
return;
} 
#undef NL

A_STATIC A68_VOID  WUHATRN_anonymous(A68_274  Step, A68_INT  Sp)
{ 
A68_274  YXHATRN;  /* united object - for case conformity */
A68_286  ZXHATRN_dec;
A68_257 * AYHATRN_pt;
A68_395  BYHATRN;  /* OPERATORS - mode -> union mode */
A68_258 * CYHATRN_ft;
A68_395  DYHATRN;  /* OPERATORS - mode -> union mode */
A68_275 * EYHATRN_sl;
A68_368  FYHATRN;  /* collateral clause result */
A68_65  GYHATRN;  /* avoid structure result */
A68_52  HYHATRN;  /* OPERATORS - mode -> union mode */
A68_52  KYHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LYHATRN;  /* YIELD */
A68_52  MYHATRN;  /* OPERATORS - mode -> union mode */
A68_56  NYHATRN;  /* procedure value */
A68_85  OYHATRN;  /* OPERATORS - istruct -> vector */
A68_276 * PYHATRN_sv;
A68_368  QYHATRN;  /* collateral clause result */
A68_65  RYHATRN;  /* avoid structure result */
A68_52  SYHATRN;  /* OPERATORS - mode -> union mode */
A68_52  VYHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WYHATRN;  /* YIELD */
A68_52  XYHATRN;  /* OPERATORS - mode -> union mode */
A68_56  YYHATRN;  /* procedure value */
A68_85  ZYHATRN;  /* OPERATORS - istruct -> vector */
A68_277 * AZHATRN_spv;
A68_368  BZHATRN;  /* collateral clause result */
A68_65  CZHATRN;  /* avoid structure result */
A68_52  DZHATRN;  /* OPERATORS - mode -> union mode */
A68_52  GZHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  HZHATRN;  /* YIELD */
A68_52  IZHATRN;  /* OPERATORS - mode -> union mode */
A68_56  JZHATRN;  /* procedure value */
A68_85  KZHATRN;  /* OPERATORS - istruct -> vector */
A68_278 * LZHATRN_sa;
A68_368  MZHATRN;  /* collateral clause result */
A68_65  NZHATRN;  /* avoid structure result */
A68_52  OZHATRN;  /* OPERATORS - mode -> union mode */
A68_52  RZHATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SZHATRN;  /* YIELD */
A68_52  TZHATRN;  /* OPERATORS - mode -> union mode */
A68_56  UZHATRN;  /* procedure value */
A68_85  VZHATRN;  /* OPERATORS - istruct -> vector */
A68_279 * WZHATRN_sc;
A68_368  XZHATRN;  /* collateral clause result */
A68_65  YZHATRN;  /* avoid structure result */
A68_52  ZZHATRN;  /* OPERATORS - mode -> union mode */
A68_52  CAIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  DAIATRN;  /* YIELD */
A68_52  EAIATRN;  /* OPERATORS - mode -> union mode */
A68_56  FAIATRN;  /* procedure value */
A68_85  GAIATRN;  /* OPERATORS - istruct -> vector */
A68_280 * HAIATRN_scond;
A68_368  IAIATRN;  /* collateral clause result */
A68_65  JAIATRN;  /* avoid structure result */
A68_52  KAIATRN;  /* OPERATORS - mode -> union mode */
A68_52  NAIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  OAIATRN;  /* YIELD */
A68_52  PAIATRN;  /* OPERATORS - mode -> union mode */
A68_56  QAIATRN;  /* procedure value */
A68_85  RAIATRN;  /* OPERATORS - istruct -> vector */
A68_281 * SAIATRN_sd;
A68_368  TAIATRN;  /* collateral clause result */
A68_65  UAIATRN;  /* avoid structure result */
A68_52  VAIATRN;  /* OPERATORS - mode -> union mode */
A68_52  YAIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZAIATRN;  /* YIELD */
A68_52  ABIATRN;  /* OPERATORS - mode -> union mode */
A68_56  BBIATRN;  /* procedure value */
A68_85  CBIATRN;  /* OPERATORS - istruct -> vector */
A68_283 * DBIATRN_sr;
A68_368  EBIATRN;  /* collateral clause result */
A68_65  FBIATRN;  /* avoid structure result */
A68_52  GBIATRN;  /* OPERATORS - mode -> union mode */
A68_52  JBIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KBIATRN;  /* YIELD */
A68_52  LBIATRN;  /* OPERATORS - mode -> union mode */
A68_56  MBIATRN;  /* procedure value */
A68_85  NBIATRN;  /* OPERATORS - istruct -> vector */
A68_282 * OBIATRN_sn;
A68_368  PBIATRN;  /* collateral clause result */
A68_65  QBIATRN;  /* avoid structure result */
A68_52  RBIATRN;  /* OPERATORS - mode -> union mode */
A68_52  UBIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VBIATRN;  /* YIELD */
A68_52  WBIATRN;  /* OPERATORS - mode -> union mode */
A68_56  XBIATRN;  /* procedure value */
A68_85  YBIATRN;  /* OPERATORS - istruct -> vector */
A68_273 * ZBIATRN_sq;
A68_273 * ACIATRN_sequence;
A68_368  BCIATRN;  /* collateral clause result */
A68_65  CCIATRN;  /* avoid structure result */
A68_52  DCIATRN;  /* OPERATORS - mode -> union mode */
A68_52  GCIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  HCIATRN;  /* YIELD */
A68_52  ICIATRN;  /* OPERATORS - mode -> union mode */
A68_56  JCIATRN;  /* procedure value */
A68_85  KCIATRN;  /* OPERATORS - istruct -> vector */
 /* line 575: */
 /* line 576: */
{ 
 /* line 602: */
 /* line 603: */
YXHATRN = Step ;
switch ( YXHATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(ZXHATRN_dec,YXHATRN);
 /* line 604: */
EQHATRN_pt_declaration(ZXHATRN_dec, (Sp+3));
break;
case 6: /* REF STRUCT(MODE187,REF MODE271)  */
AYHATRN_pt = (YXHATRN.data.mode6);
 /* line 605: */
XSHATRN_pt_print(A_UNITE(BYHATRN,mode1,1,AYHATRN_pt), (Sp+3));
break;
case 7: /* REF STRUCT(MODE187,REF MODE271)  */
CYHATRN_ft = (YXHATRN.data.mode7);
 /* line 606: */
XSHATRN_pt_print(A_UNITE(DYHATRN,mode2,2,CYHATRN_ft), (Sp+3));
break;
case 8: /* REF STRUCT(MODE259)  */
EYHATRN_sl = (YXHATRN.data.mode8);
 /* line 607: */
{ 
MZAAOSL_setindent( Sp, &GYHATRN );
FYHATRN.data[0] = A_UNITE(HYHATRN,mode21,21,GYHATRN);
LYHATRN = JYHATRN ;
FYHATRN.data[1] = A_UNITE(KYHATRN,mode7,7,LYHATRN);
NYHATRN.fn.fn_global = LRAAOSL_newline;
NYHATRN.nonlocals = A68_NIL;
FYHATRN.data[2] = A_UNITE(MYHATRN,mode12,12,NYHATRN);
VCGATRN_print(A_HISVEC(OYHATRN,FYHATRN,3,A68_52 ));
 /* line 608: */
ESGATRN_pt_names((*(&((&(EYHATRN_sl->Seqlet))->Letnames))), (Sp+3));
 /* line 609: */
 /* line 610: */
 /* line 611: */
BTGATRN_pt_unit((*(&((&(EYHATRN_sl->Seqlet))->Unit))), (Sp+3));
} 
break;
case 9: /* REF STRUCT(MODE259)  */
PYHATRN_sv = (YXHATRN.data.mode9);
 /* line 612: */
{ 
MZAAOSL_setindent( Sp, &RYHATRN );
QYHATRN.data[0] = A_UNITE(SYHATRN,mode21,21,RYHATRN);
WYHATRN = UYHATRN ;
QYHATRN.data[1] = A_UNITE(VYHATRN,mode7,7,WYHATRN);
YYHATRN.fn.fn_global = LRAAOSL_newline;
YYHATRN.nonlocals = A68_NIL;
QYHATRN.data[2] = A_UNITE(XYHATRN,mode12,12,YYHATRN);
VCGATRN_print(A_HISVEC(ZYHATRN,QYHATRN,3,A68_52 ));
 /* line 613: */
ESGATRN_pt_names((*(&((&(PYHATRN_sv->Seqvar))->Letnames))), (Sp+3));
 /* line 614: */
 /* line 615: */
 /* line 616: */
BTGATRN_pt_unit((*(&((&(PYHATRN_sv->Seqvar))->Unit))), (Sp+3));
} 
break;
case 10: /* REF STRUCT(REF MODE266,MODE225)  */
AZHATRN_spv = (YXHATRN.data.mode10);
 /* line 617: */
{ 
MZAAOSL_setindent( Sp, &CZHATRN );
BZHATRN.data[0] = A_UNITE(DZHATRN,mode21,21,CZHATRN);
HZHATRN = FZHATRN ;
BZHATRN.data[1] = A_UNITE(GZHATRN,mode7,7,HZHATRN);
JZHATRN.fn.fn_global = LRAAOSL_newline;
JZHATRN.nonlocals = A68_NIL;
BZHATRN.data[2] = A_UNITE(IZHATRN,mode12,12,JZHATRN);
VCGATRN_print(A_HISVEC(KZHATRN,BZHATRN,3,A68_52 ));
 /* line 618: */
ESGATRN_pt_names((*(&(AZHATRN_spv->Pvarnames))), (Sp+3));
 /* line 619: */
 /* line 620: */
 /* line 621: */
BTGATRN_pt_unit((*(&(AZHATRN_spv->Init))), (Sp+3));
} 
break;
case 11: /* REF STRUCT(MODE225,MODE225)  */
LZHATRN_sa = (YXHATRN.data.mode11);
 /* line 622: */
{ 
MZAAOSL_setindent( Sp, &NZHATRN );
MZHATRN.data[0] = A_UNITE(OZHATRN,mode21,21,NZHATRN);
SZHATRN = QZHATRN ;
MZHATRN.data[1] = A_UNITE(RZHATRN,mode7,7,SZHATRN);
UZHATRN.fn.fn_global = LRAAOSL_newline;
UZHATRN.nonlocals = A68_NIL;
MZHATRN.data[2] = A_UNITE(TZHATRN,mode12,12,UZHATRN);
VCGATRN_print(A_HISVEC(VZHATRN,MZHATRN,3,A68_52 ));
 /* line 623: */
BTGATRN_pt_unit((*(&(LZHATRN_sa->From))), (Sp+3));
 /* line 624: */
 /* line 625: */
 /* line 626: */
BTGATRN_pt_unit((*(&(LZHATRN_sa->To))), (Sp+3));
} 
break;
case 12: /* REF STRUCT(MODE225,REF MODE284)  */
WZHATRN_sc = (YXHATRN.data.mode12);
 /* line 627: */
{ 
MZAAOSL_setindent( Sp, &YZHATRN );
XZHATRN.data[0] = A_UNITE(ZZHATRN,mode21,21,YZHATRN);
DAIATRN = BAIATRN ;
XZHATRN.data[1] = A_UNITE(CAIATRN,mode7,7,DAIATRN);
FAIATRN.fn.fn_global = LRAAOSL_newline;
FAIATRN.nonlocals = A68_NIL;
XZHATRN.data[2] = A_UNITE(EAIATRN,mode12,12,FAIATRN);
VCGATRN_print(A_HISVEC(GAIATRN,XZHATRN,3,A68_52 ));
 /* line 628: */
BTGATRN_pt_unit((*(&(WZHATRN_sc->Input))), (Sp+3));
 /* line 629: */
 /* line 630: */
 /* line 631: */
AVHATRN_pt_seqchoices((*(&(WZHATRN_sc->Choices))), (Sp+3));
} 
break;
case 13: /* REF STRUCT(MODE187,MODE274,MODE274)  */
HAIATRN_scond = (YXHATRN.data.mode13);
 /* line 632: */
{ 
MZAAOSL_setindent( Sp, &JAIATRN );
IAIATRN.data[0] = A_UNITE(KAIATRN,mode21,21,JAIATRN);
OAIATRN = MAIATRN ;
IAIATRN.data[1] = A_UNITE(NAIATRN,mode7,7,OAIATRN);
QAIATRN.fn.fn_global = LRAAOSL_newline;
QAIATRN.nonlocals = A68_NIL;
IAIATRN.data[2] = A_UNITE(PAIATRN,mode12,12,QAIATRN);
VCGATRN_print(A_HISVEC(RAIATRN,IAIATRN,3,A68_52 ));
 /* line 633: */
FIGATRN_pt_formula((*(&(HAIATRN_scond->Cond))), (Sp+3));
 /* line 634: */
A_CALLPROC(XSGATRN_pt_seqstep,((*(&(HAIATRN_scond->True))), (Sp+3)),((*(&(HAIATRN_scond->True))), (Sp+3),(XSGATRN_pt_seqstep).nonlocals));
 /* line 635: */
 /* line 636: */
 /* line 637: */
A_CALLPROC(XSGATRN_pt_seqstep,((*(&(HAIATRN_scond->False))), (Sp+3)),((*(&(HAIATRN_scond->False))), (Sp+3),(XSGATRN_pt_seqstep).nonlocals));
} 
break;
case 14: /* REF STRUCT(MODE187,MODE274)  */
SAIATRN_sd = (YXHATRN.data.mode14);
 /* line 638: */
{ 
MZAAOSL_setindent( Sp, &UAIATRN );
TAIATRN.data[0] = A_UNITE(VAIATRN,mode21,21,UAIATRN);
ZAIATRN = XAIATRN ;
TAIATRN.data[1] = A_UNITE(YAIATRN,mode7,7,ZAIATRN);
BBIATRN.fn.fn_global = LRAAOSL_newline;
BBIATRN.nonlocals = A68_NIL;
TAIATRN.data[2] = A_UNITE(ABIATRN,mode12,12,BBIATRN);
VCGATRN_print(A_HISVEC(CBIATRN,TAIATRN,3,A68_52 ));
 /* line 639: */
FIGATRN_pt_formula((*(&(SAIATRN_sd->Repl))), (Sp+3));
 /* line 640: */
 /* line 641: */
 /* line 642: */
A_CALLPROC(XSGATRN_pt_seqstep,((*(&(SAIATRN_sd->Body))), (Sp+3)),((*(&(SAIATRN_sd->Body))), (Sp+3),(XSGATRN_pt_seqstep).nonlocals));
} 
break;
case 17: /* REF STRUCT(MODE187,MODE274)  */
DBIATRN_sr = (YXHATRN.data.mode17);
 /* line 643: */
{ 
MZAAOSL_setindent( Sp, &FBIATRN );
EBIATRN.data[0] = A_UNITE(GBIATRN,mode21,21,FBIATRN);
KBIATRN = IBIATRN ;
EBIATRN.data[1] = A_UNITE(JBIATRN,mode7,7,KBIATRN);
MBIATRN.fn.fn_global = LRAAOSL_newline;
MBIATRN.nonlocals = A68_NIL;
EBIATRN.data[2] = A_UNITE(LBIATRN,mode12,12,MBIATRN);
VCGATRN_print(A_HISVEC(NBIATRN,EBIATRN,3,A68_52 ));
 /* line 644: */
FIGATRN_pt_formula((*(&(DBIATRN_sr->Size))), (Sp+3));
 /* line 645: */
 /* line 646: */
 /* line 647: */
A_CALLPROC(XSGATRN_pt_seqstep,((*(&(DBIATRN_sr->Elem))), (Sp+3)),((*(&(DBIATRN_sr->Elem))), (Sp+3),(XSGATRN_pt_seqstep).nonlocals));
} 
break;
case 15: /* REF STRUCT(INT)  */
OBIATRN_sn = (YXHATRN.data.mode15);
 /* line 648: */
MZAAOSL_setindent( Sp, &QBIATRN );
PBIATRN.data[0] = A_UNITE(RBIATRN,mode21,21,QBIATRN);
VBIATRN = TBIATRN ;
PBIATRN.data[1] = A_UNITE(UBIATRN,mode7,7,VBIATRN);
XBIATRN.fn.fn_global = LRAAOSL_newline;
XBIATRN.nonlocals = A68_NIL;
PBIATRN.data[2] = A_UNITE(WBIATRN,mode12,12,XBIATRN);
 /* line 649: */
VCGATRN_print(A_HISVEC(YBIATRN,PBIATRN,3,A68_52 ));
break;
case 16: /* REF STRUCT(MODE274,REF MODE273)  */
ZBIATRN_sq = (YXHATRN.data.mode16);
 /* line 650: */
{ 
ACIATRN_sequence = ZBIATRN_sq;
 /* line 651: */
MZAAOSL_setindent( Sp, &CCIATRN );
BCIATRN.data[0] = A_UNITE(DCIATRN,mode21,21,CCIATRN);
HCIATRN = FCIATRN ;
BCIATRN.data[1] = A_UNITE(GCIATRN,mode7,7,HCIATRN);
JCIATRN.fn.fn_global = LRAAOSL_newline;
JCIATRN.nonlocals = A68_NIL;
BCIATRN.data[2] = A_UNITE(ICIATRN,mode12,12,JCIATRN);
VCGATRN_print(A_HISVEC(KCIATRN,BCIATRN,3,A68_52 ));
 /* line 652: */
for ( ;; )
{ 
 /* line 653: */
if ( !((ACIATRN_sequence!=QAAATRN_nilsequence)) ) break;
A_CALLPROC(XSGATRN_pt_seqstep,((*(&(ACIATRN_sequence->Step))), (Sp+3)),((*(&(ACIATRN_sequence->Step))), (Sp+3),(XSGATRN_pt_seqstep).nonlocals));
 /* line 654: */
 /* line 655: */
ACIATRN_sequence = (*(&(ACIATRN_sequence->Rest)));
}
 /* line 656: */
 /* line 657: */
} 
break;
default: 
 /* line 658: */
 /* line 659: */
NKDAOST_sysfault(MCIATRN);
break;
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  QCIATRN_anonymous(A68_255  Step, A68_INT  Sp)
{ 
A68_255  RCIATRN;  /* united object - for case conformity */
A68_286  SCIATRN_dec;
A68_257 * TCIATRN_pt;
A68_395  UCIATRN;  /* OPERATORS - mode -> union mode */
A68_258 * VCIATRN_ft;
A68_395  WCIATRN;  /* OPERATORS - mode -> union mode */
A68_259 * XCIATRN_let;
A68_368  YCIATRN;  /* collateral clause result */
A68_65  ZCIATRN;  /* avoid structure result */
A68_52  ADIATRN;  /* OPERATORS - mode -> union mode */
A68_52  DDIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  EDIATRN;  /* YIELD */
A68_52  FDIATRN;  /* OPERATORS - mode -> union mode */
A68_56  GDIATRN;  /* procedure value */
A68_85  HDIATRN;  /* OPERATORS - istruct -> vector */
A68_260 * IDIATRN_mk;
A68_368  JDIATRN;  /* collateral clause result */
A68_65  KDIATRN;  /* avoid structure result */
A68_52  LDIATRN;  /* OPERATORS - mode -> union mode */
A68_52  ODIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  PDIATRN;  /* YIELD */
A68_52  QDIATRN;  /* OPERATORS - mode -> union mode */
A68_56  RDIATRN;  /* procedure value */
A68_85  SDIATRN;  /* OPERATORS - istruct -> vector */
A68_261 * TDIATRN_jn;
A68_368  UDIATRN;  /* collateral clause result */
A68_65  VDIATRN;  /* avoid structure result */
A68_52  WDIATRN;  /* OPERATORS - mode -> union mode */
A68_52  ZDIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  AEIATRN;  /* YIELD */
A68_52  BEIATRN;  /* OPERATORS - mode -> union mode */
A68_56  CEIATRN;  /* procedure value */
A68_85  DEIATRN;  /* OPERATORS - istruct -> vector */
A68_262 * EEIATRN_rjn;
A68_368  FEIATRN;  /* collateral clause result */
A68_65  GEIATRN;  /* avoid structure result */
A68_52  HEIATRN;  /* OPERATORS - mode -> union mode */
A68_52  KEIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LEIATRN;  /* YIELD */
A68_52  MEIATRN;  /* OPERATORS - mode -> union mode */
A68_56  NEIATRN;  /* procedure value */
A68_85  OEIATRN;  /* OPERATORS - istruct -> vector */
A68_264 * PEIATRN_joins;
A68_368  QEIATRN;  /* collateral clause result */
A68_65  REIATRN;  /* avoid structure result */
A68_52  SEIATRN;  /* OPERATORS - mode -> union mode */
A68_52  VEIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WEIATRN;  /* YIELD */
A68_52  XEIATRN;  /* OPERATORS - mode -> union mode */
A68_56  YEIATRN;  /* procedure value */
A68_85  ZEIATRN;  /* OPERATORS - istruct -> vector */
A68_255  AFIATRN;  /* OPERATORS - mode -> union mode */
A68_261 * BFIATRN;  /* YIELD */
A68_368  CFIATRN;  /* collateral clause result */
A68_65  DFIATRN;  /* avoid structure result */
A68_52  EFIATRN;  /* OPERATORS - mode -> union mode */
A68_52  HFIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  IFIATRN;  /* YIELD */
A68_52  JFIATRN;  /* OPERATORS - mode -> union mode */
A68_56  KFIATRN;  /* procedure value */
A68_85  LFIATRN;  /* OPERATORS - istruct -> vector */
 /* line 663: */
 /* line 664: */
{ 
 /* line 665: */
RCIATRN = Step ;
switch ( RCIATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(SCIATRN_dec,RCIATRN);
 /* line 666: */
EQHATRN_pt_declaration(SCIATRN_dec, (Sp+3));
break;
case 6: /* REF STRUCT(MODE187,REF MODE271)  */
TCIATRN_pt = (RCIATRN.data.mode6);
 /* line 667: */
XSHATRN_pt_print(A_UNITE(UCIATRN,mode1,1,TCIATRN_pt), (Sp+3));
break;
case 7: /* REF STRUCT(MODE187,REF MODE271)  */
VCIATRN_ft = (RCIATRN.data.mode7);
 /* line 668: */
XSHATRN_pt_print(A_UNITE(WCIATRN,mode2,2,VCIATRN_ft), (Sp+3));
break;
case 8: /* REF STRUCT(REF MODE266,MODE225)  */
XCIATRN_let = (RCIATRN.data.mode8);
 /* line 669: */
{ 
MZAAOSL_setindent( Sp, &ZCIATRN );
YCIATRN.data[0] = A_UNITE(ADIATRN,mode21,21,ZCIATRN);
EDIATRN = CDIATRN ;
YCIATRN.data[1] = A_UNITE(DDIATRN,mode7,7,EDIATRN);
GDIATRN.fn.fn_global = LRAAOSL_newline;
GDIATRN.nonlocals = A68_NIL;
YCIATRN.data[2] = A_UNITE(FDIATRN,mode12,12,GDIATRN);
VCGATRN_print(A_HISVEC(HDIATRN,YCIATRN,3,A68_52 ));
 /* line 670: */
ESGATRN_pt_names((*(&(XCIATRN_let->Letnames))), (Sp+3));
 /* line 671: */
 /* line 672: */
 /* line 673: */
BTGATRN_pt_unit((*(&(XCIATRN_let->Unit))), (Sp+3));
} 
break;
case 9: /* REF STRUCT(REF MODE199,MODE265,REF MODE266)  */
IDIATRN_mk = (RCIATRN.data.mode9);
 /* line 674: */
{ 
MZAAOSL_setindent( Sp, &KDIATRN );
JDIATRN.data[0] = A_UNITE(LDIATRN,mode21,21,KDIATRN);
PDIATRN = NDIATRN ;
JDIATRN.data[1] = A_UNITE(ODIATRN,mode7,7,PDIATRN);
RDIATRN.fn.fn_global = LRAAOSL_newline;
RDIATRN.nonlocals = A68_NIL;
JDIATRN.data[2] = A_UNITE(QDIATRN,mode12,12,RDIATRN);
VCGATRN_print(A_HISVEC(SDIATRN,JDIATRN,3,A68_52 ));
 /* line 675: */
IOGATRN_pt_formulas((*(&(IDIATRN_mk->Sizes))), (Sp+3));
 /* line 676: */
A_CALLPROC(BSGATRN_pt_instance,((*(&(IDIATRN_mk->Inst))), (Sp+3)),((*(&(IDIATRN_mk->Inst))), (Sp+3),(BSGATRN_pt_instance).nonlocals));
 /* line 677: */
 /* line 678: */
 /* line 679: */
ESGATRN_pt_names((*(&(IDIATRN_mk->Makenames))), (Sp+3));
} 
break;
case 10: /* REF STRUCT(MODE225,MODE225)  */
TDIATRN_jn = (RCIATRN.data.mode10);
 /* line 680: */
{ 
MZAAOSL_setindent( Sp, &VDIATRN );
UDIATRN.data[0] = A_UNITE(WDIATRN,mode21,21,VDIATRN);
AEIATRN = YDIATRN ;
UDIATRN.data[1] = A_UNITE(ZDIATRN,mode7,7,AEIATRN);
CEIATRN.fn.fn_global = LRAAOSL_newline;
CEIATRN.nonlocals = A68_NIL;
UDIATRN.data[2] = A_UNITE(BEIATRN,mode12,12,CEIATRN);
VCGATRN_print(A_HISVEC(DEIATRN,UDIATRN,3,A68_52 ));
 /* line 681: */
BTGATRN_pt_unit((*(&(TDIATRN_jn->From))), (Sp+3));
 /* line 682: */
 /* line 683: */
 /* line 684: */
BTGATRN_pt_unit((*(&(TDIATRN_jn->To))), (Sp+3));
} 
break;
case 11: /* REF STRUCT(REF MODE199,REF MODE264)  */
EEIATRN_rjn = (RCIATRN.data.mode11);
 /* line 685: */
{ 
MZAAOSL_setindent( Sp, &GEIATRN );
FEIATRN.data[0] = A_UNITE(HEIATRN,mode21,21,GEIATRN);
LEIATRN = JEIATRN ;
FEIATRN.data[1] = A_UNITE(KEIATRN,mode7,7,LEIATRN);
NEIATRN.fn.fn_global = LRAAOSL_newline;
NEIATRN.nonlocals = A68_NIL;
FEIATRN.data[2] = A_UNITE(MEIATRN,mode12,12,NEIATRN);
VCGATRN_print(A_HISVEC(OEIATRN,FEIATRN,3,A68_52 ));
 /* line 686: */
IOGATRN_pt_formulas((*(&(EEIATRN_rjn->Repls))), (Sp+3));
 /* line 687: */
PEIATRN_joins = (*(&(EEIATRN_rjn->Joins)));
 /* line 688: */
MZAAOSL_setindent( (Sp+3), &REIATRN );
QEIATRN.data[0] = A_UNITE(SEIATRN,mode21,21,REIATRN);
WEIATRN = UEIATRN ;
QEIATRN.data[1] = A_UNITE(VEIATRN,mode7,7,WEIATRN);
YEIATRN.fn.fn_global = LRAAOSL_newline;
YEIATRN.nonlocals = A68_NIL;
QEIATRN.data[2] = A_UNITE(XEIATRN,mode12,12,YEIATRN);
VCGATRN_print(A_HISVEC(ZEIATRN,QEIATRN,3,A68_52 ));
 /* line 689: */
for ( ;; )
{ 
 /* line 690: */
if ( !((PEIATRN_joins!=RAAATRN_niljoins)) ) break;
BFIATRN = (&(PEIATRN_joins->Join)) ;
A_CALLPROC(YSGATRN_pt_step,(A_UNITE(AFIATRN,mode10,10,BFIATRN), (Sp+3)),(A_UNITE(AFIATRN,mode10,10,BFIATRN), (Sp+3),(YSGATRN_pt_step).nonlocals));
 /* line 691: */
 /* line 692: */
PEIATRN_joins = (*(&(PEIATRN_joins->Rest)));
}
 /* line 693: */
 /* line 694: */
} 
break;
case 12: /* REF STRUCT(INT)  */
MZAAOSL_setindent( Sp, &DFIATRN );
CFIATRN.data[0] = A_UNITE(EFIATRN,mode21,21,DFIATRN);
IFIATRN = GFIATRN ;
CFIATRN.data[1] = A_UNITE(HFIATRN,mode7,7,IFIATRN);
KFIATRN.fn.fn_global = LRAAOSL_newline;
KFIATRN.nonlocals = A68_NIL;
CFIATRN.data[2] = A_UNITE(JFIATRN,mode12,12,KFIATRN);
 /* line 695: */
VCGATRN_print(A_HISVEC(LFIATRN,CFIATRN,3,A68_52 ));
break;
default: 
 /* line 696: */
 /* line 697: */
NKDAOST_sysfault(NFIATRN);
break;
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  RFIATRN_pt_typebody(A68_216  Body, A68_INT  Sp)
{ 
A68_216  SFIATRN;  /* united object - for case conformity */
A68_217  TFIATRN_nn;
A68_368  UFIATRN;  /* collateral clause result */
A68_65  VFIATRN;  /* avoid structure result */
A68_52  WFIATRN;  /* OPERATORS - mode -> union mode */
A68_52  ZFIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  AGIATRN;  /* YIELD */
A68_52  BGIATRN;  /* OPERATORS - mode -> union mode */
A68_56  CGIATRN;  /* procedure value */
A68_85  DGIATRN;  /* OPERATORS - istruct -> vector */
A68_214 * EGIATRN_al;
A68_INT  FGIATRN;  /* forall loop counter */
A68_368  GGIATRN;  /* collateral clause result */
A68_65  HGIATRN;  /* avoid structure result */
A68_52  IGIATRN;  /* OPERATORS - mode -> union mode */
A68_52  JGIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KGIATRN;  /* YIELD */
A68_52  LGIATRN;  /* OPERATORS - mode -> union mode */
A68_56  MGIATRN;  /* procedure value */
A68_85  NGIATRN;  /* OPERATORS - istruct -> vector */
A68_215 * OGIATRN_ni;
A68_361  PGIATRN;  /* collateral clause result */
A68_65  QGIATRN;  /* avoid structure result */
A68_52  RGIATRN;  /* OPERATORS - mode -> union mode */
A68_52  UGIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VGIATRN;  /* YIELD */
A68_52  WGIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  XGIATRN;  /* YIELD */
A68_52  YGIATRN;  /* OPERATORS - mode -> union mode */
A68_56  ZGIATRN;  /* procedure value */
A68_85  AHIATRN;  /* OPERATORS - istruct -> vector */
A68_213 * BHIATRN_nc;
A68_361  CHIATRN;  /* collateral clause result */
A68_65  DHIATRN;  /* avoid structure result */
A68_52  EHIATRN;  /* OPERATORS - mode -> union mode */
A68_52  HHIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  IHIATRN;  /* YIELD */
A68_52  JHIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KHIATRN;  /* YIELD */
A68_52  LHIATRN;  /* OPERATORS - mode -> union mode */
A68_56  MHIATRN;  /* procedure value */
A68_85  NHIATRN;  /* OPERATORS - istruct -> vector */
A68_65  OHIATRN;  /* avoid structure result */
A68_52  PHIATRN;  /* OPERATORS - mode -> union mode */
A68_85  QHIATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RHIATRN_i;
A68_INT  SHIATRN;  /* to part of loop */
A68_363  THIATRN;  /* collateral clause result */
A68_VC  UHIATRN;  /* OPERATORS - simple index */
A68_52  VHIATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  WHIATRN;  /* YIELD */
A68_52  XHIATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  YHIATRN;  /* YIELD */
A68_85  ZHIATRN;  /* OPERATORS - istruct -> vector */
A68_52  AIIATRN;  /* OPERATORS - mode -> union mode */
A68_56  BIIATRN;  /* procedure value */
A68_85  CIIATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212 * DIIATRN_tg;
A68_392  EIIATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(pt_typebody);
 /* line 700: */
 /* line 701: */
{ 
 /* line 702: */
SFIATRN = Body ;
switch ( SFIATRN.mode )
{ 
case 1: /* REF VECTOR [] MODE214 */
TFIATRN_nn = (SFIATRN.data.mode1);
 /* line 703: */
{ 
MZAAOSL_setindent( Sp, &VFIATRN );
UFIATRN.data[0] = A_UNITE(WFIATRN,mode21,21,VFIATRN);
AGIATRN = YFIATRN ;
UFIATRN.data[1] = A_UNITE(ZFIATRN,mode7,7,AGIATRN);
CGIATRN.fn.fn_global = LRAAOSL_newline;
CGIATRN.nonlocals = A68_NIL;
UFIATRN.data[2] = A_UNITE(BGIATRN,mode12,12,CGIATRN);
VCGATRN_print(A_HISVEC(DGIATRN,UFIATRN,3,A68_52 ));
 /* line 704: */
 /* line 705: */
FGIATRN = TFIATRN_nn.upb -1;
EGIATRN_al = TFIATRN_nn.data;
for (;FGIATRN-- >= 0;
(EGIATRN_al++
) )
{
MZAAOSL_setindent( (Sp+3), &HGIATRN );
GGIATRN.data[0] = A_UNITE(IGIATRN,mode21,21,HGIATRN);
KGIATRN = (*(&(EGIATRN_al->Altname))) ;
GGIATRN.data[1] = A_UNITE(JGIATRN,mode7,7,KGIATRN);
MGIATRN.fn.fn_global = LRAAOSL_newline;
MGIATRN.nonlocals = A68_NIL;
GGIATRN.data[2] = A_UNITE(LGIATRN,mode12,12,MGIATRN);
VCGATRN_print(A_HISVEC(NGIATRN,GGIATRN,3,A68_52 ));
 /* line 706: */
 /* line 707: */
MOGATRN_pt_type((*(&(EGIATRN_al->Assoc))), (Sp+6));
}
 /* line 708: */
 /* line 709: */
} 
break;
case 2: /* REF STRUCT(REF MODE26,MODE202)  */
OGIATRN_ni = (SFIATRN.data.mode2);
 /* line 710: */
{ 
MZAAOSL_setindent( Sp, &QGIATRN );
PGIATRN.data[0] = A_UNITE(RGIATRN,mode21,21,QGIATRN);
VGIATRN = TGIATRN ;
PGIATRN.data[1] = A_UNITE(UGIATRN,mode7,7,VGIATRN);
XGIATRN = (*(&(OGIATRN_ni->Tagname))) ;
PGIATRN.data[2] = A_UNITE(WGIATRN,mode7,7,XGIATRN);
ZGIATRN.fn.fn_global = LRAAOSL_newline;
ZGIATRN.nonlocals = A68_NIL;
PGIATRN.data[3] = A_UNITE(YGIATRN,mode12,12,ZGIATRN);
VCGATRN_print(A_HISVEC(AHIATRN,PGIATRN,4,A68_52 ));
 /* line 711: */
 /* line 712: */
 /* line 713: */
PNGATRN_pt_range((*(&(OGIATRN_ni->Range))), (Sp+3));
} 
break;
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
BHIATRN_nc = (SFIATRN.data.mode4);
 /* line 714: */
{ 
MZAAOSL_setindent( Sp, &DHIATRN );
CHIATRN.data[0] = A_UNITE(EHIATRN,mode21,21,DHIATRN);
IHIATRN = GHIATRN ;
CHIATRN.data[1] = A_UNITE(HHIATRN,mode7,7,IHIATRN);
KHIATRN = (*(&(BHIATRN_nc->Tagname))) ;
CHIATRN.data[2] = A_UNITE(JHIATRN,mode7,7,KHIATRN);
MHIATRN.fn.fn_global = LRAAOSL_newline;
MHIATRN.nonlocals = A68_NIL;
CHIATRN.data[3] = A_UNITE(LHIATRN,mode12,12,MHIATRN);
VCGATRN_print(A_HISVEC(NHIATRN,CHIATRN,4,A68_52 ));
 /* line 715: */
MZAAOSL_setindent( (Sp+3), &OHIATRN );
VCGATRN_print(A_HVEC(QHIATRN,A_UNITE(PHIATRN,mode21,21,OHIATRN),A68_52 ));
 /* line 716: */
 /* line 717: */
SHIATRN = (*(&(BHIATRN_nc->Chars))).upb;
for ( RHIATRN_i = 1;
RHIATRN_i <= SHIATRN;
RHIATRN_i += 1 )
{ 
UHIATRN = (*(&(BHIATRN_nc->Chars))) ;
WHIATRN = (*(&A_VINDEX(UHIATRN,RHIATRN_i))) ;
THIATRN.data[0] = A_UNITE(VHIATRN,mode6,6,WHIATRN);
YHIATRN = ' ' ;
THIATRN.data[1] = A_UNITE(XHIATRN,mode6,6,YHIATRN);
VCGATRN_print(A_HISVEC(ZHIATRN,THIATRN,2,A68_52 ));
}
 /* line 718: */
 /* line 719: */
 /* line 720: */
BIIATRN.fn.fn_global = LRAAOSL_newline;
BIIATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(CIIATRN,A_UNITE(AIIATRN,mode12,12,BIIATRN),A68_52 ));
} 
break;
case 3: /* REF STRUCT(MODE203)  */
DIIATRN_tg = (SFIATRN.data.mode3);
 /* line 721: */
ROHATRN_pt_tag(A_UNITE(EIIATRN,mode1,1,DIIATRN_tg), Sp);
break;
default: 
 /* line 722: */
 /* line 723: */
NKDAOST_sysfault(GIIATRN);
break;
} 
} 
A_PROC_EXIT(pt_typebody);
return;
} 
#undef NL

A_STATIC A68_VOID  JIIATRN_pt_fnbody(A68_297  Body, A68_INT  Sp)
{ 
A68_297  KIIATRN;  /* united object - for case conformity */
A68_270 * LIIATRN_ut;
A68_392  MIIATRN;  /* OPERATORS - mode -> union mode */
A68_288 * NIIATRN_ra;
A68_368  OIIATRN;  /* collateral clause result */
A68_65  PIIATRN;  /* avoid structure result */
A68_52  QIIATRN;  /* OPERATORS - mode -> union mode */
A68_52  TIIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  UIIATRN;  /* YIELD */
A68_52  VIIATRN;  /* OPERATORS - mode -> union mode */
A68_56  WIIATRN;  /* procedure value */
A68_85  XIIATRN;  /* OPERATORS - istruct -> vector */
A68_287 * YIIATRN_bi;
A68_361  ZIIATRN;  /* collateral clause result */
A68_65  AJIATRN;  /* avoid structure result */
A68_52  BJIATRN;  /* OPERATORS - mode -> union mode */
A68_52  EJIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FJIATRN;  /* YIELD */
A68_52  GJIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  HJIATRN;  /* YIELD */
A68_52  IJIATRN;  /* OPERATORS - mode -> union mode */
A68_56  JJIATRN;  /* procedure value */
A68_85  KJIATRN;  /* OPERATORS - istruct -> vector */
A68_361  LJIATRN;  /* collateral clause result */
A68_65  MJIATRN;  /* avoid structure result */
A68_52  NJIATRN;  /* OPERATORS - mode -> union mode */
A68_52  QJIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  RJIATRN;  /* YIELD */
A68_52  SJIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  TJIATRN;  /* YIELD */
A68_52  UJIATRN;  /* OPERATORS - mode -> union mode */
A68_56  VJIATRN;  /* procedure value */
A68_85  WJIATRN;  /* OPERATORS - istruct -> vector */
A68_267  XJIATRN;  /* != */
A68_268 * YJIATRN_p;
A68_267  ZJIATRN;  /* forall yield */
A68_INT  AKIATRN;  /* forall loop counter */
A68_290 * BKIATRN_im;
A68_400  CKIATRN;  /* collateral clause result */
A68_65  DKIATRN;  /* avoid structure result */
A68_52  EKIATRN;  /* OPERATORS - mode -> union mode */
A68_52  HKIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  IKIATRN;  /* YIELD */
A68_52  JKIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KKIATRN;  /* YIELD */
A68_52  LKIATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  MKIATRN;  /* YIELD */
A68_52  NKIATRN;  /* OPERATORS - mode -> union mode */
A68_INT  OKIATRN;  /* YIELD */
A68_52  PKIATRN;  /* OPERATORS - mode -> union mode */
A68_56  QKIATRN;  /* procedure value */
A68_85  RKIATRN;  /* OPERATORS - istruct -> vector */
A68_162  SKIATRN_ctn;
A68_400  TKIATRN;  /* collateral clause result */
A68_65  UKIATRN;  /* avoid structure result */
A68_52  VKIATRN;  /* OPERATORS - mode -> union mode */
A68_52  YKIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZKIATRN;  /* YIELD */
A68_52  ALIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  BLIATRN;  /* YIELD */
A68_52  CLIATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  DLIATRN;  /* YIELD */
A68_52  ELIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FLIATRN;  /* YIELD */
A68_52  GLIATRN;  /* OPERATORS - mode -> union mode */
A68_56  HLIATRN;  /* procedure value */
A68_85  ILIATRN;  /* OPERATORS - istruct -> vector */
A68_368  JLIATRN;  /* collateral clause result */
A68_65  KLIATRN;  /* avoid structure result */
A68_52  LLIATRN;  /* OPERATORS - mode -> union mode */
A68_52  OLIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  PLIATRN;  /* YIELD */
A68_52  QLIATRN;  /* OPERATORS - mode -> union mode */
A68_56  RLIATRN;  /* procedure value */
A68_85  SLIATRN;  /* OPERATORS - istruct -> vector */
A68_292 * TLIATRN_id;
A68_368  ULIATRN;  /* collateral clause result */
A68_65  VLIATRN;  /* avoid structure result */
A68_52  WLIATRN;  /* OPERATORS - mode -> union mode */
A68_52  ZLIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  AMIATRN;  /* YIELD */
A68_52  BMIATRN;  /* OPERATORS - mode -> union mode */
A68_56  CMIATRN;  /* procedure value */
A68_85  DMIATRN;  /* OPERATORS - istruct -> vector */
A68_291 * EMIATRN_ad;
A68_361  FMIATRN;  /* collateral clause result */
A68_65  GMIATRN;  /* avoid structure result */
A68_52  HMIATRN;  /* OPERATORS - mode -> union mode */
A68_52  KMIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LMIATRN;  /* YIELD */
A68_52  MMIATRN;  /* OPERATORS - mode -> union mode */
A68_INT  NMIATRN;  /* YIELD */
A68_52  OMIATRN;  /* OPERATORS - mode -> union mode */
A68_56  PMIATRN;  /* procedure value */
A68_85  QMIATRN;  /* OPERATORS - istruct -> vector */
A68_293 * RMIATRN_rm;
A68_368  SMIATRN;  /* collateral clause result */
A68_65  TMIATRN;  /* avoid structure result */
A68_52  UMIATRN;  /* OPERATORS - mode -> union mode */
A68_52  XMIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  YMIATRN;  /* YIELD */
A68_52  ZMIATRN;  /* OPERATORS - mode -> union mode */
A68_56  ANIATRN;  /* procedure value */
A68_85  BNIATRN;  /* OPERATORS - istruct -> vector */
A68_294 * CNIATRN_sl;
A68_361  DNIATRN;  /* collateral clause result */
A68_65  ENIATRN;  /* avoid structure result */
A68_52  FNIATRN;  /* OPERATORS - mode -> union mode */
A68_52  INIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  JNIATRN;  /* YIELD */
A68_52  KNIATRN;  /* OPERATORS - mode -> union mode */
A68_INT  LNIATRN;  /* YIELD */
A68_52  MNIATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  NNIATRN;  /* YIELD */
A68_85  ONIATRN;  /* OPERATORS - istruct -> vector */
A68_295 * PNIATRN_ts;
A68_400  QNIATRN;  /* collateral clause result */
A68_65  RNIATRN;  /* avoid structure result */
A68_52  SNIATRN;  /* OPERATORS - mode -> union mode */
A68_52  VNIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WNIATRN;  /* YIELD */
A68_52  XNIATRN;  /* OPERATORS - mode -> union mode */
A68_BOOL  YNIATRN;  /* YIELD */
A68_52  ZNIATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  AOIATRN;  /* YIELD */
A68_52  BOIATRN;  /* OPERATORS - mode -> union mode */
A68_INT  COIATRN;  /* YIELD */
A68_52  DOIATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  EOIATRN;  /* YIELD */
A68_85  FOIATRN;  /* OPERATORS - istruct -> vector */
A68_289 * GOIATRN_rf;
A68_368  HOIATRN;  /* collateral clause result */
A68_65  IOIATRN;  /* avoid structure result */
A68_52  JOIATRN;  /* OPERATORS - mode -> union mode */
A68_52  MOIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NOIATRN;  /* YIELD */
A68_52  OOIATRN;  /* OPERATORS - mode -> union mode */
A68_56  POIATRN;  /* procedure value */
A68_85  QOIATRN;  /* OPERATORS - istruct -> vector */
A68_296 * ROIATRN_bc;
A68_368  SOIATRN;  /* collateral clause result */
A68_65  TOIATRN;  /* avoid structure result */
A68_52  UOIATRN;  /* OPERATORS - mode -> union mode */
A68_52  XOIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  YOIATRN;  /* YIELD */
A68_52  ZOIATRN;  /* OPERATORS - mode -> union mode */
A68_56  APIATRN;  /* procedure value */
A68_85  BPIATRN;  /* OPERATORS - istruct -> vector */
A68_363  CPIATRN;  /* collateral clause result */
A68_65  DPIATRN;  /* avoid structure result */
A68_52  EPIATRN;  /* OPERATORS - mode -> union mode */
A68_52  HPIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  IPIATRN;  /* YIELD */
A68_85  JPIATRN;  /* OPERATORS - istruct -> vector */
A68_177 * KPIATRN_jc;
A68_363  LPIATRN;  /* collateral clause result */
A68_52  MPIATRN;  /* OPERATORS - mode -> union mode */
A68_INT  NPIATRN;  /* YIELD */
A68_52  OPIATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  PPIATRN;  /* YIELD */
A68_85  QPIATRN;  /* OPERATORS - istruct -> vector */
A68_52  RPIATRN;  /* OPERATORS - mode -> union mode */
A68_56  SPIATRN;  /* procedure value */
A68_85  TPIATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_368  UPIATRN;  /* collateral clause result */
A68_65  VPIATRN;  /* avoid structure result */
A68_52  WPIATRN;  /* OPERATORS - mode -> union mode */
A68_52  ZPIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  AQIATRN;  /* YIELD */
A68_52  BQIATRN;  /* OPERATORS - mode -> union mode */
A68_56  CQIATRN;  /* procedure value */
A68_85  DQIATRN;  /* OPERATORS - istruct -> vector */
A68_368  EQIATRN;  /* collateral clause result */
A68_65  FQIATRN;  /* avoid structure result */
A68_52  GQIATRN;  /* OPERATORS - mode -> union mode */
A68_52  JQIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KQIATRN;  /* YIELD */
A68_52  LQIATRN;  /* OPERATORS - mode -> union mode */
A68_56  MQIATRN;  /* procedure value */
A68_85  NQIATRN;  /* OPERATORS - istruct -> vector */
A68_298 * OQIATRN_bn;
A68_368  PQIATRN;  /* collateral clause result */
A68_65  QQIATRN;  /* avoid structure result */
A68_52  RQIATRN;  /* OPERATORS - mode -> union mode */
A68_52  UQIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VQIATRN;  /* YIELD */
A68_52  WQIATRN;  /* OPERATORS - mode -> union mode */
A68_56  XQIATRN;  /* procedure value */
A68_85  YQIATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_fnbody);
 /* line 726: */
 /* line 727: */
{ 
 /* line 728: */
KIIATRN = Body ;
switch ( KIIATRN.mode )
{ 
case 1: /* REF STRUCT(MODE225)  */
LIIATRN_ut = (KIIATRN.data.mode1);
 /* line 729: */
ROHATRN_pt_tag(A_UNITE(MIIATRN,mode3,3,LIIATRN_ut), Sp);
break;
case 3: /* REF STRUCT(MODE187)  */
NIIATRN_ra = (KIIATRN.data.mode3);
 /* line 730: */
{ 
MZAAOSL_setindent( Sp, &PIIATRN );
OIIATRN.data[0] = A_UNITE(QIIATRN,mode21,21,PIIATRN);
UIIATRN = SIIATRN ;
OIIATRN.data[1] = A_UNITE(TIIATRN,mode7,7,UIIATRN);
WIIATRN.fn.fn_global = LRAAOSL_newline;
WIIATRN.nonlocals = A68_NIL;
OIIATRN.data[2] = A_UNITE(VIIATRN,mode12,12,WIIATRN);
VCGATRN_print(A_HISVEC(XIIATRN,OIIATRN,3,A68_52 ));
 /* line 731: */
 /* line 732: */
 /* line 733: */
FIGATRN_pt_formula((*(&(NIIATRN_ra->Output))), (Sp+3));
} 
break;
case 2: /* REF STRUCT(BOOL,REF MODE26,REF MODE267)  */
YIIATRN_bi = (KIIATRN.data.mode2);
 /* line 734: */
{ 
 /* line 735: */
if ( (*(&(YIIATRN_bi->Biop))) )
{ 
MZAAOSL_setindent( Sp, &AJIATRN );
ZIIATRN.data[0] = A_UNITE(BJIATRN,mode21,21,AJIATRN);
FJIATRN = DJIATRN ;
ZIIATRN.data[1] = A_UNITE(EJIATRN,mode7,7,FJIATRN);
HJIATRN = (*(&(YIIATRN_bi->Name))) ;
ZIIATRN.data[2] = A_UNITE(GJIATRN,mode7,7,HJIATRN);
JJIATRN.fn.fn_global = LRAAOSL_newline;
JJIATRN.nonlocals = A68_NIL;
ZIIATRN.data[3] = A_UNITE(IJIATRN,mode12,12,JJIATRN);
 /* line 736: */
VCGATRN_print(A_HISVEC(KJIATRN,ZIIATRN,4,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( Sp, &MJIATRN );
LJIATRN.data[0] = A_UNITE(NJIATRN,mode21,21,MJIATRN);
RJIATRN = PJIATRN ;
LJIATRN.data[1] = A_UNITE(QJIATRN,mode7,7,RJIATRN);
TJIATRN = (*(&(YIIATRN_bi->Name))) ;
LJIATRN.data[2] = A_UNITE(SJIATRN,mode7,7,TJIATRN);
VJIATRN.fn.fn_global = LRAAOSL_newline;
VJIATRN.nonlocals = A68_NIL;
LJIATRN.data[3] = A_UNITE(UJIATRN,mode12,12,VJIATRN);
 /* line 737: */
VCGATRN_print(A_HISVEC(WJIATRN,LJIATRN,4,A68_52 ));
} 
 /* line 738: */
 /* line 739: */
XJIATRN = (*(&(YIIATRN_bi->Macparams))) ;
if ( ! A_VSTRUCTCOMP(XJIATRN,ABAATRN_nilmacparams) )
{ 
ZJIATRN = (*(&(YIIATRN_bi->Macparams))) ;
AKIATRN = ZJIATRN.upb -1;
YJIATRN_p = ZJIATRN.data;
for (;AKIATRN-- >= 0;
(YJIATRN_p++
) )
{
LMHATRN_pt_macparam((*YJIATRN_p), Sp);
}
 /* line 740: */
 /* line 741: */
 /* line 742: */
} 
} 
break;
case 5: /* REF STRUCT(REF MODE26,INT,MODE162)  */
BKIATRN_im = (KIIATRN.data.mode5);
 /* line 743: */
{ 
 /* line 744: */
if ( (BKIATRN_im!=TAAATRN_nilimport) )
{ 
MZAAOSL_setindent( Sp, &DKIATRN );
CKIATRN.data[0] = A_UNITE(EKIATRN,mode21,21,DKIATRN);
IKIATRN = GKIATRN ;
CKIATRN.data[1] = A_UNITE(HKIATRN,mode7,7,IKIATRN);
KKIATRN = (*(&(BKIATRN_im->Name))) ;
CKIATRN.data[2] = A_UNITE(JKIATRN,mode7,7,KKIATRN);
MKIATRN = ' ' ;
CKIATRN.data[3] = A_UNITE(LKIATRN,mode6,6,MKIATRN);
 /* line 745: */
OKIATRN = (*(&(BKIATRN_im->Contextno))) ;
CKIATRN.data[4] = A_UNITE(NKIATRN,mode1,1,OKIATRN);
QKIATRN.fn.fn_global = LRAAOSL_newline;
QKIATRN.nonlocals = A68_NIL;
CKIATRN.data[5] = A_UNITE(PKIATRN,mode12,12,QKIATRN);
VCGATRN_print(A_HISVEC(RKIATRN,CKIATRN,6,A68_52 ));
 /* line 746: */
SKIATRN_ctn = (*(&(BKIATRN_im->Ctname)));
 /* line 747: */
MZAAOSL_setindent( (Sp+3), &UKIATRN );
TKIATRN.data[0] = A_UNITE(VKIATRN,mode21,21,UKIATRN);
ZKIATRN = XKIATRN ;
TKIATRN.data[1] = A_UNITE(YKIATRN,mode7,7,ZKIATRN);
BLIATRN = SKIATRN_ctn.Context ;
TKIATRN.data[2] = A_UNITE(ALIATRN,mode7,7,BLIATRN);
DLIATRN = ' ' ;
TKIATRN.data[3] = A_UNITE(CLIATRN,mode6,6,DLIATRN);
 /* line 748: */
FLIATRN = SKIATRN_ctn.Import ;
TKIATRN.data[4] = A_UNITE(ELIATRN,mode7,7,FLIATRN);
HLIATRN.fn.fn_global = LRAAOSL_newline;
HLIATRN.nonlocals = A68_NIL;
TKIATRN.data[5] = A_UNITE(GLIATRN,mode12,12,HLIATRN);
 /* line 749: */
VCGATRN_print(A_HISVEC(ILIATRN,TKIATRN,6,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( Sp, &KLIATRN );
JLIATRN.data[0] = A_UNITE(LLIATRN,mode21,21,KLIATRN);
PLIATRN = NLIATRN ;
JLIATRN.data[1] = A_UNITE(OLIATRN,mode7,7,PLIATRN);
RLIATRN.fn.fn_global = LRAAOSL_newline;
RLIATRN.nonlocals = A68_NIL;
JLIATRN.data[2] = A_UNITE(QLIATRN,mode12,12,RLIATRN);
 /* line 750: */
 /* line 751: */
 /* line 752: */
VCGATRN_print(A_HISVEC(SLIATRN,JLIATRN,3,A68_52 ));
} 
} 
break;
case 7: /* REF STRUCT(MODE225,MODE187)  */
TLIATRN_id = (KIIATRN.data.mode7);
 /* line 753: */
{ 
MZAAOSL_setindent( Sp, &VLIATRN );
ULIATRN.data[0] = A_UNITE(WLIATRN,mode21,21,VLIATRN);
AMIATRN = YLIATRN ;
ULIATRN.data[1] = A_UNITE(ZLIATRN,mode7,7,AMIATRN);
CMIATRN.fn.fn_global = LRAAOSL_newline;
CMIATRN.nonlocals = A68_NIL;
ULIATRN.data[2] = A_UNITE(BMIATRN,mode12,12,CMIATRN);
VCGATRN_print(A_HISVEC(DMIATRN,ULIATRN,3,A68_52 ));
 /* line 754: */
BTGATRN_pt_unit((*(&(TLIATRN_id->Init))), (Sp+3));
 /* line 755: */
 /* line 756: */
 /* line 757: */
FIGATRN_pt_formula((*(&(TLIATRN_id->Delaytime))), (Sp+3));
} 
break;
case 6: /* REF STRUCT(INT,MODE225,MODE187,MODE225,MODE187)  */
EMIATRN_ad = (KIIATRN.data.mode6);
 /* line 758: */
{ 
MZAAOSL_setindent( Sp, &GMIATRN );
FMIATRN.data[0] = A_UNITE(HMIATRN,mode21,21,GMIATRN);
LMIATRN = JMIATRN ;
FMIATRN.data[1] = A_UNITE(KMIATRN,mode7,7,LMIATRN);
NMIATRN = (*(&(EMIATRN_ad->Sort))) ;
FMIATRN.data[2] = A_UNITE(MMIATRN,mode1,1,NMIATRN);
PMIATRN.fn.fn_global = LRAAOSL_newline;
PMIATRN.nonlocals = A68_NIL;
FMIATRN.data[3] = A_UNITE(OMIATRN,mode12,12,PMIATRN);
VCGATRN_print(A_HISVEC(QMIATRN,FMIATRN,4,A68_52 ));
 /* line 759: */
BTGATRN_pt_unit((*(&(EMIATRN_ad->Init))), (Sp+3));
 /* line 760: */
FIGATRN_pt_formula((*(&(EMIATRN_ad->Ambigtime))), (Sp+3));
 /* line 761: */
BTGATRN_pt_unit((*(&(EMIATRN_ad->Ambig))), (Sp+3));
 /* line 762: */
 /* line 763: */
 /* line 764: */
FIGATRN_pt_formula((*(&(EMIATRN_ad->Delaytime))), (Sp+3));
} 
break;
case 8: /* REF STRUCT(MODE225)  */
RMIATRN_rm = (KIIATRN.data.mode8);
 /* line 765: */
{ 
MZAAOSL_setindent( Sp, &TMIATRN );
SMIATRN.data[0] = A_UNITE(UMIATRN,mode21,21,TMIATRN);
YMIATRN = WMIATRN ;
SMIATRN.data[1] = A_UNITE(XMIATRN,mode7,7,YMIATRN);
ANIATRN.fn.fn_global = LRAAOSL_newline;
ANIATRN.nonlocals = A68_NIL;
SMIATRN.data[2] = A_UNITE(ZMIATRN,mode12,12,ANIATRN);
VCGATRN_print(A_HISVEC(BNIATRN,SMIATRN,3,A68_52 ));
 /* line 766: */
 /* line 767: */
 /* line 768: */
BTGATRN_pt_unit((*(&(RMIATRN_rm->Init))), (Sp+3));
} 
break;
case 9: /* REF STRUCT(INT,MODE187,MODE225,MODE187)  */
CNIATRN_sl = (KIIATRN.data.mode9);
 /* line 769: */
{ 
MZAAOSL_setindent( Sp, &ENIATRN );
DNIATRN.data[0] = A_UNITE(FNIATRN,mode21,21,ENIATRN);
JNIATRN = HNIATRN ;
DNIATRN.data[1] = A_UNITE(INIATRN,mode7,7,JNIATRN);
LNIATRN = (*(&(CNIATRN_sl->Sort))) ;
DNIATRN.data[2] = A_UNITE(KNIATRN,mode1,1,LNIATRN);
NNIATRN = ' ' ;
DNIATRN.data[3] = A_UNITE(MNIATRN,mode6,6,NNIATRN);
VCGATRN_print(A_HISVEC(ONIATRN,DNIATRN,4,A68_52 ));
 /* line 770: */
FIGATRN_pt_formula((*(&(CNIATRN_sl->Interval))), (Sp+3));
 /* line 771: */
BTGATRN_pt_unit((*(&(CNIATRN_sl->Init))), (Sp+3));
 /* line 772: */
 /* line 773: */
 /* line 774: */
FIGATRN_pt_formula((*(&(CNIATRN_sl->Skew))), (Sp+3));
} 
break;
case 10: /* REF STRUCT(BOOL,INT,MODE265,MODE187,MODE225,MODE187)  */
PNIATRN_ts = (KIIATRN.data.mode10);
 /* line 775: */
{ 
MZAAOSL_setindent( Sp, &RNIATRN );
QNIATRN.data[0] = A_UNITE(SNIATRN,mode21,21,RNIATRN);
WNIATRN = UNIATRN ;
QNIATRN.data[1] = A_UNITE(VNIATRN,mode7,7,WNIATRN);
YNIATRN = (*(&(PNIATRN_ts->Faster))) ;
QNIATRN.data[2] = A_UNITE(XNIATRN,mode8,8,YNIATRN);
AOIATRN = ' ' ;
QNIATRN.data[3] = A_UNITE(ZNIATRN,mode6,6,AOIATRN);
COIATRN = (*(&(PNIATRN_ts->Sort))) ;
QNIATRN.data[4] = A_UNITE(BOIATRN,mode1,1,COIATRN);
EOIATRN = ' ' ;
QNIATRN.data[5] = A_UNITE(DOIATRN,mode6,6,EOIATRN);
VCGATRN_print(A_HISVEC(FOIATRN,QNIATRN,6,A68_52 ));
 /* line 776: */
A_CALLPROC(BSGATRN_pt_instance,((*(&(PNIATRN_ts->Inst))), (Sp+3)),((*(&(PNIATRN_ts->Inst))), (Sp+3),(BSGATRN_pt_instance).nonlocals));
 /* line 777: */
FIGATRN_pt_formula((*(&(PNIATRN_ts->Scale))), (Sp+3));
 /* line 778: */
BTGATRN_pt_unit((*(&(PNIATRN_ts->Init))), (Sp+3));
 /* line 779: */
 /* line 780: */
 /* line 781: */
FIGATRN_pt_formula((*(&(PNIATRN_ts->Skew))), (Sp+3));
} 
break;
case 4: /* REF STRUCT(INT)  */
GOIATRN_rf = (KIIATRN.data.mode4);
 /* line 782: */
MZAAOSL_setindent( Sp, &IOIATRN );
HOIATRN.data[0] = A_UNITE(JOIATRN,mode21,21,IOIATRN);
NOIATRN = LOIATRN ;
HOIATRN.data[1] = A_UNITE(MOIATRN,mode7,7,NOIATRN);
POIATRN.fn.fn_global = LRAAOSL_newline;
POIATRN.nonlocals = A68_NIL;
HOIATRN.data[2] = A_UNITE(OOIATRN,mode12,12,POIATRN);
 /* line 783: */
VCGATRN_print(A_HISVEC(QOIATRN,HOIATRN,3,A68_52 ));
break;
case 11: /* REF STRUCT(REF MODE177,BOOL,MODE297)  */
ROIATRN_bc = (KIIATRN.data.mode11);
 /* line 784: */
{ 
MZAAOSL_setindent( Sp, &TOIATRN );
SOIATRN.data[0] = A_UNITE(UOIATRN,mode21,21,TOIATRN);
YOIATRN = WOIATRN ;
SOIATRN.data[1] = A_UNITE(XOIATRN,mode7,7,YOIATRN);
APIATRN.fn.fn_global = LRAAOSL_newline;
APIATRN.nonlocals = A68_NIL;
SOIATRN.data[2] = A_UNITE(ZOIATRN,mode12,12,APIATRN);
VCGATRN_print(A_HISVEC(BPIATRN,SOIATRN,3,A68_52 ));
 /* line 785: */
MZAAOSL_setindent( (Sp+3), &DPIATRN );
CPIATRN.data[0] = A_UNITE(EPIATRN,mode21,21,DPIATRN);
IPIATRN = GPIATRN ;
CPIATRN.data[1] = A_UNITE(HPIATRN,mode7,7,IPIATRN);
VCGATRN_print(A_HISVEC(JPIATRN,CPIATRN,2,A68_52 ));
 /* line 786: */
KPIATRN_jc = (*(&(ROIATRN_bc->Joincheck)));
 /* line 787: */
for ( ;; )
{ 
 /* line 788: */
if ( !((KPIATRN_jc!=OAAATRN_nilints)) ) break;
NPIATRN = (*(&(KPIATRN_jc->Int))) ;
LPIATRN.data[0] = A_UNITE(MPIATRN,mode1,1,NPIATRN);
PPIATRN = ' ' ;
LPIATRN.data[1] = A_UNITE(OPIATRN,mode6,6,PPIATRN);
VCGATRN_print(A_HISVEC(QPIATRN,LPIATRN,2,A68_52 ));
KPIATRN_jc = (*(&(KPIATRN_jc->Rest)));
}
 /* line 789: */
SPIATRN.fn.fn_global = LRAAOSL_newline;
SPIATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(TPIATRN,A_UNITE(RPIATRN,mode12,12,SPIATRN),A68_52 ));
 /* line 790: */
 /* line 791: */
if ( (*(&(ROIATRN_bc->Check))) )
{ 
MZAAOSL_setindent( (Sp+3), &VPIATRN );
UPIATRN.data[0] = A_UNITE(WPIATRN,mode21,21,VPIATRN);
AQIATRN = YPIATRN ;
UPIATRN.data[1] = A_UNITE(ZPIATRN,mode7,7,AQIATRN);
CQIATRN.fn.fn_global = LRAAOSL_newline;
CQIATRN.nonlocals = A68_NIL;
UPIATRN.data[2] = A_UNITE(BQIATRN,mode12,12,CQIATRN);
 /* line 792: */
VCGATRN_print(A_HISVEC(DQIATRN,UPIATRN,3,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( (Sp+3), &FQIATRN );
EQIATRN.data[0] = A_UNITE(GQIATRN,mode21,21,FQIATRN);
KQIATRN = IQIATRN ;
EQIATRN.data[1] = A_UNITE(JQIATRN,mode7,7,KQIATRN);
MQIATRN.fn.fn_global = LRAAOSL_newline;
MQIATRN.nonlocals = A68_NIL;
EQIATRN.data[2] = A_UNITE(LQIATRN,mode12,12,MQIATRN);
 /* line 793: */
VCGATRN_print(A_HISVEC(NQIATRN,EQIATRN,3,A68_52 ));
} 
 /* line 794: */
 /* line 795: */
 /* line 796: */
JIIATRN_pt_fnbody((*(&(ROIATRN_bc->Fnbody))), (Sp+3));
} 
break;
case 12: /* REF STRUCT(INT)  */
OQIATRN_bn = (KIIATRN.data.mode12);
 /* line 797: */
MZAAOSL_setindent( Sp, &QQIATRN );
PQIATRN.data[0] = A_UNITE(RQIATRN,mode21,21,QQIATRN);
VQIATRN = TQIATRN ;
PQIATRN.data[1] = A_UNITE(UQIATRN,mode7,7,VQIATRN);
XQIATRN.fn.fn_global = LRAAOSL_newline;
XQIATRN.nonlocals = A68_NIL;
PQIATRN.data[2] = A_UNITE(WQIATRN,mode12,12,XQIATRN);
 /* line 798: */
VCGATRN_print(A_HISVEC(YQIATRN,PQIATRN,3,A68_52 ));
break;
default: 
 /* line 799: */
 /* line 800: */
NKDAOST_sysfault(ARIATRN);
break;
} 
} 
A_PROC_EXIT(pt_fnbody);
return;
} 
#undef NL

A_STATIC A68_VOID  CRIATRN_pt_decsort(A68_INT  Sort, A68_VC  *ReturnedValue)
{ 
A68_VC  ERIATRN;  /* clause result */
A68_VC  MRIATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(pt_decsort);
 /* line 804: */
 /* line 805: */
switch ( Sort )
{ 
case 1: 
 /* line 806: */
ERIATRN = FRIATRN;
break;
case 2: 
 /* line 808: */
ERIATRN = HRIATRN;
break;
case 3: 
ERIATRN = JRIATRN;
break;
default: 
NKDAOST_sysfault(LRIATRN);
 /* line 809: */
ERIATRN = MRIATRN;
break;
} 
A_PROC_EXIT(pt_decsort);
*ReturnedValue = (ERIATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PRIATRN_pt_usage(A68_185 * Us, A68_INT  Sp)
{ 
A68_368  QRIATRN;  /* collateral clause result */
A68_65  RRIATRN;  /* avoid structure result */
A68_52  SRIATRN;  /* OPERATORS - mode -> union mode */
A68_52  VRIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WRIATRN;  /* YIELD */
A68_52  XRIATRN;  /* OPERATORS - mode -> union mode */
A68_56  YRIATRN;  /* procedure value */
A68_85  ZRIATRN;  /* OPERATORS - istruct -> vector */
A68_368  ASIATRN;  /* collateral clause result */
A68_65  BSIATRN;  /* avoid structure result */
A68_52  CSIATRN;  /* OPERATORS - mode -> union mode */
A68_52  FSIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  GSIATRN;  /* YIELD */
A68_52  HSIATRN;  /* OPERATORS - mode -> union mode */
A68_56  ISIATRN;  /* procedure value */
A68_85  JSIATRN;  /* OPERATORS - istruct -> vector */
A68_404  KSIATRN;  /* collateral clause result */
A68_65  LSIATRN;  /* avoid structure result */
A68_52  MSIATRN;  /* OPERATORS - mode -> union mode */
A68_52  PSIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QSIATRN;  /* YIELD */
A68_52  RSIATRN;  /* OPERATORS - mode -> union mode */
A68_INT  SSIATRN;  /* YIELD */
A68_52  VSIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WSIATRN;  /* YIELD */
A68_52  XSIATRN;  /* OPERATORS - mode -> union mode */
A68_INT  YSIATRN;  /* YIELD */
A68_52  BTIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  CTIATRN;  /* YIELD */
A68_VC  DTIATRN;  /* avoid structure result */
A68_52  ETIATRN;  /* OPERATORS - mode -> union mode */
A68_52  HTIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ITIATRN;  /* YIELD */
A68_VC  JTIATRN;  /* avoid structure result */
A68_52  KTIATRN;  /* OPERATORS - mode -> union mode */
A68_52  NTIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  OTIATRN;  /* YIELD */
A68_52  RTIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  STIATRN;  /* YIELD */
A68_52  VTIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WTIATRN;  /* YIELD */
A68_52  ZTIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  AUIATRN;  /* YIELD */
A68_52  BUIATRN;  /* OPERATORS - mode -> union mode */
A68_56  CUIATRN;  /* procedure value */
A68_85  DUIATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_usage);
 /* line 812: */
 /* line 813: */
{ 
 /* line 814: */
if ( (Us==CBAATRN_nilusage) )
{ 
MZAAOSL_setindent( Sp, &RRIATRN );
QRIATRN.data[0] = A_UNITE(SRIATRN,mode21,21,RRIATRN);
WRIATRN = URIATRN ;
QRIATRN.data[1] = A_UNITE(VRIATRN,mode7,7,WRIATRN);
YRIATRN.fn.fn_global = LRAAOSL_newline;
YRIATRN.nonlocals = A68_NIL;
QRIATRN.data[2] = A_UNITE(XRIATRN,mode12,12,YRIATRN);
 /* line 815: */
VCGATRN_print(A_HISVEC(ZRIATRN,QRIATRN,3,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( Sp, &BSIATRN );
ASIATRN.data[0] = A_UNITE(CSIATRN,mode21,21,BSIATRN);
GSIATRN = ESIATRN ;
ASIATRN.data[1] = A_UNITE(FSIATRN,mode7,7,GSIATRN);
ISIATRN.fn.fn_global = LRAAOSL_newline;
ISIATRN.nonlocals = A68_NIL;
ASIATRN.data[2] = A_UNITE(HSIATRN,mode12,12,ISIATRN);
VCGATRN_print(A_HISVEC(JSIATRN,ASIATRN,3,A68_52 ));
 /* line 816: */
MZAAOSL_setindent( (Sp+3), &LSIATRN );
KSIATRN.data[0] = A_UNITE(MSIATRN,mode21,21,LSIATRN);
QSIATRN = OSIATRN ;
KSIATRN.data[1] = A_UNITE(PSIATRN,mode7,7,QSIATRN);
 /* line 817: */
SSIATRN = (*(&(Us->Contextno))) ;
KSIATRN.data[2] = A_UNITE(RSIATRN,mode1,1,SSIATRN);
WSIATRN = USIATRN ;
KSIATRN.data[3] = A_UNITE(VSIATRN,mode7,7,WSIATRN);
 /* line 818: */
YSIATRN = (*(&(Us->Closureno))) ;
KSIATRN.data[4] = A_UNITE(XSIATRN,mode1,1,YSIATRN);
CTIATRN = ATIATRN ;
KSIATRN.data[5] = A_UNITE(BTIATRN,mode7,7,CTIATRN);
 /* line 819: */
JIBAOST_version_str( (*(&(Us->Libv_spec))), &DTIATRN );
KSIATRN.data[6] = A_UNITE(ETIATRN,mode7,7,DTIATRN);
ITIATRN = GTIATRN ;
KSIATRN.data[7] = A_UNITE(HTIATRN,mode7,7,ITIATRN);
 /* line 820: */
JIBAOST_version_str( (*(&(Us->Libv_body))), &JTIATRN );
KSIATRN.data[8] = A_UNITE(KTIATRN,mode7,7,JTIATRN);
if ( (*(&(Us->Import))) )
{ 
OTIATRN = MTIATRN ;
KSIATRN.data[9] = A_UNITE(NTIATRN,mode7,7,OTIATRN);
} 
else
{ 
 /* line 821: */
STIATRN = QTIATRN ;
KSIATRN.data[9] = A_UNITE(RTIATRN,mode7,7,STIATRN);
} 
if ( (*(&(Us->Export))) )
{ 
WTIATRN = UTIATRN ;
KSIATRN.data[10] = A_UNITE(VTIATRN,mode7,7,WTIATRN);
} 
else
{ 
 /* line 822: */
AUIATRN = YTIATRN ;
KSIATRN.data[10] = A_UNITE(ZTIATRN,mode7,7,AUIATRN);
} 
CUIATRN.fn.fn_global = LRAAOSL_newline;
CUIATRN.nonlocals = A68_NIL;
KSIATRN.data[11] = A_UNITE(BUIATRN,mode12,12,CUIATRN);
 /* line 823: */
 /* line 824: */
VCGATRN_print(A_HISVEC(DUIATRN,KSIATRN,12,A68_52 ));
} 
} 
A_PROC_EXIT(pt_usage);
return;
} 
#undef NL

A_STATIC A68_VOID  GUIATRN_pt_fndec(A68_301 * Fd, A68_INT  Sp)
{ 
A68_368  HUIATRN;  /* collateral clause result */
A68_65  IUIATRN;  /* avoid structure result */
A68_52  JUIATRN;  /* OPERATORS - mode -> union mode */
A68_52  MUIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NUIATRN;  /* YIELD */
A68_52  OUIATRN;  /* OPERATORS - mode -> union mode */
A68_56  PUIATRN;  /* procedure value */
A68_85  QUIATRN;  /* OPERATORS - istruct -> vector */
A68_366  RUIATRN;  /* collateral clause result */
A68_65  SUIATRN;  /* avoid structure result */
A68_52  TUIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  UUIATRN;  /* avoid structure result */
A68_52  VUIATRN;  /* OPERATORS - mode -> union mode */
A68_52  YUIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZUIATRN;  /* YIELD */
A68_52  AVIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  BVIATRN;  /* YIELD */
A68_52  CVIATRN;  /* OPERATORS - mode -> union mode */
A68_56  DVIATRN;  /* procedure value */
A68_85  EVIATRN;  /* OPERATORS - istruct -> vector */
A68_368  FVIATRN;  /* collateral clause result */
A68_65  GVIATRN;  /* avoid structure result */
A68_52  HVIATRN;  /* OPERATORS - mode -> union mode */
A68_52  KVIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LVIATRN;  /* YIELD */
A68_52  MVIATRN;  /* OPERATORS - mode -> union mode */
A68_56  NVIATRN;  /* procedure value */
A68_85  OVIATRN;  /* OPERATORS - istruct -> vector */
A68_368  PVIATRN;  /* collateral clause result */
A68_65  QVIATRN;  /* avoid structure result */
A68_52  RVIATRN;  /* OPERATORS - mode -> union mode */
A68_52  UVIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VVIATRN;  /* YIELD */
A68_52  WVIATRN;  /* OPERATORS - mode -> union mode */
A68_56  XVIATRN;  /* procedure value */
A68_85  YVIATRN;  /* OPERATORS - istruct -> vector */
A68_302  ZVIATRN;  /* == */
A68_368  AWIATRN;  /* collateral clause result */
A68_65  BWIATRN;  /* avoid structure result */
A68_52  CWIATRN;  /* OPERATORS - mode -> union mode */
A68_52  FWIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  GWIATRN;  /* YIELD */
A68_52  HWIATRN;  /* OPERATORS - mode -> union mode */
A68_56  IWIATRN;  /* procedure value */
A68_85  JWIATRN;  /* OPERATORS - istruct -> vector */
A68_368  KWIATRN;  /* collateral clause result */
A68_65  LWIATRN;  /* avoid structure result */
A68_52  MWIATRN;  /* OPERATORS - mode -> union mode */
A68_52  PWIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QWIATRN;  /* YIELD */
A68_52  RWIATRN;  /* OPERATORS - mode -> union mode */
A68_56  SWIATRN;  /* procedure value */
A68_85  TWIATRN;  /* OPERATORS - istruct -> vector */
A68_299 * UWIATRN_ms;
A68_302  VWIATRN;  /* forall yield */
A68_INT  WWIATRN;  /* forall loop counter */
A68_361  XWIATRN;  /* collateral clause result */
A68_65  YWIATRN;  /* avoid structure result */
A68_52  ZWIATRN;  /* OPERATORS - mode -> union mode */
A68_52  CXIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  DXIATRN;  /* YIELD */
A68_52  EXIATRN;  /* OPERATORS - mode -> union mode */
A68_INT  FXIATRN;  /* YIELD */
A68_52  GXIATRN;  /* OPERATORS - mode -> union mode */
A68_56  HXIATRN;  /* procedure value */
A68_85  IXIATRN;  /* OPERATORS - istruct -> vector */
A68_52  JXIATRN;  /* OPERATORS - mode -> union mode */
A68_56  KXIATRN;  /* procedure value */
A68_85  LXIATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_368  MXIATRN;  /* collateral clause result */
A68_65  NXIATRN;  /* avoid structure result */
A68_52  OXIATRN;  /* OPERATORS - mode -> union mode */
A68_52  RXIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SXIATRN;  /* YIELD */
A68_52  TXIATRN;  /* OPERATORS - mode -> union mode */
A68_56  UXIATRN;  /* procedure value */
A68_85  VXIATRN;  /* OPERATORS - istruct -> vector */
A68_368  WXIATRN;  /* collateral clause result */
A68_65  XXIATRN;  /* avoid structure result */
A68_52  YXIATRN;  /* OPERATORS - mode -> union mode */
A68_52  BYIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  CYIATRN;  /* YIELD */
A68_52  DYIATRN;  /* OPERATORS - mode -> union mode */
A68_56  EYIATRN;  /* procedure value */
A68_85  FYIATRN;  /* OPERATORS - istruct -> vector */
A68_368  GYIATRN;  /* collateral clause result */
A68_65  HYIATRN;  /* avoid structure result */
A68_52  IYIATRN;  /* OPERATORS - mode -> union mode */
A68_52  LYIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  MYIATRN;  /* YIELD */
A68_52  NYIATRN;  /* OPERATORS - mode -> union mode */
A68_56  OYIATRN;  /* procedure value */
A68_85  PYIATRN;  /* OPERATORS - istruct -> vector */
A68_300 * QYIATRN_nametype;
A68_303  RYIATRN;  /* forall yield */
A68_INT  SYIATRN;  /* forall loop counter */
A68_368  TYIATRN;  /* collateral clause result */
A68_65  UYIATRN;  /* avoid structure result */
A68_52  VYIATRN;  /* OPERATORS - mode -> union mode */
A68_52  WYIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  XYIATRN;  /* YIELD */
A68_52  YYIATRN;  /* OPERATORS - mode -> union mode */
A68_56  ZYIATRN;  /* procedure value */
A68_85  AZIATRN;  /* OPERATORS - istruct -> vector */
A68_52  BZIATRN;  /* OPERATORS - mode -> union mode */
A68_56  CZIATRN;  /* procedure value */
A68_85  DZIATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_fndec);
 /* line 827: */
 /* line 828: */
{ 
 /* line 829: */
if ( (Fd==YAAATRN_nilfndec) )
{ 
MZAAOSL_setindent( Sp, &IUIATRN );
HUIATRN.data[0] = A_UNITE(JUIATRN,mode21,21,IUIATRN);
NUIATRN = LUIATRN ;
HUIATRN.data[1] = A_UNITE(MUIATRN,mode7,7,NUIATRN);
PUIATRN.fn.fn_global = LRAAOSL_newline;
PUIATRN.nonlocals = A68_NIL;
HUIATRN.data[2] = A_UNITE(OUIATRN,mode12,12,PUIATRN);
 /* line 830: */
VCGATRN_print(A_HISVEC(QUIATRN,HUIATRN,3,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( Sp, &SUIATRN );
RUIATRN.data[0] = A_UNITE(TUIATRN,mode21,21,SUIATRN);
CRIATRN_pt_decsort( (*(&(Fd->Sort))), &UUIATRN );
RUIATRN.data[1] = A_UNITE(VUIATRN,mode7,7,UUIATRN);
ZUIATRN = XUIATRN ;
RUIATRN.data[2] = A_UNITE(YUIATRN,mode7,7,ZUIATRN);
 /* line 831: */
BVIATRN = (*(&(Fd->Fnname))) ;
RUIATRN.data[3] = A_UNITE(AVIATRN,mode7,7,BVIATRN);
DVIATRN.fn.fn_global = LRAAOSL_newline;
DVIATRN.nonlocals = A68_NIL;
RUIATRN.data[4] = A_UNITE(CVIATRN,mode12,12,DVIATRN);
VCGATRN_print(A_HISVEC(EVIATRN,RUIATRN,5,A68_52 ));
 /* line 832: */
 /* line 833: */
if ( (*(&(Fd->Macro))) )
{ 
MZAAOSL_setindent( Sp, &GVIATRN );
FVIATRN.data[0] = A_UNITE(HVIATRN,mode21,21,GVIATRN);
LVIATRN = JVIATRN ;
FVIATRN.data[1] = A_UNITE(KVIATRN,mode7,7,LVIATRN);
NVIATRN.fn.fn_global = LRAAOSL_newline;
NVIATRN.nonlocals = A68_NIL;
FVIATRN.data[2] = A_UNITE(MVIATRN,mode12,12,NVIATRN);
 /* line 834: */
VCGATRN_print(A_HISVEC(OVIATRN,FVIATRN,3,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( Sp, &QVIATRN );
PVIATRN.data[0] = A_UNITE(RVIATRN,mode21,21,QVIATRN);
VVIATRN = TVIATRN ;
PVIATRN.data[1] = A_UNITE(UVIATRN,mode7,7,VVIATRN);
XVIATRN.fn.fn_global = LRAAOSL_newline;
XVIATRN.nonlocals = A68_NIL;
PVIATRN.data[2] = A_UNITE(WVIATRN,mode12,12,XVIATRN);
 /* line 835: */
VCGATRN_print(A_HISVEC(YVIATRN,PVIATRN,3,A68_52 ));
} 
 /* line 836: */
 /* line 837: */
ZVIATRN = (*(&(Fd->Macspecs))) ;
if ( A_VSTRUCTCOMP(ZVIATRN,FBAATRN_nilmacspecs) )
{ 
MZAAOSL_setindent( Sp, &BWIATRN );
AWIATRN.data[0] = A_UNITE(CWIATRN,mode21,21,BWIATRN);
GWIATRN = EWIATRN ;
AWIATRN.data[1] = A_UNITE(FWIATRN,mode7,7,GWIATRN);
IWIATRN.fn.fn_global = LRAAOSL_newline;
IWIATRN.nonlocals = A68_NIL;
AWIATRN.data[2] = A_UNITE(HWIATRN,mode12,12,IWIATRN);
 /* line 838: */
VCGATRN_print(A_HISVEC(JWIATRN,AWIATRN,3,A68_52 ));
} 
else
{ 
 /* line 839: */
if ( ((*(&(Fd->Macspecs))).upb==0) )
{ 
MZAAOSL_setindent( Sp, &LWIATRN );
KWIATRN.data[0] = A_UNITE(MWIATRN,mode21,21,LWIATRN);
QWIATRN = OWIATRN ;
KWIATRN.data[1] = A_UNITE(PWIATRN,mode7,7,QWIATRN);
SWIATRN.fn.fn_global = LRAAOSL_newline;
SWIATRN.nonlocals = A68_NIL;
KWIATRN.data[2] = A_UNITE(RWIATRN,mode12,12,SWIATRN);
 /* line 840: */
VCGATRN_print(A_HISVEC(TWIATRN,KWIATRN,3,A68_52 ));
} 
else
{ 
 /* line 841: */
VWIATRN = (*(&(Fd->Macspecs))) ;
WWIATRN = VWIATRN.upb -1;
UWIATRN_ms = VWIATRN.data;
for (;WWIATRN-- >= 0;
(UWIATRN_ms++
) )
{
MZAAOSL_setindent( Sp, &YWIATRN );
XWIATRN.data[0] = A_UNITE(ZWIATRN,mode21,21,YWIATRN);
DXIATRN = BXIATRN ;
XWIATRN.data[1] = A_UNITE(CXIATRN,mode7,7,DXIATRN);
FXIATRN = (*(&(UWIATRN_ms->Sort))) ;
XWIATRN.data[2] = A_UNITE(EXIATRN,mode1,1,FXIATRN);
HXIATRN.fn.fn_global = LRAAOSL_newline;
HXIATRN.nonlocals = A68_NIL;
XWIATRN.data[3] = A_UNITE(GXIATRN,mode12,12,HXIATRN);
VCGATRN_print(A_HISVEC(IXIATRN,XWIATRN,4,A68_52 ));
 /* line 842: */
 /* line 843: */
EQHATRN_pt_declaration((*(&(UWIATRN_ms->Spec))), (Sp+3));
}
 /* line 844: */
} 
} 
 /* line 845: */
KGGATRN_pt_attr((*(&(Fd->Attr))), Sp);
 /* line 846: */
KXIATRN.fn.fn_global = LRAAOSL_newline;
KXIATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(LXIATRN,A_UNITE(JXIATRN,mode12,12,KXIATRN),A68_52 ));
 /* line 847: */
MZAAOSL_setindent( Sp, &NXIATRN );
MXIATRN.data[0] = A_UNITE(OXIATRN,mode21,21,NXIATRN);
SXIATRN = QXIATRN ;
MXIATRN.data[1] = A_UNITE(RXIATRN,mode7,7,SXIATRN);
UXIATRN.fn.fn_global = LRAAOSL_newline;
UXIATRN.nonlocals = A68_NIL;
MXIATRN.data[2] = A_UNITE(TXIATRN,mode12,12,UXIATRN);
VCGATRN_print(A_HISVEC(VXIATRN,MXIATRN,3,A68_52 ));
 /* line 848: */
ESGATRN_pt_names((*(&(Fd->Inputs))), (Sp+3));
 /* line 849: */
MZAAOSL_setindent( Sp, &XXIATRN );
WXIATRN.data[0] = A_UNITE(YXIATRN,mode21,21,XXIATRN);
CYIATRN = AYIATRN ;
WXIATRN.data[1] = A_UNITE(BYIATRN,mode7,7,CYIATRN);
EYIATRN.fn.fn_global = LRAAOSL_newline;
EYIATRN.nonlocals = A68_NIL;
WXIATRN.data[2] = A_UNITE(DYIATRN,mode12,12,EYIATRN);
VCGATRN_print(A_HISVEC(FYIATRN,WXIATRN,3,A68_52 ));
 /* line 850: */
ESGATRN_pt_names((*(&(Fd->Outputs))), (Sp+3));
 /* line 852: */
MZAAOSL_setindent( Sp, &HYIATRN );
GYIATRN.data[0] = A_UNITE(IYIATRN,mode21,21,HYIATRN);
MYIATRN = KYIATRN ;
GYIATRN.data[1] = A_UNITE(LYIATRN,mode7,7,MYIATRN);
OYIATRN.fn.fn_global = LRAAOSL_newline;
OYIATRN.nonlocals = A68_NIL;
GYIATRN.data[2] = A_UNITE(NYIATRN,mode12,12,OYIATRN);
VCGATRN_print(A_HISVEC(PYIATRN,GYIATRN,3,A68_52 ));
 /* line 853: */
 /* line 854: */
RYIATRN = (*(&(Fd->Nametypes))) ;
SYIATRN = RYIATRN.upb -1;
QYIATRN_nametype = RYIATRN.data;
for (;SYIATRN-- >= 0;
(QYIATRN_nametype++
) )
{
MZAAOSL_setindent( Sp, &UYIATRN );
TYIATRN.data[0] = A_UNITE(VYIATRN,mode21,21,UYIATRN);
XYIATRN = (*(&(QYIATRN_nametype->Name))) ;
TYIATRN.data[1] = A_UNITE(WYIATRN,mode7,7,XYIATRN);
ZYIATRN.fn.fn_global = LRAAOSL_newline;
ZYIATRN.nonlocals = A68_NIL;
TYIATRN.data[2] = A_UNITE(YYIATRN,mode12,12,ZYIATRN);
VCGATRN_print(A_HISVEC(AZIATRN,TYIATRN,3,A68_52 ));
 /* line 855: */
MOGATRN_pt_type((*(&(QYIATRN_nametype->Type))), (Sp+6));
 /* line 856: */
KGGATRN_pt_attr((*(&(QYIATRN_nametype->Attr))), (Sp+6));
 /* line 857: */
 /* line 858: */
CZIATRN.fn.fn_global = LRAAOSL_newline;
CZIATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(DZIATRN,A_UNITE(BZIATRN,mode12,12,CZIATRN),A68_52 ));
}
 /* line 860: */
JIIATRN_pt_fnbody((*(&(Fd->Fnbody))), Sp);
 /* line 861: */
 /* line 862: */
 /* line 863: */
PRIATRN_pt_usage((*(&(Fd->Usage))), Sp);
} 
} 
A_PROC_EXIT(pt_fndec);
return;
} 
#undef NL

A_STATIC A68_VOID  GZIATRN_pt_typedec(A68_218 * Ty, A68_INT  Sp)
{ 
A68_368  HZIATRN;  /* collateral clause result */
A68_65  IZIATRN;  /* avoid structure result */
A68_52  JZIATRN;  /* OPERATORS - mode -> union mode */
A68_52  MZIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NZIATRN;  /* YIELD */
A68_52  OZIATRN;  /* OPERATORS - mode -> union mode */
A68_56  PZIATRN;  /* procedure value */
A68_85  QZIATRN;  /* OPERATORS - istruct -> vector */
A68_366  RZIATRN;  /* collateral clause result */
A68_65  SZIATRN;  /* avoid structure result */
A68_52  TZIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  UZIATRN;  /* avoid structure result */
A68_52  VZIATRN;  /* OPERATORS - mode -> union mode */
A68_52  YZIATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZZIATRN;  /* YIELD */
A68_52  AAJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  BAJATRN;  /* YIELD */
A68_52  CAJATRN;  /* OPERATORS - mode -> union mode */
A68_56  DAJATRN;  /* procedure value */
A68_85  EAJATRN;  /* OPERATORS - istruct -> vector */
A68_52  FAJATRN;  /* OPERATORS - mode -> union mode */
A68_56  GAJATRN;  /* procedure value */
A68_85  HAJATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_typedec);
 /* line 867: */
 /* line 868: */
{ 
 /* line 869: */
if ( (Ty==WAAATRN_niltypedec) )
{ 
MZAAOSL_setindent( Sp, &IZIATRN );
HZIATRN.data[0] = A_UNITE(JZIATRN,mode21,21,IZIATRN);
NZIATRN = LZIATRN ;
HZIATRN.data[1] = A_UNITE(MZIATRN,mode7,7,NZIATRN);
PZIATRN.fn.fn_global = LRAAOSL_newline;
PZIATRN.nonlocals = A68_NIL;
HZIATRN.data[2] = A_UNITE(OZIATRN,mode12,12,PZIATRN);
 /* line 870: */
VCGATRN_print(A_HISVEC(QZIATRN,HZIATRN,3,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( Sp, &SZIATRN );
RZIATRN.data[0] = A_UNITE(TZIATRN,mode21,21,SZIATRN);
 /* line 871: */
CRIATRN_pt_decsort( (*(&(Ty->Sort))), &UZIATRN );
RZIATRN.data[1] = A_UNITE(VZIATRN,mode7,7,UZIATRN);
ZZIATRN = XZIATRN ;
RZIATRN.data[2] = A_UNITE(YZIATRN,mode7,7,ZZIATRN);
BAJATRN = (*(&(Ty->Typename))) ;
RZIATRN.data[3] = A_UNITE(AAJATRN,mode7,7,BAJATRN);
DAJATRN.fn.fn_global = LRAAOSL_newline;
DAJATRN.nonlocals = A68_NIL;
RZIATRN.data[4] = A_UNITE(CAJATRN,mode12,12,DAJATRN);
VCGATRN_print(A_HISVEC(EAJATRN,RZIATRN,5,A68_52 ));
 /* line 872: */
KGGATRN_pt_attr((*(&(Ty->Attr))), (Sp+3));
 /* line 873: */
GAJATRN.fn.fn_global = LRAAOSL_newline;
GAJATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(HAJATRN,A_UNITE(FAJATRN,mode12,12,GAJATRN),A68_52 ));
 /* line 874: */
RFIATRN_pt_typebody((*(&(Ty->Body))), (Sp+3));
 /* line 875: */
 /* line 876: */
 /* line 877: */
PRIATRN_pt_usage((*(&(Ty->Usage))), (Sp+3));
} 
} 
A_PROC_EXIT(pt_typedec);
return;
} 
#undef NL

A_STATIC A68_VOID  KAJATRN_pt_attrdec(A68_184 * Ad, A68_INT  Sp)
{ 
A68_368  LAJATRN;  /* collateral clause result */
A68_65  MAJATRN;  /* avoid structure result */
A68_52  NAJATRN;  /* OPERATORS - mode -> union mode */
A68_52  QAJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  RAJATRN;  /* YIELD */
A68_52  SAJATRN;  /* OPERATORS - mode -> union mode */
A68_56  TAJATRN;  /* procedure value */
A68_85  UAJATRN;  /* OPERATORS - istruct -> vector */
A68_366  VAJATRN;  /* collateral clause result */
A68_65  WAJATRN;  /* avoid structure result */
A68_52  XAJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  YAJATRN;  /* avoid structure result */
A68_52  ZAJATRN;  /* OPERATORS - mode -> union mode */
A68_52  CBJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  DBJATRN;  /* YIELD */
A68_52  EBJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FBJATRN;  /* YIELD */
A68_52  GBJATRN;  /* OPERATORS - mode -> union mode */
A68_56  HBJATRN;  /* procedure value */
A68_85  IBJATRN;  /* OPERATORS - istruct -> vector */
A68_65  JBJATRN;  /* avoid structure result */
A68_52  KBJATRN;  /* OPERATORS - mode -> union mode */
A68_85  LBJATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  MBJATRN;  /* OPERATORS - mode -> union mode */
A68_56  NBJATRN;  /* procedure value */
A68_85  OBJATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_attrdec);
 /* line 880: */
 /* line 881: */
{ 
 /* line 882: */
if ( (Ad==UAAATRN_nilattrdec) )
{ 
MZAAOSL_setindent( Sp, &MAJATRN );
LAJATRN.data[0] = A_UNITE(NAJATRN,mode21,21,MAJATRN);
RAJATRN = PAJATRN ;
LAJATRN.data[1] = A_UNITE(QAJATRN,mode7,7,RAJATRN);
TAJATRN.fn.fn_global = LRAAOSL_newline;
TAJATRN.nonlocals = A68_NIL;
LAJATRN.data[2] = A_UNITE(SAJATRN,mode12,12,TAJATRN);
 /* line 883: */
VCGATRN_print(A_HISVEC(UAJATRN,LAJATRN,3,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( Sp, &WAJATRN );
VAJATRN.data[0] = A_UNITE(XAJATRN,mode21,21,WAJATRN);
 /* line 884: */
CRIATRN_pt_decsort( (*(&(Ad->Sort))), &YAJATRN );
VAJATRN.data[1] = A_UNITE(ZAJATRN,mode7,7,YAJATRN);
DBJATRN = BBJATRN ;
VAJATRN.data[2] = A_UNITE(CBJATRN,mode7,7,DBJATRN);
FBJATRN = (*(&(Ad->Attrname))) ;
VAJATRN.data[3] = A_UNITE(EBJATRN,mode7,7,FBJATRN);
HBJATRN.fn.fn_global = LRAAOSL_newline;
HBJATRN.nonlocals = A68_NIL;
VAJATRN.data[4] = A_UNITE(GBJATRN,mode12,12,HBJATRN);
VCGATRN_print(A_HISVEC(IBJATRN,VAJATRN,5,A68_52 ));
 /* line 885: */
MZAAOSL_setindent( Sp, &JBJATRN );
VCGATRN_print(A_HVEC(LBJATRN,A_UNITE(KBJATRN,mode21,21,JBJATRN),A68_52 ));
 /* line 886: */
KGGATRN_pt_attr((*(&(Ad->Value))), (Sp+3));
 /* line 887: */
NBJATRN.fn.fn_global = LRAAOSL_newline;
NBJATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(OBJATRN,A_UNITE(MBJATRN,mode12,12,NBJATRN),A68_52 ));
 /* line 888: */
 /* line 889: */
 /* line 890: */
PRIATRN_pt_usage((*(&(Ad->Usage))), (Sp+3));
} 
} 
A_PROC_EXIT(pt_attrdec);
return;
} 
#undef NL

A_STATIC A68_VOID  RBJATRN_pt_intdec(A68_200 * Id, A68_INT  Sp)
{ 
A68_368  SBJATRN;  /* collateral clause result */
A68_65  TBJATRN;  /* avoid structure result */
A68_52  UBJATRN;  /* OPERATORS - mode -> union mode */
A68_52  XBJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  YBJATRN;  /* YIELD */
A68_52  ZBJATRN;  /* OPERATORS - mode -> union mode */
A68_56  ACJATRN;  /* procedure value */
A68_85  BCJATRN;  /* OPERATORS - istruct -> vector */
A68_366  CCJATRN;  /* collateral clause result */
A68_65  DCJATRN;  /* avoid structure result */
A68_52  ECJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FCJATRN;  /* avoid structure result */
A68_52  GCJATRN;  /* OPERATORS - mode -> union mode */
A68_52  JCJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KCJATRN;  /* YIELD */
A68_52  LCJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  MCJATRN;  /* YIELD */
A68_52  NCJATRN;  /* OPERATORS - mode -> union mode */
A68_56  OCJATRN;  /* procedure value */
A68_85  PCJATRN;  /* OPERATORS - istruct -> vector */
A68_52  QCJATRN;  /* OPERATORS - mode -> union mode */
A68_56  RCJATRN;  /* procedure value */
A68_85  SCJATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_intdec);
 /* line 893: */
 /* line 894: */
{ 
 /* line 895: */
if ( (Id==VAAATRN_nilintdec) )
{ 
MZAAOSL_setindent( Sp, &TBJATRN );
SBJATRN.data[0] = A_UNITE(UBJATRN,mode21,21,TBJATRN);
YBJATRN = WBJATRN ;
SBJATRN.data[1] = A_UNITE(XBJATRN,mode7,7,YBJATRN);
ACJATRN.fn.fn_global = LRAAOSL_newline;
ACJATRN.nonlocals = A68_NIL;
SBJATRN.data[2] = A_UNITE(ZBJATRN,mode12,12,ACJATRN);
 /* line 896: */
VCGATRN_print(A_HISVEC(BCJATRN,SBJATRN,3,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( Sp, &DCJATRN );
CCJATRN.data[0] = A_UNITE(ECJATRN,mode21,21,DCJATRN);
 /* line 897: */
CRIATRN_pt_decsort( (*(&(Id->Sort))), &FCJATRN );
CCJATRN.data[1] = A_UNITE(GCJATRN,mode7,7,FCJATRN);
KCJATRN = ICJATRN ;
CCJATRN.data[2] = A_UNITE(JCJATRN,mode7,7,KCJATRN);
MCJATRN = (*(&(Id->Intname))) ;
CCJATRN.data[3] = A_UNITE(LCJATRN,mode7,7,MCJATRN);
OCJATRN.fn.fn_global = LRAAOSL_newline;
OCJATRN.nonlocals = A68_NIL;
CCJATRN.data[4] = A_UNITE(NCJATRN,mode12,12,OCJATRN);
VCGATRN_print(A_HISVEC(PCJATRN,CCJATRN,5,A68_52 ));
 /* line 898: */
KGGATRN_pt_attr((*(&(Id->Attr))), (Sp+3));
 /* line 899: */
RCJATRN.fn.fn_global = LRAAOSL_newline;
RCJATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(SCJATRN,A_UNITE(QCJATRN,mode12,12,RCJATRN),A68_52 ));
 /* line 900: */
COGATRN_pt_formularange((*(&(Id->Value))), (Sp+3));
 /* line 901: */
 /* line 902: */
 /* line 903: */
PRIATRN_pt_usage((*(&(Id->Usage))), (Sp+3));
} 
} 
A_PROC_EXIT(pt_intdec);
return;
} 
#undef NL

A_STATIC A68_VOID  VCJATRN_pt_constdec(A68_224 * Cd, A68_INT  Sp)
{ 
A68_368  WCJATRN;  /* collateral clause result */
A68_65  XCJATRN;  /* avoid structure result */
A68_52  YCJATRN;  /* OPERATORS - mode -> union mode */
A68_52  BDJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  CDJATRN;  /* YIELD */
A68_52  DDJATRN;  /* OPERATORS - mode -> union mode */
A68_56  EDJATRN;  /* procedure value */
A68_85  FDJATRN;  /* OPERATORS - istruct -> vector */
A68_366  GDJATRN;  /* collateral clause result */
A68_65  HDJATRN;  /* avoid structure result */
A68_52  IDJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  JDJATRN;  /* avoid structure result */
A68_52  KDJATRN;  /* OPERATORS - mode -> union mode */
A68_52  NDJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ODJATRN;  /* YIELD */
A68_52  PDJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QDJATRN;  /* YIELD */
A68_52  RDJATRN;  /* OPERATORS - mode -> union mode */
A68_56  SDJATRN;  /* procedure value */
A68_85  TDJATRN;  /* OPERATORS - istruct -> vector */
A68_52  UDJATRN;  /* OPERATORS - mode -> union mode */
A68_56  VDJATRN;  /* procedure value */
A68_85  WDJATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_constdec);
 /* line 906: */
 /* line 907: */
{ 
 /* line 908: */
if ( (Cd==XAAATRN_nilconstdec) )
{ 
MZAAOSL_setindent( Sp, &XCJATRN );
WCJATRN.data[0] = A_UNITE(YCJATRN,mode21,21,XCJATRN);
CDJATRN = ADJATRN ;
WCJATRN.data[1] = A_UNITE(BDJATRN,mode7,7,CDJATRN);
EDJATRN.fn.fn_global = LRAAOSL_newline;
EDJATRN.nonlocals = A68_NIL;
WCJATRN.data[2] = A_UNITE(DDJATRN,mode12,12,EDJATRN);
 /* line 909: */
VCGATRN_print(A_HISVEC(FDJATRN,WCJATRN,3,A68_52 ));
} 
else
{ 
MZAAOSL_setindent( Sp, &HDJATRN );
GDJATRN.data[0] = A_UNITE(IDJATRN,mode21,21,HDJATRN);
 /* line 910: */
CRIATRN_pt_decsort( (*(&(Cd->Sort))), &JDJATRN );
GDJATRN.data[1] = A_UNITE(KDJATRN,mode7,7,JDJATRN);
ODJATRN = MDJATRN ;
GDJATRN.data[2] = A_UNITE(NDJATRN,mode7,7,ODJATRN);
QDJATRN = (*(&(Cd->Constname))) ;
GDJATRN.data[3] = A_UNITE(PDJATRN,mode7,7,QDJATRN);
SDJATRN.fn.fn_global = LRAAOSL_newline;
SDJATRN.nonlocals = A68_NIL;
GDJATRN.data[4] = A_UNITE(RDJATRN,mode12,12,SDJATRN);
VCGATRN_print(A_HISVEC(TDJATRN,GDJATRN,5,A68_52 ));
 /* line 911: */
KGGATRN_pt_attr((*(&(Cd->Attr))), (Sp+3));
 /* line 912: */
VDJATRN.fn.fn_global = LRAAOSL_newline;
VDJATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(WDJATRN,A_UNITE(UDJATRN,mode12,12,VDJATRN),A68_52 ));
 /* line 913: */
BTGATRN_pt_unit((*(&(Cd->Value))), (Sp+3));
 /* line 914: */
 /* line 915: */
 /* line 916: */
PRIATRN_pt_usage((*(&(Cd->Usage))), (Sp+3));
} 
} 
A_PROC_EXIT(pt_constdec);
return;
} 
#undef NL

A68_VOID  ZDJATRN_pt_outer(A68_310  O, A68_INT  Sp)
{ 
A68_400  AEJATRN;  /* collateral clause result */
A68_65  BEJATRN;  /* avoid structure result */
A68_52  CEJATRN;  /* OPERATORS - mode -> union mode */
A68_52  FEJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  GEJATRN;  /* YIELD */
A68_52  JEJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KEJATRN;  /* YIELD */
A68_52  NEJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  OEJATRN;  /* YIELD */
A68_52  REJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SEJATRN;  /* YIELD */
A68_52  VEJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WEJATRN;  /* YIELD */
A68_52  ZEJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  AFJATRN;  /* YIELD */
A68_52  DFJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  EFJATRN;  /* YIELD */
A68_52  FFJATRN;  /* OPERATORS - mode -> union mode */
A68_INT  GFJATRN;  /* YIELD */
A68_52  HFJATRN;  /* OPERATORS - mode -> union mode */
A68_56  IFJATRN;  /* procedure value */
A68_85  JFJATRN;  /* OPERATORS - istruct -> vector */
A68_304 * KFJATRN_env;
A68_184 ** LFJATRN_attr;
A68_305  MFJATRN;  /* forall yield */
A68_INT  NFJATRN;  /* forall loop counter */
A68_200 ** OFJATRN_int;
A68_306  PFJATRN;  /* forall yield */
A68_INT  QFJATRN;  /* forall loop counter */
A68_218 ** RFJATRN_type;
A68_307  SFJATRN;  /* forall yield */
A68_INT  TFJATRN;  /* forall loop counter */
A68_224 ** UFJATRN_const;
A68_308  VFJATRN;  /* forall yield */
A68_INT  WFJATRN;  /* forall loop counter */
A68_301 ** XFJATRN_fn;
A68_309  YFJATRN;  /* forall yield */
A68_INT  ZFJATRN;  /* forall loop counter */
A68_52  AGJATRN;  /* OPERATORS - mode -> union mode */
A68_56  BGJATRN;  /* procedure value */
A68_85  CGJATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_outer);
 /* line 920: */
 /* line 921: */
{ 
MZAAOSL_setindent( Sp, &BEJATRN );
AEJATRN.data[0] = A_UNITE(CEJATRN,mode21,21,BEJATRN);
 /* line 922: */
GEJATRN = EEJATRN ;
AEJATRN.data[1] = A_UNITE(FEJATRN,mode7,7,GEJATRN);
switch ( O.Sort )
{ 
case 1: 
KEJATRN = IEJATRN ;
AEJATRN.data[2] = A_UNITE(JEJATRN,mode7,7,KEJATRN);
break;
case 2: 
OEJATRN = MEJATRN ;
AEJATRN.data[2] = A_UNITE(NEJATRN,mode7,7,OEJATRN);
break;
case 3: 
SEJATRN = QEJATRN ;
AEJATRN.data[2] = A_UNITE(REJATRN,mode7,7,SEJATRN);
break;
case 4: 
WEJATRN = UEJATRN ;
AEJATRN.data[2] = A_UNITE(VEJATRN,mode7,7,WEJATRN);
break;
case 5: 
 /* line 923: */
AFJATRN = YEJATRN ;
AEJATRN.data[2] = A_UNITE(ZEJATRN,mode7,7,AFJATRN);
break;
default: 
A_IMP_SKIP ;
break;
} 
EFJATRN = CFJATRN ;
AEJATRN.data[3] = A_UNITE(DFJATRN,mode7,7,EFJATRN);
GFJATRN = O.Closureno ;
AEJATRN.data[4] = A_UNITE(FFJATRN,mode1,1,GFJATRN);
IFJATRN.fn.fn_global = LRAAOSL_newline;
IFJATRN.nonlocals = A68_NIL;
AEJATRN.data[5] = A_UNITE(HFJATRN,mode12,12,IFJATRN);
VCGATRN_print(A_HISVEC(JFJATRN,AEJATRN,6,A68_52 ));
 /* line 924: */
KFJATRN_env = O.Environ;
 /* line 925: */
MFJATRN = (*(&(KFJATRN_env->Attrs))) ;
NFJATRN = MFJATRN.upb -1;
LFJATRN_attr = MFJATRN.data;
for (;NFJATRN-- >= 0;
(LFJATRN_attr++
) )
{
KAJATRN_pt_attrdec((*LFJATRN_attr), (Sp+3));
}
 /* line 926: */
PFJATRN = (*(&(KFJATRN_env->Ints))) ;
QFJATRN = PFJATRN.upb -1;
OFJATRN_int = PFJATRN.data;
for (;QFJATRN-- >= 0;
(OFJATRN_int++
) )
{
RBJATRN_pt_intdec((*OFJATRN_int), (Sp+3));
}
 /* line 927: */
SFJATRN = (*(&(KFJATRN_env->Types))) ;
TFJATRN = SFJATRN.upb -1;
RFJATRN_type = SFJATRN.data;
for (;TFJATRN-- >= 0;
(RFJATRN_type++
) )
{
GZIATRN_pt_typedec((*RFJATRN_type), (Sp+3));
}
 /* line 928: */
VFJATRN = (*(&(KFJATRN_env->Consts))) ;
WFJATRN = VFJATRN.upb -1;
UFJATRN_const = VFJATRN.data;
for (;WFJATRN-- >= 0;
(UFJATRN_const++
) )
{
VCJATRN_pt_constdec((*UFJATRN_const), (Sp+3));
}
 /* line 929: */
YFJATRN = (*(&(KFJATRN_env->Fns))) ;
ZFJATRN = YFJATRN.upb -1;
XFJATRN_fn = YFJATRN.data;
for (;ZFJATRN-- >= 0;
(XFJATRN_fn++
) )
{
BGJATRN.fn.fn_global = LRAAOSL_newline;
BGJATRN.nonlocals = A68_NIL;
VCGATRN_print(A_HVEC(CGJATRN,A_UNITE(AGJATRN,mode12,12,BGJATRN),A68_52 ));
GUIATRN_pt_fndec((*XFJATRN_fn), (Sp+3));
}
 /* line 930: */
 /* line 931: */
LRAAOSL_newline(LEAAOST_out);
} 
A_PROC_EXIT(pt_outer);
return;
} 
#undef NL

A68_VOID  FGJATRN_pt_closure(A68_314 * Close, A68_INT  Sp)
{ 
A68_311 * GGJATRN_os;
A68_INT  HGJATRN_n;
A68_387  IGJATRN;  /* collateral clause result */
A68_65  JGJATRN;  /* avoid structure result */
A68_52  KGJATRN;  /* OPERATORS - mode -> union mode */
A68_52  NGJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  OGJATRN;  /* YIELD */
A68_52  PGJATRN;  /* OPERATORS - mode -> union mode */
A68_52  SGJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  TGJATRN;  /* YIELD */
A68_52  UGJATRN;  /* OPERATORS - mode -> union mode */
A68_INT  VGJATRN;  /* YIELD */
A68_52  WGJATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  XGJATRN;  /* YIELD */
A68_64  YGJATRN;  /* avoid structure result */
A68_52  ZGJATRN;  /* OPERATORS - mode -> union mode */
A68_85  AHJATRN;  /* OPERATORS - istruct -> vector */
A68_363  BHJATRN;  /* collateral clause result */
A68_52  CHJATRN;  /* OPERATORS - mode -> union mode */
A68_56  DHJATRN;  /* procedure value */
A68_52  EHJATRN;  /* OPERATORS - mode -> union mode */
A68_56  FHJATRN;  /* procedure value */
A68_85  GHJATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pt_closure);
 /* line 934: */
 /* line 935: */
{ 
YCGATRN_pt_ids_table(A68_FALSE, Sp);
 /* line 936: */
GGJATRN_os = (*(&(Close->Outers)));
 /* line 937: */
HGJATRN_n = 0;
 /* line 938: */
for ( ;; )
{ 
if ( !((GGJATRN_os!=HBAATRN_nilouters)) ) break;
GGJATRN_os = (*(&(GGJATRN_os->Rest)));
HGJATRN_n+=1;
}
 /* line 939: */
GGJATRN_os = (*(&(Close->Outers)));
 /* line 940: */
MZAAOSL_setindent( Sp, &JGJATRN );
IGJATRN.data[0] = A_UNITE(KGJATRN,mode21,21,JGJATRN);
OGJATRN = MGJATRN ;
IGJATRN.data[1] = A_UNITE(NGJATRN,mode7,7,OGJATRN);
 /* line 941: */
IGJATRN.data[2] = A_UNITE(PGJATRN,mode1,1,HGJATRN_n);
TGJATRN = RGJATRN ;
IGJATRN.data[3] = A_UNITE(SGJATRN,mode7,7,TGJATRN);
 /* line 942: */
VGJATRN = ZKCATRN_maxclosureno(Close) ;
IGJATRN.data[4] = A_UNITE(UGJATRN,mode1,1,VGJATRN);
XGJATRN = ')' ;
IGJATRN.data[5] = A_UNITE(WGJATRN,mode6,6,XGJATRN);
HZAAOSL_lines( 2, &YGJATRN );
IGJATRN.data[6] = A_UNITE(ZGJATRN,mode20,20,YGJATRN);
VCGATRN_print(A_HISVEC(AHJATRN,IGJATRN,7,A68_52 ));
 /* line 943: */
for ( ;; )
{ 
 /* line 944: */
if ( !((GGJATRN_os!=HBAATRN_nilouters)) ) break;
ZDJATRN_pt_outer((*(&(GGJATRN_os->Outer))), Sp);
 /* line 945: */
 /* line 946: */
GGJATRN_os = (*(&(GGJATRN_os->Rest)));
}
 /* line 947: */
DHJATRN.fn.fn_global = RZAAOSL_resetindent;
DHJATRN.nonlocals = A68_NIL;
BHJATRN.data[0] = A_UNITE(CHJATRN,mode12,12,DHJATRN);
FHJATRN.fn.fn_global = LRAAOSL_newline;
FHJATRN.nonlocals = A68_NIL;
BHJATRN.data[1] = A_UNITE(EHJATRN,mode12,12,FHJATRN);
 /* line 948: */
VCGATRN_print(A_HISVEC(GHJATRN,BHJATRN,2,A68_52 ));
} 
A_PROC_EXIT(pt_closure);
return;
} 
#undef NL

A68_VOID  HHJATRN_pt_idstable(void)
{ 
A_PROC_ENTRY(pt_idstable);
 /* line 955: */
YCGATRN_pt_ids_table(A68_TRUE, 0);
A_PROC_EXIT(pt_idstable);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void NCGATRN(void)   /* initialise DECS ptassem */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/ptassem.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/closureprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_380  OOHATRN;  /* procedure value */
A68_382  NCIATRN;  /* procedure value */
A68_383  OFIATRN;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TIGAOST();   /* USE ioprocs */
SKCATRN();   /* USE closureprocs */
BAAATRN();   /* USE assmodes */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
QFBAOST();   /* USE testmode */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/ptassem.a68";
A_config.translation_time = "Tue Apr  4 09:59:32 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "MCGATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:59:32 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS ptassem);
UEAALIB_a68config(LGAALIB_configinfo, RCGATRN);
 /* line 95: */
 /* line 97: */
 /* line 100: */
 /* line 126: */
 /* line 136: */
 /* line 163: */
 /* line 206: */
 /* line 213: */
 /* line 219: */
 /* line 228: */
 /* line 273: */
 /* line 275: */
 /* line 286: */
 /* line 287: */
 /* line 289: */
 /* line 490: */
 /* line 502: */
OOHATRN.fn.fn_global = JNHATRN_anonymous;
OOHATRN.nonlocals = A68_NIL;
BSGATRN_pt_instance = OOHATRN;
 /* line 516: */
 /* line 517: */
 /* line 536: */
 /* line 548: */
 /* line 574: */
NCIATRN.fn.fn_global = WUHATRN_anonymous;
NCIATRN.nonlocals = A68_NIL;
XSGATRN_pt_seqstep = NCIATRN;
 /* line 662: */
OFIATRN.fn.fn_global = QCIATRN_anonymous;
OFIATRN.nonlocals = A68_NIL;
YSGATRN_pt_step = OFIATRN;
 /* line 699: */
 /* line 725: */
 /* line 803: */
 /* line 811: */
 /* line 826: */
 /* line 866: */
 /* line 879: */
 /* line 892: */
 /* line 905: */
 /* line 919: */
 /* line 933: */
 /* line 952: */
 /* line 956: */
A_PROC_EXIT(DECS ptassem);
} 
#undef NL
/* end of translation of ./a68files/ptassem.a68 */
