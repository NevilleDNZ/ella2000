
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
/* UNAME:PTBAOSL */
#include "Asupport.h"
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 ,struct A68t33 ),(struct A68t32 ,struct A68t33 ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE32,MODE33) VOID */
struct A68t32{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t34 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,REF MODE34,BITS)  */
A_VECTOR(A68_VC ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t36 ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE36 */
struct A68t36{
struct A68t32  Msgno;
A68_VC  Text;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE32,REF MODE26)  */
struct A68t34{
A68_VC  Name;
struct A68t35  Messages;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(REF MODE26,REF MODE35)  */
struct A68t37{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t38{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t39,(struct A68t38 ,struct A68t38 ),(struct A68t38 ,struct A68t38 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE38,MODE38) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 4 CHAR */
struct A68t40{
struct A68t41  Access;
A_PAD_ISTRUCT(A68_41 ,PAD_4)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE41)  */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 *,A68_VC *),(struct A68t37 *,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE37) MODE26 */

A_PROCEDURE(struct A68t37 *,A68t43,(A68_VC ,struct A68t40 ,struct A68t31 ),(A68_VC ,struct A68t40 ,struct A68t31 ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26,MODE40,MODE31) REF MODE37 */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t37 *,struct A68t31 ),(struct A68t37 *,struct A68t31 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE37,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE37,REF MODE26,REF INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE37,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF MODE37,LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE37,REF LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t37 *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE37,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE26,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC ,A68_VC ,struct A68t31 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t31 ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE26,MODE26,MODE31) MODE26 */
struct A68t53{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_5)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_6)
A68_SINT  Device;
A_PAD_SINT(PAD_7)
A68_SINT  Links;
A_PAD_SINT(PAD_8)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_9)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_10)
A68_LINT  Size;
A_PAD_LINT(PAD_11)
A68_LINT  Accessed;
A_PAD_LINT(PAD_12)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_13)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_14)
};
typedef struct A68t53  A68_53 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t55 ;

A_PROCEDURE(struct A68t53 *,A68t54,(struct A68t55 ,struct A68t31 ),(struct A68t55 ,struct A68t31 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE31) REF MODE53 */
struct A68t55 { A68_INT mode; union {
struct A68t37 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t55  A68_55 ;    /* UNION(REF MODE37,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t56,(struct A68t37 *),(struct A68t37 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE37) BOOL */

A_PROCEDURE(A68_BITS *,A68t57,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE31) REF BITS */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BITS *,struct A68t31 ),(A68_BITS *,struct A68t31 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF BITS,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BITS *,struct A68t31 ,A68_VC *),(A68_BITS *,struct A68t31 ,A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF BITS,MODE31) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC *),(A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t62,(void),(void *));
typedef struct A68t62  A68_62 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t63,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ),(A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t65,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE26,MODE31) INT */

A_PROCEDURE(A68_INT ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC INT */
struct A68t67{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t67 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t67 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26,MODE26,MODE31) MODE67 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t33 *),(struct A68t33 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC MODE33 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,struct A68t31 ,struct A68t33 *),(A68_VC ,struct A68t31 ,struct A68t33 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26,MODE31) MODE33 */
struct A68t72 ;

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t72 ,struct A68t31 ,struct A68t31 ),(struct A68t72 ,struct A68t31 ,struct A68t31 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE72,MODE31,MODE31) VOID */
A_VECTOR(A68_INT ,A68t72);
typedef struct A68t72  A68_72 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t72 ,struct A68t31 ),(struct A68t72 ,struct A68t31 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE72,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t31 ,struct A68t31 *),(A68_INT ,struct A68t31 ,struct A68t31 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,MODE31) MODE31 */

A_PROCEDURE(A68_VOID ,A68t75,(void),(void *));
typedef struct A68t75  A68_75 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BITS) VOID */
struct A68t78 ;

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ),(A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26) VOID */
struct A68t79{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t80,(A68_BOOL ,struct A68t79 *),(A68_BOOL ,struct A68t79 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(BOOL) MODE79 */
struct A68t82 ;

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t82 ,struct A68t31 ),(struct A68t82 ,struct A68t31 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE82,MODE31) VOID */
A_VECTOR(struct A68t79 ,A68t82);
typedef struct A68t82  A68_82 ;    /* VECTOR [] MODE79 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_BOOL ,struct A68t72 *),(A68_BOOL ,struct A68t72 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(BOOL) MODE72 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t85{
A68_INT  Charnumber;
A_PAD_INT(PAD_16)
A68_INT  Linenumber;
A_PAD_INT(PAD_17)
A68_INT  Indent;
A_PAD_INT(PAD_18)
A68_INT  Width;
A_PAD_INT(PAD_19)
A68_INT  Sizeincr;
A_PAD_INT(PAD_20)
struct A68t38  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_21)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_22)
A68_BOOL  Input;
A_PAD_BOOL(PAD_23)
struct A68t78  Putbuffer;
struct A68t86  Getbuffer;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE78,MODE86)  */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t89,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t72 ,struct A68t72 *),(struct A68t72 ,struct A68t72 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE72) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t91,(A68_INT ,struct A68t72 *),(A68_INT ,struct A68t72 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(INT) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t92,(A68_VC ),(A68_VC ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t33 ,A68_VC *),(struct A68t33 ,A68_VC *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE33) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t95,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ,A68_VC *),(struct A68t98 ,A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98) MODE26 */
struct A68t98 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t98  A68_98 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t99,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t101);
typedef struct A68t101  A68_101 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t103);
typedef struct A68t103  A68_103 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE85) VOID */
struct A68t105{
A68_INT  Int;
A_PAD_INT(PAD_24)
A68_INT  Width;
A_PAD_INT(PAD_25)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,INT)  */
struct A68t106{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_26)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(MODE26,INT)  */
struct A68t107{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_27)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(MODE26,INT)  */
struct A68t108{
A68_INT  Tab;
A_PAD_INT(PAD_28)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT)  */
struct A68t109{
A68_INT  Pos;
A_PAD_INT(PAD_29)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT)  */
struct A68t110{
A68_INT  After;
A_PAD_INT(PAD_30)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT)  */
struct A68t111{
A68_INT  Spaces;
A_PAD_INT(PAD_31)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT)  */
struct A68t112{
A68_INT  Lines;
A_PAD_INT(PAD_32)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT)  */
struct A68t113{
A68_INT  Indent;
A_PAD_INT(PAD_33)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t114);
typedef struct A68t114  A68_114 ;    /* STRAIGHT MODE100 */
struct A68t100 { A68_INT mode; union {
A68_INT  mode1;
struct A68t72  mode2;
A68_BITS  mode3;
struct A68t101  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t102  mode9;
A68_REAL  mode10;
struct A68t103  mode11;
struct A68t104  mode12;
struct A68t105  mode13;
struct A68t106  mode14;
struct A68t107  mode15;
struct A68t108  mode16;
struct A68t109  mode17;
struct A68t110  mode18;
struct A68t111  mode19;
struct A68t112  mode20;
struct A68t113  mode21;
struct A68t114  mode22;
} data; };
typedef struct A68t100  A68_100 ;    /* UNION(INT,MODE72,BITS,MODE101,SHORT BITS,CHAR,MODE26,BOOL,MODE102,REAL,MODE103,MODE104,MODE105,MODE106,MODE107,MODE108,MODE109,MODE110,MODE111,MODE112,MODE113,MODE114)  */

A_PROCEDURE(A68_VOID ,A68t115,(A68_BOOL ,struct A68t106 *),(A68_BOOL ,struct A68t106 *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(BOOL) MODE106 */

A_PROCEDURE(A68_VOID ,A68t116,(A68_BOOL ,struct A68t107 *),(A68_BOOL ,struct A68t107 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(BOOL) MODE107 */

A_PROCEDURE(A68_INT ,A68t117,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE85) INT */

A_PROCEDURE(A68_INT ,A68t118,(struct A68t85 *,A68_INT ),(struct A68t85 *,A68_INT ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE85,INT) INT */

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,A68_INT ,struct A68t105 *),(A68_INT ,A68_INT ,struct A68t105 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT,INT) MODE105 */

A_PROCEDURE(A68_VOID ,A68t120,(A68_VC ,A68_INT ,struct A68t106 *),(A68_VC ,A68_INT ,struct A68t106 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE26,INT) MODE106 */

A_PROCEDURE(A68_VOID ,A68t121,(A68_VC ,A68_INT ,struct A68t107 *),(A68_VC ,A68_INT ,struct A68t107 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26,INT) MODE107 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,struct A68t108 *),(A68_INT ,struct A68t108 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) MODE108 */

A_PROCEDURE(A68_VOID ,A68t123,(A68_INT ,struct A68t109 *),(A68_INT ,struct A68t109 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT) MODE109 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,struct A68t110 *),(A68_INT ,struct A68t110 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT) MODE110 */

A_PROCEDURE(A68_VOID ,A68t125,(A68_INT ,struct A68t111 *),(A68_INT ,struct A68t111 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT) MODE111 */

A_PROCEDURE(A68_VOID ,A68t126,(A68_INT ,struct A68t112 *),(A68_INT ,struct A68t112 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT) MODE112 */

A_PROCEDURE(A68_VOID ,A68t127,(A68_INT ,struct A68t113 *),(A68_INT ,struct A68t113 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT) MODE113 */

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t85 *,A68_VC ),(struct A68t85 *,A68_VC ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE85,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t85 *,A68_INT ,A68_INT ),(struct A68t85 *,A68_INT ,A68_INT ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE85,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t85 *,A68_BITS ,A68_INT ),(struct A68t85 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE85,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t85 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t85 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE85,REAL,INT,INT) VOID */
struct A68t133 ;

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t85 *,struct A68t133 ),(struct A68t85 *,struct A68t133 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE85,MODE133) VOID */
A_VECTOR(struct A68t100 ,A68t133);
typedef struct A68t133  A68_133 ;    /* VECTOR [] MODE100 */
struct A68t135 ;
struct A68t136 ;

A_PROCEDURE(struct A68t85 *,A68t134,(struct A68t135 ,struct A68t136 ),(struct A68t135 ,struct A68t136 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE135,MODE136) REF MODE85 */
struct A68t135 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t135  A68_135 ;    /* UNION(INT,REF MODE26)  */
struct A68t136 { A68_INT mode; union {
struct A68t78  mode1;
struct A68t86  mode2;
} data; };
typedef struct A68t136  A68_136 ;    /* UNION(MODE78,MODE86)  */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC ,struct A68t133 ,A68_VC *),(A68_VC ,struct A68t133 ,A68_VC *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(REF MODE26,MODE133) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t138,(struct A68t85 *,A68_VC *),(struct A68t85 *,A68_VC *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(REF MODE85) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t133 ,A68_VC *),(struct A68t133 ,A68_VC *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE133) REF MODE26 */
A_ROW(A68_INT ,A68t141,1);
typedef struct A68t141  A68_141 ;    /* [] INT */
A_ROW(A68_BITS ,A68t142,1);
typedef struct A68t142  A68_142 ;    /* [] BITS */
A_ROW(A68_BOOL ,A68t143,1);
typedef struct A68t143  A68_143 ;    /* [] BOOL */
A_ROW(A68_REAL ,A68t144,1);
typedef struct A68t144  A68_144 ;    /* [] REAL */
A_STRAIGHT(A68_VOID,A68t145);
typedef struct A68t145  A68_145 ;    /* STRAIGHT MODE140 */
struct A68t140 { A68_INT mode; union {
A68_INT * mode1;
struct A68t72  mode2;
struct A68t141  mode3;
A68_BITS * mode4;
struct A68t101  mode5;
struct A68t142  mode6;
A68_CHAR * mode7;
A68_VC  mode8;
A68_RC  mode9;
A68_BOOL * mode10;
struct A68t102  mode11;
struct A68t143  mode12;
A68_REAL * mode13;
struct A68t103  mode14;
struct A68t144  mode15;
struct A68t104  mode16;
struct A68t145  mode17;
} data; };
typedef struct A68t140  A68_140 ;    /* UNION(REF INT,REF MODE72,REF MODE141,REF BITS,REF MODE101,REF MODE142,REF CHAR,REF MODE26,REF MODE27,REF BOOL,REF MODE102,REF MODE143,REF REAL,REF MODE103,REF MODE144,MODE104,MODE145)  */

A_PROCEDURE(A68_CHAR ,A68t146,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE85) CHAR */

A_PROCEDURE(A68_REAL ,A68t147,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REF MODE85) REAL */

A_PROCEDURE(A68_BOOL ,A68t148,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE85) BOOL */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t85 *,A68_VC *),(struct A68t85 *,A68_VC *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE85) MODE26 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t85 *,struct A68t38 *),(struct A68t85 *,struct A68t38 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE85) MODE38 */
struct A68t152 ;

A_PROCEDURE(A68_BOOL ,A68t151,(struct A68t85 *,struct A68t152 ),(struct A68t85 *,struct A68t152 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE85,MODE152) BOOL */
A_VECTOR(struct A68t140 ,A68t152);
typedef struct A68t152  A68_152 ;    /* VECTOR [] MODE140 */

A_PROCEDURE(A68_VOID ,A68t153,(A68_INT ,struct A68t38 *),(A68_INT ,struct A68t38 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(INT) MODE38 */

A_PROCEDURE(A68_VOID ,A68t154,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC *),(A68_VC *,void *));
typedef struct A68t155  A68_155 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t156,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REAL) REAL */
struct A68t158 ;

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t158 ,A68_INT ,A68_VC *),(struct A68t158 ,A68_INT ,A68_VC *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE158,INT) REF MODE26 */
struct A68t158 { A68_INT mode; union {
A68_SINT  mode1;
A68_INT  mode2;
A68_LINT  mode3;
A68_REAL  mode4;
} data; };
typedef struct A68t158  A68_158 ;    /* UNION(SHORT INT,INT,LONG INT,REAL)  */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t158 ,A68_INT ,A68_INT ,A68_VC *),(struct A68t158 ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE158,INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t158 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *),(struct A68t158 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE158,INT,INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t133 ),(struct A68t133 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE133) VOID */

A_PROCEDURE(A68_BOOL ,A68t162,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE152) BOOL */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164) VOID */
A_STRAIGHT(A68_VOID,A68t165);
typedef struct A68t165  A68_165 ;    /* STRAIGHT MODE164 */
struct A68t164 { A68_INT mode; union {
A68_CHAR * mode1;
A68_VC  mode2;
A68_INT * mode3;
struct A68t72  mode4;
A68_REAL * mode5;
struct A68t103  mode6;
A68_BOOL * mode7;
struct A68t165  mode8;
} data; };
typedef struct A68t164  A68_164 ;    /* UNION(REF CHAR,REF MODE26,REF INT,REF MODE72,REF REAL,REF MODE103,REF BOOL,MODE165)  */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t167,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 58 CHAR */
struct A68t169{
A68_INT  I;
A_PAD_INT(PAD_34)
A68_INT  J;
A_PAD_INT(PAD_35)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,INT)  */
A_ISTRUCT(A68_CHAR ,15,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,46,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(struct A68t100 ,47,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 47 MODE100 */

A_PROCEDURE(A68_VOID ,A68t186,(A68_INT ,struct A68t169 *,struct A68t100 *),(A68_INT ,struct A68t169 *,struct A68t100 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(INT,REF MODE169) MODE100 */

A_PROCEDURE(A68_VOID ,A68t187,(A68_INT ,A68_COMPL *,struct A68t100 *),(A68_INT ,A68_COMPL *,struct A68t100 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(INT,REF COMPL) MODE100 */
A_ISTRUCT(A68_CHAR ,14,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_VC ,11,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 11 MODE26 */

A_PROCEDURE(A68_BOOL ,A68t196,(struct A68t85 *,A68_VC ),(struct A68t85 *,A68_VC ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE85,MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,6,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t100 ,5,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 5 MODE100 */
A_ISTRUCT(struct A68t100 ,2,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 2 MODE100 */
A_ISTRUCT(A68_CHAR ,20,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(struct A68t100 ,3,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 3 MODE100 */
A_ISTRUCT(A68_CHAR ,16,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_VOID ,A68t205,(A68_BOOL ,struct A68t141 *),(A68_BOOL ,struct A68t141 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(BOOL) MODE141 */
A_ISTRUCT(struct A68t140 ,2,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 2 MODE140 */
A_ISTRUCT(struct A68t100 ,9,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 9 MODE100 */
A_ISTRUCT(struct A68t140 ,3,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 3 MODE140 */

A_PROCEDURE(A68_VOID ,A68t209,(A68_INT ,struct A68t169 *,struct A68t140 *),(A68_INT ,struct A68t169 *,struct A68t140 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT,REF MODE169) MODE140 */
A_ISTRUCT(A68_CHAR ,17,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t100 ,6,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 6 MODE100 */
A_ISTRUCT(struct A68t100 ,4,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 4 MODE100 */
A_ISTRUCT(A68_CHAR ,57,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(struct A68t100 ,7,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 7 MODE100 */
A_ISTRUCT(A68_CHAR ,25,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(struct A68t100 ,11,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 11 MODE100 */
A_ISTRUCT(A68_CHAR ,42,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 42 CHAR */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,A68_COMPL *,struct A68t164 *),(A68_INT ,A68_COMPL *,struct A68t164 *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT,REF COMPL) MODE164 */

A_PROCEDURE(A68_VOID ,A68t219,(A68_INT ,struct A68t169 *,struct A68t164 *),(A68_INT ,struct A68t169 *,struct A68t164 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(INT,REF MODE169) MODE164 */
A_ISTRUCT(A68_CHAR ,23,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t222,(A68_COMPL ,A68_REAL ,A68_REAL ,A68_VC *),(A68_COMPL ,A68_REAL ,A68_REAL ,A68_VC *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(COMPL,REAL,REAL) MODE26 */
A_ISTRUCT(A68_CHAR ,2,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t100 ,8,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 8 MODE100 */
A_ISTRUCT(A68_CHAR ,60,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t227);
typedef struct A68t227  A68_227 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t100 ,61,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 61 MODE100 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from clear --- */
extern A68_VOID  FFAAOSL_clear(struct A68t164 );
/* --- End of imports from clear --- */


/* --- Imports from iolib --- */
extern A68_85 * YRBAOSL_stdoutchan;
extern A68_85 * ASBAOSL_stdinchan;
extern A68_VOID  FSBAOSL_print(struct A68t133 );
/* --- End of imports from iolib --- */


/* --- Imports from numberstr --- */
extern A68_VOID  LBAAOSL_whole(struct A68t158 ,A68_INT ,A68_VC *);
extern A68_VOID  RCAAOSL_fixed(struct A68t158 ,A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  XDAAOSL_float(struct A68t158 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from numberstr --- */


/* --- Imports from mathslib --- */
#include <math.h>

#define GAAAOSL_sqrt sqrt
#include <math.h>

#define HAAAOSL_exp exp
#include <math.h>

#define IAAAOSL_ln log
#include <math.h>

#define JAAAOSL_cos cos
#include <math.h>

#define KAAAOSL_sin sin
#include <math.h>

#define LAAAOSL_tan tan
#include <math.h>

#define MAAAOSL_arccos acos
#include <math.h>

#define NAAAOSL_arcsin asin
#include <math.h>

#define OAAAOSL_arctan atan
extern A68_REAL  TAAAOSL_pi;
/* --- End of imports from mathslib --- */


/* --- Imports from time --- */
extern A68_INT  FGAAOSL_seconds(void);
extern A68_VOID  SKAAOSL_date_time(A68_INT ,A68_VC *);
/* --- End of imports from time --- */


/* --- Imports from getstrings --- */
extern A68_VC  YNAAOSL_nilstr;
extern A68_85 * XPAAOSL_make_channel(struct A68t135 ,struct A68t136 );
extern A68_VOID  BOBAOSL_getstr(struct A68t85 *,A68_VC *);
extern A68_VOID  MOBAOSL_getstatus(struct A68t85 *,A68_38 *);
extern A68_BOOL  AQBAOSL_get(struct A68t85 *,struct A68t152 );
extern A68_VOID  QOBAOSL_strtrim(A68_VC ,A68_VC *);
extern A68_VOID  LLBAOSL_make_user_status(A68_INT ,A68_38 *);
/* --- End of imports from getstrings --- */


/* --- Imports from putstrings --- */
extern A68_INT  BPAAOSL_linenumber(struct A68t85 *);
extern A68_VOID  LRAAOSL_newline(struct A68t85 *);
extern A68_VOID  GFBAOSL_put(struct A68t85 *,struct A68t133 );
extern A68_VOID  UJBAOSL_oneline(struct A68t133 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- Imports from osif --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_31  ZLBAOSI_global_msg;
extern A68_BOOL  PPBAOSI_(struct A68t38 ,struct A68t38 );
extern A68_BOOL  TPBAOSI_(struct A68t38 ,struct A68t38 );
extern A68_38  DPBAOSI_io_ok;
extern A68_38  GPBAOSI_io_eof;
extern A68_37 * FQBAOSI_open_file(A68_VC ,struct A68t40 ,struct A68t31 );
extern A68_VOID  XQBAOSI_close_file(struct A68t37 *,struct A68t31 );
extern A68_VOID  SRBAOSI_read_line(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,A68_38 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t37 *,A68_VC ,struct A68t31 ,A68_38 *);
extern A68_40  PNBAOSI_read_access;
extern A68_40  TNBAOSI_write_access;
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include <signal.h>

#define TECAOSI_sighup SIGHUP
#include <signal.h>

#define UECAOSI_sigint SIGINT
#include <signal.h>

#define VECAOSI_sigquit SIGQUIT
#include <signal.h>

#define WECAOSI_sigill SIGILL
#include <signal.h>

#define XECAOSI_sigtrap 5
#include <signal.h>

#define YECAOSI_sigabrt SIGABRT
#include <signal.h>

#define ZECAOSI_sigemt 7
#include <signal.h>

#define AFCAOSI_sigfpe SIGFPE
#include <signal.h>

#define BFCAOSI_sigkill SIGKILL
#include <signal.h>

#define CFCAOSI_sigbus 10
#include <signal.h>

#define DFCAOSI_sigsegv SIGSEGV
#include <signal.h>

#define EFCAOSI_sigsys 12
#include <signal.h>

#define FFCAOSI_sigpipe SIGPIPE
#include <signal.h>

#define GFCAOSI_sigalrm SIGALRM
#include <signal.h>

#define HFCAOSI_sigterm SIGTERM
#include <signal.h>

#define IFCAOSI_sigurg 16
#include <signal.h>

#define JFCAOSI_sigstop SIGSTOP
#include <signal.h>

#define KFCAOSI_sigtstp SIGTSTP
#include <signal.h>

#define LFCAOSI_sigcont SIGCONT
#include <signal.h>

#define MFCAOSI_sigchld SIGCHLD
#include <signal.h>

#define NFCAOSI_sigttin SIGTTIN
#include <signal.h>

#define OFCAOSI_sigttou SIGTTOU
#include <signal.h>

#define PFCAOSI_sigio 23
#include <signal.h>

#define QFCAOSI_sigxcpu 24
#include <signal.h>

#define RFCAOSI_sigxfsz 25
#include <signal.h>

#define SFCAOSI_sigvtalrm 26
#include <signal.h>

#define TFCAOSI_sigprof 27
#include <signal.h>

#define UFCAOSI_sigwinch 28
#include <signal.h>

#define VFCAOSI_siglost 29
#include <signal.h>

#define WFCAOSI_sigusr1 SIGUSR1
#include <signal.h>

#define XFCAOSI_sigusr2 SIGUSR2
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include "Alibrary.h"

#define KDCAOSI_alwayscollect A_ALWAYS_COLLECT
#include "Alibrary.h"

#define LDCAOSI_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include "Alibrary.h"

#define MDCAOSI_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZEAAOSL(void);   /* clear */
extern void TRBAOSL(void);   /* iolib */
extern void VAAAOSL(void);   /* numberstr */
extern void BAAAOSL(void);   /* mathslib */
extern void ZFAAOSL(void);   /* time */
extern void VKBAOSL(void);   /* getstrings */
extern void MTAAOSL(void);   /* putstrings */
extern void VSCAOSI(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_168   STBAOSL = {"$Id: teststrings.a68,v 34.2 1995/03/29 13:02:18 ella Exp $"}; 
A_GISVEC(A68_VC ,TTBAOSL,STBAOSL,58)
static A68_170   UTBAOSL = {"teststrings.out"}; 
A_GISVEC(A68_VC ,VTBAOSL,UTBAOSL,15)
static A68_VC  WTBAOSL_testfilename;
static A68_VC  BUBAOSL_inbuffer;
static A68_INT  DUBAOSL_ts;
static A68_169  FUBAOSL_ip1;
static A68_169  HUBAOSL_ip2;
static A68_COMPL  IUBAOSL_cpl1;
static A68_BITS  KUBAOSL_bb;
static A68_SBITS  LUBAOSL_sb;
static A68_BOOL  MUBAOSL_booltrue;
static A68_BOOL  NUBAOSL_boolfalse;
static A68_171   RUBAOSL = {"Test strings"}; 
A_GISVEC(A68_VC ,SUBAOSL,RUBAOSL,12)
static A68_172   XUBAOSL = {"Testing standard output channel 'stdoutchan'"}; 
A_GISVEC(A68_VC ,YUBAOSL,XUBAOSL,44)
static A68_173   DVBAOSL = {"Seconds is "}; 
A_GISVEC(A68_VC ,EVBAOSL,DVBAOSL,11)
static A68_174   IVBAOSL = {" ses. Date-time is "}; 
A_GISVEC(A68_VC ,JVBAOSL,IVBAOSL,19)
static A68_175   QVBAOSL = {"This is an integer 'whole(54321, +5 )'  "}; 
A_GISVEC(A68_VC ,RVBAOSL,QVBAOSL,40)
static A68_176   AWBAOSL = {"This is a real number 'fixed( 2.345, -6, 3)' "}; 
A_GISVEC(A68_VC ,BWBAOSL,AWBAOSL,45)
static A68_177   KWBAOSL = {"This is a real number 'float( 520, -6, 1, 3)' "}; 
A_GISVEC(A68_VC ,LWBAOSL,KWBAOSL,46)
static A68_178   UWBAOSL = {"This is a bits value '16r1234cdef' "}; 
A_GISVEC(A68_VC ,VWBAOSL,UWBAOSL,35)
static A68_179   BXBAOSL = {"This is a short bits value '16r89ab' "}; 
A_GISVEC(A68_VC ,CXBAOSL,BXBAOSL,37)
static A68_180   IXBAOSL = {"This is an INTPAIR ( 1, 2 )   "}; 
A_GISVEC(A68_VC ,JXBAOSL,IXBAOSL,30)
static A68_180   CYBAOSL = {"This is an INTPAIR ( -3, -4 ) "}; 
A_GISVEC(A68_VC ,DYBAOSL,CYBAOSL,30)
static A68_181   NYBAOSL = {"This is a free format real number (1.446)  "}; 
A_GISVEC(A68_VC ,OYBAOSL,NYBAOSL,43)
static A68_181   VYBAOSL = {"This is a complex number (1.467 I -3.995)  "}; 
A_GISVEC(A68_VC ,WYBAOSL,VYBAOSL,43)
static A68_181   PZBAOSL = {"Output a true boolean then a false boolean "}; 
A_GISVEC(A68_VC ,QZBAOSL,PZBAOSL,43)
static A68_182   XZBAOSL = {"Output an empty string"}; 
A_GISVEC(A68_VC ,YZBAOSL,XZBAOSL,22)
static A68_183   DACAOSL = {""}; 
A_GISVEC(A68_VC ,EACAOSL,DACAOSL,0)
static A68_184   JACAOSL = {"Now test internally generated input including numbers"}; 
A_GISVEC(A68_VC ,KACAOSL,JACAOSL,53)
static A68_188   RACAOSL = {"This is line 1"}; 
A_GISVEC(A68_VC ,SACAOSL,RACAOSL,14)
static A68_188   TACAOSL = {"This is line 2"}; 
A_GISVEC(A68_VC ,UACAOSL,TACAOSL,14)
static A68_189   VACAOSL = {"1 200 3000"}; 
A_GISVEC(A68_VC ,WACAOSL,VACAOSL,10)
static A68_173   XACAOSL = {"43 55 61 73"}; 
A_GISVEC(A68_VC ,YACAOSL,XACAOSL,11)
static A68_41   ZACAOSL = {"CB21"}; 
A_GISVEC(A68_VC ,ABCAOSL,ZACAOSL,4)
static A68_190   BBCAOSL = {"F T"}; 
A_GISVEC(A68_VC ,CBCAOSL,BBCAOSL,3)
static A68_191   DBCAOSL = {"1.234 2e2"}; 
A_GISVEC(A68_VC ,EBCAOSL,DBCAOSL,9)
static A68_192   FBCAOSL = {"Input an empty string"}; 
A_GISVEC(A68_VC ,GBCAOSL,FBCAOSL,21)
static A68_183   HBCAOSL = {""}; 
A_GISVEC(A68_VC ,IBCAOSL,HBCAOSL,0)
static A68_193   JBCAOSL = {"Now test standard input channel 'stdin'"}; 
A_GISVEC(A68_VC ,KBCAOSL,JBCAOSL,39)
static A68_194   LBCAOSL = {"Please copy this line to the terminal (RETURN to ignore)"}; 
A_GISVEC(A68_VC ,MBCAOSL,LBCAOSL,56)
static A68_33  OBCAOSL_instrings;
static A68_INT  PBCAOSL_intop;
static A68_INT  QBCAOSL_pos;
static A68_197   ZBCAOSL = {"Error "}; 
A_GISVEC(A68_VC ,ACCAOSL,ZBCAOSL,6)
static A68_198   FCCAOSL = {" reported on "}; 
A_GISVEC(A68_VC ,GCCAOSL,FCCAOSL,13)
static A68_38  QCCAOSL_io_buf_too_small;
static A68_85 * FDCAOSL_instream;
static A68_174   HDCAOSL = {"Test instream setup"}; 
A_GISVEC(A68_VC ,IDCAOSL,HDCAOSL,19)
static A68_201   PDCAOSL = {"charnumber is wrong "}; 
A_GISVEC(A68_VC ,QDCAOSL,PDCAOSL,20)
static A68_201   ZDCAOSL = {"linenumber is wrong "}; 
A_GISVEC(A68_VC ,AECAOSL,ZDCAOSL,20)
static A68_170   JECAOSL = {"width is wrong "}; 
A_GISVEC(A68_VC ,KECAOSL,JECAOSL,15)
static A68_203   TECAOSL = {"indent is wrong "}; 
A_GISVEC(A68_VC ,UECAOSL,TECAOSL,16)
static A68_170   DFCAOSL = {"error is wrong "}; 
A_GISVEC(A68_VC ,EFCAOSL,DFCAOSL,15)
static A68_204   NFCAOSL = {"separate is wrong "}; 
A_GISVEC(A68_VC ,OFCAOSL,NFCAOSL,18)
static A68_170   XFCAOSL = {"input is wrong "}; 
A_GISVEC(A68_VC ,YFCAOSL,XFCAOSL,15)
static A68_204   HGCAOSL = {"buffered is wrong "}; 
A_GISVEC(A68_VC ,IGCAOSL,HGCAOSL,18)
static A68_188   SGCAOSL = {"buffer is nil "}; 
A_GISVEC(A68_VC ,TGCAOSL,SGCAOSL,14)
static A68_REAL  ZGCAOSL_rtmp1;
static A68_REAL  AHCAOSL_rtmp2;
static A68_141  FHCAOSL_threeints;
static A68_171   OHCAOSL = {"First int = "}; 
A_GISVEC(A68_VC ,PHCAOSL,OHCAOSL,12)
static A68_198   XHCAOSL = {"Second int = "}; 
A_GISVEC(A68_VC ,YHCAOSL,XHCAOSL,13)
static A68_171   GICAOSL = {"Third int = "}; 
A_GISVEC(A68_VC ,HICAOSL,GICAOSL,12)
static A68_203   OJCAOSL = {"First intpair = "}; 
A_GISVEC(A68_VC ,PJCAOSL,OJCAOSL,16)
static A68_210   ZJCAOSL = {"Second intpair = "}; 
A_GISVEC(A68_VC ,AKCAOSL,ZJCAOSL,17)
static A68_170   RKCAOSL = {"A bits value = "}; 
A_GISVEC(A68_VC ,SKCAOSL,RKCAOSL,15)
static A68_198   GLCAOSL = {"Bools (FT) = "}; 
A_GISVEC(A68_VC ,HLCAOSL,GLCAOSL,13)
static A68_198   WLCAOSL = {"First real = "}; 
A_GISVEC(A68_VC ,XLCAOSL,WLCAOSL,13)
static A68_188   FMCAOSL = {"Second real = "}; 
A_GISVEC(A68_VC ,GMCAOSL,FMCAOSL,14)
static A68_170   VMCAOSL = {"internal stream"}; 
A_GISVEC(A68_VC ,WMCAOSL,VMCAOSL,15)
static A68_VC  DNCAOSL_tmpstr;
static A68_176   GNCAOSL = {"Error in reading the string, did you alter it"}; 
A_GISVEC(A68_VC ,HNCAOSL,GNCAOSL,45)
static A68_213   ONCAOSL = {"Echo that line with primes round it, also tests 'strtrim'"}; 
A_GISVEC(A68_VC ,PNCAOSL,ONCAOSL,57)
static A68_188   EOCAOSL = {"standard input"}; 
A_GISVEC(A68_VC ,FOCAOSL,EOCAOSL,14)
static A68_37 * GOCAOSL_outfile;
static A68_85 * POCAOSL_outchan;
static A68_204   ROCAOSL = {"Test outchan setup"}; 
A_GISVEC(A68_VC ,SOCAOSL,ROCAOSL,18)
static A68_201   ZOCAOSL = {"charnumber is wrong "}; 
A_GISVEC(A68_VC ,APCAOSL,ZOCAOSL,20)
static A68_201   JPCAOSL = {"linenumber is wrong "}; 
A_GISVEC(A68_VC ,KPCAOSL,JPCAOSL,20)
static A68_170   TPCAOSL = {"width is wrong "}; 
A_GISVEC(A68_VC ,UPCAOSL,TPCAOSL,15)
static A68_203   DQCAOSL = {"indent is wrong "}; 
A_GISVEC(A68_VC ,EQCAOSL,DQCAOSL,16)
static A68_170   NQCAOSL = {"error is wrong "}; 
A_GISVEC(A68_VC ,OQCAOSL,NQCAOSL,15)
static A68_204   XQCAOSL = {"separate is wrong "}; 
A_GISVEC(A68_VC ,YQCAOSL,XQCAOSL,18)
static A68_170   HRCAOSL = {"input is wrong "}; 
A_GISVEC(A68_VC ,IRCAOSL,HRCAOSL,15)
static A68_204   RRCAOSL = {"buffered is wrong "}; 
A_GISVEC(A68_VC ,SRCAOSL,RRCAOSL,18)
static A68_204   CSCAOSL = {"buffer is not nil "}; 
A_GISVEC(A68_VC ,DSCAOSL,CSCAOSL,18)
static A68_198   KSCAOSL = {"Output a file"}; 
A_GISVEC(A68_VC ,LSCAOSL,KSCAOSL,13)
static A68_37 * YSCAOSL_infile;
static A68_85 * JTCAOSL_inchan;
static A68_210   LTCAOSL = {"Test inchan setup"}; 
A_GISVEC(A68_VC ,MTCAOSL,LTCAOSL,17)
static A68_201   TTCAOSL = {"charnumber is wrong "}; 
A_GISVEC(A68_VC ,UTCAOSL,TTCAOSL,20)
static A68_201   DUCAOSL = {"linenumber is wrong "}; 
A_GISVEC(A68_VC ,EUCAOSL,DUCAOSL,20)
static A68_170   NUCAOSL = {"width is wrong "}; 
A_GISVEC(A68_VC ,OUCAOSL,NUCAOSL,15)
static A68_203   XUCAOSL = {"indent is wrong "}; 
A_GISVEC(A68_VC ,YUCAOSL,XUCAOSL,16)
static A68_170   HVCAOSL = {"error is wrong "}; 
A_GISVEC(A68_VC ,IVCAOSL,HVCAOSL,15)
static A68_204   RVCAOSL = {"separate is wrong "}; 
A_GISVEC(A68_VC ,SVCAOSL,RVCAOSL,18)
static A68_170   BWCAOSL = {"input is wrong "}; 
A_GISVEC(A68_VC ,CWCAOSL,BWCAOSL,15)
static A68_204   LWCAOSL = {"buffered is wrong "}; 
A_GISVEC(A68_VC ,MWCAOSL,LWCAOSL,18)
static A68_188   WWCAOSL = {"buffer is nil "}; 
A_GISVEC(A68_VC ,XWCAOSL,WWCAOSL,14)
static A68_171   EXCAOSL = {"Input a file"}; 
A_GISVEC(A68_VC ,FXCAOSL,EXCAOSL,12)
static A68_VC  NXCAOSL_str1;
static A68_VC  PXCAOSL_str2;
static A68_215   RXCAOSL = {"Check back error at line "}; 
A_GISVEC(A68_VC ,SXCAOSL,RXCAOSL,25)
static A68_217   PYCAOSL = {"Test the clear procedure on several things"}; 
A_GISVEC(A68_VC ,QYCAOSL,PYCAOSL,42)
static A68_REAL  WYCAOSL_clreal;
static A68_72  BZCAOSL_vecint;
static A68_BOOL  DZCAOSL_boolean;
static A68_BOOL  EZCAOSL_clearfailed;
static A68_BOOL  FZCAOSL_vecclear;
static A68_VC  KZCAOSL_hexchars;
static A68_203   MZCAOSL = {"0123456789ABCDEF"}; 
A_GISVEC(A68_VC ,NZCAOSL,MZCAOSL,16)
static A68_INT  PZCAOSL_ii;
static A68_201   UZCAOSL = {"Clear of REAL failed"}; 
A_GISVEC(A68_VC ,VZCAOSL,UZCAOSL,20)
static A68_192   TADAOSL = {"Clear of COMPL failed"}; 
A_GISVEC(A68_VC ,UADAOSL,TADAOSL,21)
static A68_201   CBDAOSL = {"Clear of BOOL failed"}; 
A_GISVEC(A68_VC ,DBDAOSL,CBDAOSL,20)
static A68_220   ECDAOSL = {"Clear of INTPAIR failed"}; 
A_GISVEC(A68_VC ,FCDAOSL,ECDAOSL,23)
static A68_203   MCDAOSL = {"                "}; 
A_GISVEC(A68_VC ,NCDAOSL,MCDAOSL,16)
static A68_221   PCDAOSL = {"Clear of VEC CHAR failed"}; 
A_GISVEC(A68_VC ,QCDAOSL,PCDAOSL,24)
static A68_INT * XCDAOSL_ii;
static A68_220   ADDAOSL = {"Clear of VEC INT failed"}; 
A_GISVEC(A68_VC ,BDDAOSL,ADDAOSL,23)
static A68_215   IDDAOSL = {"The clear test has failed"}; 
A_GISVEC(A68_VC ,JDDAOSL,IDDAOSL,25)
static A68_180   QDDAOSL = {"The clear test was successfull"}; 
A_GISVEC(A68_VC ,RDDAOSL,QDDAOSL,30)
static A68_COMPL  YDDAOSL_c1;
static A68_COMPL  AEDAOSL_c2;
static A68_190   KEDAOSL = {" I "}; 
A_GISVEC(A68_VC ,LEDAOSL,KEDAOSL,3)
static A68_223   SEDAOSL = {" ["}; 
A_GISVEC(A68_VC ,TEDAOSL,SEDAOSL,2)
static A68_223   ZEDAOSL = {", "}; 
A_GISVEC(A68_VC ,AFDAOSL,ZEDAOSL,2)
static A68_REAL  PFDAOSL_d1;
static A68_REAL  UFDAOSL_d2;
static A68_REAL  VFDAOSL_rr;
static A68_REAL  WFDAOSL_ii;
static A68_REAL  XFDAOSL_ri;
static A68_REAL  YFDAOSL_ir;
static A68_REAL  ZFDAOSL_q1;
static A68_REAL  AGDAOSL_q2;
static A68_REAL  CGDAOSL_m1r;
static A68_REAL  EGDAOSL_m1i;
static A68_225   IGDAOSL = {"Now do some complex number tests, check the results visually"}; 
A_GISVEC(A68_VC ,JGDAOSL,IGDAOSL,60)
static A68_226   OGDAOSL = {"c1 = "}; 
A_GISVEC(A68_VC ,PGDAOSL,OGDAOSL,5)
static A68_226   WGDAOSL = {"c2 = "}; 
A_GISVEC(A68_VC ,XGDAOSL,WGDAOSL,5)
static A68_227   EHDAOSL = {"RE c1 = "}; 
A_GISVEC(A68_VC ,FHDAOSL,EHDAOSL,8)
static A68_223   MHDAOSL = {" ["}; 
A_GISVEC(A68_VC ,NHDAOSL,MHDAOSL,2)
static A68_227   YHDAOSL = {"IM c1 = "}; 
A_GISVEC(A68_VC ,ZHDAOSL,YHDAOSL,8)
static A68_223   GIDAOSL = {" ["}; 
A_GISVEC(A68_VC ,HIDAOSL,GIDAOSL,2)
static A68_189   SIDAOSL = {"CONJ c1 = "}; 
A_GISVEC(A68_VC ,TIDAOSL,SIDAOSL,10)
static A68_189   AJDAOSL = {"c1 + c2 = "}; 
A_GISVEC(A68_VC ,BJDAOSL,AJDAOSL,10)
static A68_189   JJDAOSL = {"c1 - c2 = "}; 
A_GISVEC(A68_VC ,KJDAOSL,JJDAOSL,10)
static A68_189   SJDAOSL = {"c2 - c1 = "}; 
A_GISVEC(A68_VC ,TJDAOSL,SJDAOSL,10)
static A68_189   BKDAOSL = {"c1 * c2 = "}; 
A_GISVEC(A68_VC ,CKDAOSL,BKDAOSL,10)
static A68_189   KKDAOSL = {"c1 / c2 = "}; 
A_GISVEC(A68_VC ,LKDAOSL,KKDAOSL,10)
static A68_189   UKDAOSL = {"c2 / c1 = "}; 
A_GISVEC(A68_VC ,VKDAOSL,UKDAOSL,10)
static A68_191   ELDAOSL = {"ABS c1 = "}; 
A_GISVEC(A68_VC ,FLDAOSL,ELDAOSL,9)
static A68_223   MLDAOSL = {" ["}; 
A_GISVEC(A68_VC ,NLDAOSL,MLDAOSL,2)
static A68_191   CMDAOSL = {"ABS c2 = "}; 
A_GISVEC(A68_VC ,DMDAOSL,CMDAOSL,9)
static A68_223   KMDAOSL = {" ["}; 
A_GISVEC(A68_VC ,LMDAOSL,KMDAOSL,2)
static A68_191   ANDAOSL = {"ARG c1 = "}; 
A_GISVEC(A68_VC ,BNDAOSL,ANDAOSL,9)
static A68_223   INDAOSL = {" ["}; 
A_GISVEC(A68_VC ,JNDAOSL,INDAOSL,2)
static A68_173   AODAOSL = {"End of test"}; 
A_GISVEC(A68_VC ,BODAOSL,AODAOSL,11)

A_STATIC A68_VOID  YTBAOSL_generator(A68_BOOL  XTBAOSL_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OXBAOSL_straight(A68_INT  MXBAOSL_anonymous, A68_169 * NXBAOSL_anonymous, A68_100  *ReturnedValue);

A_STATIC A68_VOID  BZBAOSL_straight(A68_INT  ZYBAOSL_anonymous, A68_COMPL * AZBAOSL_anonymous, A68_100  *ReturnedValue);

A_STATIC A68_BOOL  TBCAOSL_checkerr(A68_85 * Ch, A68_VC  Msg);

A_STATIC A68_VOID  OCCAOSL_restart_stream(A68_85 * Chan);

A_STATIC A68_VOID  TCCAOSL_get_next_line(A68_VC  Str, A68_INT * Length, A68_38  *ReturnedValue);

A_STATIC A68_VOID  CHCAOSL_generator(A68_BOOL  BHCAOSL_anonymous, A68_141  *ReturnedValue);

A_STATIC A68_VOID  TICAOSL_straight(A68_INT  RICAOSL_anonymous, A68_169 * SICAOSL_anonymous, A68_140  *ReturnedValue);

A_STATIC A68_VOID  IOCAOSL_put_out_line(A68_VC  S);

A_STATIC A68_VOID  BTCAOSL_get_in_line(A68_VC  S, A68_INT * Length, A68_38  *ReturnedValue);

A_STATIC A68_VOID  YYCAOSL_generator(A68_BOOL  XYCAOSL_anonymous, A68_72  *ReturnedValue);

A_STATIC A68_VOID  HZCAOSL_generator(A68_BOOL  GZCAOSL_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DADAOSL_straight(A68_INT  BADAOSL_anonymous, A68_COMPL * CADAOSL_anonymous, A68_164  *ReturnedValue);

A_STATIC A68_VOID  LBDAOSL_straight(A68_INT  JBDAOSL_anonymous, A68_169 * KBDAOSL_anonymous, A68_164  *ReturnedValue);

A_STATIC A68_VOID  EEDAOSL_fixedcmpx(A68_COMPL  Cmpx, A68_REAL  A, A68_REAL  B, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YTBAOSL_generator(A68_BOOL  XTBAOSL_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ZTBAOSL;  /* clause result */
A68_VC  AUBAOSL;  /* OPERATORS - dynamic generator */
{ 
AUBAOSL.upb = 81 ;
( XTBAOSL_anonymous? A_VLOC(A68_CHAR ,AUBAOSL): A_VHEAP(A68_CHAR ,AUBAOSL) );
ZTBAOSL = AUBAOSL;
} 
*ReturnedValue = (ZTBAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  OXBAOSL_straight(A68_INT  MXBAOSL_anonymous, A68_169 * NXBAOSL_anonymous, A68_100  *ReturnedValue)
{ 
A68_100  PXBAOSL;  /* clause result */
A68_100  QXBAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  RXBAOSL;  /* YIELD */
A68_100  SXBAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  TXBAOSL;  /* YIELD */
A68_100  UXBAOSL;  /* clause result */
switch ( MXBAOSL_anonymous )
{ 
case 1: 
RXBAOSL = (*(&(NXBAOSL_anonymous->I))) ;
PXBAOSL = A_UNITE(QXBAOSL,mode1,1,RXBAOSL);
break;
case 2: 
TXBAOSL = (*(&(NXBAOSL_anonymous->J))) ;
PXBAOSL = A_UNITE(SXBAOSL,mode1,1,TXBAOSL);
break;
default: 
A_IMP_SKIP ;
break;
} 
UXBAOSL = PXBAOSL;
*ReturnedValue = (UXBAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  BZBAOSL_straight(A68_INT  ZYBAOSL_anonymous, A68_COMPL * AZBAOSL_anonymous, A68_100  *ReturnedValue)
{ 
A68_100  CZBAOSL;  /* clause result */
A68_100  DZBAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  EZBAOSL;  /* YIELD */
A68_100  FZBAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  GZBAOSL;  /* YIELD */
A68_100  HZBAOSL;  /* clause result */
switch ( ZYBAOSL_anonymous )
{ 
case 1: 
EZBAOSL = (*(&(AZBAOSL_anonymous->Re))) ;
CZBAOSL = A_UNITE(DZBAOSL,mode10,10,EZBAOSL);
break;
case 2: 
GZBAOSL = (*(&(AZBAOSL_anonymous->Im))) ;
CZBAOSL = A_UNITE(FZBAOSL,mode10,10,GZBAOSL);
break;
default: 
A_IMP_SKIP ;
break;
} 
HZBAOSL = CZBAOSL;
*ReturnedValue = (HZBAOSL);
return;
} 
#undef NL

A_STATIC A68_BOOL  TBCAOSL_checkerr(A68_85 * Ch, A68_VC  Msg)
{ 
A68_38  UBCAOSL;  /* avoid structure result */
A68_38  VBCAOSL_stat;
A68_BOOL  WBCAOSL;  /* optbool result */
A68_BOOL  XBCAOSL;  /* clause result */
A68_199  YBCAOSL;  /* collateral clause result */
A68_100  BCCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  CCCAOSL;  /* YIELD */
A68_100  DCCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  ECCAOSL;  /* YIELD */
A68_100  HCCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  ICCAOSL;  /* YIELD */
A68_100  JCCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  KCCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  LCCAOSL;  /* procedure value */
A68_133  MCCAOSL;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(checkerr);
 /* line 103: */
{ 
MOBAOSL_getstatus( Ch, &UBCAOSL );
VBCAOSL_stat = UBCAOSL;
 /* line 105: */
WBCAOSL = PPBAOSI_(VBCAOSL_stat, DPBAOSI_io_ok);
if ( ! WBCAOSL )
{ /* line 106: */
WBCAOSL = PPBAOSI_(VBCAOSL_stat, GPBAOSI_io_eof);
}
if ( WBCAOSL )
{ 
 /* line 107: */
XBCAOSL = A68_FALSE;
} 
else
{ 
CCCAOSL = ACCAOSL ;
YBCAOSL.data[0] = A_UNITE(BCCAOSL,mode7,7,CCCAOSL);
 /* line 108: */
ECCAOSL = VBCAOSL_stat.Status ;
YBCAOSL.data[1] = A_UNITE(DCCAOSL,mode1,1,ECCAOSL);
ICCAOSL = GCCAOSL ;
YBCAOSL.data[2] = A_UNITE(HCCAOSL,mode7,7,ICCAOSL);
YBCAOSL.data[3] = A_UNITE(JCCAOSL,mode7,7,Msg);
LCCAOSL.fn.fn_global = LRAAOSL_newline;
LCCAOSL.nonlocals = A68_NIL;
YBCAOSL.data[4] = A_UNITE(KCCAOSL,mode12,12,LCCAOSL);
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(MCCAOSL,YBCAOSL,5,A68_100 ));
 /* line 109: */
 /* line 110: */
 /* line 111: */
XBCAOSL = A68_TRUE;
} 
} 
A_PROC_EXIT(checkerr);
return( XBCAOSL );
} 
#undef NL

A_STATIC A68_VOID  OCCAOSL_restart_stream(A68_85 * Chan)
{ 
A_PROC_ENTRY(restart_stream);
{ 
QBCAOSL_pos = 0;
LRAAOSL_newline(Chan);
} 
A_PROC_EXIT(restart_stream);
return;
} 
#undef NL

A_STATIC A68_VOID  TCCAOSL_get_next_line(A68_VC  Str, A68_INT * Length, A68_38  *ReturnedValue)
{ 
A68_38  UCCAOSL;  /* clause result */
A68_INT  VCCAOSL;  /* YIELD */
A68_VC  WCCAOSL_next;
A68_INT  XCCAOSL_nexttop;
A68_INT  YCCAOSL_strtop;
A68_VC  ZCCAOSL;  /* OPERATORS - trim index */
A68_VC  ADCAOSL;  /* YIELD */
A_PROC_ENTRY(get_next_line);
 /* line 121: */
 /* line 122: */
{ 
 /* line 123: */
 /* line 124: */
if ( (QBCAOSL_pos==PBCAOSL_intop) )
{ 
UCCAOSL = GPBAOSI_io_eof;
} 
else
{ 
VCCAOSL = QBCAOSL_pos+=1 ;
WCCAOSL_next = A_VINDEX(OBCAOSL_instrings,VCCAOSL);
 /* line 125: */
XCCAOSL_nexttop = WCCAOSL_next.upb;
YCCAOSL_strtop = Str.upb;
 /* line 126: */
 /* line 127: */
 /* line 128: */
if ( (YCCAOSL_strtop<XCCAOSL_nexttop) )
{ 
UCCAOSL = QCCAOSL_io_buf_too_small;
} 
else
{ 
ADCAOSL = A_VTRIM(ZCCAOSL,(Str),A_VTSCRIPT(&(ZCCAOSL.upb),(Str).upb,1,XCCAOSL_nexttop)) ;
A_VASSIGN2(WCCAOSL_next,ADCAOSL,A68_CHAR );
 /* line 129: */
(*Length) = XCCAOSL_nexttop;
 /* line 130: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
UCCAOSL = DPBAOSI_io_ok;
} 
} 
} 
A_PROC_EXIT(get_next_line);
*ReturnedValue = (UCCAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  CHCAOSL_generator(A68_BOOL  BHCAOSL_anonymous, A68_141  *ReturnedValue)
{ 
A68_141  DHCAOSL;  /* clause result */
A68_141  EHCAOSL;  /* OPERATORS - dynamic generator */
{ 
EHCAOSL.dim[0].upb = 3 ;
EHCAOSL.dim[0].lwb = 1 ;
A_1INITSTRIDES(EHCAOSL) ;
( BHCAOSL_anonymous? A_R1LOC(A68_INT ,EHCAOSL): A_R1HEAP(A68_INT ,EHCAOSL) );
DHCAOSL = EHCAOSL;
} 
*ReturnedValue = (DHCAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  TICAOSL_straight(A68_INT  RICAOSL_anonymous, A68_169 * SICAOSL_anonymous, A68_140  *ReturnedValue)
{ 
A68_140  UICAOSL;  /* clause result */
A68_140  VICAOSL;  /* OPERATORS - mode -> union mode */
A68_INT * WICAOSL;  /* YIELD */
A68_140  XICAOSL;  /* OPERATORS - mode -> union mode */
A68_INT * YICAOSL;  /* YIELD */
A68_140  ZICAOSL;  /* clause result */
switch ( RICAOSL_anonymous )
{ 
case 1: 
WICAOSL = (&(SICAOSL_anonymous->I)) ;
UICAOSL = A_UNITE(VICAOSL,mode1,1,WICAOSL);
break;
case 2: 
YICAOSL = (&(SICAOSL_anonymous->J)) ;
UICAOSL = A_UNITE(XICAOSL,mode1,1,YICAOSL);
break;
default: 
A_IMP_SKIP ;
break;
} 
ZICAOSL = UICAOSL;
*ReturnedValue = (ZICAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  IOCAOSL_put_out_line(A68_VC  S)
{ 
A68_38  JOCAOSL;  /* avoid structure result */
A_PROC_ENTRY(put_out_line);
JSBAOSI_write_buffer( GOCAOSL_outfile, S, ZLBAOSI_global_msg, &JOCAOSL );
JOCAOSL;
A_PROC_EXIT(put_out_line);
return;
} 
#undef NL

A_STATIC A68_VOID  BTCAOSL_get_in_line(A68_VC  S, A68_INT * Length, A68_38  *ReturnedValue)
{ 
A68_38  CTCAOSL;  /* clause result */
A68_38  DTCAOSL;  /* avoid structure result */
A_PROC_ENTRY(get_in_line);
 /* line 276: */
SRBAOSI_read_line( YSCAOSL_infile, S, Length, ZLBAOSI_global_msg, &DTCAOSL );
CTCAOSL = DTCAOSL;
A_PROC_EXIT(get_in_line);
*ReturnedValue = (CTCAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  YYCAOSL_generator(A68_BOOL  XYCAOSL_anonymous, A68_72  *ReturnedValue)
{ 
A68_72  ZYCAOSL;  /* clause result */
A68_72  AZCAOSL;  /* OPERATORS - dynamic generator */
{ 
AZCAOSL.upb = 100 ;
( XYCAOSL_anonymous? A_VLOC(A68_INT ,AZCAOSL): A_VHEAP(A68_INT ,AZCAOSL) );
ZYCAOSL = AZCAOSL;
} 
*ReturnedValue = (ZYCAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  HZCAOSL_generator(A68_BOOL  GZCAOSL_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  IZCAOSL;  /* clause result */
A68_VC  JZCAOSL;  /* OPERATORS - dynamic generator */
{ 
JZCAOSL.upb = 16 ;
( GZCAOSL_anonymous? A_VLOC(A68_CHAR ,JZCAOSL): A_VHEAP(A68_CHAR ,JZCAOSL) );
IZCAOSL = JZCAOSL;
} 
*ReturnedValue = (IZCAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  DADAOSL_straight(A68_INT  BADAOSL_anonymous, A68_COMPL * CADAOSL_anonymous, A68_164  *ReturnedValue)
{ 
A68_164  EADAOSL;  /* clause result */
A68_164  FADAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL * GADAOSL;  /* YIELD */
A68_164  HADAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL * IADAOSL;  /* YIELD */
A68_164  JADAOSL;  /* clause result */
switch ( BADAOSL_anonymous )
{ 
case 1: 
GADAOSL = (&(CADAOSL_anonymous->Re)) ;
EADAOSL = A_UNITE(FADAOSL,mode5,5,GADAOSL);
break;
case 2: 
IADAOSL = (&(CADAOSL_anonymous->Im)) ;
EADAOSL = A_UNITE(HADAOSL,mode5,5,IADAOSL);
break;
default: 
A_IMP_SKIP ;
break;
} 
JADAOSL = EADAOSL;
*ReturnedValue = (JADAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  LBDAOSL_straight(A68_INT  JBDAOSL_anonymous, A68_169 * KBDAOSL_anonymous, A68_164  *ReturnedValue)
{ 
A68_164  MBDAOSL;  /* clause result */
A68_164  NBDAOSL;  /* OPERATORS - mode -> union mode */
A68_INT * OBDAOSL;  /* YIELD */
A68_164  PBDAOSL;  /* OPERATORS - mode -> union mode */
A68_INT * QBDAOSL;  /* YIELD */
A68_164  RBDAOSL;  /* clause result */
switch ( JBDAOSL_anonymous )
{ 
case 1: 
OBDAOSL = (&(KBDAOSL_anonymous->I)) ;
MBDAOSL = A_UNITE(NBDAOSL,mode3,3,OBDAOSL);
break;
case 2: 
QBDAOSL = (&(KBDAOSL_anonymous->J)) ;
MBDAOSL = A_UNITE(PBDAOSL,mode3,3,QBDAOSL);
break;
default: 
A_IMP_SKIP ;
break;
} 
RBDAOSL = MBDAOSL;
*ReturnedValue = (RBDAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  EEDAOSL_fixedcmpx(A68_COMPL  Cmpx, A68_REAL  A, A68_REAL  B, A68_VC  *ReturnedValue)
{ 
A68_224  FEDAOSL;  /* collateral clause result */
A68_158  GEDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  HEDAOSL;  /* YIELD */
A68_VC  IEDAOSL;  /* avoid structure result */
A68_100  JEDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  MEDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  NEDAOSL;  /* YIELD */
A68_158  OEDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  PEDAOSL;  /* YIELD */
A68_VC  QEDAOSL;  /* avoid structure result */
A68_100  REDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  UEDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  VEDAOSL;  /* YIELD */
A68_158  WEDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  XEDAOSL;  /* avoid structure result */
A68_100  YEDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  BFDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  CFDAOSL;  /* YIELD */
A68_158  DFDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  EFDAOSL;  /* avoid structure result */
A68_100  FFDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  GFDAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  HFDAOSL;  /* YIELD */
A68_VC  IFDAOSL;  /* clause result */
A68_133  JFDAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  KFDAOSL;  /* avoid structure result */
A_PROC_ENTRY(fixedcmpx);
 /* line 385: */
HEDAOSL = Cmpx.Re ;
RCAAOSL_fixed( A_UNITE(GEDAOSL,mode4,4,HEDAOSL), (-6), 3, &IEDAOSL );
FEDAOSL.data[0] = A_UNITE(JEDAOSL,mode7,7,IEDAOSL);
NEDAOSL = LEDAOSL ;
FEDAOSL.data[1] = A_UNITE(MEDAOSL,mode7,7,NEDAOSL);
 /* line 386: */
PEDAOSL = Cmpx.Im ;
RCAAOSL_fixed( A_UNITE(OEDAOSL,mode4,4,PEDAOSL), (-6), 3, &QEDAOSL );
FEDAOSL.data[2] = A_UNITE(REDAOSL,mode7,7,QEDAOSL);
VEDAOSL = TEDAOSL ;
FEDAOSL.data[3] = A_UNITE(UEDAOSL,mode7,7,VEDAOSL);
RCAAOSL_fixed( A_UNITE(WEDAOSL,mode4,4,A), (-6), 3, &XEDAOSL );
FEDAOSL.data[4] = A_UNITE(YEDAOSL,mode7,7,XEDAOSL);
CFDAOSL = AFDAOSL ;
FEDAOSL.data[5] = A_UNITE(BFDAOSL,mode7,7,CFDAOSL);
RCAAOSL_fixed( A_UNITE(DFDAOSL,mode4,4,B), (-6), 3, &EFDAOSL );
FEDAOSL.data[6] = A_UNITE(FFDAOSL,mode7,7,EFDAOSL);
HFDAOSL = ']' ;
FEDAOSL.data[7] = A_UNITE(GFDAOSL,mode6,6,HFDAOSL);
UJBAOSL_oneline( A_HISVEC(JFDAOSL,FEDAOSL,8,A68_100 ), &KFDAOSL );
IFDAOSL = KFDAOSL;
A_PROC_EXIT(fixedcmpx);
*ReturnedValue = (IFDAOSL);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
int main (int argc, char **argv)
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/teststrings.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/clear.m","./mfiles/iolib.m","./mfiles/numberstr.m","./mfiles/mathslib.m","./mfiles/time.m","./mfiles/getstrings.m","./mfiles/putstrings.m","/u/model/ella/osif/assoc/mfiles/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  CUBAOSL;  /* avoid structure result */
A68_169  EUBAOSL;  /* collateral clause result */
A68_169  GUBAOSL;  /* collateral clause result */
A68_COMPL  JUBAOSL;  /* ADICOPS - I */
A68_185  OUBAOSL;  /* collateral clause result */
A68_100  PUBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  QUBAOSL;  /* procedure value */
A68_100  TUBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  UUBAOSL;  /* YIELD */
A68_100  VUBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  WUBAOSL;  /* procedure value */
A68_100  ZUBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  AVBAOSL;  /* YIELD */
A68_100  BVBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  CVBAOSL;  /* procedure value */
A68_100  FVBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  GVBAOSL;  /* YIELD */
A68_100  HVBAOSL;  /* OPERATORS - mode -> union mode */
A68_100  KVBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  LVBAOSL;  /* YIELD */
A68_VC  MVBAOSL;  /* avoid structure result */
A68_100  NVBAOSL;  /* OPERATORS - mode -> union mode */
A68_100  OVBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  PVBAOSL;  /* procedure value */
A68_100  SVBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  TVBAOSL;  /* YIELD */
A68_158  UVBAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  VVBAOSL;  /* YIELD */
A68_VC  WVBAOSL;  /* avoid structure result */
A68_100  XVBAOSL;  /* OPERATORS - mode -> union mode */
A68_100  YVBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  ZVBAOSL;  /* procedure value */
A68_100  CWBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  DWBAOSL;  /* YIELD */
A68_158  EWBAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  FWBAOSL;  /* YIELD */
A68_VC  GWBAOSL;  /* avoid structure result */
A68_100  HWBAOSL;  /* OPERATORS - mode -> union mode */
A68_100  IWBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  JWBAOSL;  /* procedure value */
A68_100  MWBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  NWBAOSL;  /* YIELD */
A68_158  OWBAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  PWBAOSL;  /* YIELD */
A68_VC  QWBAOSL;  /* avoid structure result */
A68_100  RWBAOSL;  /* OPERATORS - mode -> union mode */
A68_100  SWBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  TWBAOSL;  /* procedure value */
A68_100  WWBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  XWBAOSL;  /* YIELD */
A68_100  YWBAOSL;  /* OPERATORS - mode -> union mode */
A68_100  ZWBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  AXBAOSL;  /* procedure value */
A68_100  DXBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  EXBAOSL;  /* YIELD */
A68_100  FXBAOSL;  /* OPERATORS - mode -> union mode */
A68_100  GXBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  HXBAOSL;  /* procedure value */
A68_100  KXBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  LXBAOSL;  /* YIELD */
A68_169 * VXBAOSL;  /* OPERATORS - prestraight */
A68_114  WXBAOSL;  /* OPERATORS - straighten */
A68_186  XXBAOSL;  /* procedure value */
A68_100  YXBAOSL;  /* OPERATORS - mode -> union mode */
A68_114  ZXBAOSL;  /* YIELD */
A68_100  AYBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  BYBAOSL;  /* procedure value */
A68_100  EYBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  FYBAOSL;  /* YIELD */
A68_169 * GYBAOSL;  /* OPERATORS - prestraight */
A68_114  HYBAOSL;  /* OPERATORS - straighten */
A68_186  IYBAOSL;  /* procedure value */
A68_100  JYBAOSL;  /* OPERATORS - mode -> union mode */
A68_114  KYBAOSL;  /* YIELD */
A68_100  LYBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  MYBAOSL;  /* procedure value */
A68_100  PYBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  QYBAOSL;  /* YIELD */
A68_100  RYBAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  SYBAOSL;  /* YIELD */
A68_100  TYBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  UYBAOSL;  /* procedure value */
A68_100  XYBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  YYBAOSL;  /* YIELD */
A68_COMPL * IZBAOSL;  /* OPERATORS - prestraight */
A68_114  JZBAOSL;  /* OPERATORS - straighten */
A68_187  KZBAOSL;  /* procedure value */
A68_100  LZBAOSL;  /* OPERATORS - mode -> union mode */
A68_114  MZBAOSL;  /* YIELD */
A68_100  NZBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  OZBAOSL;  /* procedure value */
A68_100  RZBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  SZBAOSL;  /* YIELD */
A68_100  TZBAOSL;  /* OPERATORS - mode -> union mode */
A68_100  UZBAOSL;  /* OPERATORS - mode -> union mode */
A68_100  VZBAOSL;  /* OPERATORS - mode -> union mode */
A68_104  WZBAOSL;  /* procedure value */
A68_100  ZZBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  AACAOSL;  /* YIELD */
A68_100  BACAOSL;  /* OPERATORS - mode -> union mode */
A68_104  CACAOSL;  /* procedure value */
A68_100  FACAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  GACAOSL;  /* YIELD */
A68_100  HACAOSL;  /* OPERATORS - mode -> union mode */
A68_104  IACAOSL;  /* procedure value */
A68_100  LACAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  MACAOSL;  /* YIELD */
A68_100  NACAOSL;  /* OPERATORS - mode -> union mode */
A68_104  OACAOSL;  /* procedure value */
A68_133  PACAOSL;  /* OPERATORS - istruct -> vector */
A68_195  QACAOSL;  /* collateral clause result */
A68_33  NBCAOSL;  /* OPERATORS - istruct -> vector */
A68_38  PCCAOSL;  /* avoid structure result */
A68_136  BDCAOSL;  /* OPERATORS - mode -> union mode */
A68_86  CDCAOSL;  /* YIELD */
A68_86  DDCAOSL;  /* procedure value */
A68_135  EDCAOSL;  /* OPERATORS - mode -> union mode */
A68_200  GDCAOSL;  /* collateral clause result */
A68_100  JDCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  KDCAOSL;  /* YIELD */
A68_100  LDCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  MDCAOSL;  /* procedure value */
A68_133  NDCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  ODCAOSL;  /* collateral clause result */
A68_100  RDCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  SDCAOSL;  /* YIELD */
A68_100  TDCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  UDCAOSL;  /* YIELD */
A68_100  VDCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  WDCAOSL;  /* procedure value */
A68_133  XDCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  YDCAOSL;  /* collateral clause result */
A68_100  BECAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  CECAOSL;  /* YIELD */
A68_100  DECAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  EECAOSL;  /* YIELD */
A68_100  FECAOSL;  /* OPERATORS - mode -> union mode */
A68_104  GECAOSL;  /* procedure value */
A68_133  HECAOSL;  /* OPERATORS - istruct -> vector */
A68_202  IECAOSL;  /* collateral clause result */
A68_100  LECAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  MECAOSL;  /* YIELD */
A68_100  NECAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  OECAOSL;  /* YIELD */
A68_100  PECAOSL;  /* OPERATORS - mode -> union mode */
A68_104  QECAOSL;  /* procedure value */
A68_133  RECAOSL;  /* OPERATORS - istruct -> vector */
A68_202  SECAOSL;  /* collateral clause result */
A68_100  VECAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  WECAOSL;  /* YIELD */
A68_100  XECAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  YECAOSL;  /* YIELD */
A68_100  ZECAOSL;  /* OPERATORS - mode -> union mode */
A68_104  AFCAOSL;  /* procedure value */
A68_133  BFCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  CFCAOSL;  /* collateral clause result */
A68_100  FFCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  GFCAOSL;  /* YIELD */
A68_100  HFCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  IFCAOSL;  /* YIELD */
A68_100  JFCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  KFCAOSL;  /* procedure value */
A68_133  LFCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  MFCAOSL;  /* collateral clause result */
A68_100  PFCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  QFCAOSL;  /* YIELD */
A68_100  RFCAOSL;  /* OPERATORS - mode -> union mode */
A68_BOOL  SFCAOSL;  /* YIELD */
A68_100  TFCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  UFCAOSL;  /* procedure value */
A68_133  VFCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  WFCAOSL;  /* collateral clause result */
A68_100  ZFCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  AGCAOSL;  /* YIELD */
A68_100  BGCAOSL;  /* OPERATORS - mode -> union mode */
A68_BOOL  CGCAOSL;  /* YIELD */
A68_100  DGCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  EGCAOSL;  /* procedure value */
A68_133  FGCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  GGCAOSL;  /* collateral clause result */
A68_100  JGCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  KGCAOSL;  /* YIELD */
A68_100  LGCAOSL;  /* OPERATORS - mode -> union mode */
A68_BOOL  MGCAOSL;  /* YIELD */
A68_100  NGCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  OGCAOSL;  /* procedure value */
A68_133  PGCAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  QGCAOSL;  /* == */
A68_200  RGCAOSL;  /* collateral clause result */
A68_100  UGCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  VGCAOSL;  /* YIELD */
A68_100  WGCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  XGCAOSL;  /* procedure value */
A68_133  YGCAOSL;  /* OPERATORS - istruct -> vector */
A68_141  GHCAOSL;  /* avoid structure result */
A68_38  HHCAOSL;  /* avoid structure result */
A68_206  IHCAOSL;  /* collateral clause result */
A68_140  JHCAOSL;  /* OPERATORS - mode -> union mode */
A68_140  KHCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  LHCAOSL;  /* procedure value */
A68_152  MHCAOSL;  /* OPERATORS - istruct -> vector */
A68_207  NHCAOSL;  /* collateral clause result */
A68_100  QHCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  RHCAOSL;  /* YIELD */
A68_INT  SHCAOSL;  /* YIELD */
A68_100  THCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  UHCAOSL;  /* YIELD */
A68_100  VHCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  WHCAOSL;  /* procedure value */
A68_100  ZHCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  AICAOSL;  /* YIELD */
A68_INT  BICAOSL;  /* YIELD */
A68_100  CICAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  DICAOSL;  /* YIELD */
A68_100  EICAOSL;  /* OPERATORS - mode -> union mode */
A68_104  FICAOSL;  /* procedure value */
A68_100  IICAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  JICAOSL;  /* YIELD */
A68_INT  KICAOSL;  /* YIELD */
A68_100  LICAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  MICAOSL;  /* YIELD */
A68_100  NICAOSL;  /* OPERATORS - mode -> union mode */
A68_104  OICAOSL;  /* procedure value */
A68_133  PICAOSL;  /* OPERATORS - istruct -> vector */
A68_208  QICAOSL;  /* collateral clause result */
A68_169 * AJCAOSL;  /* OPERATORS - prestraight */
A68_145  BJCAOSL;  /* OPERATORS - straighten */
A68_209  CJCAOSL;  /* procedure value */
A68_140  DJCAOSL;  /* OPERATORS - mode -> union mode */
A68_145  EJCAOSL;  /* YIELD */
A68_169 * FJCAOSL;  /* OPERATORS - prestraight */
A68_145  GJCAOSL;  /* OPERATORS - straighten */
A68_209  HJCAOSL;  /* procedure value */
A68_140  IJCAOSL;  /* OPERATORS - mode -> union mode */
A68_145  JJCAOSL;  /* YIELD */
A68_140  KJCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  LJCAOSL;  /* procedure value */
A68_152  MJCAOSL;  /* OPERATORS - istruct -> vector */
A68_211  NJCAOSL;  /* collateral clause result */
A68_100  QJCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  RJCAOSL;  /* YIELD */
A68_169 * SJCAOSL;  /* OPERATORS - prestraight */
A68_114  TJCAOSL;  /* OPERATORS - straighten */
A68_186  UJCAOSL;  /* procedure value */
A68_100  VJCAOSL;  /* OPERATORS - mode -> union mode */
A68_114  WJCAOSL;  /* YIELD */
A68_100  XJCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  YJCAOSL;  /* procedure value */
A68_100  BKCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  CKCAOSL;  /* YIELD */
A68_169 * DKCAOSL;  /* OPERATORS - prestraight */
A68_114  EKCAOSL;  /* OPERATORS - straighten */
A68_186  FKCAOSL;  /* procedure value */
A68_100  GKCAOSL;  /* OPERATORS - mode -> union mode */
A68_114  HKCAOSL;  /* YIELD */
A68_100  IKCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  JKCAOSL;  /* procedure value */
A68_133  KKCAOSL;  /* OPERATORS - istruct -> vector */
A68_206  LKCAOSL;  /* collateral clause result */
A68_140  MKCAOSL;  /* OPERATORS - mode -> union mode */
A68_140  NKCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  OKCAOSL;  /* procedure value */
A68_152  PKCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  QKCAOSL;  /* collateral clause result */
A68_100  TKCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  UKCAOSL;  /* YIELD */
A68_100  VKCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  WKCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  XKCAOSL;  /* procedure value */
A68_133  YKCAOSL;  /* OPERATORS - istruct -> vector */
A68_208  ZKCAOSL;  /* collateral clause result */
A68_140  ALCAOSL;  /* OPERATORS - mode -> union mode */
A68_140  BLCAOSL;  /* OPERATORS - mode -> union mode */
A68_140  CLCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  DLCAOSL;  /* procedure value */
A68_152  ELCAOSL;  /* OPERATORS - istruct -> vector */
A68_212  FLCAOSL;  /* collateral clause result */
A68_100  ILCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  JLCAOSL;  /* YIELD */
A68_100  KLCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  LLCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  MLCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  NLCAOSL;  /* procedure value */
A68_133  OLCAOSL;  /* OPERATORS - istruct -> vector */
A68_208  PLCAOSL;  /* collateral clause result */
A68_140  QLCAOSL;  /* OPERATORS - mode -> union mode */
A68_140  RLCAOSL;  /* OPERATORS - mode -> union mode */
A68_140  SLCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  TLCAOSL;  /* procedure value */
A68_152  ULCAOSL;  /* OPERATORS - istruct -> vector */
A68_211  VLCAOSL;  /* collateral clause result */
A68_100  YLCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  ZLCAOSL;  /* YIELD */
A68_158  AMCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  BMCAOSL;  /* avoid structure result */
A68_100  CMCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  DMCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  EMCAOSL;  /* procedure value */
A68_100  HMCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  IMCAOSL;  /* YIELD */
A68_158  JMCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  KMCAOSL;  /* avoid structure result */
A68_100  LMCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  MMCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  NMCAOSL;  /* procedure value */
A68_133  OMCAOSL;  /* OPERATORS - istruct -> vector */
A68_200  PMCAOSL;  /* collateral clause result */
A68_VC  QMCAOSL;  /* avoid structure result */
A68_100  RMCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  SMCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  TMCAOSL;  /* procedure value */
A68_133  UMCAOSL;  /* OPERATORS - istruct -> vector */
A68_206  XMCAOSL;  /* collateral clause result */
A68_140  YMCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  ZMCAOSL;  /* procedure value */
A68_140  ANCAOSL;  /* OPERATORS - mode -> union mode */
A68_152  BNCAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  CNCAOSL;  /* avoid structure result */
A68_BOOL  ENCAOSL;  /* optbool result */
A68_200  FNCAOSL;  /* collateral clause result */
A68_100  INCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  JNCAOSL;  /* YIELD */
A68_100  KNCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  LNCAOSL;  /* procedure value */
A68_133  MNCAOSL;  /* OPERATORS - istruct -> vector */
A68_214  NNCAOSL;  /* collateral clause result */
A68_100  QNCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  RNCAOSL;  /* YIELD */
A68_100  SNCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  TNCAOSL;  /* procedure value */
A68_100  UNCAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  VNCAOSL;  /* YIELD */
A68_100  WNCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  XNCAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  YNCAOSL;  /* YIELD */
A68_100  ZNCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  AOCAOSL;  /* procedure value */
A68_100  BOCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  COCAOSL;  /* procedure value */
A68_133  DOCAOSL;  /* OPERATORS - istruct -> vector */
A68_136  KOCAOSL;  /* OPERATORS - mode -> union mode */
A68_78  LOCAOSL;  /* YIELD */
A68_78  MOCAOSL;  /* procedure value */
A68_135  NOCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  OOCAOSL;  /* YIELD */
A68_200  QOCAOSL;  /* collateral clause result */
A68_100  TOCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  UOCAOSL;  /* YIELD */
A68_100  VOCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  WOCAOSL;  /* procedure value */
A68_133  XOCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  YOCAOSL;  /* collateral clause result */
A68_100  BPCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  CPCAOSL;  /* YIELD */
A68_100  DPCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  EPCAOSL;  /* YIELD */
A68_100  FPCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  GPCAOSL;  /* procedure value */
A68_133  HPCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  IPCAOSL;  /* collateral clause result */
A68_100  LPCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  MPCAOSL;  /* YIELD */
A68_100  NPCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  OPCAOSL;  /* YIELD */
A68_100  PPCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  QPCAOSL;  /* procedure value */
A68_133  RPCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  SPCAOSL;  /* collateral clause result */
A68_100  VPCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  WPCAOSL;  /* YIELD */
A68_100  XPCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  YPCAOSL;  /* YIELD */
A68_100  ZPCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  AQCAOSL;  /* procedure value */
A68_133  BQCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  CQCAOSL;  /* collateral clause result */
A68_100  FQCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  GQCAOSL;  /* YIELD */
A68_100  HQCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  IQCAOSL;  /* YIELD */
A68_100  JQCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  KQCAOSL;  /* procedure value */
A68_133  LQCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  MQCAOSL;  /* collateral clause result */
A68_100  PQCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  QQCAOSL;  /* YIELD */
A68_100  RQCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  SQCAOSL;  /* YIELD */
A68_100  TQCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  UQCAOSL;  /* procedure value */
A68_133  VQCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  WQCAOSL;  /* collateral clause result */
A68_100  ZQCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  ARCAOSL;  /* YIELD */
A68_100  BRCAOSL;  /* OPERATORS - mode -> union mode */
A68_BOOL  CRCAOSL;  /* YIELD */
A68_100  DRCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  ERCAOSL;  /* procedure value */
A68_133  FRCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  GRCAOSL;  /* collateral clause result */
A68_100  JRCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  KRCAOSL;  /* YIELD */
A68_100  LRCAOSL;  /* OPERATORS - mode -> union mode */
A68_BOOL  MRCAOSL;  /* YIELD */
A68_100  NRCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  ORCAOSL;  /* procedure value */
A68_133  PRCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  QRCAOSL;  /* collateral clause result */
A68_100  TRCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  URCAOSL;  /* YIELD */
A68_100  VRCAOSL;  /* OPERATORS - mode -> union mode */
A68_BOOL  WRCAOSL;  /* YIELD */
A68_100  XRCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  YRCAOSL;  /* procedure value */
A68_133  ZRCAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  ASCAOSL;  /* != */
A68_200  BSCAOSL;  /* collateral clause result */
A68_100  ESCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  FSCAOSL;  /* YIELD */
A68_100  GSCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  HSCAOSL;  /* procedure value */
A68_133  ISCAOSL;  /* OPERATORS - istruct -> vector */
A68_200  JSCAOSL;  /* collateral clause result */
A68_100  MSCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  NSCAOSL;  /* YIELD */
A68_100  OSCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  PSCAOSL;  /* procedure value */
A68_133  QSCAOSL;  /* OPERATORS - istruct -> vector */
A68_38  RSCAOSL;  /* avoid structure result */
A68_200  SSCAOSL;  /* collateral clause result */
A68_VC  TSCAOSL;  /* avoid structure result */
A68_100  USCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  VSCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  WSCAOSL;  /* procedure value */
A68_133  XSCAOSL;  /* OPERATORS - istruct -> vector */
A68_136  ETCAOSL;  /* OPERATORS - mode -> union mode */
A68_86  FTCAOSL;  /* YIELD */
A68_86  GTCAOSL;  /* procedure value */
A68_135  HTCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  ITCAOSL;  /* YIELD */
A68_200  KTCAOSL;  /* collateral clause result */
A68_100  NTCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  OTCAOSL;  /* YIELD */
A68_100  PTCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  QTCAOSL;  /* procedure value */
A68_133  RTCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  STCAOSL;  /* collateral clause result */
A68_100  VTCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  WTCAOSL;  /* YIELD */
A68_100  XTCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  YTCAOSL;  /* YIELD */
A68_100  ZTCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  AUCAOSL;  /* procedure value */
A68_133  BUCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  CUCAOSL;  /* collateral clause result */
A68_100  FUCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  GUCAOSL;  /* YIELD */
A68_100  HUCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  IUCAOSL;  /* YIELD */
A68_100  JUCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  KUCAOSL;  /* procedure value */
A68_133  LUCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  MUCAOSL;  /* collateral clause result */
A68_100  PUCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  QUCAOSL;  /* YIELD */
A68_100  RUCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  SUCAOSL;  /* YIELD */
A68_100  TUCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  UUCAOSL;  /* procedure value */
A68_133  VUCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  WUCAOSL;  /* collateral clause result */
A68_100  ZUCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  AVCAOSL;  /* YIELD */
A68_100  BVCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  CVCAOSL;  /* YIELD */
A68_100  DVCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  EVCAOSL;  /* procedure value */
A68_133  FVCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  GVCAOSL;  /* collateral clause result */
A68_100  JVCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  KVCAOSL;  /* YIELD */
A68_100  LVCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  MVCAOSL;  /* YIELD */
A68_100  NVCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  OVCAOSL;  /* procedure value */
A68_133  PVCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  QVCAOSL;  /* collateral clause result */
A68_100  TVCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  UVCAOSL;  /* YIELD */
A68_100  VVCAOSL;  /* OPERATORS - mode -> union mode */
A68_BOOL  WVCAOSL;  /* YIELD */
A68_100  XVCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  YVCAOSL;  /* procedure value */
A68_133  ZVCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  AWCAOSL;  /* collateral clause result */
A68_100  DWCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  EWCAOSL;  /* YIELD */
A68_100  FWCAOSL;  /* OPERATORS - mode -> union mode */
A68_BOOL  GWCAOSL;  /* YIELD */
A68_100  HWCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  IWCAOSL;  /* procedure value */
A68_133  JWCAOSL;  /* OPERATORS - istruct -> vector */
A68_202  KWCAOSL;  /* collateral clause result */
A68_100  NWCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  OWCAOSL;  /* YIELD */
A68_100  PWCAOSL;  /* OPERATORS - mode -> union mode */
A68_BOOL  QWCAOSL;  /* YIELD */
A68_100  RWCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  SWCAOSL;  /* procedure value */
A68_133  TWCAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  UWCAOSL;  /* == */
A68_200  VWCAOSL;  /* collateral clause result */
A68_100  YWCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  ZWCAOSL;  /* YIELD */
A68_100  AXCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  BXCAOSL;  /* procedure value */
A68_133  CXCAOSL;  /* OPERATORS - istruct -> vector */
A68_200  DXCAOSL;  /* collateral clause result */
A68_100  GXCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  HXCAOSL;  /* YIELD */
A68_100  IXCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  JXCAOSL;  /* procedure value */
A68_133  KXCAOSL;  /* OPERATORS - istruct -> vector */
A68_38  LXCAOSL;  /* avoid structure result */
A68_VC  MXCAOSL;  /* avoid structure result */
A68_VC  OXCAOSL;  /* avoid structure result */
A68_216  QXCAOSL;  /* collateral clause result */
A68_100  TXCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  UXCAOSL;  /* YIELD */
A68_100  VXCAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  WXCAOSL;  /* YIELD */
A68_100  XXCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  YXCAOSL;  /* procedure value */
A68_100  ZXCAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  AYCAOSL;  /* YIELD */
A68_100  BYCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  CYCAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  DYCAOSL;  /* YIELD */
A68_100  EYCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  FYCAOSL;  /* procedure value */
A68_100  GYCAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  HYCAOSL;  /* YIELD */
A68_100  IYCAOSL;  /* OPERATORS - mode -> union mode */
A68_100  JYCAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  KYCAOSL;  /* YIELD */
A68_100  LYCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  MYCAOSL;  /* procedure value */
A68_133  NYCAOSL;  /* OPERATORS - istruct -> vector */
A68_200  OYCAOSL;  /* collateral clause result */
A68_100  RYCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  SYCAOSL;  /* YIELD */
A68_100  TYCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  UYCAOSL;  /* procedure value */
A68_133  VYCAOSL;  /* OPERATORS - istruct -> vector */
A68_72  CZCAOSL;  /* avoid structure result */
A68_VC  LZCAOSL;  /* avoid structure result */
A68_VC  OZCAOSL;  /* OPERATORS - assign op */
A68_INT  QZCAOSL;  /* to part of loop */
A68_INT * RZCAOSL;  /* YIELD */
A68_164  SZCAOSL;  /* OPERATORS - mode -> union mode */
A68_200  TZCAOSL;  /* collateral clause result */
A68_100  WZCAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  XZCAOSL;  /* YIELD */
A68_100  YZCAOSL;  /* OPERATORS - mode -> union mode */
A68_104  ZZCAOSL;  /* procedure value */
A68_133  AADAOSL;  /* OPERATORS - istruct -> vector */
A68_COMPL * KADAOSL;  /* OPERATORS - prestraight */
A68_165  LADAOSL;  /* OPERATORS - straighten */
A68_218  MADAOSL;  /* procedure value */
A68_164  NADAOSL;  /* OPERATORS - mode -> union mode */
A68_165  OADAOSL;  /* YIELD */
A68_REAL  PADAOSL;  /* ADICOPS - ABS REAL */
A68_BOOL  QADAOSL;  /* optbool result */
A68_REAL  RADAOSL;  /* ADICOPS - ABS REAL */
A68_200  SADAOSL;  /* collateral clause result */
A68_100  VADAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  WADAOSL;  /* YIELD */
A68_100  XADAOSL;  /* OPERATORS - mode -> union mode */
A68_104  YADAOSL;  /* procedure value */
A68_133  ZADAOSL;  /* OPERATORS - istruct -> vector */
A68_164  ABDAOSL;  /* OPERATORS - mode -> union mode */
A68_200  BBDAOSL;  /* collateral clause result */
A68_100  EBDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  FBDAOSL;  /* YIELD */
A68_100  GBDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  HBDAOSL;  /* procedure value */
A68_133  IBDAOSL;  /* OPERATORS - istruct -> vector */
A68_169 * SBDAOSL;  /* OPERATORS - prestraight */
A68_165  TBDAOSL;  /* OPERATORS - straighten */
A68_219  UBDAOSL;  /* procedure value */
A68_164  VBDAOSL;  /* OPERATORS - mode -> union mode */
A68_165  WBDAOSL;  /* YIELD */
A68_169 * XBDAOSL;  /* OPERATORS - prestraight */
A68_165  YBDAOSL;  /* OPERATORS - straighten */
A68_219  ZBDAOSL;  /* procedure value */
A68_164  ACDAOSL;  /* OPERATORS - mode -> union mode */
A68_165  BCDAOSL;  /* YIELD */
A68_BOOL  CCDAOSL;  /* optbool result */
A68_200  DCDAOSL;  /* collateral clause result */
A68_100  GCDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  HCDAOSL;  /* YIELD */
A68_100  ICDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  JCDAOSL;  /* procedure value */
A68_133  KCDAOSL;  /* OPERATORS - istruct -> vector */
A68_164  LCDAOSL;  /* OPERATORS - mode -> union mode */
A68_200  OCDAOSL;  /* collateral clause result */
A68_100  RCDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  SCDAOSL;  /* YIELD */
A68_100  TCDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  UCDAOSL;  /* procedure value */
A68_133  VCDAOSL;  /* OPERATORS - istruct -> vector */
A68_164  WCDAOSL;  /* OPERATORS - mode -> union mode */
A68_INT  YCDAOSL;  /* forall loop counter */
A68_200  ZCDAOSL;  /* collateral clause result */
A68_100  CDDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  DDDAOSL;  /* YIELD */
A68_100  EDDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  FDDAOSL;  /* procedure value */
A68_133  GDDAOSL;  /* OPERATORS - istruct -> vector */
A68_200  HDDAOSL;  /* collateral clause result */
A68_100  KDDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  LDDAOSL;  /* YIELD */
A68_100  MDDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  NDDAOSL;  /* procedure value */
A68_133  ODDAOSL;  /* OPERATORS - istruct -> vector */
A68_200  PDDAOSL;  /* collateral clause result */
A68_100  SDDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  TDDAOSL;  /* YIELD */
A68_100  UDDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  VDDAOSL;  /* procedure value */
A68_133  WDDAOSL;  /* OPERATORS - istruct -> vector */
A68_COMPL  XDDAOSL;  /* ADICOPS - I */
A68_COMPL  ZDDAOSL;  /* collateral clause result */
A68_REAL  LFDAOSL;  /* ADICOPS - ** */
A68_INT  MFDAOSL;  /* ADICOPS - ** */
A68_REAL  NFDAOSL;  /* ADICOPS - ** */
A68_INT  OFDAOSL;  /* ADICOPS - ** */
A68_REAL  QFDAOSL;  /* ADICOPS - ** */
A68_INT  RFDAOSL;  /* ADICOPS - ** */
A68_REAL  SFDAOSL;  /* ADICOPS - ** */
A68_INT  TFDAOSL;  /* ADICOPS - ** */
A68_REAL  BGDAOSL;  /* ADICOPS - ABS REAL */
A68_REAL  DGDAOSL;  /* ADICOPS - ABS REAL */
A68_228  FGDAOSL;  /* collateral clause result */
A68_100  GGDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  HGDAOSL;  /* procedure value */
A68_100  KGDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  LGDAOSL;  /* YIELD */
A68_100  MGDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  NGDAOSL;  /* procedure value */
A68_100  QGDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  RGDAOSL;  /* YIELD */
A68_VC  SGDAOSL;  /* avoid structure result */
A68_100  TGDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  UGDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  VGDAOSL;  /* procedure value */
A68_100  YGDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  ZGDAOSL;  /* YIELD */
A68_VC  AHDAOSL;  /* avoid structure result */
A68_100  BHDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  CHDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  DHDAOSL;  /* procedure value */
A68_100  GHDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  HHDAOSL;  /* YIELD */
A68_158  IHDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  JHDAOSL;  /* YIELD */
A68_VC  KHDAOSL;  /* avoid structure result */
A68_100  LHDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  OHDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  PHDAOSL;  /* YIELD */
A68_158  QHDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  RHDAOSL;  /* YIELD */
A68_VC  SHDAOSL;  /* avoid structure result */
A68_100  THDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  UHDAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  VHDAOSL;  /* YIELD */
A68_100  WHDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  XHDAOSL;  /* procedure value */
A68_100  AIDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  BIDAOSL;  /* YIELD */
A68_158  CIDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  DIDAOSL;  /* YIELD */
A68_VC  EIDAOSL;  /* avoid structure result */
A68_100  FIDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  IIDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  JIDAOSL;  /* YIELD */
A68_158  KIDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  LIDAOSL;  /* YIELD */
A68_VC  MIDAOSL;  /* avoid structure result */
A68_100  NIDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  OIDAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  PIDAOSL;  /* YIELD */
A68_100  QIDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  RIDAOSL;  /* procedure value */
A68_100  UIDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  VIDAOSL;  /* YIELD */
A68_VC  WIDAOSL;  /* avoid structure result */
A68_100  XIDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  YIDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  ZIDAOSL;  /* procedure value */
A68_100  CJDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  DJDAOSL;  /* YIELD */
A68_COMPL  EJDAOSL;  /* ADICOPS - PLUS COMPL */
A68_VC  FJDAOSL;  /* avoid structure result */
A68_100  GJDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  HJDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  IJDAOSL;  /* procedure value */
A68_100  LJDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  MJDAOSL;  /* YIELD */
A68_COMPL  NJDAOSL;  /* ADICOPS - MINUS COMPL */
A68_VC  OJDAOSL;  /* avoid structure result */
A68_100  PJDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  QJDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  RJDAOSL;  /* procedure value */
A68_100  UJDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  VJDAOSL;  /* YIELD */
A68_COMPL  WJDAOSL;  /* ADICOPS - MINUS COMPL */
A68_VC  XJDAOSL;  /* avoid structure result */
A68_100  YJDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  ZJDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  AKDAOSL;  /* procedure value */
A68_100  DKDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  EKDAOSL;  /* YIELD */
A68_COMPL  FKDAOSL;  /* ADICOPS - TIMES COMPL */
A68_VC  GKDAOSL;  /* avoid structure result */
A68_100  HKDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  IKDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  JKDAOSL;  /* procedure value */
A68_100  MKDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  NKDAOSL;  /* YIELD */
A68_COMPL  OKDAOSL;  /* ADICOPS - DIV COMPL 1 */
A68_REAL  PKDAOSL;  /* ADICOPS - DIV COMPL 2 */
A68_VC  QKDAOSL;  /* avoid structure result */
A68_100  RKDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  SKDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  TKDAOSL;  /* procedure value */
A68_100  WKDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  XKDAOSL;  /* YIELD */
A68_COMPL  YKDAOSL;  /* ADICOPS - DIV COMPL 1 */
A68_REAL  ZKDAOSL;  /* ADICOPS - DIV COMPL 2 */
A68_VC  ALDAOSL;  /* avoid structure result */
A68_100  BLDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  CLDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  DLDAOSL;  /* procedure value */
A68_100  GLDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  HLDAOSL;  /* YIELD */
A68_158  ILDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  JLDAOSL;  /* YIELD */
A68_VC  KLDAOSL;  /* avoid structure result */
A68_100  LLDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  OLDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  PLDAOSL;  /* YIELD */
A68_REAL  QLDAOSL;  /* ADICOPS - ** */
A68_INT  RLDAOSL;  /* ADICOPS - ** */
A68_REAL  SLDAOSL;  /* ADICOPS - ** */
A68_INT  TLDAOSL;  /* ADICOPS - ** */
A68_158  ULDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  VLDAOSL;  /* YIELD */
A68_VC  WLDAOSL;  /* avoid structure result */
A68_100  XLDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  YLDAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZLDAOSL;  /* YIELD */
A68_100  AMDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  BMDAOSL;  /* procedure value */
A68_100  EMDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  FMDAOSL;  /* YIELD */
A68_158  GMDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  HMDAOSL;  /* YIELD */
A68_VC  IMDAOSL;  /* avoid structure result */
A68_100  JMDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  MMDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  NMDAOSL;  /* YIELD */
A68_REAL  OMDAOSL;  /* ADICOPS - ** */
A68_INT  PMDAOSL;  /* ADICOPS - ** */
A68_REAL  QMDAOSL;  /* ADICOPS - ** */
A68_INT  RMDAOSL;  /* ADICOPS - ** */
A68_158  SMDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  TMDAOSL;  /* YIELD */
A68_VC  UMDAOSL;  /* avoid structure result */
A68_100  VMDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  WMDAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  XMDAOSL;  /* YIELD */
A68_100  YMDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  ZMDAOSL;  /* procedure value */
A68_100  CNDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  DNDAOSL;  /* YIELD */
A68_158  ENDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  FNDAOSL;  /* YIELD */
A68_VC  GNDAOSL;  /* avoid structure result */
A68_100  HNDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  KNDAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  LNDAOSL;  /* YIELD */
A68_REAL  MNDAOSL;  /* clause result */
A68_REAL  NNDAOSL;  /* clause result */
A68_158  ONDAOSL;  /* OPERATORS - mode -> union mode */
A68_REAL  PNDAOSL;  /* YIELD */
A68_VC  QNDAOSL;  /* avoid structure result */
A68_100  RNDAOSL;  /* OPERATORS - mode -> union mode */
A68_100  SNDAOSL;  /* OPERATORS - mode -> union mode */
A68_CHAR  TNDAOSL;  /* YIELD */
A68_100  UNDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  VNDAOSL;  /* procedure value */
A68_100  WNDAOSL;  /* OPERATORS - mode -> union mode */
A68_104  XNDAOSL;  /* procedure value */
A68_133  YNDAOSL;  /* OPERATORS - istruct -> vector */
A68_200  ZNDAOSL;  /* collateral clause result */
A68_100  CODAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  DODAOSL;  /* YIELD */
A68_100  EODAOSL;  /* OPERATORS - mode -> union mode */
A68_104  FODAOSL;  /* procedure value */
A68_133  GODAOSL;  /* OPERATORS - istruct -> vector */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
ZEAAOSL();   /* USE clear */
TRBAOSL();   /* USE iolib */
VAAAOSL();   /* USE numberstr */
BAAAOSL();   /* USE mathslib */
ZFAAOSL();   /* USE time */
VKBAOSL();   /* USE getstrings */
MTAAOSL();   /* USE putstrings */
VSCAOSI();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/oslib/assoc/./a68files/teststrings.a68";
A_config.translation_time = "Tue Apr  4 09:47:13 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "PTBAOSL (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, TTBAOSL);
 /* line 41: */
 /* line 43: */
WTBAOSL_testfilename = VTBAOSL;
 /* line 44: */
YTBAOSL_generator( A68_TRUE, &CUBAOSL );
BUBAOSL_inbuffer = CUBAOSL;
 /* line 46: */
DUBAOSL_ts = FGAAOSL_seconds();
 /* line 47: */
EUBAOSL.I = 1;
EUBAOSL.J = 2;
FUBAOSL_ip1 = EUBAOSL;
 /* line 48: */
GUBAOSL.I = (-3);
GUBAOSL.J = (-4);
HUBAOSL_ip2 = GUBAOSL;
 /* line 49: */
IUBAOSL_cpl1 = A_COMPL_I(JUBAOSL,1.467,(-3.995));
 /* line 50: */
KUBAOSL_bb = 0X1234cdefU;
 /* line 51: */
LUBAOSL_sb = (A68_SBITS )0X89abU;
 /* line 52: */
MUBAOSL_booltrue = A68_TRUE;
NUBAOSL_boolfalse = A68_FALSE;
 /* line 56: */
QUBAOSL.fn.fn_global = LRAAOSL_newline;
QUBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[0] = A_UNITE(PUBAOSL,mode12,12,QUBAOSL);
UUBAOSL = SUBAOSL ;
OUBAOSL.data[1] = A_UNITE(TUBAOSL,mode7,7,UUBAOSL);
 /* line 57: */
WUBAOSL.fn.fn_global = LRAAOSL_newline;
WUBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[2] = A_UNITE(VUBAOSL,mode12,12,WUBAOSL);
AVBAOSL = YUBAOSL ;
OUBAOSL.data[3] = A_UNITE(ZUBAOSL,mode7,7,AVBAOSL);
 /* line 58: */
CVBAOSL.fn.fn_global = LRAAOSL_newline;
CVBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[4] = A_UNITE(BVBAOSL,mode12,12,CVBAOSL);
GVBAOSL = EVBAOSL ;
OUBAOSL.data[5] = A_UNITE(FVBAOSL,mode7,7,GVBAOSL);
OUBAOSL.data[6] = A_UNITE(HVBAOSL,mode1,1,DUBAOSL_ts);
LVBAOSL = JVBAOSL ;
OUBAOSL.data[7] = A_UNITE(KVBAOSL,mode7,7,LVBAOSL);
 /* line 59: */
SKAAOSL_date_time( DUBAOSL_ts, &MVBAOSL );
OUBAOSL.data[8] = A_UNITE(NVBAOSL,mode7,7,MVBAOSL);
 /* line 60: */
PVBAOSL.fn.fn_global = LRAAOSL_newline;
PVBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[9] = A_UNITE(OVBAOSL,mode12,12,PVBAOSL);
 /* line 61: */
TVBAOSL = RVBAOSL ;
OUBAOSL.data[10] = A_UNITE(SVBAOSL,mode7,7,TVBAOSL);
VVBAOSL = 54321 ;
LBAAOSL_whole( A_UNITE(UVBAOSL,mode2,2,VVBAOSL), 5, &WVBAOSL );
OUBAOSL.data[11] = A_UNITE(XVBAOSL,mode7,7,WVBAOSL);
 /* line 62: */
ZVBAOSL.fn.fn_global = LRAAOSL_newline;
ZVBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[12] = A_UNITE(YVBAOSL,mode12,12,ZVBAOSL);
 /* line 63: */
DWBAOSL = BWBAOSL ;
OUBAOSL.data[13] = A_UNITE(CWBAOSL,mode7,7,DWBAOSL);
FWBAOSL = 2.345 ;
RCAAOSL_fixed( A_UNITE(EWBAOSL,mode4,4,FWBAOSL), (-6), 3, &GWBAOSL );
OUBAOSL.data[14] = A_UNITE(HWBAOSL,mode7,7,GWBAOSL);
 /* line 64: */
JWBAOSL.fn.fn_global = LRAAOSL_newline;
JWBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[15] = A_UNITE(IWBAOSL,mode12,12,JWBAOSL);
 /* line 65: */
NWBAOSL = LWBAOSL ;
OUBAOSL.data[16] = A_UNITE(MWBAOSL,mode7,7,NWBAOSL);
PWBAOSL = 520 ;
XDAAOSL_float( A_UNITE(OWBAOSL,mode2,2,PWBAOSL), (-6), 1, 3, &QWBAOSL );
OUBAOSL.data[17] = A_UNITE(RWBAOSL,mode7,7,QWBAOSL);
 /* line 66: */
TWBAOSL.fn.fn_global = LRAAOSL_newline;
TWBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[18] = A_UNITE(SWBAOSL,mode12,12,TWBAOSL);
XWBAOSL = VWBAOSL ;
OUBAOSL.data[19] = A_UNITE(WWBAOSL,mode7,7,XWBAOSL);
OUBAOSL.data[20] = A_UNITE(YWBAOSL,mode3,3,KUBAOSL_bb);
 /* line 67: */
AXBAOSL.fn.fn_global = LRAAOSL_newline;
AXBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[21] = A_UNITE(ZWBAOSL,mode12,12,AXBAOSL);
EXBAOSL = CXBAOSL ;
OUBAOSL.data[22] = A_UNITE(DXBAOSL,mode7,7,EXBAOSL);
OUBAOSL.data[23] = A_UNITE(FXBAOSL,mode5,5,LUBAOSL_sb);
 /* line 68: */
HXBAOSL.fn.fn_global = LRAAOSL_newline;
HXBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[24] = A_UNITE(GXBAOSL,mode12,12,HXBAOSL);
LXBAOSL = JXBAOSL ;
OUBAOSL.data[25] = A_UNITE(KXBAOSL,mode7,7,LXBAOSL);
VXBAOSL = A_HEAP(A68_169 ) ;
* VXBAOSL = FUBAOSL_ip1 ;
XXBAOSL.fn.fn_global = OXBAOSL_straight;
XXBAOSL.nonlocals = A68_NIL;
ZXBAOSL = A_OPSTRAIGHT(VXBAOSL,XXBAOSL,2,WXBAOSL) ;
OUBAOSL.data[26] = A_UNITE(YXBAOSL,mode22,22,ZXBAOSL);
 /* line 69: */
BYBAOSL.fn.fn_global = LRAAOSL_newline;
BYBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[27] = A_UNITE(AYBAOSL,mode12,12,BYBAOSL);
FYBAOSL = DYBAOSL ;
OUBAOSL.data[28] = A_UNITE(EYBAOSL,mode7,7,FYBAOSL);
GYBAOSL = A_HEAP(A68_169 ) ;
* GYBAOSL = HUBAOSL_ip2 ;
IYBAOSL.fn.fn_global = OXBAOSL_straight;
IYBAOSL.nonlocals = A68_NIL;
KYBAOSL = A_OPSTRAIGHT(GYBAOSL,IYBAOSL,2,HYBAOSL) ;
OUBAOSL.data[29] = A_UNITE(JYBAOSL,mode22,22,KYBAOSL);
 /* line 70: */
MYBAOSL.fn.fn_global = LRAAOSL_newline;
MYBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[30] = A_UNITE(LYBAOSL,mode12,12,MYBAOSL);
 /* line 71: */
QYBAOSL = OYBAOSL ;
OUBAOSL.data[31] = A_UNITE(PYBAOSL,mode7,7,QYBAOSL);
SYBAOSL = 1.446 ;
OUBAOSL.data[32] = A_UNITE(RYBAOSL,mode10,10,SYBAOSL);
 /* line 72: */
UYBAOSL.fn.fn_global = LRAAOSL_newline;
UYBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[33] = A_UNITE(TYBAOSL,mode12,12,UYBAOSL);
 /* line 73: */
YYBAOSL = WYBAOSL ;
OUBAOSL.data[34] = A_UNITE(XYBAOSL,mode7,7,YYBAOSL);
IZBAOSL = A_HEAP(A68_COMPL ) ;
* IZBAOSL = IUBAOSL_cpl1 ;
KZBAOSL.fn.fn_global = BZBAOSL_straight;
KZBAOSL.nonlocals = A68_NIL;
MZBAOSL = A_OPSTRAIGHT(IZBAOSL,KZBAOSL,2,JZBAOSL) ;
OUBAOSL.data[35] = A_UNITE(LZBAOSL,mode22,22,MZBAOSL);
 /* line 74: */
OZBAOSL.fn.fn_global = LRAAOSL_newline;
OZBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[36] = A_UNITE(NZBAOSL,mode12,12,OZBAOSL);
 /* line 75: */
SZBAOSL = QZBAOSL ;
OUBAOSL.data[37] = A_UNITE(RZBAOSL,mode7,7,SZBAOSL);
OUBAOSL.data[38] = A_UNITE(TZBAOSL,mode8,8,MUBAOSL_booltrue);
OUBAOSL.data[39] = A_UNITE(UZBAOSL,mode8,8,NUBAOSL_boolfalse);
 /* line 76: */
WZBAOSL.fn.fn_global = LRAAOSL_newline;
WZBAOSL.nonlocals = A68_NIL;
OUBAOSL.data[40] = A_UNITE(VZBAOSL,mode12,12,WZBAOSL);
AACAOSL = YZBAOSL ;
OUBAOSL.data[41] = A_UNITE(ZZBAOSL,mode7,7,AACAOSL);
CACAOSL.fn.fn_global = LRAAOSL_newline;
CACAOSL.nonlocals = A68_NIL;
OUBAOSL.data[42] = A_UNITE(BACAOSL,mode12,12,CACAOSL);
GACAOSL = EACAOSL ;
OUBAOSL.data[43] = A_UNITE(FACAOSL,mode7,7,GACAOSL);
 /* line 77: */
IACAOSL.fn.fn_global = LRAAOSL_newline;
IACAOSL.nonlocals = A68_NIL;
OUBAOSL.data[44] = A_UNITE(HACAOSL,mode12,12,IACAOSL);
 /* line 78: */
MACAOSL = KACAOSL ;
OUBAOSL.data[45] = A_UNITE(LACAOSL,mode7,7,MACAOSL);
OACAOSL.fn.fn_global = LRAAOSL_newline;
OACAOSL.nonlocals = A68_NIL;
OUBAOSL.data[46] = A_UNITE(NACAOSL,mode12,12,OACAOSL);
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(PACAOSL,OUBAOSL,47,A68_100 ));
 /* line 84: */
 /* line 85: */
 /* line 86: */
QACAOSL.data[0] = SACAOSL;
 /* line 87: */
QACAOSL.data[1] = UACAOSL;
 /* line 88: */
QACAOSL.data[2] = WACAOSL;
 /* line 89: */
QACAOSL.data[3] = YACAOSL;
 /* line 90: */
QACAOSL.data[4] = ABCAOSL;
 /* line 91: */
QACAOSL.data[5] = CBCAOSL;
 /* line 92: */
QACAOSL.data[6] = EBCAOSL;
 /* line 93: */
QACAOSL.data[7] = GBCAOSL;
 /* line 94: */
QACAOSL.data[8] = IBCAOSL;
 /* line 95: */
QACAOSL.data[9] = KBCAOSL;
QACAOSL.data[10] = MBCAOSL;
OBCAOSL_instrings = A_HISVEC(NBCAOSL,QACAOSL,11,A68_VC );
 /* line 97: */
PBCAOSL_intop = OBCAOSL_instrings.upb;
 /* line 98: */
QBCAOSL_pos = 0;
 /* line 102: */
 /* line 113: */
 /* line 118: */
LLBAOSL_make_user_status( 1, &PCCAOSL );
QCCAOSL_io_buf_too_small = PCCAOSL;
 /* line 120: */
 /* line 137: */
DDCAOSL.fn.fn_global = TCCAOSL_get_next_line;
DDCAOSL.nonlocals = A68_NIL;
CDCAOSL = DDCAOSL ;
FDCAOSL_instream = XPAAOSL_make_channel(A_UNITE(EDCAOSL,mode2,2,BUBAOSL_inbuffer), A_UNITE(BDCAOSL,mode2,2,CDCAOSL));
 /* line 142: */
KDCAOSL = IDCAOSL ;
GDCAOSL.data[0] = A_UNITE(JDCAOSL,mode7,7,KDCAOSL);
MDCAOSL.fn.fn_global = LRAAOSL_newline;
MDCAOSL.nonlocals = A68_NIL;
GDCAOSL.data[1] = A_UNITE(LDCAOSL,mode12,12,MDCAOSL);
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(NDCAOSL,GDCAOSL,2,A68_100 ));
 /* line 143: */
 /* line 144: */
if ( ((*(&(FDCAOSL_instream->Charnumber)))!=82) )
{ 
SDCAOSL = QDCAOSL ;
ODCAOSL.data[0] = A_UNITE(RDCAOSL,mode7,7,SDCAOSL);
 /* line 145: */
UDCAOSL = (*(&(FDCAOSL_instream->Charnumber))) ;
ODCAOSL.data[1] = A_UNITE(TDCAOSL,mode1,1,UDCAOSL);
WDCAOSL.fn.fn_global = LRAAOSL_newline;
WDCAOSL.nonlocals = A68_NIL;
ODCAOSL.data[2] = A_UNITE(VDCAOSL,mode12,12,WDCAOSL);
 /* line 146: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(XDCAOSL,ODCAOSL,3,A68_100 ));
} 
 /* line 147: */
 /* line 148: */
if ( ((*(&(FDCAOSL_instream->Linenumber)))!=0) )
{ 
CECAOSL = AECAOSL ;
YDCAOSL.data[0] = A_UNITE(BECAOSL,mode7,7,CECAOSL);
 /* line 149: */
EECAOSL = (*(&(FDCAOSL_instream->Linenumber))) ;
YDCAOSL.data[1] = A_UNITE(DECAOSL,mode1,1,EECAOSL);
GECAOSL.fn.fn_global = LRAAOSL_newline;
GECAOSL.nonlocals = A68_NIL;
YDCAOSL.data[2] = A_UNITE(FECAOSL,mode12,12,GECAOSL);
 /* line 150: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(HECAOSL,YDCAOSL,3,A68_100 ));
} 
 /* line 151: */
 /* line 152: */
if ( ((*(&(FDCAOSL_instream->Width)))!=80) )
{ 
MECAOSL = KECAOSL ;
IECAOSL.data[0] = A_UNITE(LECAOSL,mode7,7,MECAOSL);
OECAOSL = (*(&(FDCAOSL_instream->Width))) ;
IECAOSL.data[1] = A_UNITE(NECAOSL,mode1,1,OECAOSL);
QECAOSL.fn.fn_global = LRAAOSL_newline;
QECAOSL.nonlocals = A68_NIL;
IECAOSL.data[2] = A_UNITE(PECAOSL,mode12,12,QECAOSL);
 /* line 153: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(RECAOSL,IECAOSL,3,A68_100 ));
} 
 /* line 154: */
 /* line 155: */
if ( ((*(&(FDCAOSL_instream->Indent)))!=0) )
{ 
WECAOSL = UECAOSL ;
SECAOSL.data[0] = A_UNITE(VECAOSL,mode7,7,WECAOSL);
YECAOSL = (*(&(FDCAOSL_instream->Indent))) ;
SECAOSL.data[1] = A_UNITE(XECAOSL,mode1,1,YECAOSL);
AFCAOSL.fn.fn_global = LRAAOSL_newline;
AFCAOSL.nonlocals = A68_NIL;
SECAOSL.data[2] = A_UNITE(ZECAOSL,mode12,12,AFCAOSL);
 /* line 156: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(BFCAOSL,SECAOSL,3,A68_100 ));
} 
 /* line 157: */
 /* line 158: */
if ( TPBAOSI_((*(&(FDCAOSL_instream->Status))), DPBAOSI_io_ok) )
{ 
 /* line 159: */
GFCAOSL = EFCAOSL ;
CFCAOSL.data[0] = A_UNITE(FFCAOSL,mode7,7,GFCAOSL);
IFCAOSL = (*(&((&(FDCAOSL_instream->Status))->Status))) ;
CFCAOSL.data[1] = A_UNITE(HFCAOSL,mode1,1,IFCAOSL);
KFCAOSL.fn.fn_global = LRAAOSL_newline;
KFCAOSL.nonlocals = A68_NIL;
CFCAOSL.data[2] = A_UNITE(JFCAOSL,mode12,12,KFCAOSL);
 /* line 160: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(LFCAOSL,CFCAOSL,3,A68_100 ));
} 
 /* line 161: */
 /* line 162: */
if ( (*(&(FDCAOSL_instream->Separate))) )
{ 
QFCAOSL = OFCAOSL ;
MFCAOSL.data[0] = A_UNITE(PFCAOSL,mode7,7,QFCAOSL);
SFCAOSL = (*(&(FDCAOSL_instream->Separate))) ;
MFCAOSL.data[1] = A_UNITE(RFCAOSL,mode8,8,SFCAOSL);
UFCAOSL.fn.fn_global = LRAAOSL_newline;
UFCAOSL.nonlocals = A68_NIL;
MFCAOSL.data[2] = A_UNITE(TFCAOSL,mode12,12,UFCAOSL);
 /* line 163: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(VFCAOSL,MFCAOSL,3,A68_100 ));
} 
 /* line 164: */
 /* line 165: */
if ( !(*(&(FDCAOSL_instream->Input))) )
{ 
AGCAOSL = YFCAOSL ;
WFCAOSL.data[0] = A_UNITE(ZFCAOSL,mode7,7,AGCAOSL);
CGCAOSL = (*(&(FDCAOSL_instream->Input))) ;
WFCAOSL.data[1] = A_UNITE(BGCAOSL,mode8,8,CGCAOSL);
EGCAOSL.fn.fn_global = LRAAOSL_newline;
EGCAOSL.nonlocals = A68_NIL;
WFCAOSL.data[2] = A_UNITE(DGCAOSL,mode12,12,EGCAOSL);
 /* line 166: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(FGCAOSL,WFCAOSL,3,A68_100 ));
} 
 /* line 167: */
 /* line 168: */
if ( !(*(&(FDCAOSL_instream->Buffered))) )
{ 
KGCAOSL = IGCAOSL ;
GGCAOSL.data[0] = A_UNITE(JGCAOSL,mode7,7,KGCAOSL);
MGCAOSL = (*(&(FDCAOSL_instream->Buffered))) ;
GGCAOSL.data[1] = A_UNITE(LGCAOSL,mode8,8,MGCAOSL);
OGCAOSL.fn.fn_global = LRAAOSL_newline;
OGCAOSL.nonlocals = A68_NIL;
GGCAOSL.data[2] = A_UNITE(NGCAOSL,mode12,12,OGCAOSL);
 /* line 169: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(PGCAOSL,GGCAOSL,3,A68_100 ));
} 
 /* line 170: */
 /* line 171: */
QGCAOSL = (*(&(FDCAOSL_instream->Buffer))) ;
if ( A_VSTRUCTCOMP(QGCAOSL,YNAAOSL_nilstr) )
{ 
VGCAOSL = TGCAOSL ;
RGCAOSL.data[0] = A_UNITE(UGCAOSL,mode7,7,VGCAOSL);
XGCAOSL.fn.fn_global = LRAAOSL_newline;
XGCAOSL.nonlocals = A68_NIL;
RGCAOSL.data[1] = A_UNITE(WGCAOSL,mode12,12,XGCAOSL);
 /* line 172: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(YGCAOSL,RGCAOSL,2,A68_100 ));
} 
 /* line 178: */
 /* line 179: */
CHCAOSL_generator( A68_TRUE, &GHCAOSL );
FHCAOSL_threeints = GHCAOSL;
 /* line 181: */
for ( ;; )
{ 
 /* line 182: */
MOBAOSL_getstatus( FDCAOSL_instream, &HHCAOSL );
if ( !(PPBAOSI_(HHCAOSL, DPBAOSI_io_ok)) ) break;
 /* line 183: */
if ( (QBCAOSL_pos==3) )
{ 
IHCAOSL.data[0] = A_UNITE(JHCAOSL,mode3,3,FHCAOSL_threeints);
LHCAOSL.fn.fn_global = LRAAOSL_newline;
LHCAOSL.nonlocals = A68_NIL;
IHCAOSL.data[1] = A_UNITE(KHCAOSL,mode16,16,LHCAOSL);
AQBAOSL_get(FDCAOSL_instream, A_HISVEC(MHCAOSL,IHCAOSL,2,A68_140 ));
 /* line 184: */
RHCAOSL = PHCAOSL ;
NHCAOSL.data[0] = A_UNITE(QHCAOSL,mode7,7,RHCAOSL);
SHCAOSL = 1 ;
UHCAOSL = (*(&A_R1INDEX(FHCAOSL_threeints,SHCAOSL))) ;
NHCAOSL.data[1] = A_UNITE(THCAOSL,mode1,1,UHCAOSL);
 /* line 185: */
WHCAOSL.fn.fn_global = LRAAOSL_newline;
WHCAOSL.nonlocals = A68_NIL;
NHCAOSL.data[2] = A_UNITE(VHCAOSL,mode12,12,WHCAOSL);
AICAOSL = YHCAOSL ;
NHCAOSL.data[3] = A_UNITE(ZHCAOSL,mode7,7,AICAOSL);
BICAOSL = 2 ;
DICAOSL = (*(&A_R1INDEX(FHCAOSL_threeints,BICAOSL))) ;
NHCAOSL.data[4] = A_UNITE(CICAOSL,mode1,1,DICAOSL);
 /* line 186: */
FICAOSL.fn.fn_global = LRAAOSL_newline;
FICAOSL.nonlocals = A68_NIL;
NHCAOSL.data[5] = A_UNITE(EICAOSL,mode12,12,FICAOSL);
JICAOSL = HICAOSL ;
NHCAOSL.data[6] = A_UNITE(IICAOSL,mode7,7,JICAOSL);
KICAOSL = 3 ;
MICAOSL = (*(&A_R1INDEX(FHCAOSL_threeints,KICAOSL))) ;
NHCAOSL.data[7] = A_UNITE(LICAOSL,mode1,1,MICAOSL);
OICAOSL.fn.fn_global = LRAAOSL_newline;
OICAOSL.nonlocals = A68_NIL;
NHCAOSL.data[8] = A_UNITE(NICAOSL,mode12,12,OICAOSL);
 /* line 187: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(PICAOSL,NHCAOSL,9,A68_100 ));
} 
else
{ 
 /* line 188: */
if ( (QBCAOSL_pos==4) )
{ 
AJCAOSL = (&FUBAOSL_ip1) ;
CJCAOSL.fn.fn_global = TICAOSL_straight;
CJCAOSL.nonlocals = A68_NIL;
EJCAOSL = A_OPSTRAIGHT(AJCAOSL,CJCAOSL,2,BJCAOSL) ;
QICAOSL.data[0] = A_UNITE(DJCAOSL,mode17,17,EJCAOSL);
FJCAOSL = (&HUBAOSL_ip2) ;
HJCAOSL.fn.fn_global = TICAOSL_straight;
HJCAOSL.nonlocals = A68_NIL;
JJCAOSL = A_OPSTRAIGHT(FJCAOSL,HJCAOSL,2,GJCAOSL) ;
QICAOSL.data[1] = A_UNITE(IJCAOSL,mode17,17,JJCAOSL);
LJCAOSL.fn.fn_global = LRAAOSL_newline;
LJCAOSL.nonlocals = A68_NIL;
QICAOSL.data[2] = A_UNITE(KJCAOSL,mode16,16,LJCAOSL);
AQBAOSL_get(FDCAOSL_instream, A_HISVEC(MJCAOSL,QICAOSL,3,A68_140 ));
 /* line 189: */
RJCAOSL = PJCAOSL ;
NJCAOSL.data[0] = A_UNITE(QJCAOSL,mode7,7,RJCAOSL);
SJCAOSL = A_HEAP(A68_169 ) ;
* SJCAOSL = FUBAOSL_ip1 ;
UJCAOSL.fn.fn_global = OXBAOSL_straight;
UJCAOSL.nonlocals = A68_NIL;
WJCAOSL = A_OPSTRAIGHT(SJCAOSL,UJCAOSL,2,TJCAOSL) ;
NJCAOSL.data[1] = A_UNITE(VJCAOSL,mode22,22,WJCAOSL);
 /* line 190: */
YJCAOSL.fn.fn_global = LRAAOSL_newline;
YJCAOSL.nonlocals = A68_NIL;
NJCAOSL.data[2] = A_UNITE(XJCAOSL,mode12,12,YJCAOSL);
CKCAOSL = AKCAOSL ;
NJCAOSL.data[3] = A_UNITE(BKCAOSL,mode7,7,CKCAOSL);
DKCAOSL = A_HEAP(A68_169 ) ;
* DKCAOSL = HUBAOSL_ip2 ;
FKCAOSL.fn.fn_global = OXBAOSL_straight;
FKCAOSL.nonlocals = A68_NIL;
HKCAOSL = A_OPSTRAIGHT(DKCAOSL,FKCAOSL,2,EKCAOSL) ;
NJCAOSL.data[4] = A_UNITE(GKCAOSL,mode22,22,HKCAOSL);
JKCAOSL.fn.fn_global = LRAAOSL_newline;
JKCAOSL.nonlocals = A68_NIL;
NJCAOSL.data[5] = A_UNITE(IKCAOSL,mode12,12,JKCAOSL);
 /* line 191: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(KKCAOSL,NJCAOSL,6,A68_100 ));
} 
else
{ 
 /* line 192: */
if ( (QBCAOSL_pos==5) )
{ 
LKCAOSL.data[0] = A_UNITE(MKCAOSL,mode4,4,(&KUBAOSL_bb));
OKCAOSL.fn.fn_global = LRAAOSL_newline;
OKCAOSL.nonlocals = A68_NIL;
LKCAOSL.data[1] = A_UNITE(NKCAOSL,mode16,16,OKCAOSL);
AQBAOSL_get(FDCAOSL_instream, A_HISVEC(PKCAOSL,LKCAOSL,2,A68_140 ));
 /* line 193: */
UKCAOSL = SKCAOSL ;
QKCAOSL.data[0] = A_UNITE(TKCAOSL,mode7,7,UKCAOSL);
QKCAOSL.data[1] = A_UNITE(VKCAOSL,mode3,3,KUBAOSL_bb);
XKCAOSL.fn.fn_global = LRAAOSL_newline;
XKCAOSL.nonlocals = A68_NIL;
QKCAOSL.data[2] = A_UNITE(WKCAOSL,mode12,12,XKCAOSL);
 /* line 194: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(YKCAOSL,QKCAOSL,3,A68_100 ));
} 
else
{ 
 /* line 195: */
if ( (QBCAOSL_pos==6) )
{ 
ZKCAOSL.data[0] = A_UNITE(ALCAOSL,mode10,10,(&MUBAOSL_booltrue));
ZKCAOSL.data[1] = A_UNITE(BLCAOSL,mode10,10,(&NUBAOSL_boolfalse));
DLCAOSL.fn.fn_global = LRAAOSL_newline;
DLCAOSL.nonlocals = A68_NIL;
ZKCAOSL.data[2] = A_UNITE(CLCAOSL,mode16,16,DLCAOSL);
AQBAOSL_get(FDCAOSL_instream, A_HISVEC(ELCAOSL,ZKCAOSL,3,A68_140 ));
 /* line 196: */
JLCAOSL = HLCAOSL ;
FLCAOSL.data[0] = A_UNITE(ILCAOSL,mode7,7,JLCAOSL);
FLCAOSL.data[1] = A_UNITE(KLCAOSL,mode8,8,MUBAOSL_booltrue);
FLCAOSL.data[2] = A_UNITE(LLCAOSL,mode8,8,NUBAOSL_boolfalse);
NLCAOSL.fn.fn_global = LRAAOSL_newline;
NLCAOSL.nonlocals = A68_NIL;
FLCAOSL.data[3] = A_UNITE(MLCAOSL,mode12,12,NLCAOSL);
 /* line 197: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(OLCAOSL,FLCAOSL,4,A68_100 ));
} 
else
{ 
 /* line 198: */
if ( (QBCAOSL_pos==7) )
{ 
PLCAOSL.data[0] = A_UNITE(QLCAOSL,mode13,13,(&ZGCAOSL_rtmp1));
PLCAOSL.data[1] = A_UNITE(RLCAOSL,mode13,13,(&AHCAOSL_rtmp2));
TLCAOSL.fn.fn_global = LRAAOSL_newline;
TLCAOSL.nonlocals = A68_NIL;
PLCAOSL.data[2] = A_UNITE(SLCAOSL,mode16,16,TLCAOSL);
AQBAOSL_get(FDCAOSL_instream, A_HISVEC(ULCAOSL,PLCAOSL,3,A68_140 ));
 /* line 199: */
 /* line 200: */
ZLCAOSL = XLCAOSL ;
VLCAOSL.data[0] = A_UNITE(YLCAOSL,mode7,7,ZLCAOSL);
RCAAOSL_fixed( A_UNITE(AMCAOSL,mode4,4,ZGCAOSL_rtmp1), (-6), 3, &BMCAOSL );
VLCAOSL.data[1] = A_UNITE(CMCAOSL,mode7,7,BMCAOSL);
 /* line 201: */
EMCAOSL.fn.fn_global = LRAAOSL_newline;
EMCAOSL.nonlocals = A68_NIL;
VLCAOSL.data[2] = A_UNITE(DMCAOSL,mode12,12,EMCAOSL);
 /* line 202: */
IMCAOSL = GMCAOSL ;
VLCAOSL.data[3] = A_UNITE(HMCAOSL,mode7,7,IMCAOSL);
RCAAOSL_fixed( A_UNITE(JMCAOSL,mode4,4,AHCAOSL_rtmp2), (-6), 3, &KMCAOSL );
VLCAOSL.data[4] = A_UNITE(LMCAOSL,mode7,7,KMCAOSL);
NMCAOSL.fn.fn_global = LRAAOSL_newline;
NMCAOSL.nonlocals = A68_NIL;
VLCAOSL.data[5] = A_UNITE(MMCAOSL,mode12,12,NMCAOSL);
 /* line 203: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(OMCAOSL,VLCAOSL,6,A68_100 ));
} 
else
{ 
BOBAOSL_getstr( FDCAOSL_instream, &QMCAOSL );
PMCAOSL.data[0] = A_UNITE(RMCAOSL,mode7,7,QMCAOSL);
TMCAOSL.fn.fn_global = LRAAOSL_newline;
TMCAOSL.nonlocals = A68_NIL;
PMCAOSL.data[1] = A_UNITE(SMCAOSL,mode12,12,TMCAOSL);
 /* line 204: */
 /* line 205: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(UMCAOSL,PMCAOSL,2,A68_100 ));
} 
} 
} 
} 
} 
}
 /* line 207: */
TBCAOSL_checkerr(FDCAOSL_instream, WMCAOSL);
 /* line 211: */
ZMCAOSL.fn.fn_global = LRAAOSL_newline;
ZMCAOSL.nonlocals = A68_NIL;
XMCAOSL.data[0] = A_UNITE(YMCAOSL,mode16,16,ZMCAOSL);
XMCAOSL.data[1] = A_UNITE(ANCAOSL,mode8,8,BUBAOSL_inbuffer);
AQBAOSL_get(ASBAOSL_stdinchan, A_HISVEC(BNCAOSL,XMCAOSL,2,A68_140 ));
 /* line 213: */
QOBAOSL_strtrim( BUBAOSL_inbuffer, &CNCAOSL );
DNCAOSL_tmpstr = CNCAOSL;
 /* line 215: */
ENCAOSL = (DNCAOSL_tmpstr.upb>0);
if ( ENCAOSL )
{ENCAOSL = A_VC_NE(DNCAOSL_tmpstr,A_VINDEX(OBCAOSL_instrings,PBCAOSL_intop));
}
 /* line 216: */
if ( ENCAOSL )
{ 
 /* line 217: */
JNCAOSL = HNCAOSL ;
FNCAOSL.data[0] = A_UNITE(INCAOSL,mode7,7,JNCAOSL);
LNCAOSL.fn.fn_global = LRAAOSL_newline;
LNCAOSL.nonlocals = A68_NIL;
FNCAOSL.data[1] = A_UNITE(KNCAOSL,mode12,12,LNCAOSL);
 /* line 218: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(MNCAOSL,FNCAOSL,2,A68_100 ));
} 
 /* line 219: */
 /* line 220: */
 /* line 221: */
RNCAOSL = PNCAOSL ;
NNCAOSL.data[0] = A_UNITE(QNCAOSL,mode7,7,RNCAOSL);
 /* line 222: */
TNCAOSL.fn.fn_global = LRAAOSL_newline;
TNCAOSL.nonlocals = A68_NIL;
NNCAOSL.data[1] = A_UNITE(SNCAOSL,mode12,12,TNCAOSL);
VNCAOSL = '\'' ;
NNCAOSL.data[2] = A_UNITE(UNCAOSL,mode6,6,VNCAOSL);
NNCAOSL.data[3] = A_UNITE(WNCAOSL,mode7,7,DNCAOSL_tmpstr);
YNCAOSL = '\'' ;
NNCAOSL.data[4] = A_UNITE(XNCAOSL,mode6,6,YNCAOSL);
AOCAOSL.fn.fn_global = LRAAOSL_newline;
AOCAOSL.nonlocals = A68_NIL;
NNCAOSL.data[5] = A_UNITE(ZNCAOSL,mode12,12,AOCAOSL);
COCAOSL.fn.fn_global = LRAAOSL_newline;
COCAOSL.nonlocals = A68_NIL;
NNCAOSL.data[6] = A_UNITE(BOCAOSL,mode12,12,COCAOSL);
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(DOCAOSL,NNCAOSL,7,A68_100 ));
 /* line 223: */
TBCAOSL_checkerr(ASBAOSL_stdinchan, FOCAOSL);
 /* line 228: */
GOCAOSL_outfile = FQBAOSI_open_file(WTBAOSL_testfilename, TNBAOSI_write_access, ZLBAOSI_global_msg);
 /* line 230: */
 /* line 232: */
MOCAOSL.fn.fn_global = IOCAOSL_put_out_line;
MOCAOSL.nonlocals = A68_NIL;
LOCAOSL = MOCAOSL ;
OOCAOSL = 80 ;
POCAOSL_outchan = XPAAOSL_make_channel(A_UNITE(NOCAOSL,mode1,1,OOCAOSL), A_UNITE(KOCAOSL,mode1,1,LOCAOSL));
 /* line 234: */
UOCAOSL = SOCAOSL ;
QOCAOSL.data[0] = A_UNITE(TOCAOSL,mode7,7,UOCAOSL);
WOCAOSL.fn.fn_global = LRAAOSL_newline;
WOCAOSL.nonlocals = A68_NIL;
QOCAOSL.data[1] = A_UNITE(VOCAOSL,mode12,12,WOCAOSL);
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(XOCAOSL,QOCAOSL,2,A68_100 ));
 /* line 235: */
 /* line 236: */
if ( ((*(&(POCAOSL_outchan->Charnumber)))!=1) )
{ 
CPCAOSL = APCAOSL ;
YOCAOSL.data[0] = A_UNITE(BPCAOSL,mode7,7,CPCAOSL);
 /* line 237: */
EPCAOSL = (*(&(POCAOSL_outchan->Charnumber))) ;
YOCAOSL.data[1] = A_UNITE(DPCAOSL,mode1,1,EPCAOSL);
GPCAOSL.fn.fn_global = LRAAOSL_newline;
GPCAOSL.nonlocals = A68_NIL;
YOCAOSL.data[2] = A_UNITE(FPCAOSL,mode12,12,GPCAOSL);
 /* line 238: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(HPCAOSL,YOCAOSL,3,A68_100 ));
} 
 /* line 239: */
 /* line 240: */
if ( ((*(&(POCAOSL_outchan->Linenumber)))!=1) )
{ 
MPCAOSL = KPCAOSL ;
IPCAOSL.data[0] = A_UNITE(LPCAOSL,mode7,7,MPCAOSL);
 /* line 241: */
OPCAOSL = (*(&(POCAOSL_outchan->Linenumber))) ;
IPCAOSL.data[1] = A_UNITE(NPCAOSL,mode1,1,OPCAOSL);
QPCAOSL.fn.fn_global = LRAAOSL_newline;
QPCAOSL.nonlocals = A68_NIL;
IPCAOSL.data[2] = A_UNITE(PPCAOSL,mode12,12,QPCAOSL);
 /* line 242: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(RPCAOSL,IPCAOSL,3,A68_100 ));
} 
 /* line 243: */
 /* line 244: */
if ( ((*(&(POCAOSL_outchan->Width)))!=80) )
{ 
WPCAOSL = UPCAOSL ;
SPCAOSL.data[0] = A_UNITE(VPCAOSL,mode7,7,WPCAOSL);
YPCAOSL = (*(&(POCAOSL_outchan->Width))) ;
SPCAOSL.data[1] = A_UNITE(XPCAOSL,mode1,1,YPCAOSL);
AQCAOSL.fn.fn_global = LRAAOSL_newline;
AQCAOSL.nonlocals = A68_NIL;
SPCAOSL.data[2] = A_UNITE(ZPCAOSL,mode12,12,AQCAOSL);
 /* line 245: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(BQCAOSL,SPCAOSL,3,A68_100 ));
} 
 /* line 246: */
 /* line 247: */
if ( ((*(&(POCAOSL_outchan->Indent)))!=0) )
{ 
GQCAOSL = EQCAOSL ;
CQCAOSL.data[0] = A_UNITE(FQCAOSL,mode7,7,GQCAOSL);
IQCAOSL = (*(&(POCAOSL_outchan->Indent))) ;
CQCAOSL.data[1] = A_UNITE(HQCAOSL,mode1,1,IQCAOSL);
KQCAOSL.fn.fn_global = LRAAOSL_newline;
KQCAOSL.nonlocals = A68_NIL;
CQCAOSL.data[2] = A_UNITE(JQCAOSL,mode12,12,KQCAOSL);
 /* line 248: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(LQCAOSL,CQCAOSL,3,A68_100 ));
} 
 /* line 249: */
 /* line 250: */
if ( TPBAOSI_((*(&(POCAOSL_outchan->Status))), DPBAOSI_io_ok) )
{ 
 /* line 251: */
QQCAOSL = OQCAOSL ;
MQCAOSL.data[0] = A_UNITE(PQCAOSL,mode7,7,QQCAOSL);
SQCAOSL = (*(&((&(POCAOSL_outchan->Status))->Status))) ;
MQCAOSL.data[1] = A_UNITE(RQCAOSL,mode1,1,SQCAOSL);
UQCAOSL.fn.fn_global = LRAAOSL_newline;
UQCAOSL.nonlocals = A68_NIL;
MQCAOSL.data[2] = A_UNITE(TQCAOSL,mode12,12,UQCAOSL);
 /* line 252: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(VQCAOSL,MQCAOSL,3,A68_100 ));
} 
 /* line 253: */
 /* line 254: */
if ( (*(&(POCAOSL_outchan->Separate))) )
{ 
ARCAOSL = YQCAOSL ;
WQCAOSL.data[0] = A_UNITE(ZQCAOSL,mode7,7,ARCAOSL);
CRCAOSL = (*(&(POCAOSL_outchan->Separate))) ;
WQCAOSL.data[1] = A_UNITE(BRCAOSL,mode8,8,CRCAOSL);
ERCAOSL.fn.fn_global = LRAAOSL_newline;
ERCAOSL.nonlocals = A68_NIL;
WQCAOSL.data[2] = A_UNITE(DRCAOSL,mode12,12,ERCAOSL);
 /* line 255: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(FRCAOSL,WQCAOSL,3,A68_100 ));
} 
 /* line 256: */
 /* line 257: */
if ( (*(&(POCAOSL_outchan->Input))) )
{ 
KRCAOSL = IRCAOSL ;
GRCAOSL.data[0] = A_UNITE(JRCAOSL,mode7,7,KRCAOSL);
MRCAOSL = (*(&(POCAOSL_outchan->Input))) ;
GRCAOSL.data[1] = A_UNITE(LRCAOSL,mode8,8,MRCAOSL);
ORCAOSL.fn.fn_global = LRAAOSL_newline;
ORCAOSL.nonlocals = A68_NIL;
GRCAOSL.data[2] = A_UNITE(NRCAOSL,mode12,12,ORCAOSL);
 /* line 258: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(PRCAOSL,GRCAOSL,3,A68_100 ));
} 
 /* line 259: */
 /* line 260: */
if ( (*(&(POCAOSL_outchan->Buffered))) )
{ 
URCAOSL = SRCAOSL ;
QRCAOSL.data[0] = A_UNITE(TRCAOSL,mode7,7,URCAOSL);
WRCAOSL = (*(&(POCAOSL_outchan->Buffered))) ;
QRCAOSL.data[1] = A_UNITE(VRCAOSL,mode8,8,WRCAOSL);
YRCAOSL.fn.fn_global = LRAAOSL_newline;
YRCAOSL.nonlocals = A68_NIL;
QRCAOSL.data[2] = A_UNITE(XRCAOSL,mode12,12,YRCAOSL);
 /* line 261: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(ZRCAOSL,QRCAOSL,3,A68_100 ));
} 
 /* line 262: */
 /* line 263: */
ASCAOSL = (*(&(POCAOSL_outchan->Buffer))) ;
if ( ! A_VSTRUCTCOMP(ASCAOSL,YNAAOSL_nilstr) )
{ 
FSCAOSL = DSCAOSL ;
BSCAOSL.data[0] = A_UNITE(ESCAOSL,mode7,7,FSCAOSL);
HSCAOSL.fn.fn_global = LRAAOSL_newline;
HSCAOSL.nonlocals = A68_NIL;
BSCAOSL.data[1] = A_UNITE(GSCAOSL,mode12,12,HSCAOSL);
 /* line 264: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(ISCAOSL,BSCAOSL,2,A68_100 ));
} 
 /* line 266: */
NSCAOSL = LSCAOSL ;
JSCAOSL.data[0] = A_UNITE(MSCAOSL,mode7,7,NSCAOSL);
PSCAOSL.fn.fn_global = LRAAOSL_newline;
PSCAOSL.nonlocals = A68_NIL;
JSCAOSL.data[1] = A_UNITE(OSCAOSL,mode12,12,PSCAOSL);
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(QSCAOSL,JSCAOSL,2,A68_100 ));
 /* line 267: */
OCCAOSL_restart_stream(FDCAOSL_instream);
 /* line 268: */
for ( ;; )
{ 
 /* line 269: */
MOBAOSL_getstatus( FDCAOSL_instream, &RSCAOSL );
if ( !(PPBAOSI_(RSCAOSL, DPBAOSI_io_ok)) ) break;
BOBAOSL_getstr( FDCAOSL_instream, &TSCAOSL );
SSCAOSL.data[0] = A_UNITE(USCAOSL,mode7,7,TSCAOSL);
WSCAOSL.fn.fn_global = LRAAOSL_newline;
WSCAOSL.nonlocals = A68_NIL;
SSCAOSL.data[1] = A_UNITE(VSCAOSL,mode12,12,WSCAOSL);
 /* line 270: */
GFBAOSL_put(POCAOSL_outchan, A_HISVEC(XSCAOSL,SSCAOSL,2,A68_100 ));
}
 /* line 271: */
XQBAOSI_close_file(GOCAOSL_outfile, ZLBAOSI_global_msg);
 /* line 273: */
YSCAOSL_infile = FQBAOSI_open_file(WTBAOSL_testfilename, PNBAOSI_read_access, ZLBAOSI_global_msg);
 /* line 275: */
 /* line 278: */
GTCAOSL.fn.fn_global = BTCAOSL_get_in_line;
GTCAOSL.nonlocals = A68_NIL;
FTCAOSL = GTCAOSL ;
ITCAOSL = 80 ;
JTCAOSL_inchan = XPAAOSL_make_channel(A_UNITE(HTCAOSL,mode1,1,ITCAOSL), A_UNITE(ETCAOSL,mode2,2,FTCAOSL));
 /* line 280: */
OTCAOSL = MTCAOSL ;
KTCAOSL.data[0] = A_UNITE(NTCAOSL,mode7,7,OTCAOSL);
QTCAOSL.fn.fn_global = LRAAOSL_newline;
QTCAOSL.nonlocals = A68_NIL;
KTCAOSL.data[1] = A_UNITE(PTCAOSL,mode12,12,QTCAOSL);
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(RTCAOSL,KTCAOSL,2,A68_100 ));
 /* line 281: */
 /* line 282: */
if ( ((*(&(JTCAOSL_inchan->Charnumber)))!=82) )
{ 
WTCAOSL = UTCAOSL ;
STCAOSL.data[0] = A_UNITE(VTCAOSL,mode7,7,WTCAOSL);
 /* line 283: */
YTCAOSL = (*(&(JTCAOSL_inchan->Charnumber))) ;
STCAOSL.data[1] = A_UNITE(XTCAOSL,mode1,1,YTCAOSL);
AUCAOSL.fn.fn_global = LRAAOSL_newline;
AUCAOSL.nonlocals = A68_NIL;
STCAOSL.data[2] = A_UNITE(ZTCAOSL,mode12,12,AUCAOSL);
 /* line 284: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(BUCAOSL,STCAOSL,3,A68_100 ));
} 
 /* line 285: */
 /* line 286: */
if ( ((*(&(JTCAOSL_inchan->Linenumber)))!=0) )
{ 
GUCAOSL = EUCAOSL ;
CUCAOSL.data[0] = A_UNITE(FUCAOSL,mode7,7,GUCAOSL);
 /* line 287: */
IUCAOSL = (*(&(JTCAOSL_inchan->Linenumber))) ;
CUCAOSL.data[1] = A_UNITE(HUCAOSL,mode1,1,IUCAOSL);
KUCAOSL.fn.fn_global = LRAAOSL_newline;
KUCAOSL.nonlocals = A68_NIL;
CUCAOSL.data[2] = A_UNITE(JUCAOSL,mode12,12,KUCAOSL);
 /* line 288: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(LUCAOSL,CUCAOSL,3,A68_100 ));
} 
 /* line 289: */
 /* line 290: */
if ( ((*(&(JTCAOSL_inchan->Width)))!=80) )
{ 
QUCAOSL = OUCAOSL ;
MUCAOSL.data[0] = A_UNITE(PUCAOSL,mode7,7,QUCAOSL);
SUCAOSL = (*(&(JTCAOSL_inchan->Width))) ;
MUCAOSL.data[1] = A_UNITE(RUCAOSL,mode1,1,SUCAOSL);
UUCAOSL.fn.fn_global = LRAAOSL_newline;
UUCAOSL.nonlocals = A68_NIL;
MUCAOSL.data[2] = A_UNITE(TUCAOSL,mode12,12,UUCAOSL);
 /* line 291: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(VUCAOSL,MUCAOSL,3,A68_100 ));
} 
 /* line 292: */
 /* line 293: */
if ( ((*(&(JTCAOSL_inchan->Indent)))!=0) )
{ 
AVCAOSL = YUCAOSL ;
WUCAOSL.data[0] = A_UNITE(ZUCAOSL,mode7,7,AVCAOSL);
CVCAOSL = (*(&(JTCAOSL_inchan->Indent))) ;
WUCAOSL.data[1] = A_UNITE(BVCAOSL,mode1,1,CVCAOSL);
EVCAOSL.fn.fn_global = LRAAOSL_newline;
EVCAOSL.nonlocals = A68_NIL;
WUCAOSL.data[2] = A_UNITE(DVCAOSL,mode12,12,EVCAOSL);
 /* line 294: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(FVCAOSL,WUCAOSL,3,A68_100 ));
} 
 /* line 295: */
 /* line 296: */
if ( TPBAOSI_((*(&(JTCAOSL_inchan->Status))), DPBAOSI_io_ok) )
{ 
 /* line 297: */
KVCAOSL = IVCAOSL ;
GVCAOSL.data[0] = A_UNITE(JVCAOSL,mode7,7,KVCAOSL);
MVCAOSL = (*(&((&(JTCAOSL_inchan->Status))->Status))) ;
GVCAOSL.data[1] = A_UNITE(LVCAOSL,mode1,1,MVCAOSL);
OVCAOSL.fn.fn_global = LRAAOSL_newline;
OVCAOSL.nonlocals = A68_NIL;
GVCAOSL.data[2] = A_UNITE(NVCAOSL,mode12,12,OVCAOSL);
 /* line 298: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(PVCAOSL,GVCAOSL,3,A68_100 ));
} 
 /* line 299: */
 /* line 300: */
if ( (*(&(JTCAOSL_inchan->Separate))) )
{ 
UVCAOSL = SVCAOSL ;
QVCAOSL.data[0] = A_UNITE(TVCAOSL,mode7,7,UVCAOSL);
WVCAOSL = (*(&(JTCAOSL_inchan->Separate))) ;
QVCAOSL.data[1] = A_UNITE(VVCAOSL,mode8,8,WVCAOSL);
YVCAOSL.fn.fn_global = LRAAOSL_newline;
YVCAOSL.nonlocals = A68_NIL;
QVCAOSL.data[2] = A_UNITE(XVCAOSL,mode12,12,YVCAOSL);
 /* line 301: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(ZVCAOSL,QVCAOSL,3,A68_100 ));
} 
 /* line 302: */
 /* line 303: */
if ( !(*(&(JTCAOSL_inchan->Input))) )
{ 
EWCAOSL = CWCAOSL ;
AWCAOSL.data[0] = A_UNITE(DWCAOSL,mode7,7,EWCAOSL);
GWCAOSL = (*(&(JTCAOSL_inchan->Input))) ;
AWCAOSL.data[1] = A_UNITE(FWCAOSL,mode8,8,GWCAOSL);
IWCAOSL.fn.fn_global = LRAAOSL_newline;
IWCAOSL.nonlocals = A68_NIL;
AWCAOSL.data[2] = A_UNITE(HWCAOSL,mode12,12,IWCAOSL);
 /* line 304: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(JWCAOSL,AWCAOSL,3,A68_100 ));
} 
 /* line 305: */
 /* line 306: */
if ( (*(&(JTCAOSL_inchan->Buffered))) )
{ 
OWCAOSL = MWCAOSL ;
KWCAOSL.data[0] = A_UNITE(NWCAOSL,mode7,7,OWCAOSL);
QWCAOSL = (*(&(JTCAOSL_inchan->Buffered))) ;
KWCAOSL.data[1] = A_UNITE(PWCAOSL,mode8,8,QWCAOSL);
SWCAOSL.fn.fn_global = LRAAOSL_newline;
SWCAOSL.nonlocals = A68_NIL;
KWCAOSL.data[2] = A_UNITE(RWCAOSL,mode12,12,SWCAOSL);
 /* line 307: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(TWCAOSL,KWCAOSL,3,A68_100 ));
} 
 /* line 308: */
 /* line 309: */
UWCAOSL = (*(&(JTCAOSL_inchan->Buffer))) ;
if ( A_VSTRUCTCOMP(UWCAOSL,YNAAOSL_nilstr) )
{ 
ZWCAOSL = XWCAOSL ;
VWCAOSL.data[0] = A_UNITE(YWCAOSL,mode7,7,ZWCAOSL);
BXCAOSL.fn.fn_global = LRAAOSL_newline;
BXCAOSL.nonlocals = A68_NIL;
VWCAOSL.data[1] = A_UNITE(AXCAOSL,mode12,12,BXCAOSL);
 /* line 310: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(CXCAOSL,VWCAOSL,2,A68_100 ));
} 
 /* line 312: */
HXCAOSL = FXCAOSL ;
DXCAOSL.data[0] = A_UNITE(GXCAOSL,mode7,7,HXCAOSL);
JXCAOSL.fn.fn_global = LRAAOSL_newline;
JXCAOSL.nonlocals = A68_NIL;
DXCAOSL.data[1] = A_UNITE(IXCAOSL,mode12,12,JXCAOSL);
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(KXCAOSL,DXCAOSL,2,A68_100 ));
 /* line 313: */
OCCAOSL_restart_stream(FDCAOSL_instream);
 /* line 314: */
for ( ;; )
{ 
 /* line 315: */
MOBAOSL_getstatus( JTCAOSL_inchan, &LXCAOSL );
if ( !(PPBAOSI_(LXCAOSL, DPBAOSI_io_ok)) ) break;
BOBAOSL_getstr( FDCAOSL_instream, &MXCAOSL );
NXCAOSL_str1 = MXCAOSL;
 /* line 316: */
BOBAOSL_getstr( JTCAOSL_inchan, &OXCAOSL );
PXCAOSL_str2 = OXCAOSL;
 /* line 317: */
 /* line 318: */
if ( A_VC_NE(NXCAOSL_str1,PXCAOSL_str2) )
{ 
 /* line 319: */
UXCAOSL = SXCAOSL ;
QXCAOSL.data[0] = A_UNITE(TXCAOSL,mode7,7,UXCAOSL);
WXCAOSL = BPAAOSL_linenumber(JTCAOSL_inchan) ;
QXCAOSL.data[1] = A_UNITE(VXCAOSL,mode1,1,WXCAOSL);
 /* line 320: */
YXCAOSL.fn.fn_global = LRAAOSL_newline;
YXCAOSL.nonlocals = A68_NIL;
QXCAOSL.data[2] = A_UNITE(XXCAOSL,mode12,12,YXCAOSL);
AYCAOSL = '\'' ;
QXCAOSL.data[3] = A_UNITE(ZXCAOSL,mode6,6,AYCAOSL);
QXCAOSL.data[4] = A_UNITE(BYCAOSL,mode7,7,NXCAOSL_str1);
DYCAOSL = '\'' ;
QXCAOSL.data[5] = A_UNITE(CYCAOSL,mode6,6,DYCAOSL);
 /* line 321: */
FYCAOSL.fn.fn_global = LRAAOSL_newline;
FYCAOSL.nonlocals = A68_NIL;
QXCAOSL.data[6] = A_UNITE(EYCAOSL,mode12,12,FYCAOSL);
HYCAOSL = '\'' ;
QXCAOSL.data[7] = A_UNITE(GYCAOSL,mode6,6,HYCAOSL);
QXCAOSL.data[8] = A_UNITE(IYCAOSL,mode7,7,PXCAOSL_str2);
KYCAOSL = '\'' ;
QXCAOSL.data[9] = A_UNITE(JYCAOSL,mode6,6,KYCAOSL);
MYCAOSL.fn.fn_global = LRAAOSL_newline;
MYCAOSL.nonlocals = A68_NIL;
QXCAOSL.data[10] = A_UNITE(LYCAOSL,mode12,12,MYCAOSL);
 /* line 322: */
 /* line 323: */
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(NYCAOSL,QXCAOSL,11,A68_100 ));
} 
}
 /* line 324: */
XQBAOSI_close_file(YSCAOSL_infile, ZLBAOSI_global_msg);
 /* line 326: */
SYCAOSL = QYCAOSL ;
OYCAOSL.data[0] = A_UNITE(RYCAOSL,mode7,7,SYCAOSL);
UYCAOSL.fn.fn_global = LRAAOSL_newline;
UYCAOSL.nonlocals = A68_NIL;
OYCAOSL.data[1] = A_UNITE(TYCAOSL,mode12,12,UYCAOSL);
FSBAOSL_print(A_HISVEC(VYCAOSL,OYCAOSL,2,A68_100 ));
 /* line 328: */
WYCAOSL_clreal = 23.456;
 /* line 329: */
YYCAOSL_generator( A68_TRUE, &CZCAOSL );
BZCAOSL_vecint = CZCAOSL;
 /* line 330: */
DZCAOSL_boolean = A68_TRUE;
EZCAOSL_clearfailed = A68_FALSE;
FZCAOSL_vecclear = A68_TRUE;
 /* line 331: */
HZCAOSL_generator( A68_TRUE, &LZCAOSL );
KZCAOSL_hexchars = LZCAOSL;
OZCAOSL = NZCAOSL ;
A_VASSIGN2(OZCAOSL,KZCAOSL_hexchars,A68_CHAR );
 /* line 335: */
QZCAOSL = BZCAOSL_vecint.upb;
for ( PZCAOSL_ii = 1;
PZCAOSL_ii <= QZCAOSL;
PZCAOSL_ii += 1 )
{ 
RZCAOSL = (&A_VINDEX(BZCAOSL_vecint,PZCAOSL_ii)) ;
(*RZCAOSL) = (PZCAOSL_ii*100);
}
 /* line 337: */
FFAAOSL_clear(A_UNITE(SZCAOSL,mode5,5,(&WYCAOSL_clreal)));
 /* line 338: */
 /* line 339: */
if ( (A_ABS(WYCAOSL_clreal)>0.0) )
{ 
EZCAOSL_clearfailed = A68_TRUE;
 /* line 340: */
XZCAOSL = VZCAOSL ;
TZCAOSL.data[0] = A_UNITE(WZCAOSL,mode7,7,XZCAOSL);
ZZCAOSL.fn.fn_global = LRAAOSL_newline;
ZZCAOSL.nonlocals = A68_NIL;
TZCAOSL.data[1] = A_UNITE(YZCAOSL,mode12,12,ZZCAOSL);
 /* line 341: */
FSBAOSL_print(A_HISVEC(AADAOSL,TZCAOSL,2,A68_100 ));
} 
 /* line 343: */
KADAOSL = (&IUBAOSL_cpl1) ;
MADAOSL.fn.fn_global = DADAOSL_straight;
MADAOSL.nonlocals = A68_NIL;
OADAOSL = A_OPSTRAIGHT(KADAOSL,MADAOSL,2,LADAOSL) ;
FFAAOSL_clear(A_UNITE(NADAOSL,mode8,8,OADAOSL));
 /* line 344: */
PADAOSL = (*(&((&IUBAOSL_cpl1)->Re))) ;
QADAOSL = (A_ABS(PADAOSL)>0.0);
if ( ! QADAOSL )
{ /* line 345: */
RADAOSL = (*(&((&IUBAOSL_cpl1)->Im))) ;
QADAOSL = (A_ABS(RADAOSL)>0.0);
}
if ( QADAOSL )
{ 
EZCAOSL_clearfailed = A68_TRUE;
 /* line 346: */
WADAOSL = UADAOSL ;
SADAOSL.data[0] = A_UNITE(VADAOSL,mode7,7,WADAOSL);
YADAOSL.fn.fn_global = LRAAOSL_newline;
YADAOSL.nonlocals = A68_NIL;
SADAOSL.data[1] = A_UNITE(XADAOSL,mode12,12,YADAOSL);
 /* line 347: */
FSBAOSL_print(A_HISVEC(ZADAOSL,SADAOSL,2,A68_100 ));
} 
 /* line 349: */
FFAAOSL_clear(A_UNITE(ABDAOSL,mode7,7,(&DZCAOSL_boolean)));
 /* line 350: */
 /* line 351: */
if ( DZCAOSL_boolean )
{ 
EZCAOSL_clearfailed = A68_TRUE;
 /* line 352: */
FBDAOSL = DBDAOSL ;
BBDAOSL.data[0] = A_UNITE(EBDAOSL,mode7,7,FBDAOSL);
HBDAOSL.fn.fn_global = LRAAOSL_newline;
HBDAOSL.nonlocals = A68_NIL;
BBDAOSL.data[1] = A_UNITE(GBDAOSL,mode12,12,HBDAOSL);
 /* line 353: */
FSBAOSL_print(A_HISVEC(IBDAOSL,BBDAOSL,2,A68_100 ));
} 
 /* line 355: */
SBDAOSL = (&FUBAOSL_ip1) ;
UBDAOSL.fn.fn_global = LBDAOSL_straight;
UBDAOSL.nonlocals = A68_NIL;
WBDAOSL = A_OPSTRAIGHT(SBDAOSL,UBDAOSL,2,TBDAOSL) ;
FFAAOSL_clear(A_UNITE(VBDAOSL,mode8,8,WBDAOSL));
 /* line 356: */
XBDAOSL = (&HUBAOSL_ip2) ;
ZBDAOSL.fn.fn_global = LBDAOSL_straight;
ZBDAOSL.nonlocals = A68_NIL;
BCDAOSL = A_OPSTRAIGHT(XBDAOSL,ZBDAOSL,2,YBDAOSL) ;
FFAAOSL_clear(A_UNITE(ACDAOSL,mode8,8,BCDAOSL));
 /* line 357: */
CCDAOSL = ((*(&((&FUBAOSL_ip1)->I)))!=0);
if ( ! CCDAOSL )
{CCDAOSL = ((*(&((&FUBAOSL_ip1)->J)))!=0);
}
 /* line 358: */
if ( ! CCDAOSL )
{CCDAOSL = ((*(&((&HUBAOSL_ip2)->I)))!=0);
}
if ( ! CCDAOSL )
{ /* line 359: */
CCDAOSL = ((*(&((&HUBAOSL_ip2)->J)))!=0);
}
if ( CCDAOSL )
{ 
EZCAOSL_clearfailed = A68_TRUE;
 /* line 360: */
HCDAOSL = FCDAOSL ;
DCDAOSL.data[0] = A_UNITE(GCDAOSL,mode7,7,HCDAOSL);
JCDAOSL.fn.fn_global = LRAAOSL_newline;
JCDAOSL.nonlocals = A68_NIL;
DCDAOSL.data[1] = A_UNITE(ICDAOSL,mode12,12,JCDAOSL);
 /* line 361: */
FSBAOSL_print(A_HISVEC(KCDAOSL,DCDAOSL,2,A68_100 ));
} 
 /* line 363: */
FFAAOSL_clear(A_UNITE(LCDAOSL,mode2,2,KZCAOSL_hexchars));
 /* line 364: */
 /* line 365: */
if ( A_VC_NE(KZCAOSL_hexchars,NCDAOSL) )
{ 
EZCAOSL_clearfailed = A68_TRUE;
 /* line 366: */
SCDAOSL = QCDAOSL ;
OCDAOSL.data[0] = A_UNITE(RCDAOSL,mode7,7,SCDAOSL);
UCDAOSL.fn.fn_global = LRAAOSL_newline;
UCDAOSL.nonlocals = A68_NIL;
OCDAOSL.data[1] = A_UNITE(TCDAOSL,mode12,12,UCDAOSL);
 /* line 367: */
FSBAOSL_print(A_HISVEC(VCDAOSL,OCDAOSL,2,A68_100 ));
} 
 /* line 369: */
FFAAOSL_clear(A_UNITE(WCDAOSL,mode4,4,BZCAOSL_vecint));
 /* line 370: */
YCDAOSL = BZCAOSL_vecint.upb -1;
XCDAOSL_ii = BZCAOSL_vecint.data;
for (;YCDAOSL-- >= 0;
(XCDAOSL_ii++
) )
{
if ( !(FZCAOSL_vecclear) ) break;
FZCAOSL_vecclear = ((*XCDAOSL_ii)==0);
}
 /* line 371: */
 /* line 372: */
if ( !FZCAOSL_vecclear )
{ 
EZCAOSL_clearfailed = A68_TRUE;
 /* line 373: */
DDDAOSL = BDDAOSL ;
ZCDAOSL.data[0] = A_UNITE(CDDAOSL,mode7,7,DDDAOSL);
FDDAOSL.fn.fn_global = LRAAOSL_newline;
FDDAOSL.nonlocals = A68_NIL;
ZCDAOSL.data[1] = A_UNITE(EDDAOSL,mode12,12,FDDAOSL);
 /* line 374: */
FSBAOSL_print(A_HISVEC(GDDAOSL,ZCDAOSL,2,A68_100 ));
} 
 /* line 376: */
 /* line 377: */
if ( EZCAOSL_clearfailed )
{ 
LDDAOSL = JDDAOSL ;
HDDAOSL.data[0] = A_UNITE(KDDAOSL,mode7,7,LDDAOSL);
NDDAOSL.fn.fn_global = LRAAOSL_newline;
NDDAOSL.nonlocals = A68_NIL;
HDDAOSL.data[1] = A_UNITE(MDDAOSL,mode12,12,NDDAOSL);
 /* line 378: */
FSBAOSL_print(A_HISVEC(ODDAOSL,HDDAOSL,2,A68_100 ));
} 
else
{ 
TDDAOSL = RDDAOSL ;
PDDAOSL.data[0] = A_UNITE(SDDAOSL,mode7,7,TDDAOSL);
VDDAOSL.fn.fn_global = LRAAOSL_newline;
VDDAOSL.nonlocals = A68_NIL;
PDDAOSL.data[1] = A_UNITE(UDDAOSL,mode12,12,VDDAOSL);
 /* line 379: */
FSBAOSL_print(A_HISVEC(WDDAOSL,PDDAOSL,2,A68_100 ));
} 
 /* line 381: */
YDDAOSL_c1 = A_COMPL_I(XDDAOSL,1.2,4.6);
 /* line 382: */
ZDDAOSL.Re = 4.3;
ZDDAOSL.Im = 5.9;
AEDAOSL_c2 = ZDDAOSL;
 /* line 384: */
 /* line 388: */
LFDAOSL = YDDAOSL_c1.Re ;
MFDAOSL = 2 ;
NFDAOSL = YDDAOSL_c1.Im ;
OFDAOSL = 2 ;
PFDAOSL_d1 = (A_LR_POWER(LFDAOSL,MFDAOSL,(A68_REAL ))+A_LR_POWER(NFDAOSL,OFDAOSL,(A68_REAL )));
 /* line 389: */
QFDAOSL = AEDAOSL_c2.Re ;
RFDAOSL = 2 ;
SFDAOSL = AEDAOSL_c2.Im ;
TFDAOSL = 2 ;
UFDAOSL_d2 = (A_LR_POWER(QFDAOSL,RFDAOSL,(A68_REAL ))+A_LR_POWER(SFDAOSL,TFDAOSL,(A68_REAL )));
 /* line 390: */
VFDAOSL_rr = (YDDAOSL_c1.Re*AEDAOSL_c2.Re);
 /* line 391: */
WFDAOSL_ii = (YDDAOSL_c1.Im*AEDAOSL_c2.Im);
 /* line 392: */
XFDAOSL_ri = (AEDAOSL_c2.Re*YDDAOSL_c1.Im);
 /* line 393: */
YFDAOSL_ir = (YDDAOSL_c1.Re*AEDAOSL_c2.Im);
 /* line 394: */
ZFDAOSL_q1 = (VFDAOSL_rr+WFDAOSL_ii);
 /* line 395: */
AGDAOSL_q2 = (XFDAOSL_ri-YFDAOSL_ir);
 /* line 396: */
BGDAOSL = YDDAOSL_c1.Re ;
CGDAOSL_m1r = A_ABS(BGDAOSL);
 /* line 397: */
DGDAOSL = YDDAOSL_c1.Im ;
EGDAOSL_m1i = A_ABS(DGDAOSL);
 /* line 399: */
 /* line 400: */
HGDAOSL.fn.fn_global = LRAAOSL_newline;
HGDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[0] = A_UNITE(GGDAOSL,mode12,12,HGDAOSL);
 /* line 401: */
LGDAOSL = JGDAOSL ;
FGDAOSL.data[1] = A_UNITE(KGDAOSL,mode7,7,LGDAOSL);
 /* line 402: */
NGDAOSL.fn.fn_global = LRAAOSL_newline;
NGDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[2] = A_UNITE(MGDAOSL,mode12,12,NGDAOSL);
RGDAOSL = PGDAOSL ;
FGDAOSL.data[3] = A_UNITE(QGDAOSL,mode7,7,RGDAOSL);
EEDAOSL_fixedcmpx( YDDAOSL_c1, YDDAOSL_c1.Re, YDDAOSL_c1.Im, &SGDAOSL );
FGDAOSL.data[4] = A_UNITE(TGDAOSL,mode7,7,SGDAOSL);
 /* line 403: */
VGDAOSL.fn.fn_global = LRAAOSL_newline;
VGDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[5] = A_UNITE(UGDAOSL,mode12,12,VGDAOSL);
ZGDAOSL = XGDAOSL ;
FGDAOSL.data[6] = A_UNITE(YGDAOSL,mode7,7,ZGDAOSL);
EEDAOSL_fixedcmpx( AEDAOSL_c2, AEDAOSL_c2.Re, AEDAOSL_c2.Im, &AHDAOSL );
FGDAOSL.data[7] = A_UNITE(BHDAOSL,mode7,7,AHDAOSL);
 /* line 404: */
DHDAOSL.fn.fn_global = LRAAOSL_newline;
DHDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[8] = A_UNITE(CHDAOSL,mode12,12,DHDAOSL);
HHDAOSL = FHDAOSL ;
FGDAOSL.data[9] = A_UNITE(GHDAOSL,mode7,7,HHDAOSL);
JHDAOSL = A_COMPL_RE(YDDAOSL_c1) ;
RCAAOSL_fixed( A_UNITE(IHDAOSL,mode4,4,JHDAOSL), (-6), 3, &KHDAOSL );
FGDAOSL.data[10] = A_UNITE(LHDAOSL,mode7,7,KHDAOSL);
 /* line 405: */
PHDAOSL = NHDAOSL ;
FGDAOSL.data[11] = A_UNITE(OHDAOSL,mode7,7,PHDAOSL);
RHDAOSL = YDDAOSL_c1.Re ;
RCAAOSL_fixed( A_UNITE(QHDAOSL,mode4,4,RHDAOSL), (-6), 3, &SHDAOSL );
FGDAOSL.data[12] = A_UNITE(THDAOSL,mode7,7,SHDAOSL);
 /* line 406: */
VHDAOSL = ']' ;
FGDAOSL.data[13] = A_UNITE(UHDAOSL,mode6,6,VHDAOSL);
 /* line 407: */
XHDAOSL.fn.fn_global = LRAAOSL_newline;
XHDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[14] = A_UNITE(WHDAOSL,mode12,12,XHDAOSL);
BIDAOSL = ZHDAOSL ;
FGDAOSL.data[15] = A_UNITE(AIDAOSL,mode7,7,BIDAOSL);
DIDAOSL = A_COMPL_IM(YDDAOSL_c1) ;
RCAAOSL_fixed( A_UNITE(CIDAOSL,mode4,4,DIDAOSL), (-6), 3, &EIDAOSL );
FGDAOSL.data[16] = A_UNITE(FIDAOSL,mode7,7,EIDAOSL);
 /* line 408: */
JIDAOSL = HIDAOSL ;
FGDAOSL.data[17] = A_UNITE(IIDAOSL,mode7,7,JIDAOSL);
LIDAOSL = YDDAOSL_c1.Im ;
RCAAOSL_fixed( A_UNITE(KIDAOSL,mode4,4,LIDAOSL), (-6), 3, &MIDAOSL );
FGDAOSL.data[18] = A_UNITE(NIDAOSL,mode7,7,MIDAOSL);
 /* line 409: */
PIDAOSL = ']' ;
FGDAOSL.data[19] = A_UNITE(OIDAOSL,mode6,6,PIDAOSL);
 /* line 410: */
RIDAOSL.fn.fn_global = LRAAOSL_newline;
RIDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[20] = A_UNITE(QIDAOSL,mode12,12,RIDAOSL);
VIDAOSL = TIDAOSL ;
FGDAOSL.data[21] = A_UNITE(UIDAOSL,mode7,7,VIDAOSL);
EEDAOSL_fixedcmpx( YDDAOSL_c1, YDDAOSL_c1.Re, (-YDDAOSL_c1.Im), &WIDAOSL );
FGDAOSL.data[22] = A_UNITE(XIDAOSL,mode7,7,WIDAOSL);
 /* line 411: */
ZIDAOSL.fn.fn_global = LRAAOSL_newline;
ZIDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[23] = A_UNITE(YIDAOSL,mode12,12,ZIDAOSL);
DJDAOSL = BJDAOSL ;
FGDAOSL.data[24] = A_UNITE(CJDAOSL,mode7,7,DJDAOSL);
 /* line 412: */
 /* line 413: */
 /* line 414: */
EEDAOSL_fixedcmpx( A_COMPL_PLUS(EJDAOSL,YDDAOSL_c1,AEDAOSL_c2), (YDDAOSL_c1.Re+AEDAOSL_c2.Re), (YDDAOSL_c1.Im+AEDAOSL_c2.Im), &FJDAOSL );
FGDAOSL.data[25] = A_UNITE(GJDAOSL,mode7,7,FJDAOSL);
 /* line 415: */
IJDAOSL.fn.fn_global = LRAAOSL_newline;
IJDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[26] = A_UNITE(HJDAOSL,mode12,12,IJDAOSL);
MJDAOSL = KJDAOSL ;
FGDAOSL.data[27] = A_UNITE(LJDAOSL,mode7,7,MJDAOSL);
 /* line 416: */
 /* line 417: */
 /* line 418: */
EEDAOSL_fixedcmpx( A_COMPL_MINUS(NJDAOSL,YDDAOSL_c1,AEDAOSL_c2), (YDDAOSL_c1.Re-AEDAOSL_c2.Re), (YDDAOSL_c1.Im-AEDAOSL_c2.Im), &OJDAOSL );
FGDAOSL.data[28] = A_UNITE(PJDAOSL,mode7,7,OJDAOSL);
 /* line 419: */
RJDAOSL.fn.fn_global = LRAAOSL_newline;
RJDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[29] = A_UNITE(QJDAOSL,mode12,12,RJDAOSL);
VJDAOSL = TJDAOSL ;
FGDAOSL.data[30] = A_UNITE(UJDAOSL,mode7,7,VJDAOSL);
 /* line 420: */
 /* line 421: */
 /* line 422: */
EEDAOSL_fixedcmpx( A_COMPL_MINUS(WJDAOSL,AEDAOSL_c2,YDDAOSL_c1), (AEDAOSL_c2.Re-YDDAOSL_c1.Re), (AEDAOSL_c2.Im-YDDAOSL_c1.Im), &XJDAOSL );
FGDAOSL.data[31] = A_UNITE(YJDAOSL,mode7,7,XJDAOSL);
 /* line 423: */
AKDAOSL.fn.fn_global = LRAAOSL_newline;
AKDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[32] = A_UNITE(ZJDAOSL,mode12,12,AKDAOSL);
EKDAOSL = CKDAOSL ;
FGDAOSL.data[33] = A_UNITE(DKDAOSL,mode7,7,EKDAOSL);
EEDAOSL_fixedcmpx( A_COMPL_TIMES(FKDAOSL,YDDAOSL_c1,AEDAOSL_c2), (VFDAOSL_rr-WFDAOSL_ii), (YFDAOSL_ir+XFDAOSL_ri), &GKDAOSL );
FGDAOSL.data[34] = A_UNITE(HKDAOSL,mode7,7,GKDAOSL);
 /* line 424: */
JKDAOSL.fn.fn_global = LRAAOSL_newline;
JKDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[35] = A_UNITE(IKDAOSL,mode12,12,JKDAOSL);
NKDAOSL = LKDAOSL ;
FGDAOSL.data[36] = A_UNITE(MKDAOSL,mode7,7,NKDAOSL);
EEDAOSL_fixedcmpx( A_COMPL_DIVIDE(OKDAOSL,PKDAOSL,YDDAOSL_c1,AEDAOSL_c2), (ZFDAOSL_q1/UFDAOSL_d2), (AGDAOSL_q2/UFDAOSL_d2), &QKDAOSL );
FGDAOSL.data[37] = A_UNITE(RKDAOSL,mode7,7,QKDAOSL);
 /* line 425: */
TKDAOSL.fn.fn_global = LRAAOSL_newline;
TKDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[38] = A_UNITE(SKDAOSL,mode12,12,TKDAOSL);
XKDAOSL = VKDAOSL ;
FGDAOSL.data[39] = A_UNITE(WKDAOSL,mode7,7,XKDAOSL);
EEDAOSL_fixedcmpx( A_COMPL_DIVIDE(YKDAOSL,ZKDAOSL,AEDAOSL_c2,YDDAOSL_c1), (ZFDAOSL_q1/PFDAOSL_d1), ((-AGDAOSL_q2)/PFDAOSL_d1), &ALDAOSL );
FGDAOSL.data[40] = A_UNITE(BLDAOSL,mode7,7,ALDAOSL);
 /* line 426: */
DLDAOSL.fn.fn_global = LRAAOSL_newline;
DLDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[41] = A_UNITE(CLDAOSL,mode12,12,DLDAOSL);
HLDAOSL = FLDAOSL ;
FGDAOSL.data[42] = A_UNITE(GLDAOSL,mode7,7,HLDAOSL);
JLDAOSL = A_COMPL_ABS(YDDAOSL_c1) ;
RCAAOSL_fixed( A_UNITE(ILDAOSL,mode4,4,JLDAOSL), (-6), 3, &KLDAOSL );
FGDAOSL.data[43] = A_UNITE(LLDAOSL,mode7,7,KLDAOSL);
 /* line 427: */
PLDAOSL = NLDAOSL ;
FGDAOSL.data[44] = A_UNITE(OLDAOSL,mode7,7,PLDAOSL);
QLDAOSL = YDDAOSL_c1.Re ;
RLDAOSL = 2 ;
SLDAOSL = YDDAOSL_c1.Im ;
TLDAOSL = 2 ;
VLDAOSL = GAAAOSL_sqrt((A_LR_POWER(QLDAOSL,RLDAOSL,(A68_REAL ))+A_LR_POWER(SLDAOSL,TLDAOSL,(A68_REAL )))) ;
RCAAOSL_fixed( A_UNITE(ULDAOSL,mode4,4,VLDAOSL), (-6), 3, &WLDAOSL );
FGDAOSL.data[45] = A_UNITE(XLDAOSL,mode7,7,WLDAOSL);
 /* line 428: */
ZLDAOSL = ']' ;
FGDAOSL.data[46] = A_UNITE(YLDAOSL,mode6,6,ZLDAOSL);
 /* line 429: */
BMDAOSL.fn.fn_global = LRAAOSL_newline;
BMDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[47] = A_UNITE(AMDAOSL,mode12,12,BMDAOSL);
FMDAOSL = DMDAOSL ;
FGDAOSL.data[48] = A_UNITE(EMDAOSL,mode7,7,FMDAOSL);
HMDAOSL = A_COMPL_ABS(AEDAOSL_c2) ;
RCAAOSL_fixed( A_UNITE(GMDAOSL,mode4,4,HMDAOSL), (-6), 3, &IMDAOSL );
FGDAOSL.data[49] = A_UNITE(JMDAOSL,mode7,7,IMDAOSL);
 /* line 430: */
NMDAOSL = LMDAOSL ;
FGDAOSL.data[50] = A_UNITE(MMDAOSL,mode7,7,NMDAOSL);
OMDAOSL = AEDAOSL_c2.Re ;
PMDAOSL = 2 ;
QMDAOSL = AEDAOSL_c2.Im ;
RMDAOSL = 2 ;
TMDAOSL = GAAAOSL_sqrt((A_LR_POWER(OMDAOSL,PMDAOSL,(A68_REAL ))+A_LR_POWER(QMDAOSL,RMDAOSL,(A68_REAL )))) ;
RCAAOSL_fixed( A_UNITE(SMDAOSL,mode4,4,TMDAOSL), (-6), 3, &UMDAOSL );
FGDAOSL.data[51] = A_UNITE(VMDAOSL,mode7,7,UMDAOSL);
 /* line 431: */
XMDAOSL = ']' ;
FGDAOSL.data[52] = A_UNITE(WMDAOSL,mode6,6,XMDAOSL);
 /* line 432: */
ZMDAOSL.fn.fn_global = LRAAOSL_newline;
ZMDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[53] = A_UNITE(YMDAOSL,mode12,12,ZMDAOSL);
DNDAOSL = BNDAOSL ;
FGDAOSL.data[54] = A_UNITE(CNDAOSL,mode7,7,DNDAOSL);
FNDAOSL = ((A_COMPL_ARG(YDDAOSL_c1)*((A68_REAL )180))/TAAAOSL_pi) ;
RCAAOSL_fixed( A_UNITE(ENDAOSL,mode4,4,FNDAOSL), (-6), 3, &GNDAOSL );
FGDAOSL.data[55] = A_UNITE(HNDAOSL,mode7,7,GNDAOSL);
 /* line 433: */
LNDAOSL = JNDAOSL ;
FGDAOSL.data[56] = A_UNITE(KNDAOSL,mode7,7,LNDAOSL);
 /* line 434: */
if ( (CGDAOSL_m1r<EGDAOSL_m1i) )
{ 
 /* line 435: */
MNDAOSL = (((A68_REAL )90)-((OAAAOSL_arctan((CGDAOSL_m1r/EGDAOSL_m1i))*((A68_REAL )180))/TAAAOSL_pi));
} 
else
{ 
 /* line 436: */
 /* line 437: */
MNDAOSL = ((OAAAOSL_arctan((EGDAOSL_m1i/CGDAOSL_m1r))*((A68_REAL )180))/TAAAOSL_pi);
} 
if ( (YDDAOSL_c1.Im<0.0) )
{ 
NNDAOSL = (-1.0);
} 
else
{ 
NNDAOSL = 1.0;
} 
 /* line 438: */
PNDAOSL = (MNDAOSL*NNDAOSL) ;
RCAAOSL_fixed( A_UNITE(ONDAOSL,mode4,4,PNDAOSL), (-6), 3, &QNDAOSL );
FGDAOSL.data[57] = A_UNITE(RNDAOSL,mode7,7,QNDAOSL);
 /* line 439: */
TNDAOSL = ']' ;
FGDAOSL.data[58] = A_UNITE(SNDAOSL,mode6,6,TNDAOSL);
 /* line 440: */
VNDAOSL.fn.fn_global = LRAAOSL_newline;
VNDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[59] = A_UNITE(UNDAOSL,mode12,12,VNDAOSL);
XNDAOSL.fn.fn_global = LRAAOSL_newline;
XNDAOSL.nonlocals = A68_NIL;
FGDAOSL.data[60] = A_UNITE(WNDAOSL,mode12,12,XNDAOSL);
FSBAOSL_print(A_HISVEC(YNDAOSL,FGDAOSL,61,A68_100 ));
 /* line 442: */
DODAOSL = BODAOSL ;
ZNDAOSL.data[0] = A_UNITE(CODAOSL,mode7,7,DODAOSL);
FODAOSL.fn.fn_global = LRAAOSL_newline;
FODAOSL.nonlocals = A68_NIL;
ZNDAOSL.data[1] = A_UNITE(EODAOSL,mode12,12,FODAOSL);
GFBAOSL_put(YRBAOSL_stdoutchan, A_HISVEC(GODAOSL,ZNDAOSL,2,A68_100 ));
 /* line 443: */
 /* line 444: */
 /* line 445: */
/*SKIP*/;
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of ./a68files/teststrings.a68 */
