
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
/* UNAME:RBHBSIM */
#include "Asupport.h"

A_PROCEDURE(A68_INT ,A68t31,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t32,(A68_INT ),(A68_INT ,void *));
typedef struct A68t32  A68_32 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t33,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(INT,INT) REF MODE26 */
A_VECTOR(A68_INT ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] INT */
struct A68t58{
A68_INT  Fn;
A_PAD_INT(PAD_1)
A68_INT  Instance;
A_PAD_INT(PAD_2)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,INT)  */
struct A68t59{
struct A68t60 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_3)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(REF MODE60,INT)  */
struct A68t57 { A68_INT mode; union {
struct A68t58  mode1;
struct A68t59  mode2;
} data; };
typedef struct A68t57  A68_57 ;    /* UNION(MODE58,MODE59)  */
struct A68t36{
struct A68t57  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_4)
A68_INT  Base;
A_PAD_INT(PAD_5)
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE57,INT,INT)  */
struct A68t34{
A68_VC  Id;
A68_VC  Fullid;
A68_INT  Action;
A_PAD_INT(PAD_6)
A68_INT  Condition;
A_PAD_INT(PAD_7)
struct A68t35  Columns;
struct A68t35  Sizes;
struct A68t36  Location;
A68_INT  Keepnumber;
A_PAD_INT(PAD_8)
A68_VC  Lastvalues;
A68_VC  Testvalues;
A68_VC  Workspace;
struct A68t37 * Decoded;
A68_INT  Flagaddress;
A_PAD_INT(PAD_9)
};
typedef struct A68t34  A68_34 ;    /* STRUCT(REF MODE26,REF MODE26,INT,INT,REF MODE35,REF MODE35,MODE36,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE37,INT)  */
struct A68t45{
A68_INT  Svvoid;
A_PAD_INT(PAD_10)
};
typedef struct A68t45  A68_45 ;    /* STRUCT(INT)  */
struct A68t46{
A68_INT  Svnull;
A_PAD_INT(PAD_11)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(INT)  */
struct A68t37 { A68_INT mode; union {
struct A68t38 * mode1;
struct A68t39 * mode2;
struct A68t40 * mode3;
struct A68t41 * mode4;
struct A68t42 * mode5;
struct A68t43 * mode6;
struct A68t44 * mode7;
struct A68t45  mode8;
struct A68t46  mode9;
} data; };
typedef struct A68t37  A68_37 ;    /* UNION(REF MODE38,REF MODE39,REF MODE40,REF MODE41,REF MODE42,REF MODE43,REF MODE44,MODE45,MODE46)  */
struct A68t55{
A68_INT  Svoid;
A_PAD_INT(PAD_12)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT)  */
struct A68t56{
A68_INT  Snull;
A_PAD_INT(PAD_13)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT)  */
struct A68t48 { A68_INT mode; union {
struct A68t47 * mode1;
struct A68t49 * mode2;
struct A68t50 * mode3;
struct A68t51 * mode4;
struct A68t52 * mode5;
struct A68t53 * mode6;
struct A68t54 * mode7;
struct A68t55  mode8;
struct A68t56  mode9;
} data; };
typedef struct A68t48  A68_48 ;    /* UNION(REF MODE47,REF MODE49,REF MODE50,REF MODE51,REF MODE52,REF MODE53,REF MODE54,MODE55,MODE56)  */
struct A68t38{
struct A68t48  Type;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(MODE48)  */
struct A68t39{
struct A68t49 * Type;
A68_INT  Value;
A_PAD_INT(PAD_14)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(REF MODE49,INT)  */
struct A68t40{
struct A68t50 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_15)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF MODE50,CHAR)  */
struct A68t41{
struct A68t52 * Type;
A68_VC  Value;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(REF MODE52,REF MODE26)  */
struct A68t42{
struct A68t47 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_16)
struct A68t37  Assoc;
};
typedef struct A68t42  A68_42 ;    /* STRUCT(REF MODE47,INT,MODE37)  */
struct A68t43{
struct A68t37  Head;
struct A68t43 * Tail;
};
typedef struct A68t43  A68_43 ;    /* STRUCT(MODE37,REF MODE43)  */
struct A68t44{
struct A68t37  From;
struct A68t37  To;
};
typedef struct A68t44  A68_44 ;    /* STRUCT(MODE37,MODE37)  */
struct A68t47{
A68_VC  Id;
struct A68t48  T;
struct A68t47 * Rest;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(REF MODE26,MODE48,REF MODE47)  */
struct A68t49{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_17)
A68_INT  Upb;
A_PAD_INT(PAD_18)
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t50{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t51{
A68_INT  No;
A_PAD_INT(PAD_19)
struct A68t48  Type;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(INT,MODE48)  */
struct A68t52{
A68_INT  No;
A_PAD_INT(PAD_20)
struct A68t50  T;
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT,MODE50)  */
struct A68t53{
struct A68t48  From;
struct A68t48  To;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(MODE48,MODE48)  */
struct A68t54{
struct A68t48  T;
struct A68t54 * Rest;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(MODE48,REF MODE54)  */
A_VECTOR(struct A68t62 ,A68t61);
typedef struct A68t61  A68_61 ;    /* VECTOR [] MODE62 */
struct A68t62{
A68_INT  Instoffset;
A_PAD_INT(PAD_21)
A68_INT  Offset;
A_PAD_INT(PAD_22)
A68_INT  Size;
A_PAD_INT(PAD_23)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT,INT)  */
struct A68t60{
struct A68t48  Type;
struct A68t61  Blocks;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(MODE48,REF MODE61)  */
struct A68t63{
struct A68t34  Monitor;
A68_INT  Handle;
A_PAD_INT(PAD_24)
struct A68t63 * Rest;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE34,INT,REF MODE63)  */

A_PROCEDURE(struct A68t63 *,A68t64,(struct A68t63 *),(struct A68t63 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF MODE63) REF MODE63 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t63 *),(struct A68t63 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t66,(A68_INT ,struct A68t34 *,struct A68t37 *,A68_INT ),(A68_INT ,struct A68t34 *,struct A68t37 *,A68_INT ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(INT,REF MODE34,REF MODE37,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t67,(void),(void *));
typedef struct A68t67  A68_67 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t68,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT,INT) VOID */
struct A68t70 ;

A_PROCEDURE(A68_BOOL ,A68t69,(A68_INT ,struct A68t70 ),(A68_INT ,struct A68t70 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(INT,MODE70) BOOL */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ),(A68_VC ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26) VOID */
struct A68t72 ;

A_PROCEDURE(struct A68t34 *,A68t71,(struct A68t72 *,A68_INT ,A68_INT ,struct A68t70 ),(struct A68t72 *,A68_INT ,A68_INT ,struct A68t70 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(REF MODE72,INT,INT,MODE70) REF MODE34 */
struct A68t72{
A68_INT  Repeat;
A_PAD_INT(PAD_25)
A68_VC  Name;
A68_VC  Aliasname;
A68_CHAR  Op;
A_PAD_CHAR(PAD_26)
struct A68t73 * Bind;
struct A68t72 * Rest;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE73,REF MODE72)  */
struct A68t73{
A68_VC  Uname;
A68_VC  Lname;
struct A68t36 * Node;
};
typedef struct A68t73  A68_73 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE36)  */

A_PROCEDURE(A68_INT ,A68t74,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE34) INT */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ,struct A68t70 ),(A68_INT ,struct A68t70 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT,MODE70) VOID */
struct A68t77 ;

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t77 ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t35 *),(struct A68t77 ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t35 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE77,INT,INT,BOOL) REF MODE35 */
struct A68t77 { A68_INT mode; union {
struct A68t72 * mode1;
A68_INT  mode2;
} data; };
typedef struct A68t77  A68_77 ;    /* UNION(REF MODE72,INT)  */

A_PROCEDURE(struct A68t34 *,A68t78,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT,BOOL) REF MODE34 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_INT ,A68_BOOL ,struct A68t70 ),(A68_INT ,A68_BOOL ,struct A68t70 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT,BOOL,MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE70) VOID */
struct A68t82 ;

A_PROCEDURE(A68_BOOL ,A68t81,(A68_VC ,A68_INT ,struct A68t82 ),(A68_VC ,A68_INT ,struct A68t82 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE26,INT,MODE82) BOOL */
struct A68t82 { A68_INT mode; union {
struct A68t72 * mode1;
A68_INT  mode2;
struct A68t38 * mode3;
struct A68t39 * mode4;
struct A68t40 * mode5;
struct A68t41 * mode6;
struct A68t42 * mode7;
struct A68t43 * mode8;
struct A68t44 * mode9;
struct A68t45  mode10;
struct A68t46  mode11;
} data; };
typedef struct A68t82  A68_82 ;    /* UNION(REF MODE72,INT,REF MODE38,REF MODE39,REF MODE40,REF MODE41,REF MODE42,REF MODE43,REF MODE44,MODE45,MODE46)  */

A_PROCEDURE(A68_BOOL ,A68t83,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE26,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t84,(A68_INT ),(A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t85,(A68_VC ,A68_INT ,struct A68t72 **),(A68_VC ,A68_INT ,struct A68t72 **,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF MODE26,INT,REF REF MODE72) BOOL */

A_PROCEDURE(A68_BOOL ,A68t86,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t87,(A68_INT ,A68_INT ,struct A68t72 **),(A68_INT ,A68_INT ,struct A68t72 **,void *));
typedef struct A68t87  A68_87 ;    /* PROC(INT,INT,REF REF MODE72) BOOL */

A_PROCEDURE(A68_BOOL ,A68t88,(A68_VC ,A68_INT ,struct A68t37 *),(A68_VC ,A68_INT ,struct A68t37 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF MODE26,INT,REF MODE37) BOOL */

A_PROCEDURE(A68_BOOL ,A68t89,(A68_VC ,A68_INT ,A68_INT *),(A68_VC ,A68_INT ,A68_INT *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE26,INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t90,(void),(void *));
typedef struct A68t90  A68_90 ;    /* PROC BOOL */

A_PROCEDURE(A68_VOID ,A68t91,(A68_VC *),(A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC REF MODE26 */

A_PROCEDURE(struct A68t72 *,A68t92,(void),(void *));
typedef struct A68t92  A68_92 ;    /* PROC REF MODE72 */
struct A68t94 ;
struct A68t95 ;
struct A68t96 ;
struct A68t97 ;

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t94 ,struct A68t95 ,struct A68t96 ,struct A68t97 ),(struct A68t94 ,struct A68t95 ,struct A68t96 ,struct A68t97 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE94,MODE95,MODE96,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t72 *),(struct A68t72 *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_VC ),(A68_VC ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t96,(A68_INT ),(A68_INT ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t37 ),(struct A68t37 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE37) VOID */
struct A68t99 ;
struct A68t100 ;

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t92 ,struct A68t91 ,struct A68t99 ,struct A68t100 ),(struct A68t92 ,struct A68t91 ,struct A68t99 ,struct A68t100 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE92,MODE91,MODE99,MODE100) VOID */

A_PROCEDURE(A68_INT ,A68t99,(void),(void *));
typedef struct A68t99  A68_99 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t100,(struct A68t37 *),(struct A68t37 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC MODE37 */

A_PROCEDURE(struct A68t72 *,A68t101,(A68_INT ,A68_VC ,struct A68t73 *),(A68_INT ,A68_VC ,struct A68t73 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT,REF MODE26,REF MODE73) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t72 *,A68_VC *),(struct A68t72 *,A68_VC *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE72) MODE26 */
struct A68t104 ;
struct A68t105 ;

A_PROCEDURE(struct A68t72 *,A68t103,(struct A68t104 ,A68_INT *,struct A68t105 ),(struct A68t104 ,A68_INT *,struct A68t105 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE104,REF INT,MODE105) REF MODE72 */
A_VECTOR(struct A68t111 ,A68t104);
typedef struct A68t104  A68_104 ;    /* VECTOR [] MODE111 */
struct A68t111{
A68_INT  Sort;
A_PAD_INT(PAD_27)
A68_VC  Value;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t106 ;
struct A68t107 ;

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t106 ,struct A68t107 ),(struct A68t106 ,struct A68t107 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE106,MODE107) VOID */
struct A68t106{
A68_INT  Number;
A_PAD_INT(PAD_28)
struct A68t108 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_29)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,REF MODE108,BITS)  */
A_VECTOR(A68_VC ,A68t107);
typedef struct A68t107  A68_107 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t110 ,A68t109);
typedef struct A68t109  A68_109 ;    /* VECTOR [] MODE110 */
struct A68t110{
struct A68t106  Msgno;
A68_VC  Text;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(MODE106,REF MODE26)  */
struct A68t108{
A68_VC  Name;
struct A68t109  Messages;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(REF MODE26,REF MODE109)  */

A_PROCEDURE(struct A68t72 *,A68t112,(A68_VC ,struct A68t70 ),(A68_VC ,struct A68t70 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE26,MODE70) REF MODE72 */

A_PROCEDURE(struct A68t72 *,A68t113,(struct A68t72 *),(struct A68t72 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE72) REF MODE72 */

A_PROCEDURE(struct A68t72 *,A68t114,(A68_VC ,struct A68t72 *),(A68_VC ,struct A68t72 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE26,REF MODE72) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t72 *,A68_VC *),(struct A68t72 *,A68_VC *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE72) REF MODE26 */

A_PROCEDURE(struct A68t72 *,A68t116,(struct A68t72 *,A68_VC ),(struct A68t72 *,A68_VC ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE72,REF MODE26) REF MODE72 */

A_PROCEDURE(struct A68t36 *,A68t117,(struct A68t72 *,struct A68t70 ),(struct A68t72 *,struct A68t70 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE72,MODE70) REF MODE36 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t36 ,A68_VC ,struct A68t37 *),(struct A68t36 ,A68_VC ,struct A68t37 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE36,REF MODE26) MODE37 */
struct A68t120 ;

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t48 ,A68_BITS ,struct A68t120 *),(struct A68t48 ,A68_BITS ,struct A68t120 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE48,BITS,REF MODE120) VOID */
struct A68t121{
A68_INT  Status;
A_PAD_INT(PAD_30)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t122,(A68_VC ,A68_INT *,struct A68t121 *),(A68_VC ,A68_INT *,struct A68t121 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE26,REF INT) MODE121 */
struct A68t120{
A68_INT  Charnumber;
A_PAD_INT(PAD_31)
A68_INT  Linenumber;
A_PAD_INT(PAD_32)
A68_INT  Indent;
A_PAD_INT(PAD_33)
A68_INT  Width;
A_PAD_INT(PAD_34)
A68_INT  Sizeincr;
A_PAD_INT(PAD_35)
struct A68t121  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_36)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_37)
A68_BOOL  Input;
A_PAD_BOOL(PAD_38)
struct A68t70  Putbuffer;
struct A68t122  Getbuffer;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE121,REF MODE26,BOOL,BOOL,BOOL,MODE70,MODE122)  */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t37 ,A68_BITS ,struct A68t120 *),(struct A68t37 ,A68_BITS ,struct A68t120 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE37,BITS,REF MODE120) VOID */

A_PROCEDURE(A68_INT ,A68t124,(struct A68t48 ,A68_BITS ),(struct A68t48 ,A68_BITS ,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE48,BITS) INT */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t104 ,A68_INT *,struct A68t48 ,A68_INT ,struct A68t70 ,struct A68t37 *),(struct A68t104 ,A68_INT *,struct A68t48 ,A68_INT ,struct A68t70 ,struct A68t37 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE104,REF INT,MODE48,INT,MODE70) MODE37 */

A_PROCEDURE(A68_VOID ,A68t126,(A68_INT ,A68_BOOL *,A68_BOOL *,struct A68t70 ),(A68_INT ,A68_BOOL *,A68_BOOL *,struct A68t70 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT,REF BOOL,REF BOOL,MODE70) VOID */
struct A68t128 ;

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t128 *,struct A68t70 ),(struct A68t128 *,struct A68t70 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE128,MODE70) VOID */
struct A68t128{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,struct A68t70 ),(A68_VC ,struct A68t70 ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE26,MODE70) VOID */
struct A68t130 { A68_INT mode; union {
struct A68t47 * mode1;
struct A68t49 * mode2;
struct A68t50 * mode3;
} data; };
typedef struct A68t130  A68_130 ;    /* UNION(REF MODE47,REF MODE49,REF MODE50)  */
struct A68t131{
struct A68t60  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_39)
A68_INT  Ramsize;
A_PAD_INT(PAD_40)
A68_INT  Step;
A_PAD_INT(PAD_41)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(MODE60,INT,INT,INT)  */
struct A68t132{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_42)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t132 ,A68t134);
typedef struct A68t134  A68_134 ;    /* VECTOR [] MODE132 */
struct A68t133{
struct A68t131 * Ram;
struct A68t60  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_43)
struct A68t134  Body;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(REF MODE131,MODE60,INT,REF MODE134)  */
struct A68t135 { A68_INT mode; union {
struct A68t58  mode1;
struct A68t60  mode2;
} data; };
typedef struct A68t135  A68_135 ;    /* UNION(MODE58,MODE60)  */

A_PROCEDURE(A68_BOOL ,A68t136,(struct A68t60 ,struct A68t60 ),(struct A68t60 ,struct A68t60 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE60,MODE60) BOOL */

A_PROCEDURE(A68_BOOL ,A68t137,(struct A68t58 ,struct A68t58 ),(struct A68t58 ,struct A68t58 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE58,MODE58) BOOL */

A_PROCEDURE(A68_BOOL ,A68t138,(struct A68t59 ,struct A68t59 ),(struct A68t59 ,struct A68t59 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE59,MODE59) BOOL */

A_PROCEDURE(A68_BOOL ,A68t139,(struct A68t57 ,struct A68t57 ),(struct A68t57 ,struct A68t57 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE57,MODE57) BOOL */

A_PROCEDURE(A68_BOOL ,A68t140,(struct A68t36 ,struct A68t36 ),(struct A68t36 ,struct A68t36 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE36,MODE36) BOOL */

A_PROCEDURE(A68_BOOL ,A68t141,(struct A68t48 ,struct A68t48 ),(struct A68t48 ,struct A68t48 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE48,MODE48) BOOL */

A_PROCEDURE(A68_BOOL ,A68t142,(struct A68t37 ,struct A68t37 ),(struct A68t37 ,struct A68t37 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE37,MODE37) BOOL */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t61 ,struct A68t61 ,struct A68t61 *),(struct A68t61 ,struct A68t61 ,struct A68t61 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE61,REF MODE61) REF MODE61 */

A_PROCEDURE(A68_INT ,A68t144,(struct A68t48 ),(struct A68t48 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE48) INT */

A_PROCEDURE(struct A68t54 *,A68t145,(struct A68t48 ,A68_INT ,A68_INT ),(struct A68t48 ,A68_INT ,A68_INT ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE48,INT,INT) REF MODE54 */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t60 ,A68_INT ,A68_INT ,struct A68t60 *),(struct A68t60 ,A68_INT ,A68_INT ,struct A68t60 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE60,INT,INT) MODE60 */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t131 *,A68_INT ,A68_INT ,struct A68t60 *),(struct A68t131 *,A68_INT ,A68_INT ,struct A68t60 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REF MODE131,INT,INT) MODE60 */

A_PROCEDURE(A68_VC *,A68t148,(struct A68t37 ,struct A68t48 ),(struct A68t37 ,struct A68t48 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE37,MODE48) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t149,(A68_VC ,struct A68t48 ,struct A68t37 *),(A68_VC ,struct A68t48 ,struct A68t37 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE26,MODE48) MODE37 */

A_PROCEDURE(A68_INT ,A68t150,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE36) INT */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t36 ,A68_INT ),(struct A68t36 ,A68_INT ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE36,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t128 *,A68_INT ,struct A68t95 ,struct A68t70 ,struct A68t57 *),(struct A68t128 *,A68_INT ,struct A68t95 ,struct A68t70 ,struct A68t57 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE128,INT,MODE95,MODE70) MODE57 */

A_PROCEDURE(A68_VOID ,A68t153,(A68_VC ,struct A68t70 ,struct A68t57 *),(A68_VC ,struct A68t70 ,struct A68t57 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE26,MODE70) MODE57 */

A_PROCEDURE(A68_VOID ,A68t154,(A68_INT *,A68_BOOL *,struct A68t70 ),(A68_INT *,A68_BOOL *,struct A68t70 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF INT,REF BOOL,MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t36 ,A68_VC ),(struct A68t36 ,A68_VC ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE36,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t156,(A68_INT *,A68_VC *,struct A68t129 ,struct A68t129 ,struct A68t70 ),(A68_INT *,A68_VC *,struct A68t129 ,struct A68t129 ,struct A68t70 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF INT,REF REF MODE26,MODE129,MODE129,MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(A68_INT ,A68_INT ,A68_VC ,struct A68t129 ,struct A68t129 ,struct A68t95 ,struct A68t70 ,struct A68t57 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t129 ,struct A68t129 ,struct A68t95 ,struct A68t70 ,struct A68t57 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT,INT,REF MODE26,MODE129,MODE129,MODE95,MODE70) MODE57 */

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC ,struct A68t70 ,struct A68t36 *),(A68_VC ,struct A68t70 ,struct A68t36 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE26,MODE70) MODE36 */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t36 ,struct A68t36 *),(struct A68t36 ,struct A68t36 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE36) MODE36 */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t36 ,struct A68t36 ),(struct A68t36 ,struct A68t36 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE36,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t162,(A68_INT ,struct A68t35 *),(A68_INT ,struct A68t35 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT) REF MODE35 */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE35) VOID */

A_PROCEDURE(A68_BOOL ,A68t164,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE36) BOOL */

A_PROCEDURE(A68_VOID ,A68t165,(A68_INT ,struct A68t133 *),(A68_INT ,struct A68t133 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT) MODE133 */

A_PROCEDURE(A68_VOID ,A68t166,(A68_INT ,struct A68t135 *),(A68_INT ,struct A68t135 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(INT) MODE135 */

A_PROCEDURE(A68_VOID ,A68t167,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT) REF MODE26 */
struct A68t169 ;

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t169 ),(struct A68t169 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE169) VOID */

A_PROCEDURE(A68_BOOL ,A68t169,(A68_VC ),(A68_VC ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t133 ,struct A68t60 *),(struct A68t133 ,struct A68t60 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE133) MODE60 */

A_PROCEDURE(A68_VOID ,A68t171,(A68_INT ,struct A68t60 *),(A68_INT ,struct A68t60 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(INT) MODE60 */
struct A68t172{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t174,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(CHAR) REF MODE26 */
struct A68t176 ;

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE176) VOID */
A_VECTOR(A68_BOOL ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_BITS ,A68t178);
typedef struct A68t178  A68_178 ;    /* VECTOR [] BITS */
struct A68t176 { A68_INT mode; union {
A68_VC  mode1;
struct A68t35  mode2;
struct A68t177  mode3;
struct A68t178  mode4;
} data; };
typedef struct A68t176  A68_176 ;    /* UNION(REF MODE26,REF MODE35,REF MODE177,REF MODE178)  */

A_PROCEDURE(A68_BITS ,A68t179,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(BITS,BITS) BITS */
struct A68t181 ;

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t181 ,A68_INT ),(struct A68t181 ,A68_INT ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE181,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t181,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(CHAR) VOID */
struct A68t183 ;

A_PROCEDURE(A68_INT ,A68t182,(struct A68t183 ),(struct A68t183 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE183) INT */

A_PROCEDURE(A68_CHAR ,A68t183,(void),(void *));
typedef struct A68t183  A68_183 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t184,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t186,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t187,(A68_VC ,A68_INT *,struct A68t105 ),(A68_VC ,A68_INT *,struct A68t105 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE26,REF INT,MODE105) BOOL */

A_PROCEDURE(A68_BOOL ,A68t188,(struct A68t121 ,struct A68t121 ),(struct A68t121 ,struct A68t121 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE121,MODE121) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 4 CHAR */
struct A68t189{
struct A68t190  Access;
A_PAD_ISTRUCT(A68_190 ,PAD_44)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE190)  */

A_PROCEDURE(struct A68t128 *,A68t191,(A68_VC ,struct A68t189 ,struct A68t105 ),(A68_VC ,struct A68t189 ,struct A68t105 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE26,MODE189,MODE105) REF MODE128 */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t128 *,struct A68t105 ),(struct A68t128 *,struct A68t105 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE128,MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t128 *,A68_VC *),(struct A68t128 *,A68_VC *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE128) MODE26 */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t128 *,A68_VC ,A68_INT *,struct A68t105 ,struct A68t121 *),(struct A68t128 *,A68_VC ,A68_INT *,struct A68t105 ,struct A68t121 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE128,REF MODE26,REF INT,MODE105) MODE121 */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t128 *,A68_VC ,struct A68t105 ,struct A68t121 *),(struct A68t128 *,A68_VC ,struct A68t105 ,struct A68t121 *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE128,MODE26,MODE105) MODE121 */
struct A68t196{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_45)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_46)
A68_SINT  Device;
A_PAD_SINT(PAD_47)
A68_SINT  Links;
A_PAD_SINT(PAD_48)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_49)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_50)
A68_LINT  Size;
A_PAD_LINT(PAD_51)
A68_LINT  Accessed;
A_PAD_LINT(PAD_52)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_53)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_54)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t198 ;

A_PROCEDURE(struct A68t196 *,A68t197,(struct A68t198 ,struct A68t105 ),(struct A68t198 ,struct A68t105 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE198,MODE105) REF MODE196 */
struct A68t198 { A68_INT mode; union {
struct A68t128 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t198  A68_198 ;    /* UNION(REF MODE128,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t128 *,A68_LINT *,struct A68t105 ,struct A68t121 *),(struct A68t128 *,A68_LINT *,struct A68t105 ,struct A68t121 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE128,REF LONG INT,MODE105) MODE121 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t128 *,A68_LINT ,struct A68t105 ,struct A68t121 *),(struct A68t128 *,A68_LINT ,struct A68t105 ,struct A68t121 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE128,LONG INT,MODE105) MODE121 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t128 *,struct A68t105 ,struct A68t121 *),(struct A68t128 *,struct A68t105 ,struct A68t121 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE128,MODE105) MODE121 */

A_PROCEDURE(A68_VOID ,A68t202,(A68_VC ,struct A68t105 ,struct A68t121 *),(A68_VC ,struct A68t105 ,struct A68t121 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE26,MODE105) MODE121 */

A_PROCEDURE(A68_VOID ,A68t203,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t204,(void),(void *));
typedef struct A68t204  A68_204 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t205,(A68_VC ,struct A68t105 ),(A68_VC ,struct A68t105 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE26,MODE105) INT */

A_PROCEDURE(A68_VOID ,A68t206,(A68_VC ,A68_VC ,struct A68t105 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t105 ,A68_VC *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE26,MODE26,MODE105) MODE26 */

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC ,A68_VC ,struct A68t105 ,struct A68t121 *),(A68_VC ,A68_VC ,struct A68t105 ,struct A68t121 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE26,MODE26,MODE105) MODE121 */
struct A68t208{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t209,(A68_VC ,A68_VC ,struct A68t105 ,struct A68t208 *),(A68_VC ,A68_VC ,struct A68t105 ,struct A68t208 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE26,MODE26,MODE105) MODE208 */

A_PROCEDURE(A68_VOID ,A68t210,(A68_VC *),(A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t107 *),(struct A68t107 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC MODE107 */

A_PROCEDURE(A68_VOID ,A68t212,(A68_VC ,struct A68t105 ,struct A68t107 *),(A68_VC ,struct A68t105 ,struct A68t107 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE26,MODE105) MODE107 */
struct A68t214 ;

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t214 ,struct A68t105 ),(struct A68t214 ,struct A68t105 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE214,MODE105) VOID */
A_VECTOR(struct A68t215 ,A68t214);
typedef struct A68t214  A68_214 ;    /* VECTOR [] MODE215 */
struct A68t215{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_55)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t216,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t218,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REAL) REAL */
struct A68t219{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t220,(A68_BOOL ,struct A68t219 *),(A68_BOOL ,struct A68t219 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(BOOL) MODE219 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t219 ,A68_BOOL ),(struct A68t219 ,A68_BOOL ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE219,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t219 *),(struct A68t219 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC MODE219 */

A_PROCEDURE(A68_BOOL ,A68t223,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t225 ;
struct A68t226 ;

A_PROCEDURE(A68_VOID ,A68t224,(A68_VC ,struct A68t67 ,struct A68t225 ,struct A68t226 ),(A68_VC ,struct A68t67 ,struct A68t225 ,struct A68t226 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE26,MODE67,MODE225,MODE226) VOID */

A_PROCEDURE(A68_BOOL ,A68t225,(A68_VC ,struct A68t210 ),(A68_VC ,struct A68t210 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE26,MODE210) BOOL */

A_PROCEDURE(A68_BOOL ,A68t226,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t227 ,struct A68t105 ),(struct A68t227 ,struct A68t105 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE227,MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t229,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t230,(A68_BOOL ,struct A68t35 *),(A68_BOOL ,struct A68t35 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(BOOL) MODE35 */

A_PROCEDURE(A68_VOID ,A68t231,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t35 ,struct A68t35 *),(struct A68t35 ,struct A68t35 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE35) REF MODE35 */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t107 ,A68_VC *),(struct A68t107 ,A68_VC *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE107) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t234,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t236 ;

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t236 ,A68_VC *),(struct A68t236 ,A68_VC *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE236) MODE26 */
struct A68t236 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t236  A68_236 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t237,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_REAL ,A68t239);
typedef struct A68t239  A68_239 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t120 *),(struct A68t120 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE120) VOID */
struct A68t241{
A68_INT  Int;
A_PAD_INT(PAD_56)
A68_INT  Width;
A_PAD_INT(PAD_57)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(INT,INT)  */
struct A68t242{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_58)
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE26,INT)  */
struct A68t243{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_59)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE26,INT)  */
struct A68t244{
A68_INT  Tab;
A_PAD_INT(PAD_60)
};
typedef struct A68t244  A68_244 ;    /* STRUCT(INT)  */
struct A68t245{
A68_INT  Pos;
A_PAD_INT(PAD_61)
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT)  */
struct A68t246{
A68_INT  After;
A_PAD_INT(PAD_62)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT)  */
struct A68t247{
A68_INT  Spaces;
A_PAD_INT(PAD_63)
};
typedef struct A68t247  A68_247 ;    /* STRUCT(INT)  */
struct A68t248{
A68_INT  Lines;
A_PAD_INT(PAD_64)
};
typedef struct A68t248  A68_248 ;    /* STRUCT(INT)  */
struct A68t249{
A68_INT  Indent;
A_PAD_INT(PAD_65)
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t250);
typedef struct A68t250  A68_250 ;    /* STRAIGHT MODE238 */
struct A68t238 { A68_INT mode; union {
A68_INT  mode1;
struct A68t35  mode2;
A68_BITS  mode3;
struct A68t178  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t177  mode9;
A68_REAL  mode10;
struct A68t239  mode11;
struct A68t240  mode12;
struct A68t241  mode13;
struct A68t242  mode14;
struct A68t243  mode15;
struct A68t244  mode16;
struct A68t245  mode17;
struct A68t246  mode18;
struct A68t247  mode19;
struct A68t248  mode20;
struct A68t249  mode21;
struct A68t250  mode22;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(INT,MODE35,BITS,MODE178,SHORT BITS,CHAR,MODE26,BOOL,MODE177,REAL,MODE239,MODE240,MODE241,MODE242,MODE243,MODE244,MODE245,MODE246,MODE247,MODE248,MODE249,MODE250)  */

A_PROCEDURE(A68_VOID ,A68t251,(A68_BOOL ,struct A68t242 *),(A68_BOOL ,struct A68t242 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(BOOL) MODE242 */

A_PROCEDURE(A68_VOID ,A68t252,(A68_BOOL ,struct A68t243 *),(A68_BOOL ,struct A68t243 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(BOOL) MODE243 */

A_PROCEDURE(A68_INT ,A68t253,(struct A68t120 *),(struct A68t120 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE120) INT */

A_PROCEDURE(A68_INT ,A68t254,(struct A68t120 *,A68_INT ),(struct A68t120 *,A68_INT ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE120,INT) INT */

A_PROCEDURE(A68_VOID ,A68t255,(A68_INT ,A68_INT ,struct A68t241 *),(A68_INT ,A68_INT ,struct A68t241 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(INT,INT) MODE241 */

A_PROCEDURE(A68_VOID ,A68t256,(A68_VC ,A68_INT ,struct A68t242 *),(A68_VC ,A68_INT ,struct A68t242 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE26,INT) MODE242 */

A_PROCEDURE(A68_VOID ,A68t257,(A68_VC ,A68_INT ,struct A68t243 *),(A68_VC ,A68_INT ,struct A68t243 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE26,INT) MODE243 */

A_PROCEDURE(A68_VOID ,A68t258,(A68_INT ,struct A68t244 *),(A68_INT ,struct A68t244 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(INT) MODE244 */

A_PROCEDURE(A68_VOID ,A68t259,(A68_INT ,struct A68t245 *),(A68_INT ,struct A68t245 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(INT) MODE245 */

A_PROCEDURE(A68_VOID ,A68t260,(A68_INT ,struct A68t246 *),(A68_INT ,struct A68t246 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(INT) MODE246 */

A_PROCEDURE(A68_VOID ,A68t261,(A68_INT ,struct A68t247 *),(A68_INT ,struct A68t247 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(INT) MODE247 */

A_PROCEDURE(A68_VOID ,A68t262,(A68_INT ,struct A68t248 *),(A68_INT ,struct A68t248 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(INT) MODE248 */

A_PROCEDURE(A68_VOID ,A68t263,(A68_INT ,struct A68t249 *),(A68_INT ,struct A68t249 *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(INT) MODE249 */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t120 *,A68_VC ),(struct A68t120 *,A68_VC ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE120,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t120 *,A68_INT ,A68_INT ),(struct A68t120 *,A68_INT ,A68_INT ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE120,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t120 *,A68_BITS ,A68_INT ),(struct A68t120 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE120,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t120 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t120 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE120,REAL,INT,INT) VOID */
struct A68t269 ;

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t120 *,struct A68t269 ),(struct A68t120 *,struct A68t269 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE120,MODE269) VOID */
A_VECTOR(struct A68t238 ,A68t269);
typedef struct A68t269  A68_269 ;    /* VECTOR [] MODE238 */
struct A68t271 ;
struct A68t272 ;

A_PROCEDURE(struct A68t120 *,A68t270,(struct A68t271 ,struct A68t272 ),(struct A68t271 ,struct A68t272 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE271,MODE272) REF MODE120 */
struct A68t271 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t271  A68_271 ;    /* UNION(INT,REF MODE26)  */
struct A68t272 { A68_INT mode; union {
struct A68t70  mode1;
struct A68t122  mode2;
} data; };
typedef struct A68t272  A68_272 ;    /* UNION(MODE70,MODE122)  */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,struct A68t269 ,A68_VC *),(A68_VC ,struct A68t269 ,A68_VC *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF MODE26,MODE269) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t274,(struct A68t120 *,A68_VC *),(struct A68t120 *,A68_VC *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(REF MODE120) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t269 ,A68_VC *),(struct A68t269 ,A68_VC *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE269) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t276,(A68_BOOL ,struct A68t107 *),(A68_BOOL ,struct A68t107 *,void *));
typedef struct A68t276  A68_276 ;    /* PROC(BOOL) MODE107 */
A_VECTOR(struct A68t279 ,A68t278);
typedef struct A68t278  A68_278 ;    /* VECTOR [] MODE279 */
struct A68t279{
A68_INT  Number;
A_PAD_INT(PAD_66)
A68_BITS  Class;
A_PAD_BITS(PAD_67)
A68_VC  Text;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t277{
A68_VC  Name;
struct A68t109  Messages;
A68_BOOL * Initialised;
struct A68t278  Setup;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE26,REF MODE109,REF BOOL,MODE278)  */

A_PROCEDURE(A68_VOID ,A68t280,(A68_BOOL ,struct A68t277 *),(A68_BOOL ,struct A68t277 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(BOOL) MODE277 */
A_VECTOR(A68_VC ,A68t281);
typedef struct A68t281  A68_281 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t107 ,struct A68t281 *),(struct A68t107 ,struct A68t281 *,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE107) MODE281 */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t281 ,struct A68t107 *),(struct A68t281 ,struct A68t107 *,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE281) MODE107 */
struct A68t285 ;

A_PROCEDURE(A68_BOOL ,A68t284,(struct A68t285 ),(struct A68t285 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE285) BOOL */
struct A68t285 { A68_INT mode; union {
struct A68t106  mode1;
struct A68t110  mode2;
} data; };
typedef struct A68t285  A68_285 ;    /* UNION(MODE106,MODE110)  */

A_PROCEDURE(A68_INT ,A68t286,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE106) INT */

A_PROCEDURE(A68_VOID ,A68t287,(A68_INT ,struct A68t277 ,struct A68t106 *),(A68_INT ,struct A68t277 ,struct A68t106 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(INT,MODE277) MODE106 */

A_PROCEDURE(A68_BOOL ,A68t288,(struct A68t106 ,struct A68t277 ),(struct A68t106 ,struct A68t277 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE106,MODE277) BOOL */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t106 ,struct A68t107 ,struct A68t110 *),(struct A68t106 ,struct A68t107 ,struct A68t110 *,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE106,MODE107) MODE110 */
A_VECTOR(struct A68t292 ,A68t291);
typedef struct A68t291  A68_291 ;    /* VECTOR [] MODE292 */
struct A68t290{
A68_BITS  Type;
A_PAD_BITS(PAD_68)
struct A68t291  Elements;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(BITS,REF MODE291)  */
struct A68t292 { A68_INT mode; union {
A68_INT * mode1;
struct A68t290  mode2;
} data; };
typedef struct A68t292  A68_292 ;    /* UNION(REF INT,MODE290)  */
A_VECTOR(struct A68t293 ,A68t295);
typedef struct A68t295  A68_295 ;    /* VECTOR [] MODE293 */
struct A68t294{
A68_INT  Choice;
A_PAD_INT(PAD_69)
struct A68t295  Params;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(INT,REF MODE295)  */
struct A68t293 { A68_INT mode; union {
struct A68t294  mode1;
struct A68t111  mode2;
} data; };
typedef struct A68t293  A68_293 ;    /* UNION(MODE294,MODE111)  */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t105 ,A68_VC *),(struct A68t105 ,A68_VC *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE105) REF MODE26 */
struct A68t296 { A68_INT mode; union {
struct A68t297  mode1;
A68_INT * mode2;
struct A68t290  mode3;
} data; };
typedef struct A68t296  A68_296 ;    /* UNION(MODE297,REF INT,MODE290)  */
struct A68t298{
A68_INT * Sort;
struct A68t296  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(REF INT,MODE296,REF MODE26,REF MODE26)  */
struct A68t299{
struct A68t298  Rule;
struct A68t299 * Rest;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE298,REF MODE299)  */

A_PROCEDURE(A68_BOOL ,A68t300,(struct A68t290 ),(struct A68t290 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(MODE290) BOOL */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t291 ,struct A68t290 *),(struct A68t291 ,struct A68t290 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(MODE291) MODE290 */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t292 ,struct A68t290 *),(struct A68t292 ,struct A68t290 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE292) MODE290 */
struct A68t304 ;

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t292 ,struct A68t304 ,A68_VC *),(struct A68t292 ,struct A68t304 ,A68_VC *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE292,REF MODE304) REF MODE26 */
A_VECTOR(struct A68t298 ,A68t304);
typedef struct A68t304  A68_304 ;    /* VECTOR [] MODE298 */

A_PROCEDURE(A68_VOID ,A68t305,(struct A68t120 *,struct A68t304 ),(struct A68t120 *,struct A68t304 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF MODE120,REF MODE304) VOID */
struct A68t307 ;

A_PROCEDURE(struct A68t299 *,A68t306,(struct A68t299 *,struct A68t307 ),(struct A68t299 *,struct A68t307 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE299,MODE307) REF MODE299 */
A_VECTOR(struct A68t308 ,A68t307);
typedef struct A68t307  A68_307 ;    /* VECTOR [] MODE308 */
struct A68t308{
A68_INT * No;
struct A68t296  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(REF INT,MODE296,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t293 ,struct A68t104 *),(struct A68t293 ,struct A68t104 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE293) REF MODE104 */

A_PROCEDURE(A68_BOOL ,A68t310,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_VOID ,A68t311,(A68_INT ,A68_VC ,struct A68t105 ),(A68_INT ,A68_VC ,struct A68t105 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(INT,MODE26,MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t312,(A68_VC ,A68_VC ,struct A68t310 ,struct A68t105 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t310 ,struct A68t105 ,A68_VC *,void *));
typedef struct A68t312  A68_312 ;    /* PROC(REF MODE26,MODE26,MODE310,MODE105) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t313,(A68_INT *,struct A68t105 ),(A68_INT *,struct A68t105 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(REF INT,MODE105) BOOL */
struct A68t315 ;

A_PROCEDURE(A68_VOID ,A68t314,(struct A68t315 ,struct A68t105 ,A68_VC *),(struct A68t315 ,struct A68t105 ,A68_VC *,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE315,MODE105) REF MODE26 */
struct A68t315{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_70)
A68_BOOL  Check;
A_PAD_BOOL(PAD_71)
};
typedef struct A68t315  A68_315 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t315 ,A68_VC ,struct A68t105 ,A68_VC *),(struct A68t315 ,A68_VC ,struct A68t105 ,A68_VC *,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE315,MODE26,MODE105) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t317,(A68_BOOL ,struct A68t105 ,A68_VC *),(A68_BOOL ,struct A68t105 ,A68_VC *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(BOOL,MODE105) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t318,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE111) BOOL */

A_PROCEDURE(A68_INT ,A68t319,(struct A68t111 ,struct A68t105 ),(struct A68t111 ,struct A68t105 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE111,MODE105) INT */

A_PROCEDURE(A68_VOID ,A68t320,(struct A68t111 ,struct A68t105 ,A68_VC *),(struct A68t111 ,struct A68t105 ,A68_VC *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(MODE111,MODE105) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t321,(struct A68t111 ,A68_VC ,struct A68t105 ,struct A68t208 *),(struct A68t111 ,A68_VC ,struct A68t105 ,struct A68t208 *,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE111,MODE26,MODE105) MODE208 */

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t104 ,A68_INT *,A68_VC ,struct A68t105 ,struct A68t172 *),(struct A68t104 ,A68_INT *,A68_VC ,struct A68t105 ,struct A68t172 *,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE104,REF INT,REF MODE26,MODE105) MODE172 */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t111 ,A68_BOOL *,A68_VC ,struct A68t105 ,A68_VC *),(struct A68t111 ,A68_BOOL *,A68_VC ,struct A68t105 ,A68_VC *,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE111,REF BOOL,MODE26,MODE105) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t324,(struct A68t111 ,struct A68t105 ,struct A68t107 ),(struct A68t111 ,struct A68t105 ,struct A68t107 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE111,MODE105,MODE107) INT */
struct A68t325{
A68_INT  Lwb;
A_PAD_INT(PAD_72)
A68_INT  Upb;
A_PAD_INT(PAD_73)
};
typedef struct A68t325  A68_325 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t326,(struct A68t111 ,struct A68t325 ,struct A68t105 ,struct A68t325 *),(struct A68t111 ,struct A68t325 ,struct A68t105 ,struct A68t325 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE111,MODE325,MODE105) MODE325 */

A_PROCEDURE(A68_VOID ,A68t327,(A68_CHAR ,A68_VC ,struct A68t105 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t105 ,A68_VC *,void *));
typedef struct A68t327  A68_327 ;    /* PROC(CHAR,MODE26,MODE105) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t328,(struct A68t111 ,struct A68t105 ),(struct A68t111 ,struct A68t105 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE111,MODE105) CHAR */

A_PROCEDURE(struct A68t299 *,A68t329,(void),(void *));
typedef struct A68t329  A68_329 ;    /* PROC REF MODE299 */
struct A68t330{
A68_INT  C;
A_PAD_INT(PAD_74)
};
typedef struct A68t330  A68_330 ;    /* STRUCT(INT)  */
struct A68t331{
A68_BITS  A;
A_PAD_BITS(PAD_75)
};
typedef struct A68t331  A68_331 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t333,(A68_VC ,struct A68t293 ,struct A68t105 ),(A68_VC ,struct A68t293 ,struct A68t105 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE26,MODE293,MODE105) VOID */
struct A68t332{
A68_VC  Parameter;
struct A68t333  Proc;
};
typedef struct A68t332  A68_332 ;    /* STRUCT(REF MODE26,MODE333)  */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t293 ,struct A68t105 ),(struct A68t293 ,struct A68t105 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE293,MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t104 ,struct A68t105 ),(struct A68t104 ,struct A68t105 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE104,MODE105) VOID */
struct A68t334 { A68_INT mode; union {
struct A68t332  mode1;
struct A68t335  mode2;
struct A68t336  mode3;
} data; };
typedef struct A68t334  A68_334 ;    /* UNION(MODE332,MODE335,MODE336)  */
struct A68t337 { A68_INT mode; union {
struct A68t338 * mode1;
struct A68t339 * mode2;
struct A68t340 * mode3;
} data; };
typedef struct A68t337  A68_337 ;    /* UNION(REF MODE338,REF MODE339,REF MODE340)  */
struct A68t338 ;

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t338 *,struct A68t120 *),(struct A68t338 *,struct A68t120 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF MODE338,REF MODE120) VOID */
struct A68t342 { A68_INT mode; union {
A68_VC  mode1;
struct A68t281  mode2;
struct A68t343  mode3;
} data; };
typedef struct A68t342  A68_342 ;    /* UNION(REF MODE26,REF MODE281,MODE343)  */
struct A68t338{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t292  Parameter;
struct A68t331  Access;
struct A68t330  Continuation;
struct A68t342  Help;
struct A68t334  Command;
};
typedef struct A68t338  A68_338 ;    /* STRUCT(REF MODE26,REF MODE26,MODE292,MODE331,MODE330,MODE342,MODE334)  */
A_VECTOR(struct A68t337 ,A68t341);
typedef struct A68t341  A68_341 ;    /* VECTOR [] MODE337 */
struct A68t339{
struct A68t338 * Group;
struct A68t341  Commands;
};
typedef struct A68t339  A68_339 ;    /* STRUCT(REF MODE338,REF MODE341)  */
struct A68t340{
struct A68t338 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t341  Locals;
struct A68t341  Globals;
struct A68t338 * Postlude;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(REF MODE338,REF MODE26,REF REF MODE26,REF MODE341,REF MODE341,REF MODE338)  */
struct A68t344{
struct A68t340 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_76)
struct A68t281  Input_lines;
struct A68t344 * Caller;
};
typedef struct A68t344  A68_344 ;    /* STRUCT(REF MODE340,INT,REF MODE281,REF MODE344)  */
struct A68t345 ;

A_PROCEDURE(A68_VOID ,A68t346,(struct A68t345 *,struct A68t338 *,struct A68t293 ,struct A68t105 ,struct A68t330 *),(struct A68t345 *,struct A68t338 *,struct A68t293 ,struct A68t105 ,struct A68t330 *,void *));
typedef struct A68t346  A68_346 ;    /* PROC(REF MODE345,REF MODE338,MODE293,MODE105) MODE330 */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t281 ),(struct A68t281 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(REF MODE281) VOID */
struct A68t349 ;

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t349 ),(struct A68t349 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE349) VOID */
struct A68t345{
struct A68t344 * Stack;
struct A68t304  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_77)
A68_BOOL  Private;
A_PAD_BOOL(PAD_78)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_79)
struct A68t346  Caller;
struct A68t347  Report_error;
struct A68t348  Set_default_msg;
struct A68t105  Abort;
};
typedef struct A68t345  A68_345 ;    /* STRUCT(REF MODE344,REF MODE304,BOOL,BOOL,BOOL,MODE346,MODE347,MODE348,MODE105)  */
struct A68t349 { A68_INT mode; union {
struct A68t105  mode1;
} data; };
typedef struct A68t349  A68_349 ;    /* UNION(MODE105,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t350,(struct A68t330 ,struct A68t330 ),(struct A68t330 ,struct A68t330 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE330,MODE330) BOOL */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t341 ,struct A68t341 ,struct A68t341 *),(struct A68t341 ,struct A68t341 ,struct A68t341 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE341,MODE341) REF MODE341 */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t341 ,struct A68t337 ,struct A68t341 *),(struct A68t341 ,struct A68t337 ,struct A68t341 *,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE341,MODE337) REF MODE341 */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t341 *,struct A68t341 ,struct A68t341 *),(struct A68t341 *,struct A68t341 ,struct A68t341 *,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF REF MODE341,MODE341) REF MODE341 */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t341 *,struct A68t337 ,struct A68t341 *),(struct A68t341 *,struct A68t337 ,struct A68t341 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF REF MODE341,MODE337) REF MODE341 */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t341 ,struct A68t341 *),(struct A68t341 ,struct A68t341 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE341) REF MODE341 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t337 ,struct A68t341 *),(struct A68t337 ,struct A68t341 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE337) REF MODE341 */

A_PROCEDURE(struct A68t339 *,A68t357,(A68_VC ,A68_VC ,struct A68t331 ,struct A68t341 ),(A68_VC ,A68_VC ,struct A68t331 ,struct A68t341 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE26,MODE26,MODE331,MODE341) REF MODE339 */

A_PROCEDURE(struct A68t340 *,A68t358,(struct A68t338 *,A68_VC ,A68_VC *,struct A68t341 ,struct A68t341 ,struct A68t334 ),(struct A68t338 *,A68_VC ,A68_VC *,struct A68t341 ,struct A68t341 ,struct A68t334 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE338,MODE26,REF REF MODE26,REF MODE341,REF MODE341,MODE334) REF MODE340 */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t345 *,struct A68t120 *,A68_VC ,A68_BOOL ,struct A68t105 ),(struct A68t345 *,struct A68t120 *,A68_VC ,A68_BOOL ,struct A68t105 ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE345,REF MODE120,REF MODE26,BOOL,MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t345 *,struct A68t120 *,A68_BOOL ,A68_BOOL ,struct A68t105 ),(struct A68t345 *,struct A68t120 *,A68_BOOL ,A68_BOOL ,struct A68t105 ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF MODE345,REF MODE120,BOOL,BOOL,MODE105) VOID */

A_PROCEDURE(struct A68t345 *,A68t361,(struct A68t347 ,struct A68t348 ,struct A68t105 ,struct A68t346 ,struct A68t299 *,struct A68t340 *,struct A68t293 ),(struct A68t347 ,struct A68t348 ,struct A68t105 ,struct A68t346 ,struct A68t299 *,struct A68t340 *,struct A68t293 ,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE347,MODE348,MODE105,MODE346,REF MODE299,REF MODE340,MODE293) REF MODE345 */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t345 *,struct A68t330 *),(struct A68t345 *,struct A68t330 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE345) MODE330 */
struct A68t363{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_80)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_81)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_82)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_83)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_84)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_85)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_86)
A68_INT  Width;
A_PAD_INT(PAD_87)
A68_INT  Page_count;
A_PAD_INT(PAD_88)
A68_INT  Page_length;
A_PAD_INT(PAD_89)
A68_INT  Eof_count;
A_PAD_INT(PAD_90)
struct A68t364 * Standard_reader;
struct A68t365 * Infile;
struct A68t91  Prompt;
struct A68t128 * Logfile;
struct A68t128 * Outfile;
};
typedef struct A68t363  A68_363 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE364,REF MODE365,MODE91,REF MODE128,REF MODE128)  */

A_PROCEDURE(A68_INT ,A68t366,(A68_VC *,struct A68t105 ),(A68_VC *,struct A68t105 ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF REF MODE26,MODE105) INT */
struct A68t364{
A68_VC  Rdbuffer;
struct A68t366  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_91)
A68_INT  Rdcharno;
A_PAD_INT(PAD_92)
A68_INT  Start_of_word;
A_PAD_INT(PAD_93)
struct A68t367 * Stack;
};
typedef struct A68t364  A68_364 ;    /* STRUCT(REF MODE26,MODE366,INT,INT,INT,REF MODE367)  */
struct A68t365{
struct A68t128 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_94)
A68_INT  Number;
A_PAD_INT(PAD_95)
A68_VC  Name;
struct A68t364 * Reader;
struct A68t365 * Previous;
};
typedef struct A68t365  A68_365 ;    /* STRUCT(REF MODE128,BOOL,INT,REF MODE26,REF MODE364,REF MODE365)  */
struct A68t367{
A68_VC  Line;
struct A68t367 * Rest;
};
typedef struct A68t367  A68_367 ;    /* STRUCT(REF MODE26,REF MODE367)  */

A_PROCEDURE(struct A68t363 *,A68t368,(void),(void *));
typedef struct A68t368  A68_368 ;    /* PROC REF MODE363 */

A_PROCEDURE(A68_VOID ,A68t369,(A68_VC ,struct A68t105 ),(A68_VC ,struct A68t105 ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE26,MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t370,(A68_VC ,struct A68t105 ),(A68_VC ,struct A68t105 ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE26,MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t371,(A68_INT ,struct A68t105 ),(A68_INT ,struct A68t105 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(INT,MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t91 ),(struct A68t91 ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE91) VOID */

A_PROCEDURE(struct A68t299 *,A68t373,(struct A68t299 *),(struct A68t299 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(REF MODE299) REF MODE299 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t67 ),(struct A68t67 ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE67) VOID */

A_PROCEDURE(A68_VOID ,A68t375,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t376);
typedef struct A68t376  A68_376 ;    /* STRUCT 53 CHAR */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t60 ,struct A68t60 *),(struct A68t60 ,struct A68t60 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE60) MODE60 */

A_PROCEDURE(struct A68t54 *,A68t378,(struct A68t53 ),(struct A68t53 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE53) REF MODE54 */

A_PROCEDURE(struct A68t131 *,A68t379,(struct A68t104 ,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,struct A68t105 ),(struct A68t104 ,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,struct A68t105 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(REF MODE104,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,MODE105) REF MODE131 */
A_ISTRUCT(A68_CHAR ,16,A68t380);
typedef struct A68t380  A68_380 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t381);
typedef struct A68t381  A68_381 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,46,A68t382);
typedef struct A68t382  A68_382 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t383);
typedef struct A68t383  A68_383 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(struct A68t238 ,2,A68t384);
typedef struct A68t384  A68_384 ;    /* STRUCT 2 MODE238 */
A_ISTRUCT(A68_CHAR ,41,A68t385);
typedef struct A68t385  A68_385 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t386);
typedef struct A68t386  A68_386 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t387);
typedef struct A68t387  A68_387 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t104 ,A68_INT ,A68_VC ,struct A68t105 ),(struct A68t104 ,A68_INT ,A68_VC ,struct A68t105 ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(REF MODE104,INT,MODE26,MODE105) VOID */
A_ISTRUCT(A68_CHAR ,27,A68t389);
typedef struct A68t389  A68_389 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t390);
typedef struct A68t390  A68_390 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t391);
typedef struct A68t391  A68_391 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t392);
typedef struct A68t392  A68_392 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t393);
typedef struct A68t393  A68_393 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t394);
typedef struct A68t394  A68_394 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t395);
typedef struct A68t395  A68_395 ;    /* STRUCT 39 CHAR */

A_PROCEDURE(A68_VOID ,A68t396,(struct A68t104 ,A68_INT ,A68_INT ,struct A68t105 ),(struct A68t104 ,A68_INT ,A68_INT ,struct A68t105 ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE104,INT,INT,MODE105) VOID */
A_ISTRUCT(A68_CHAR ,19,A68t397);
typedef struct A68t397  A68_397 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t398);
typedef struct A68t398  A68_398 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t399);
typedef struct A68t399  A68_399 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t400);
typedef struct A68t400  A68_400 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,66,A68t401);
typedef struct A68t401  A68_401 ;    /* STRUCT 66 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t402);
typedef struct A68t402  A68_402 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t403);
typedef struct A68t403  A68_403 ;    /* STRUCT 30 CHAR */
A_VECTOR(struct A68t37 ,A68t404);
typedef struct A68t404  A68_404 ;    /* VECTOR [] MODE37 */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t404 ,struct A68t37 ,struct A68t404 *),(struct A68t404 ,struct A68t37 ,struct A68t404 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF MODE404,MODE37) REF MODE404 */

A_PROCEDURE(A68_VOID ,A68t406,(A68_BOOL ,struct A68t404 *),(A68_BOOL ,struct A68t404 *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(BOOL) MODE404 */
A_ISTRUCT(A68_CHAR ,20,A68t407);
typedef struct A68t407  A68_407 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t408);
typedef struct A68t408  A68_408 ;    /* STRUCT 25 CHAR */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t35 ,struct A68t35 ,struct A68t35 *),(struct A68t35 ,struct A68t35 ,struct A68t35 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE35,REF MODE35) REF MODE35 */
A_ISTRUCT(A68_CHAR ,15,A68t410);
typedef struct A68t410  A68_410 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t411);
typedef struct A68t411  A68_411 ;    /* STRUCT 23 CHAR */

A_PROCEDURE(A68_BOOL ,A68t412,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(INT,INT) BOOL */
A_ISTRUCT(A68_CHAR ,36,A68t413);
typedef struct A68t413  A68_413 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(struct A68t238 ,4,A68t414);
typedef struct A68t414  A68_414 ;    /* STRUCT 4 MODE238 */
A_ISTRUCT(A68_CHAR ,47,A68t415);
typedef struct A68t415  A68_415 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t416);
typedef struct A68t416  A68_416 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_INT ,A68t417,(A68_INT ,struct A68t70 ),(A68_INT ,struct A68t70 ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(INT,MODE70) INT */
A_ISTRUCT(A68_CHAR ,43,A68t418);
typedef struct A68t418  A68_418 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t419);
typedef struct A68t419  A68_419 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t420);
typedef struct A68t420  A68_420 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t341 *),(struct A68t341 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC REF MODE341 */
A_ISTRUCT(A68_CHAR ,7,A68t422);
typedef struct A68t422  A68_422 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,138,A68t423);
typedef struct A68t423  A68_423 ;    /* STRUCT 138 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t424);
typedef struct A68t424  A68_424 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t425);
typedef struct A68t425  A68_425 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,134,A68t426);
typedef struct A68t426  A68_426 ;    /* STRUCT 134 CHAR */
A_ISTRUCT(struct A68t337 ,8,A68t427);
typedef struct A68t427  A68_427 ;    /* STRUCT 8 MODE337 */
A_ISTRUCT(A68_CHAR ,5,A68t428);
typedef struct A68t428  A68_428 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,116,A68t429);
typedef struct A68t429  A68_429 ;    /* STRUCT 116 CHAR */
A_ISTRUCT(struct A68t292 ,2,A68t430);
typedef struct A68t430  A68_430 ;    /* STRUCT 2 MODE292 */
A_ISTRUCT(A68_CHAR ,91,A68t431);
typedef struct A68t431  A68_431 ;    /* STRUCT 91 CHAR */
A_ISTRUCT(struct A68t337 ,2,A68t432);
typedef struct A68t432  A68_432 ;    /* STRUCT 2 MODE337 */
A_ISTRUCT(A68_CHAR ,1,A68t433);
typedef struct A68t433  A68_433 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t434);
typedef struct A68t434  A68_434 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,75,A68t435);
typedef struct A68t435  A68_435 ;    /* STRUCT 75 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t436);
typedef struct A68t436  A68_436 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t437);
typedef struct A68t437  A68_437 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,72,A68t438);
typedef struct A68t438  A68_438 ;    /* STRUCT 72 CHAR */
A_ISTRUCT(struct A68t337 ,5,A68t439);
typedef struct A68t439  A68_439 ;    /* STRUCT 5 MODE337 */
A_ISTRUCT(A68_CHAR ,68,A68t440);
typedef struct A68t440  A68_440 ;    /* STRUCT 68 CHAR */
A_ISTRUCT(A68_CHAR ,101,A68t441);
typedef struct A68t441  A68_441 ;    /* STRUCT 101 CHAR */
A_ISTRUCT(A68_CHAR ,135,A68t442);
typedef struct A68t442  A68_442 ;    /* STRUCT 135 CHAR */
A_ISTRUCT(A68_CHAR ,60,A68t443);
typedef struct A68t443  A68_443 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,157,A68t444);
typedef struct A68t444  A68_444 ;    /* STRUCT 157 CHAR */
A_ISTRUCT(struct A68t337 ,6,A68t445);
typedef struct A68t445  A68_445 ;    /* STRUCT 6 MODE337 */
A_ISTRUCT(A68_CHAR ,150,A68t446);
typedef struct A68t446  A68_446 ;    /* STRUCT 150 CHAR */
A_ISTRUCT(A68_CHAR ,166,A68t447);
typedef struct A68t447  A68_447 ;    /* STRUCT 166 CHAR */
A_ISTRUCT(A68_CHAR ,123,A68t448);
typedef struct A68t448  A68_448 ;    /* STRUCT 123 CHAR */
A_ISTRUCT(A68_CHAR ,185,A68t449);
typedef struct A68t449  A68_449 ;    /* STRUCT 185 CHAR */
A_ISTRUCT(A68_CHAR ,162,A68t450);
typedef struct A68t450  A68_450 ;    /* STRUCT 162 CHAR */
A_ISTRUCT(A68_CHAR ,61,A68t451);
typedef struct A68t451  A68_451 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_CHAR ,85,A68t452);
typedef struct A68t452  A68_452 ;    /* STRUCT 85 CHAR */
A_ISTRUCT(A68_CHAR ,130,A68t453);
typedef struct A68t453  A68_453 ;    /* STRUCT 130 CHAR */
A_ISTRUCT(A68_CHAR ,159,A68t454);
typedef struct A68t454  A68_454 ;    /* STRUCT 159 CHAR */
A_ISTRUCT(struct A68t337 ,4,A68t455);
typedef struct A68t455  A68_455 ;    /* STRUCT 4 MODE337 */
A_ISTRUCT(A68_CHAR ,9,A68t456);
typedef struct A68t456  A68_456 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,69,A68t457);
typedef struct A68t457  A68_457 ;    /* STRUCT 69 CHAR */
A_ISTRUCT(struct A68t337 ,3,A68t458);
typedef struct A68t458  A68_458 ;    /* STRUCT 3 MODE337 */
A_ISTRUCT(A68_CHAR ,149,A68t459);
typedef struct A68t459  A68_459 ;    /* STRUCT 149 CHAR */
A_ISTRUCT(A68_CHAR ,216,A68t460);
typedef struct A68t460  A68_460 ;    /* STRUCT 216 CHAR */
A_ISTRUCT(A68_CHAR ,225,A68t461);
typedef struct A68t461  A68_461 ;    /* STRUCT 225 CHAR */
A_ISTRUCT(A68_CHAR ,213,A68t462);
typedef struct A68t462  A68_462 ;    /* STRUCT 213 CHAR */
A_ISTRUCT(struct A68t292 ,3,A68t463);
typedef struct A68t463  A68_463 ;    /* STRUCT 3 MODE292 */
A_ISTRUCT(A68_CHAR ,86,A68t464);
typedef struct A68t464  A68_464 ;    /* STRUCT 86 CHAR */
A_ISTRUCT(A68_CHAR ,289,A68t465);
typedef struct A68t465  A68_465 ;    /* STRUCT 289 CHAR */
A_ISTRUCT(A68_CHAR ,87,A68t466);
typedef struct A68t466  A68_466 ;    /* STRUCT 87 CHAR */
A_ISTRUCT(A68_CHAR ,90,A68t467);
typedef struct A68t467  A68_467 ;    /* STRUCT 90 CHAR */
A_ISTRUCT(A68_CHAR ,57,A68t468);
typedef struct A68t468  A68_468 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(struct A68t337 ,27,A68t469);
typedef struct A68t469  A68_469 ;    /* STRUCT 27 MODE337 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from simreader --- */
extern A68_292  TBAASIM_nodename_syntax;
extern A68_BOOL  HFAASIM_is_nodename(struct A68t111 );
extern A68_292  WFAASIM_query_syntax;
extern A68_BOOL  QJAASIM_is_query(struct A68t111 );
extern A68_292  PGAASIM_values_syntax;
extern A68_292  RKAASIM_time_syntax;
extern A68_BOOL  DLAASIM_is_time(struct A68t111 );
extern A68_INT  HLAASIM_get_time(struct A68t111 ,struct A68t105 );
/* --- End of imports from simreader --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from command --- */
extern A68_VOID  MMDAOST_nullcommand(struct A68t293 ,struct A68t105 );
extern A68_331  XMDAOST_normalaccess;
extern A68_331  BNDAOST_hiddenaccess;
extern A68_330  ZNDAOST_continue;
extern A68_330  DODAOST_return;
extern A68_VOID  ARDAOST_makecommands(struct A68t341 ,A68_341 *);
extern A68_339 * NSDAOST_make_group(A68_VC ,A68_VC ,struct A68t331 ,struct A68t341 );
/* --- End of imports from command --- */


/* --- Imports from kernelreader --- */
extern A68_292  OAFAOST_plus_syntax;
extern A68_BOOL  KCFAOST_is_plus(struct A68t111 );
extern A68_292  AHFAOST_int_syntax;
extern A68_BOOL  GHFAOST_is_int(struct A68t111 );
extern A68_INT  KHFAOST_get_int(struct A68t111 ,struct A68t105 );
extern A68_292  IIFAOST_ident_syntax;
extern A68_VOID  SIFAOST_get_ident(struct A68t111 ,struct A68t105 ,A68_VC *);
extern A68_292  CJFAOST_fnname_syntax;
extern A68_VOID  LKFAOST_get_fnname(struct A68t111 ,struct A68t105 ,A68_VC *);
extern A68_BOOL  ELFAOST_is_name(struct A68t111 );
extern A68_VOID  JLFAOST_get_name(struct A68t111 ,struct A68t105 ,A68_VC *);
extern A68_292  HNFAOST_filename_syntax;
extern A68_292  VXFAOST_trim_syntax;
extern A68_BOOL  QAGAOST_is_trim(struct A68t111 );
extern A68_VOID  VAGAOST_get_trim(struct A68t111 ,struct A68t325 ,struct A68t105 ,A68_325 *);
extern A68_292  ADGAOST_quoted_string_syntax;
extern A68_VOID  SEGAOST_get_quoted_string(struct A68t111 ,struct A68t105 ,A68_VC *);
extern A68_292  WEGAOST_character_syntax;
extern A68_BOOL  MFGAOST_is_character(struct A68t111 );
extern A68_CHAR  QFGAOST_get_character(struct A68t111 ,struct A68t105 );
/* --- End of imports from kernelreader --- */


/* --- Imports from commandsyntax --- */
extern A68_292  SRAAOST_noparameters;
extern A68_VOID  PSAAOST_alt(struct A68t291 ,A68_290 *);
extern A68_VOID  ATAAOST_prod(struct A68t291 ,A68_290 *);
extern A68_VOID  LTAAOST_opt(struct A68t292 ,A68_290 *);
extern A68_VOID  DUAAOST_star(struct A68t292 ,A68_290 *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_106  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  NAAAOSI_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  LRAAOSL_newline(struct A68t120 *);
extern A68_VOID  GFBAOSL_put(struct A68t120 *,struct A68t269 );
/* --- End of imports from putstrings --- */


/* --- Imports from osinterface --- */
extern A68_189  BOBAOSI_update_access;
extern A68_189  FOBAOSI_update_truncate_access;
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
extern A68_120 * LEAAOST_out;
/* --- End of imports from osinterface --- */


/* --- Imports from basics --- */
extern A68_VC  NTCAOST_nilid;
extern A68_INT  AJDAOST_maxint;
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from kernel --- */
extern A68_54 * WSAASIM_nilsst;
extern A68_48  ZSAASIM_nullstype;
extern A68_131 * STAASIM_nilsram;
extern A68_INT  VYCBSIM_signalwidth(struct A68t48 );
extern A68_54 * PZCBSIM_trimsignal(struct A68t48 ,A68_INT ,A68_INT );
extern A68_VOID  VADBSIM_trimwire(struct A68t60 ,A68_INT ,A68_INT ,A68_60 *);
extern A68_VOID  BCDBSIM_trimram(struct A68t131 *,A68_INT ,A68_INT ,A68_60 *);
extern A68_VC * AEDBSIM_encode(struct A68t37 ,struct A68t48 );
extern A68_VOID  TKCBSIM_pokesignalvalue(struct A68t36 ,A68_VC );
extern A68_VOID  KPCBSIM_initialiseprobeinstance(A68_VC ,struct A68t70 ,A68_36 *);
extern A68_VOID  DQCBSIM_reinitialiseprobeinstance(struct A68t36 );
extern A68_VOID  RQCBSIM_destroyprobeinstance(A68_INT ,A68_INT );
extern A68_VOID  YRCBSIM_probeinputnode(struct A68t36 ,A68_36 *);
extern A68_VOID  HRCBSIM_reconnectprobeinstance(struct A68t36 ,struct A68t36 );
extern A68_VOID  SSCBSIM_listprobesconnectedto(A68_INT ,A68_35 *);
extern A68_VOID  JTCBSIM_stopprobeinstances(struct A68t35 );
extern A68_BOOL  STCBSIM_probetypematchesline(struct A68t36 ,struct A68t36 );
extern A68_INT  OUCBSIM_freezeinstance(struct A68t36 );
extern A68_BOOL  DVCBSIM_unfreezeinstance(struct A68t36 );
extern A68_VOID  TVCBSIM_pokesignalvalueandfanout(struct A68t36 ,A68_VC );
extern A68_VOID  MWCBSIM_lookupfunction(A68_INT ,A68_133 *);
extern A68_VOID  FDDBSIM_inputs(struct A68t133 ,A68_60 *);
extern A68_VOID  MWCASIM_lookupoutputs(A68_INT ,A68_60 *);
/* --- End of imports from kernel --- */


/* --- Imports from simtime --- */
extern A68_INT  YPAASIM_activetime;
extern A68_INT  ZPAASIM_timemode;
#define AQAASIM_present 1
#define BQAASIM_past 2
extern A68_VOID  DQAASIM_settimemode(A68_INT );
extern A68_INT  EQAASIM_scaletime;
/* --- End of imports from simtime --- */


/* --- Imports from simstart --- */
extern A68_VOID  XZGBSIM_initialiseshell(struct A68t128 *,struct A68t70 );
extern A68_VOID  XAHBSIM_initialiseshellwithfn(A68_VC ,struct A68t70 );
/* --- End of imports from simstart --- */


/* --- Imports from simrun --- */
extern A68_BOOL  ZVGBSIM_monitorspending;
extern A68_VOID  VWGBSIM_simulateandmonitor(A68_INT ,A68_BOOL *,A68_BOOL *,struct A68t70 );
extern A68_VOID  HXGBSIM_replayandmonitor(A68_INT ,A68_BOOL ,struct A68t70 );
/* --- End of imports from simrun --- */


/* --- Imports from simprompt --- */
extern A68_VC * QPAASIM_simprompt;
extern A68_VC  RPAASIM_presentsimprompt;
extern A68_VC  SPAASIM_pastsimprompt;
/* --- End of imports from simprompt --- */


/* --- Imports from simpoke --- */
#define YKEBSIM_nocycle_and_check 2
#define ZKEBSIM_nocycle_nocheck 3
extern A68_VOID  FLEBSIM_get_values(struct A68t104 ,A68_INT *,struct A68t48 ,A68_INT ,struct A68t70 ,A68_37 *);
/* --- End of imports from simpoke --- */


/* --- Imports from simpeek --- */
extern A68_VOID  MFEBSIM_peekanddecode(struct A68t36 ,A68_VC ,A68_37 *);
#define UFEBSIM_nopunctuation 0X0U
extern A68_VOID  LHEBSIM_printsignalvalue(struct A68t37 ,A68_BITS ,struct A68t120 *);
/* --- End of imports from simpeek --- */


/* --- Imports from simpast --- */
extern A68_INT  YRFBSIM_savedprintstyle;
extern A68_CHAR  ASFBSIM_savedmonitoringseparator;
extern A68_63 * BSFBSIM_savedtestpoints;
extern A68_INT  CSFBSIM_savedactivetime;
extern A68_72 * DSFBSIM_savedmonitoringpointer;
/* --- End of imports from simpast --- */


/* --- Imports from simnode --- */
extern A68_72 * LCFBSIM_makepath(A68_INT ,A68_VC ,struct A68t73 *);
extern A68_VOID  RBFBSIM_nodename(struct A68t72 *,A68_VC *);
extern A68_72 * SEFBSIM_get_nodename(struct A68t104 ,A68_INT *,struct A68t105 );
extern A68_72 * GMFBSIM_new(struct A68t72 *);
extern A68_72 * DNFBSIM_goin(struct A68t72 *);
extern A68_72 * PNFBSIM_goout(struct A68t72 *);
extern A68_72 * YNFBSIM_goout(A68_VC ,struct A68t72 *);
extern A68_72 * QOFBSIM_expandroot(struct A68t72 *);
extern A68_72 * MOFBSIM_newalias(struct A68t72 *,A68_VC );
extern A68_36 * SPFBSIM_node(struct A68t72 *,struct A68t70 );
/* --- End of imports from simnode --- */


/* --- Imports from simtable --- */
extern A68_72 * HGDBSIM_nilpath;
#define MGDBSIM_any 0
#define NGDBSIM_probename 1
#define OGDBSIM_aliasname 2
extern A68_VC  JGDBSIM_monitoringpointername;
extern A68_VC  KGDBSIM_simulatedfunctionname;
extern A68_BOOL  XIDBSIM_simtableaddbinding(A68_VC ,A68_INT ,struct A68t82 );
extern A68_BOOL  IJDBSIM_simtablereplacebinding(A68_VC ,A68_INT ,struct A68t82 );
extern A68_BOOL  UJDBSIM_simtablediscardbinding(A68_VC ,A68_INT );
extern A68_BOOL  EKDBSIM_simtablediscardbindingsbybase(A68_INT );
extern A68_BOOL  UKDBSIM_simtablelookuppath(A68_VC ,A68_INT ,struct A68t72 **);
extern A68_BOOL  DLDBSIM_simtablelookupcircuitbybase(A68_INT ,A68_INT *);
extern A68_VOID  PMDBSIM_simtablestartlistingpathnames(void);
extern A68_BOOL  QMDBSIM_simtablemorepathnames(void);
extern A68_VOID  WMDBSIM_simtablenextpathname(A68_VC *);
extern A68_72 * ZMDBSIM_simtablenextpath(void);
/* --- End of imports from simtable --- */


/* --- Imports from simmonitor --- */
#define BZEBSIM_noaction 0
#define CZEBSIM_monitor 1
#define DZEBSIM_display 2
#define EZEBSIM_stop 3
#define FZEBSIM_keep 4
#define GZEBSIM_nocondition 0
#define HZEBSIM_always 1
#define IZEBSIM_changes 2
#define KZEBSIM_becomes 4
#define JZEBSIM_equals 3
extern A68_63 * XSFBSIM_testpoints;
extern A68_63 * NYFBSIM_new(struct A68t63 *);
extern A68_VOID  RZFBSIM_clear(struct A68t63 *);
extern A68_CHAR  ZAGBSIM_monitoringseparator;
extern A68_INT  TSFBSIM_printstyle;
#define USFBSIM_freeform 1
#define VSFBSIM_tabulated 2
#define WSFBSIM_noprint 3
#define DKGBSIM_printequals 1
extern A68_VOID  KKGBSIM_printfreeform(A68_INT ,struct A68t34 *,struct A68t37 *,A68_INT );
extern A68_VOID  BIGBSIM_pttimefreeformscaled(A68_INT ,A68_INT );
extern A68_VOID  BMGBSIM_monitorheading(void);
extern A68_34 * ATGBSIM_loadmonitor(struct A68t72 *,A68_INT ,A68_INT ,struct A68t70 );
extern A68_INT  MUGBSIM_addmonitor(struct A68t34 *);
extern A68_VOID  UUGBSIM_newtestpoints(A68_INT ,struct A68t70 );
extern A68_VOID  IQGBSIM_listmonitors(struct A68t77 ,A68_INT ,A68_INT ,A68_BOOL ,A68_35 *);
extern A68_VOID  QVGBSIM_removemonitor(A68_INT ,A68_BOOL ,struct A68t70 );
/* --- End of imports from simmonitor --- */


/* --- Imports from simbasics --- */
extern A68_INT  MQAASIM_max(A68_INT ,A68_INT );
extern A68_INT  TQAASIM_digits(A68_INT );
extern A68_VOID  ZQAASIM_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from simbasics --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void WAAASIM(void);   /* simreader */
extern void TIGAOST(void);   /* ioprocs */
extern void FMDAOST(void);   /* command */
extern void TXEAOST(void);   /* kernelreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void XWBBSIM(void);   /* kernel */
extern void TPAASIM(void);   /* simtime */
extern void XXGBSIM(void);   /* simstart */
extern void UVGBSIM(void);   /* simrun */
extern void LPAASIM(void);   /* simprompt */
extern void SKEBSIM(void);   /* simpoke */
extern void FFEBSIM(void);   /* simpeek */
extern void TRFBSIM(void);   /* simpast */
extern void RZEBSIM(void);   /* simnode */
extern void ZFDBSIM(void);   /* simtable */
extern void FSFBSIM(void);   /* simmonitor */
extern void FQAASIM(void);   /* simbasics */
/* --- end of DECS initialisation functions --- */
static A68_376   VBHBSIM = {"$Id: simcmd.a68,v 34.2 1995/03/29 13:04:57 ella Exp $"}; 
A_GISVEC(A68_VC ,WBHBSIM,VBHBSIM,53)
static A68_380   QDHBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,RDHBSIM,QDHBSIM,16)
static A68_381   XDHBSIM = {"The node name supplied does not identify a function"}; 
A_GISVEC(A68_VC ,YDHBSIM,XDHBSIM,51)
static A68_382   ZDHBSIM = {"The node name supplied does not identify a RAM"}; 
A_GISVEC(A68_VC ,AEHBSIM,ZDHBSIM,46)
static A68_383   OEHBSIM = {"This command has been withdrawn."}; 
A_GISVEC(A68_VC ,PEHBSIM,OEHBSIM,32)
static A68_385   JFHBSIM = {"RAMs may only be examined in present mode"}; 
A_GISVEC(A68_VC ,KFHBSIM,JFHBSIM,41)
static A68_386   SFHBSIM = {"Element   "}; 
A_GISVEC(A68_VC ,TFHBSIM,SFHBSIM,10)
static A68_386   XFHBSIM = {"          "}; 
A_GISVEC(A68_VC ,YFHBSIM,XFHBSIM,10)
static A68_387   FGHBSIM = {" = "}; 
A_GISVEC(A68_VC ,GGHBSIM,FGHBSIM,3)
static A68_380   BIHBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,CIHBSIM,BIHBSIM,16)
static A68_389   LIHBSIM = {"This has not been displayed"}; 
A_GISVEC(A68_VC ,MIHBSIM,LIHBSIM,27)
static A68_390   QIHBSIM = {"Keeping must be switched off in present mode"}; 
A_GISVEC(A68_VC ,RIHBSIM,QIHBSIM,44)
static A68_391   TIHBSIM = {"This has not been kept"}; 
A_GISVEC(A68_VC ,UIHBSIM,TIHBSIM,22)
static A68_389   YIHBSIM = {"This has not been monitored"}; 
A_GISVEC(A68_VC ,ZIHBSIM,YIHBSIM,27)
static A68_392   DJHBSIM = {"No such breakpoint"}; 
A_GISVEC(A68_VC ,EJHBSIM,DJHBSIM,18)
static A68_393   AMHBSIM = {"Invalid node name"}; 
A_GISVEC(A68_VC ,BMHBSIM,AMHBSIM,17)
static A68_393   XMHBSIM = {"Invalid node name"}; 
A_GISVEC(A68_VC ,YMHBSIM,XMHBSIM,17)
static A68_394   BNHBSIM = {"This node name cannot be gone into"}; 
A_GISVEC(A68_VC ,CNHBSIM,BNHBSIM,34)
static A68_395   YNHBSIM = {"\" is not a function in the current path"}; 
A_GISVEC(A68_VC ,AOHBSIM,YNHBSIM,39)
static A68_383   DOHBSIM = {"There is no surrounding function"}; 
A_GISVEC(A68_VC ,EOHBSIM,DOHBSIM,32)
static A68_380   NPHBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,OPHBSIM,NPHBSIM,16)
static A68_380   KQHBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,LQHBSIM,KQHBSIM,16)
static A68_380   BRHBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,CRHBSIM,BRHBSIM,16)
static A68_397   NSHBSIM = {"Now in present mode"}; 
A_GISVEC(A68_VC ,OSHBSIM,NSHBSIM,19)
static A68_380   ETHBSIM = {"Now in past mode"}; 
A_GISVEC(A68_VC ,FTHBSIM,ETHBSIM,16)
static A68_58  UTHBSIM_sb;
static A68_133  VTHBSIM_sf;
static A68_60  WTHBSIM_sfi;
static A68_48  XTHBSIM_sfitype;
static A68_INT  YTHBSIM_sfiwidth;
static A68_382   EUHBSIM = {"set cp cache: simulated function found corrupt"}; 
A_GISVEC(A68_VC ,FUHBSIM,EUHBSIM,46)
static A68_398   SUHBSIM = {"Parameters must be set in present mode"}; 
A_GISVEC(A68_VC ,TUHBSIM,SUHBSIM,38)
static A68_398   YVHBSIM = {"Parameters must be set in present mode"}; 
A_GISVEC(A68_VC ,ZVHBSIM,YVHBSIM,38)
static A68_380   CWHBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,DWHBSIM,CWHBSIM,16)
static A68_381   IWHBSIM = {"The node name supplied does not identify a function"}; 
A_GISVEC(A68_VC ,JWHBSIM,IWHBSIM,51)
static A68_399   SXHBSIM = {"Circuit changes can only be achieved in present mode"}; 
A_GISVEC(A68_VC ,TXHBSIM,SXHBSIM,52)
static A68_380   WXHBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,XXHBSIM,WXHBSIM,16)
static A68_400   ZXHBSIM = {"Cannot freeze probe functions"}; 
A_GISVEC(A68_VC ,AYHBSIM,ZXHBSIM,29)
static A68_381   DYHBSIM = {"The node name supplied does not identify a function"}; 
A_GISVEC(A68_VC ,EYHBSIM,DYHBSIM,51)
static A68_401   GYHBSIM = {"Warning: Those outputs directly connected to inputs are not frozen"}; 
A_GISVEC(A68_VC ,HYHBSIM,GYHBSIM,66)
static A68_402   LYHBSIM = {"Already frozen"}; 
A_GISVEC(A68_VC ,MYHBSIM,LYHBSIM,14)
static A68_399   WYHBSIM = {"Circuit changes can only be achieved in present mode"}; 
A_GISVEC(A68_VC ,XYHBSIM,WYHBSIM,52)
static A68_380   AZHBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,BZHBSIM,AZHBSIM,16)
static A68_381   FZHBSIM = {"The node name supplied does not identify a function"}; 
A_GISVEC(A68_VC ,GZHBSIM,FZHBSIM,51)
static A68_403   HZHBSIM = {"Can't dontfreeze that function"}; 
A_GISVEC(A68_VC ,IZHBSIM,HZHBSIM,30)
static A68_390   RAIBSIM = {"RAMs may only be initialised in present mode"}; 
A_GISVEC(A68_VC ,SAIBSIM,RAIBSIM,44)
static A68_395   DCIBSIM = {"Keeping must be started in present mode"}; 
A_GISVEC(A68_VC ,ECIBSIM,DCIBSIM,39)
static A68_407   MCIBSIM = {"this is already kept"}; 
A_GISVEC(A68_VC ,NCIBSIM,MCIBSIM,20)
static A68_380   RCIBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,SCIBSIM,RCIBSIM,16)
static A68_407   XCIBSIM = {"this is already kept"}; 
A_GISVEC(A68_VC ,YCIBSIM,XCIBSIM,20)
static A68_399   QDIBSIM = {"Circuit changes can only be achieved in present mode"}; 
A_GISVEC(A68_VC ,RDIBSIM,QDIBSIM,52)
static A68_408   TDIBSIM = {"probe name already exists"}; 
A_GISVEC(A68_VC ,UDIBSIM,TDIBSIM,25)
static A68_399   OFIBSIM = {"Circuit changes can only be achieved in present mode"}; 
A_GISVEC(A68_VC ,PFIBSIM,OFIBSIM,52)
static A68_410   RFIBSIM = {"Probe not found"}; 
A_GISVEC(A68_VC ,SFIBSIM,RFIBSIM,15)
static A68_380   HHIBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,IHIBSIM,HHIBSIM,16)
static A68_411   LHIBSIM = {"Let name already exists"}; 
A_GISVEC(A68_VC ,MHIBSIM,LHIBSIM,23)
static A68_392   ZHIBSIM = {"Let name not found"}; 
A_GISVEC(A68_VC ,AIIBSIM,ZHIBSIM,18)
static A68_399   UIIBSIM = {"Circuit changes can only be achieved in present mode"}; 
A_GISVEC(A68_VC ,VIIBSIM,UIIBSIM,52)
static A68_380   CJIBSIM = {"Invalid nodename"}; 
A_GISVEC(A68_VC ,DJIBSIM,CJIBSIM,16)
static A68_410   HJIBSIM = {"Probe not found"}; 
A_GISVEC(A68_VC ,IJIBSIM,HJIBSIM,15)
static A68_385   LJIBSIM = {"Probe input type does not match line type"}; 
A_GISVEC(A68_VC ,MJIBSIM,LJIBSIM,41)
static A68_413   NJIBSIM = {"Probes cannot be connected in a loop"}; 
A_GISVEC(A68_VC ,OJIBSIM,NJIBSIM,36)
static A68_399   BKIBSIM = {"Circuit changes can only be achieved in present mode"}; 
A_GISVEC(A68_VC ,CKIBSIM,BKIBSIM,52)
static A68_410   EKIBSIM = {"Probe not found"}; 
A_GISVEC(A68_VC ,FKIBSIM,EKIBSIM,15)
static A68_394   YLIBSIM = {"The specified times are impossible"}; 
A_GISVEC(A68_VC ,ZLIBSIM,YLIBSIM,34)
static A68_415   VMIBSIM = {"Scale time must be greater than or equal to 1 !"}; 
A_GISVEC(A68_VC ,WMIBSIM,VMIBSIM,47)
static A68_416   JNIBSIM = {"New simulated function must be selected in present mode"}; 
A_GISVEC(A68_VC ,KNIBSIM,JNIBSIM,55)
static A68_394   AOIBSIM = {"A single character should be given"}; 
A_GISVEC(A68_VC ,BOIBSIM,AOIBSIM,34)
static A68_418   POIBSIM = {"Resulting value of time will be too large !"}; 
A_GISVEC(A68_VC ,QOIBSIM,POIBSIM,43)
static A68_419   WOIBSIM = {"Resulting end time will exceeded maximum value of time !"}; 
A_GISVEC(A68_VC ,XOIBSIM,WOIBSIM,56)
static A68_402   BPIBSIM = {"Time not valid"}; 
A_GISVEC(A68_VC ,CPIBSIM,BPIBSIM,14)
static A68_397   EPIBSIM = {"I can't reduce time"}; 
A_GISVEC(A68_VC ,FPIBSIM,EPIBSIM,19)
static A68_420   HPIBSIM = {"  *** time = "}; 
A_GISVEC(A68_VC ,IPIBSIM,HPIBSIM,13)
static A68_190   MPIBSIM = {" ***"}; 
A_GISVEC(A68_VC ,NPIBSIM,MPIBSIM,4)
static A68_190   VPIBSIM = {"DONT"}; 
static A68_422   YPIBSIM = {"DISPLAY"}; 
A_GISVEC(A68_VC ,ZPIBSIM,YPIBSIM,7)
static A68_423   GQIBSIM = {"Switches off all displays on the named node(s).  Given without a nodename, it applies to the function indicated by the monitoring pointer."}; 
A_GISVEC(A68_VC ,HQIBSIM,GQIBSIM,138)
static A68_422   QQIBSIM = {"MONITOR"}; 
A_GISVEC(A68_VC ,RQIBSIM,QQIBSIM,7)
static A68_423   YQIBSIM = {"Switches off all monitors on the named node(s).  Given without a nodename, it applies to the function indicated by the monitoring pointer."}; 
A_GISVEC(A68_VC ,ZQIBSIM,YQIBSIM,138)
static A68_190   IRIBSIM = {"MAKE"}; 
A_GISVEC(A68_VC ,JRIBSIM,IRIBSIM,4)
static A68_386   LRIBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,MRIBSIM,LRIBSIM,10)
static A68_387   VRIBSIM = {"LET"}; 
A_GISVEC(A68_VC ,WRIBSIM,VRIBSIM,3)
static A68_386   YRIBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,ZRIBSIM,YRIBSIM,10)
static A68_424   ISIBSIM = {"FREEZE"}; 
A_GISVEC(A68_VC ,JSIBSIM,ISIBSIM,6)
static A68_386   LSIBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,MSIBSIM,LSIBSIM,10)
static A68_402   VSIBSIM = {"SAVESIMULATION"}; 
A_GISVEC(A68_VC ,WSIBSIM,VSIBSIM,14)
static A68_425   YSIBSIM = {"SS"}; 
A_GISVEC(A68_VC ,ZSIBSIM,YSIBSIM,2)
static A68_386   BTIBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,CTIBSIM,BTIBSIM,10)
static A68_190   LTIBSIM = {"STOP"}; 
A_GISVEC(A68_VC ,MTIBSIM,LTIBSIM,4)
static A68_190   OTIBSIM = {"STOP"}; 
A_GISVEC(A68_VC ,PTIBSIM,OTIBSIM,4)
static A68_426   VTIBSIM = {"Switches off all stops on the named node(s). Given without a nodename, it applies to the function indicated by the monitoring pointer."}; 
A_GISVEC(A68_VC ,WTIBSIM,VTIBSIM,134)
static A68_190   FUIBSIM = {"KEEP"}; 
A_GISVEC(A68_VC ,GUIBSIM,FUIBSIM,4)
static A68_386   NUIBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,OUIBSIM,NUIBSIM,10)
A_GISVEC(A68_VC ,YUIBSIM,VPIBSIM,4)
static A68_428   BVIBSIM = {"PRINT"}; 
static A68_422   EVIBSIM = {"POINTER"}; 
A_GISVEC(A68_VC ,FVIBSIM,EVIBSIM,7)
static A68_429   IVIBSIM = {"Shows the position of the monitoring pointer, by displaying the full hierarchic name of the node to which it points."}; 
A_GISVEC(A68_VC ,JVIBSIM,IVIBSIM,116)
static A68_387   SVIBSIM = {"RAM"}; 
A_GISVEC(A68_VC ,TVIBSIM,SVIBSIM,3)
static A68_431   BWIBSIM = {"Prints the values of some or all of the elements of the RAM identified by the '<nodename>'."}; 
A_GISVEC(A68_VC ,CWIBSIM,BWIBSIM,91)
A_GISVEC(A68_VC ,MWIBSIM,BVIBSIM,5)
static A68_428   PWIBSIM = {"CLEAR"}; 
static A68_433   QWIBSIM = {""}; 
static A68_434   TWIBSIM = {"DISPLAYS"}; 
A_GISVEC(A68_VC ,UWIBSIM,TWIBSIM,8)
static A68_435   WWIBSIM = {"Switches off all the displays which have been set so far in the simulation."}; 
A_GISVEC(A68_VC ,XWIBSIM,WWIBSIM,75)
static A68_434   GXIBSIM = {"MONITORS"}; 
A_GISVEC(A68_VC ,HXIBSIM,GXIBSIM,8)
static A68_435   JXIBSIM = {"Switches off all the monitors which have been set so far in the simulation."}; 
A_GISVEC(A68_VC ,KXIBSIM,JXIBSIM,75)
static A68_436   TXIBSIM = {"SETSEPARATOR"}; 
A_GISVEC(A68_VC ,UXIBSIM,TXIBSIM,12)
static A68_190   WXIBSIM = {"SSEP"}; 
A_GISVEC(A68_VC ,XXIBSIM,WXIBSIM,4)
static A68_437   ZXIBSIM = {"Sets the tabulated output column separator to <space>."}; 
A_GISVEC(A68_VC ,AYIBSIM,ZXIBSIM,54)
static A68_428   JYIBSIM = {"STOPS"}; 
A_GISVEC(A68_VC ,KYIBSIM,JYIBSIM,5)
static A68_438   MYIBSIM = {"Switches off all the stops which have been set so far in the simulation."}; 
A_GISVEC(A68_VC ,NYIBSIM,MYIBSIM,72)
static A68_428   WYIBSIM = {"KEEPS"}; 
A_GISVEC(A68_VC ,XYIBSIM,WYIBSIM,5)
static A68_386   ZYIBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,AZIBSIM,ZYIBSIM,10)
A_GISVEC(A68_VC ,JZIBSIM,QWIBSIM,0)
A_GISVEC(A68_VC ,KZIBSIM,PWIBSIM,5)
static A68_425   NZIBSIM = {"GO"}; 
static A68_190   QZIBSIM = {"HOME"}; 
A_GISVEC(A68_VC ,RZIBSIM,QZIBSIM,4)
static A68_440   UZIBSIM = {"Resets the monitoring pointer to just inside the simulated function."}; 
A_GISVEC(A68_VC ,VZIBSIM,UZIBSIM,68)
static A68_425   EAJBSIM = {"TO"}; 
A_GISVEC(A68_VC ,FAJBSIM,EAJBSIM,2)
static A68_441   KAJBSIM = {"Moves the monitoring pointer to the next instance of the named function(s) in the monitored function."}; 
A_GISVEC(A68_VC ,LAJBSIM,KAJBSIM,101)
static A68_190   UAJBSIM = {"PAST"}; 
A_GISVEC(A68_VC ,VAJBSIM,UAJBSIM,4)
static A68_386   ABJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,BBJBSIM,ABJBSIM,10)
static A68_425   KBJBSIM = {"IN"}; 
A_GISVEC(A68_VC ,LBJBSIM,KBJBSIM,2)
static A68_442   SBJBSIM = {"Selects as monitored function the next instance of the named function after the monitoring pointer in the currently monitored function."}; 
A_GISVEC(A68_VC ,TBJBSIM,SBJBSIM,135)
static A68_387   CCJBSIM = {"OUT"}; 
A_GISVEC(A68_VC ,DCJBSIM,CCJBSIM,3)
static A68_443   OCJBSIM = {"Moves the monitoring pointer outside the specified function."}; 
A_GISVEC(A68_VC ,PCJBSIM,OCJBSIM,60)
static A68_190   YCJBSIM = {"BACK"}; 
A_GISVEC(A68_VC ,ZCJBSIM,YCJBSIM,4)
static A68_444   KDJBSIM = {"This is equivalent to 'goout' followed by 'goin'.  With no parameter this has the effect of moving the monitoring pointer just inside the monitored function."}; 
A_GISVEC(A68_VC ,LDJBSIM,KDJBSIM,157)
A_GISVEC(A68_VC ,VDJBSIM,NZIBSIM,2)
static A68_422   YDJBSIM = {"DISPLAY"}; 
static A68_422   BEJBSIM = {"CHANGES"}; 
A_GISVEC(A68_VC ,CEJBSIM,BEJBSIM,7)
static A68_446   JEJBSIM = {"Displays the value(s) of the signal(s) indicated by the monitoring pointer, or of the signal(s) within the specified node only when the value changes."}; 
A_GISVEC(A68_VC ,KEJBSIM,JEJBSIM,150)
static A68_424   TEJBSIM = {"EQUALS"}; 
A_GISVEC(A68_VC ,UEJBSIM,TEJBSIM,6)
static A68_425   WEJBSIM = {"EQ"}; 
A_GISVEC(A68_VC ,XEJBSIM,WEJBSIM,2)
static A68_447   FFJBSIM = {"Displays the value(s) of the named signal whenever it matches the specified value(s).  The symbol '_' is used to specify the node indicated by the monitoring pointer."}; 
A_GISVEC(A68_VC ,GFJBSIM,FFJBSIM,166)
static A68_424   PFJBSIM = {"ALWAYS"}; 
A_GISVEC(A68_VC ,QFJBSIM,PFJBSIM,6)
static A68_448   XFJBSIM = {"Always displays the value of the named signal(s), or if no nodename is given, the node indicated by the monitoring pointer."}; 
A_GISVEC(A68_VC ,YFJBSIM,XFJBSIM,123)
static A68_422   HGJBSIM = {"BECOMES"}; 
A_GISVEC(A68_VC ,IGJBSIM,HGJBSIM,7)
static A68_449   RGJBSIM = {"Displays the value(s) of the named signal whenever it changes to become equal to the specified value(s).  The symbol '_' is used to specify the node indicated by the monitoring pointer."}; 
A_GISVEC(A68_VC ,SGJBSIM,RGJBSIM,185)
static A68_424   BHJBSIM = {"SIGNAL"}; 
A_GISVEC(A68_VC ,CHJBSIM,BHJBSIM,6)
static A68_450   JHJBSIM = {"Displays the value(s) of the signal(s) indicated by the monitoring pointer, or of the named signal(s) within the specified node, after the command has been given."}; 
A_GISVEC(A68_VC ,KHJBSIM,JHJBSIM,162)
A_GISVEC(A68_VC ,UHJBSIM,YDJBSIM,7)
static A68_422   XHJBSIM = {"MONITOR"}; 
static A68_422   AIJBSIM = {"CHANGES"}; 
A_GISVEC(A68_VC ,BIJBSIM,AIJBSIM,7)
static A68_451   IIJBSIM = {"Monitors the value(s) of the named signal(s) when it changes."}; 
A_GISVEC(A68_VC ,JIJBSIM,IIJBSIM,61)
static A68_424   SIJBSIM = {"EQUALS"}; 
A_GISVEC(A68_VC ,TIJBSIM,SIJBSIM,6)
static A68_425   VIJBSIM = {"EQ"}; 
A_GISVEC(A68_VC ,WIJBSIM,VIJBSIM,2)
static A68_452   EJJBSIM = {"Monitors the value(s) of the named signal whenever it matches the specified value(s)."}; 
A_GISVEC(A68_VC ,FJJBSIM,EJJBSIM,85)
static A68_424   OJJBSIM = {"ALWAYS"}; 
A_GISVEC(A68_VC ,PJJBSIM,OJJBSIM,6)
static A68_453   WJJBSIM = {"Always monitors the value(s) of the signal(s) indicated by monitoring pointer or of the named signal(s) within the specified node."}; 
A_GISVEC(A68_VC ,XJJBSIM,WJJBSIM,130)
static A68_422   GKJBSIM = {"BECOMES"}; 
A_GISVEC(A68_VC ,HKJBSIM,GKJBSIM,7)
static A68_454   QKJBSIM = {"Monitors the value(s) of the named signal when it changes to become equal to the specified value(s).  The symbol '_' is used to specify the monitored function."}; 
A_GISVEC(A68_VC ,RKJBSIM,QKJBSIM,159)
A_GISVEC(A68_VC ,BLJBSIM,XHJBSIM,7)
static A68_387   ELJBSIM = {"SET"}; 
static A68_387   HLJBSIM = {"NOW"}; 
A_GISVEC(A68_VC ,ILJBSIM,HLJBSIM,3)
static A68_386   LLJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,MLJBSIM,LLJBSIM,10)
static A68_456   VLJBSIM = {"SEPARATOR"}; 
A_GISVEC(A68_VC ,WLJBSIM,VLJBSIM,9)
static A68_387   YLJBSIM = {"SEP"}; 
A_GISVEC(A68_VC ,ZLJBSIM,YLJBSIM,3)
static A68_457   FMJBSIM = {"Forces a <char> to be output between each column of tabulated output."}; 
A_GISVEC(A68_VC ,GMJBSIM,FMJBSIM,69)
static A68_190   PMJBSIM = {"PAST"}; 
A_GISVEC(A68_VC ,QMJBSIM,PMJBSIM,4)
static A68_386   TMJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,UMJBSIM,TMJBSIM,10)
A_GISVEC(A68_VC ,ENJBSIM,ELJBSIM,3)
static A68_190   HNJBSIM = {"STOP"}; 
static A68_433   INJBSIM = {""}; 
static A68_422   LNJBSIM = {"CHANGES"}; 
A_GISVEC(A68_VC ,MNJBSIM,LNJBSIM,7)
static A68_459   TNJBSIM = {"An event message is printed and the simulation terminated if the value(s) of the node indicated by the monitoring pointer or named signal(s) changes."}; 
A_GISVEC(A68_VC ,UNJBSIM,TNJBSIM,149)
static A68_424   DOJBSIM = {"EQUALS"}; 
A_GISVEC(A68_VC ,EOJBSIM,DOJBSIM,6)
static A68_425   GOJBSIM = {"EQ"}; 
A_GISVEC(A68_VC ,HOJBSIM,GOJBSIM,2)
static A68_460   POJBSIM = {"An event message is printed and the simulation terminated whenever the value(s) of the named signal is equal to the specified value(s).  The symbol '_' is used to specify the node indicated by the monitoring pointer."}; 
A_GISVEC(A68_VC ,QOJBSIM,POJBSIM,216)
static A68_422   ZOJBSIM = {"BECOMES"}; 
A_GISVEC(A68_VC ,APJBSIM,ZOJBSIM,7)
static A68_461   JPJBSIM = {"An event message is printed and the simulation terminated if the value(s) of the named signal changes to become equal to the specified value(s).  The symbol '_' is used to specify the node indicated by the monitoring pointer."}; 
A_GISVEC(A68_VC ,KPJBSIM,JPJBSIM,225)
A_GISVEC(A68_VC ,TPJBSIM,INJBSIM,0)
A_GISVEC(A68_VC ,UPJBSIM,HNJBSIM,4)
static A68_380   YPJBSIM = {"CHANGEPARAMETERS"}; 
A_GISVEC(A68_VC ,ZPJBSIM,YPJBSIM,16)
static A68_425   BQJBSIM = {"CP"}; 
A_GISVEC(A68_VC ,CQJBSIM,BQJBSIM,2)
static A68_462   MQJBSIM = {"Changes the values on the selected inputs of the simulated function.  Each value supplied must be of the appropriate type (or possibly '?') and must be listed in the order expected from the function specification."}; 
A_GISVEC(A68_VC ,NQJBSIM,MQJBSIM,213)
static A68_436   WQJBSIM = {"CHANGEOUTPUT"}; 
A_GISVEC(A68_VC ,XQJBSIM,WQJBSIM,12)
static A68_190   ZQJBSIM = {"COUT"}; 
A_GISVEC(A68_VC ,ARJBSIM,ZQJBSIM,4)
static A68_386   KRJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,LRJBSIM,KRJBSIM,10)
static A68_424   URJBSIM = {"FREEZE"}; 
A_GISVEC(A68_VC ,VRJBSIM,URJBSIM,6)
static A68_386   XRJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,YRJBSIM,XRJBSIM,10)
static A68_434   HSJBSIM = {"FREEFORM"}; 
A_GISVEC(A68_VC ,ISJBSIM,HSJBSIM,8)
static A68_425   KSJBSIM = {"FF"}; 
A_GISVEC(A68_VC ,LSJBSIM,KSJBSIM,2)
static A68_457   NSJBSIM = {"Simulator output is displayed in free format (rather than tabulated)."}; 
A_GISVEC(A68_VC ,OSJBSIM,NSJBSIM,69)
static A68_420   XSJBSIM = {"INITIALISERAM"}; 
A_GISVEC(A68_VC ,YSJBSIM,XSJBSIM,13)
static A68_190   ATJBSIM = {"IRAM"}; 
A_GISVEC(A68_VC ,BTJBSIM,ATJBSIM,4)
static A68_450   LTJBSIM = {"Initialises some or all of the elements of the RAM identified by the '<nodename>' to the specified value(s).  Each value supplied must be of the appropriate type."}; 
A_GISVEC(A68_VC ,MTJBSIM,LTJBSIM,162)
static A68_190   VTJBSIM = {"KEEP"}; 
A_GISVEC(A68_VC ,WTJBSIM,VTJBSIM,4)
static A68_386   DUJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,EUJBSIM,DUJBSIM,10)
static A68_190   NUJBSIM = {"MAKE"}; 
A_GISVEC(A68_VC ,OUJBSIM,NUJBSIM,4)
static A68_386   UUJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,VUJBSIM,UUJBSIM,10)
static A68_190   EVJBSIM = {"JOIN"}; 
A_GISVEC(A68_VC ,FVJBSIM,EVJBSIM,4)
static A68_386   QVJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,RVJBSIM,QVJBSIM,10)
static A68_422   AWJBSIM = {"RESTART"}; 
A_GISVEC(A68_VC ,BWJBSIM,AWJBSIM,7)
static A68_386   DWJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,EWJBSIM,DWJBSIM,10)
static A68_436   NWJBSIM = {"LISTLETNAMES"}; 
A_GISVEC(A68_VC ,OWJBSIM,NWJBSIM,12)
static A68_386   QWJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,RWJBSIM,QWJBSIM,10)
static A68_387   AXJBSIM = {"LET"}; 
A_GISVEC(A68_VC ,BXJBSIM,AXJBSIM,3)
static A68_386   HXJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,IXJBSIM,HXJBSIM,10)
static A68_422   RXJBSIM = {"NOPRINT"}; 
A_GISVEC(A68_VC ,SXJBSIM,RXJBSIM,7)
static A68_425   UXJBSIM = {"NP"}; 
A_GISVEC(A68_VC ,VXJBSIM,UXJBSIM,2)
static A68_464   XXJBSIM = {"Suppresses all printing of signal values other than those matching an 'event' command."}; 
A_GISVEC(A68_VC ,YXJBSIM,XXJBSIM,86)
static A68_424   HYJBSIM = {"REPLAY"}; 
A_GISVEC(A68_VC ,IYJBSIM,HYJBSIM,6)
static A68_386   TYJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,UYJBSIM,TYJBSIM,10)
static A68_402   DZJBSIM = {"SAVESIMULATION"}; 
A_GISVEC(A68_VC ,EZJBSIM,DZJBSIM,14)
static A68_425   GZJBSIM = {"SS"}; 
A_GISVEC(A68_VC ,HZJBSIM,GZJBSIM,2)
static A68_386   LZJBSIM = {"Withdrawn."}; 
A_GISVEC(A68_VC ,MZJBSIM,LZJBSIM,10)
static A68_456   VZJBSIM = {"SCALETIME"}; 
A_GISVEC(A68_VC ,WZJBSIM,VZJBSIM,9)
static A68_387   YZJBSIM = {"STI"}; 
A_GISVEC(A68_VC ,ZZJBSIM,YZJBSIM,3)
static A68_465   HAKBSIM = 
{  'C', 'h', 'a', 'n', 'g', 'e', 's', ' ',
   't', 'h', 'e', ' ', 's', 'i', 'm', 'u',
   'l', 'a', 't', 'o', 'r', '\'', 's', ' ',
   'r', 'e', 'p', 'r', 'e', 's', 'e', 'n',
   't', 'a', 't', 'i', 'o', 'n', ' ', 'o',
   'f', ' ', 't', 'i', 'm', 'e', ' ', 's',
   'o', ' ', 't', 'h', 'a', 't', ' ', 'i',
   't', ' ', 'i', 's', ' ', 's', 'c', 'a',
   'l', 'e', 'd', ' ', 'b', 'y', ' ', 't',
   'h', 'e', ' ', 'f', 'a', 'c', 't', 'o',
   'r', ' ', 'g', 'i', 'v', 'e', 'n', '.',
   ' ', 'A', 'l', 'l', ' ', 't', 'i', 'm',
   'e', 's', ' ', 'a', 'r', 'e', ' ', 't',
   'h', 'e', 'n', ' ', ' ', ' ', 'i', 'n',
   't', 'e', 'r', 'p', 'r', 'e', 't', 'e',
   'd', ' ', 'a', 's', ' ', 'm', 'u', 'l',
   't', 'i', 'p', 'l', 'e', 's', ' ', 'o',
   'f', ' ', 't', 'h', 'e', ' ', 's', 'c',
   'a', 'l', 'e', 't', 'i', 'm', 'e', '.',
   ' ', 'F', 'o', 'r', ' ', 'e', 'x', 'a',
   'm', 'p', 'l', 'e', ',', 't', 'i', 'm',
   'e', ' ', '+', '2', ' ', 'i', 'n', 'c',
   'r', 'e', 'm', 'e', 'n', 't', 's', ' ',
   's', 'i', 'm', 'u', 'l', 'a', 't', 'o',
   'r', ' ', 't', 'i', 'm', 'e', ' ', 'b',
   'y', ' ', '2', '*', 's', 'c', 'a', 'l',
   'e', 't', 'i', 'm', 'e', ' ', 'u', 'n',
   'i', 't', 's', '.', 'T', 'i', 'm', 'e',
   's', ' ', 'a', 'r', 'e', ' ', 'p', 'r',
   'i', 'n', 't', 'e', 'd', ' ', 'i', 'n',
   ' ', 'a', ' ', 'd', 'i', 'f', 'f', 'e',
   'r', 'e', 'n', 't', ' ', 's', 't', 'y',
   'l', 'e', ' ', 't', 'o', ' ', 'r', 'e',
   'f', 'l', 'e', 'c', 't', ' ', 't', 'h',
   'i', 's', ' ', 's', 'c', 'a', 'l', 'e',
   'd', ' ', 'e', 'f', 'f', 'e', 'c', 't',
   '.' 
} ; 
A_GISVEC(A68_VC ,IAKBSIM,HAKBSIM,289)
static A68_386   RAKBSIM = {"SIMULATEFN"}; 
A_GISVEC(A68_VC ,SAKBSIM,RAKBSIM,10)
static A68_381   UAKBSIM = {"Starts a new simulation of the specified function. "}; 
A_GISVEC(A68_VC ,VAKBSIM,UAKBSIM,51)
static A68_456   EBKBSIM = {"TABULATED"}; 
A_GISVEC(A68_VC ,FBKBSIM,EBKBSIM,9)
static A68_466   IBKBSIM = {"Causes subsequent printing of signal values to be in a tabulated style (except events)."}; 
A_GISVEC(A68_VC ,JBKBSIM,IBKBSIM,87)
static A68_190   SBKBSIM = {"TIME"}; 
A_GISVEC(A68_VC ,TBKBSIM,SBKBSIM,4)
static A68_425   VBKBSIM = {"TI"}; 
A_GISVEC(A68_VC ,WBKBSIM,VBKBSIM,2)
static A68_467   ECKBSIM = {"Changes the simulator time-base to an absolute time or by a relative number of time-units."}; 
A_GISVEC(A68_VC ,FCKBSIM,ECKBSIM,90)
static A68_190   OCKBSIM = {"EASE"}; 
A_GISVEC(A68_VC ,PCKBSIM,OCKBSIM,4)
static A68_468   RCKBSIM = {"Leave the simulator and return to the calling environment"}; 
A_GISVEC(A68_VC ,SCKBSIM,RCKBSIM,57)
static A68_387   GDKBSIM = {"Sim"}; 
A_GISVEC(A68_VC ,HDKBSIM,GDKBSIM,3)
static A68_422   JDKBSIM = {" (past)"}; 
A_GISVEC(A68_VC ,KDKBSIM,JDKBSIM,7)
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} NDHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_INT * OGHBSIM_size;
} VGHBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} QHHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} MJHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} AKHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} OKHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} CLHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_72 ** MLHBSIM_saved;
A68_105  Flt;
} RLHBSIM_msg;
typedef struct   /* env of non-global proc */
{
A68_105  PLHBSIM_msg;
} WLHBSIM_fault;
typedef struct   /* env of non-global proc */
{
A68_72 ** HMHBSIM_saved;
A68_105  Flt;
} MMHBSIM_msg;
typedef struct   /* env of non-global proc */
{
A68_105  KMHBSIM_msg;
} RMHBSIM_fault;
typedef struct   /* env of non-global proc */
{
A68_72 ** GNHBSIM_saved;
A68_105  Flt;
} LNHBSIM_msg;
typedef struct   /* env of non-global proc */
{
A68_105  JNHBSIM_msg;
} QNHBSIM_fault;
typedef struct   /* env of non-global proc */
{
A68_72 ** JOHBSIM_saved;
A68_105  Msg;
} OOHBSIM_fault;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} DPHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} CQHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} XQHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Flt;
} XSHBSIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} QUHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} WVHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} QXHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} UYHBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} TZHBSIM_flt;
typedef struct   /* env of non-global proc */
{
int dummy;
} YAIBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} BCIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} IDIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} IEIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_162  BFIBSIM_expandjoinsto;
} DFIBSIM_expandjoinsto;
typedef struct   /* env of non-global proc */
{
int dummy;
} YFIBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} AHIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} UHIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} SIIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} WJIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} NKIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} JLIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_INT  AMIBSIM_savedtime;
A_PAD_INT(PAD_96)
A68_INT  BMIBSIM_savedmode;
A_PAD_INT(PAD_97)
A68_63 * CMIBSIM_savedsavedtestpoints;
A68_70  HLIBSIM_flt;
} GMIBSIM_localflt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} OMIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} ENIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_105  Msg;
} KOIBSIM_flt;
typedef struct   /* env of non-global proc */
{
A68_404  List;
} BAIBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_35  A;
A68_35  B;
} QEIBSIM_generator;

A_STATIC A68_VOID  YBHBSIM_flattenfunctiontypes(A68_60  Wire, A68_60  *ReturnedValue);

A_STATIC A68_54 * BCHBSIM_flattenfunctiontype(A68_53  Sfn);

A_STATIC A68_131 * IDHBSIM_rdtrimmedram(A68_104  Names, A68_INT * Index, A68_INT * Instance, A68_INT * Lwb, A68_INT * Upb, A68_INT * Circuit, A68_INT * Base, A68_105  Msg);

A_STATIC A68_VOID  MDHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  NEHBSIM_withdrawncmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  TEHBSIM_printpointercmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  DFHBSIM_printramcmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  UGHBSIM_generator(A68_BOOL  SGHBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LHHBSIM_dontcommon(A68_104  Names, A68_INT  Action, A68_VC  Str, A68_105  Msg);

A_STATIC A68_VOID  PHHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  KIHBSIM_dontdisplaycmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  PIHBSIM_dontkeepcmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  XIHBSIM_dontmonitorcmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  CJHBSIM_dontstopcmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  HJHBSIM_cleardisplayscmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  LJHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  VJHBSIM_clearmonitorscmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  ZJHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  JKHBSIM_clearstopscmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  NKHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  XKHBSIM_clearkeepscmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  BLHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  LLHBSIM_gotocmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  QLHBSIM_msg(A68_106  No, A68_107  S, void *NonLocals);

A_STATIC A68_VOID  VLHBSIM_fault(A68_VC  Str, void *NonLocals);

A_STATIC A68_VOID  GMHBSIM_goincmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  LMHBSIM_msg(A68_106  No, A68_107  S, void *NonLocals);

A_STATIC A68_VOID  QMHBSIM_fault(A68_VC  Str, void *NonLocals);

A_STATIC A68_VOID  FNHBSIM_gooutcmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  KNHBSIM_msg(A68_106  No, A68_107  S, void *NonLocals);

A_STATIC A68_VOID  PNHBSIM_fault(A68_VC  Str, void *NonLocals);

A_STATIC A68_VOID  IOHBSIM_gobackcmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  NOHBSIM_fault(A68_106  No, A68_107  S, void *NonLocals);

A_STATIC A68_VOID  SOHBSIM_gohomecmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  YOHBSIM_displaysignalcmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  CPHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  XPHBSIM_alwaysorchanges(A68_104  Names, A68_INT  Action, A68_INT  Condition, A68_105  Msg);

A_STATIC A68_VOID  BQHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  SQHBSIM_becomesorequals(A68_104  Names, A68_INT  Action, A68_INT  Condition, A68_105  Msg);

A_STATIC A68_VOID  WQHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  MRHBSIM_displaychangescmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  PRHBSIM_displayequalscmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  SRHBSIM_displayalwayscmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  VRHBSIM_displaybecomescmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  YRHBSIM_monitorchangescmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  BSHBSIM_monitorequalscmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  ESHBSIM_monitoralwayscmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  HSHBSIM_monitorbecomescmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  KSHBSIM_setnowcmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  WSHBSIM_anonymous(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  BTHBSIM_setpastcmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  NTHBSIM_stopchangescmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  QTHBSIM_stopequalscmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  TTHBSIM_stopbecomescmd(A68_104  Names, A68_105  Flt);

A68_VOID  ZTHBSIM_setcpcache(void);

A_STATIC A68_VOID  LUHBSIM_changeparameterscmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  PUHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  RVHBSIM_changeoutputcmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  VVHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  LXHBSIM_freezecmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  PXHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  PYHBSIM_dontfreezecmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  TYHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  LZHBSIM_freeformcmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  OZHBSIM_initialiseramcmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  SZHBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  XZHBSIM_(A68_404  List, A68_37  Element, A68_404  *ReturnedValue);

A_STATIC A68_VOID  AAIBSIM_generator(A68_BOOL  YZHBSIM_anonymous, A68_404  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XAIBSIM_generator(A68_BOOL  VAIBSIM_anonymous, A68_404  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WBIBSIM_keepcmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  ACIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  DDIBSIM_makeprobecmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  HDIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  DEIBSIM_dontmakeprobecmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  HEIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  MEIBSIM_(A68_35  A, A68_35  B, A68_35  *ReturnedValue);

A_STATIC A68_VOID  PEIBSIM_generator(A68_BOOL  NEIBSIM_anonymous, A68_35  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CFIBSIM_expandjoinsto(A68_INT  Base, A68_35  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XFIBSIM_generator(A68_BOOL  VFIBSIM_anonymous, A68_35  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VGIBSIM_letcmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  ZGIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  PHIBSIM_dontletcmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  THIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_BOOL  DIIBSIM_isjoinedto(A68_INT  Base, A68_INT  Root);

A_STATIC A68_VOID  NIIBSIM_joinprobecmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  RIIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  RJIBSIM_restartprobecmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  VJIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  IKIBSIM_listnamescmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  MKIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  BLIBSIM_noprintcmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  ELIBSIM_replaycmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  ILIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  FMIBSIM_localflt(A68_VC  Msg, void *NonLocals);

A_STATIC A68_VOID  JMIBSIM_scaletimecmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  NMIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  ZMIBSIM_simulatefncmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  DNIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  NNIBSIM_tabulatedcmd(A68_104  Names, A68_105  Flt);

A_STATIC A68_VOID  QNIBSIM_dontsetseparatorcmd(A68_104  Params, A68_105  Msg);

A_STATIC A68_VOID  TNIBSIM_setseparatorcmd(A68_104  Params, A68_105  Msg);

A_STATIC A68_VOID  FOIBSIM_timecmd(A68_104  Names, A68_105  Msg);

A_STATIC A68_VOID  JOIBSIM_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_INT  OOIBSIM_scaleifok(A68_INT  Numberread, A68_70  Flt);

A68_VOID  TPIBSIM_make_sim_commands(A68_341  *ReturnedValue);

A68_VOID  EDKBSIM_sim_startup(A68_128 * Simfile, A68_70  Flt);

A_STATIC A68_VOID  AAIBSIM_generator(A68_BOOL  YZHBSIM_anonymous, A68_404  *ReturnedValue, void *NonLocals)
#define NL(x) (((BAIBSIM_generator *)NonLocals)->x)
{ 
A68_404  CAIBSIM;  /* clause result */
A68_404  DAIBSIM;  /* OPERATORS - dynamic generator */
{ 
DAIBSIM.upb = (NL(List).upb+1) ;
( YZHBSIM_anonymous? A_VLOC(A68_37 ,DAIBSIM): A_VHEAP(A68_37 ,DAIBSIM) );
CAIBSIM = DAIBSIM;
} 
*ReturnedValue = (CAIBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PEIBSIM_generator(A68_BOOL  NEIBSIM_anonymous, A68_35  *ReturnedValue, void *NonLocals)
#define NL(x) (((QEIBSIM_generator *)NonLocals)->x)
{ 
A68_35  REIBSIM;  /* clause result */
A68_35  SEIBSIM;  /* OPERATORS - dynamic generator */
{ 
SEIBSIM.upb = (NL(A).upb+NL(B).upb) ;
( NEIBSIM_anonymous? A_VLOC(A68_INT ,SEIBSIM): A_VHEAP(A68_INT ,SEIBSIM) );
REIBSIM = SEIBSIM;
} 
*ReturnedValue = (REIBSIM);
return;
} 
#undef NL

A_STATIC A68_54 * BCHBSIM_flattenfunctiontype(A68_53  Sfn)
{ 
A68_48  CCHBSIM_to;
A68_54 * DCHBSIM_fto;
A68_54 * ECHBSIM_ans;
A68_54  FCHBSIM;  /* collateral clause result */
A68_53  GCHBSIM;  /* collateral clause result */
A68_53 * HCHBSIM;  /* YIELD */
A68_48  ICHBSIM;  /* OPERATORS - mode -> union mode */
A68_54 ** JCHBSIM_end;
A68_54  KCHBSIM;  /* collateral clause result */
A68_53  LCHBSIM;  /* collateral clause result */
A68_53 * MCHBSIM;  /* YIELD */
A68_48  NCHBSIM;  /* OPERATORS - mode -> union mode */
A68_54 * OCHBSIM;  /* YIELD */
A68_54 * PCHBSIM;  /* clause result */
A_PROC_ENTRY(flattenfunctiontype);
 /* line 141: */
 /* line 142: */
{ 
CCHBSIM_to = Sfn.To;
 /* line 143: */
DCHBSIM_fto = PZCBSIM_trimsignal(CCHBSIM_to, 1, VYCBSIM_signalwidth(CCHBSIM_to));
 /* line 144: */
ECHBSIM_ans = (A_HEAP(A68_54 ));
GCHBSIM.From = Sfn.From;
GCHBSIM.To = (*(&(DCHBSIM_fto->T)));
HCHBSIM = A_HEAP(A68_53 ) ;
(*HCHBSIM) = GCHBSIM ;
FCHBSIM.T = A_UNITE(ICHBSIM,mode6,6,HCHBSIM);
FCHBSIM.Rest = WSAASIM_nilsst;
(*ECHBSIM_ans) = FCHBSIM;
 /* line 145: */
DCHBSIM_fto = (*(&(DCHBSIM_fto->Rest)));
 /* line 146: */
JCHBSIM_end = (&(ECHBSIM_ans->Rest));
 /* line 147: */
for ( ;; )
{ 
 /* line 148: */
if ( !((DCHBSIM_fto!=WSAASIM_nilsst)) ) break;
 /* line 149: */
LCHBSIM.From = ZSAASIM_nullstype;
LCHBSIM.To = (*(&(DCHBSIM_fto->T)));
MCHBSIM = A_HEAP(A68_53 ) ;
(*MCHBSIM) = LCHBSIM ;
KCHBSIM.T = A_UNITE(NCHBSIM,mode6,6,MCHBSIM);
KCHBSIM.Rest = WSAASIM_nilsst;
OCHBSIM = A_HEAP(A68_54 ) ;
(*OCHBSIM) = KCHBSIM ;
(*JCHBSIM_end) = OCHBSIM;
 /* line 150: */
DCHBSIM_fto = (*(&(DCHBSIM_fto->Rest)));
 /* line 151: */
 /* line 152: */
JCHBSIM_end = (&((*JCHBSIM_end)->Rest));
}
 /* line 153: */
 /* line 154: */
PCHBSIM = ECHBSIM_ans;
} 
A_PROC_EXIT(flattenfunctiontype);
return( PCHBSIM );
} 
#undef NL

A_STATIC A68_VOID  MDHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((NDHBSIM_flt *)NonLocals)->x)
{ 
A68_107  ODHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(ODHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(ODHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  UGHBSIM_generator(A68_BOOL  SGHBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VGHBSIM_generator *)NonLocals)->x)
{ 
A68_VC  WGHBSIM;  /* clause result */
A68_VC  XGHBSIM;  /* OPERATORS - dynamic generator */
{ 
XGHBSIM.upb = (*NL(OGHBSIM_size)) ;
( SGHBSIM_anonymous? A_VLOC(A68_CHAR ,XGHBSIM): A_VHEAP(A68_CHAR ,XGHBSIM) );
WGHBSIM = XGHBSIM;
} 
*ReturnedValue = (WGHBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PHHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((QHHBSIM_flt *)NonLocals)->x)
{ 
A68_107  RHHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(RHHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(RHHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  LJHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((MJHBSIM_flt *)NonLocals)->x)
{ 
A68_107  NJHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(NJHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(NJHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  ZJHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((AKHBSIM_flt *)NonLocals)->x)
{ 
A68_107  BKHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(BKHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(BKHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  NKHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((OKHBSIM_flt *)NonLocals)->x)
{ 
A68_107  PKHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(PKHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(PKHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  BLHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((CLHBSIM_flt *)NonLocals)->x)
{ 
A68_107  DLHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(DLHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(DLHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  QLHBSIM_msg(A68_106  No, A68_107  S, void *NonLocals)
#define NL(x) (((RLHBSIM_msg *)NonLocals)->x)
{ 
A68_82  SLHBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 416: */
{ 
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(SLHBSIM,mode1,1,(*NL(MLHBSIM_saved))));
A_CALLPROC(NL(Flt),(No, S),(No, S,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VLHBSIM_fault(A68_VC  Str, void *NonLocals)
#define NL(x) (((WLHBSIM_fault *)NonLocals)->x)
{ 
A68_107  XLHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fault);
A_CALLPROC(NL(PLHBSIM_msg),(WHAAOSI_user, A_HVEC(XLHBSIM,Str,A68_VC )),(WHAAOSI_user, A_HVEC(XLHBSIM,Str,A68_VC ),(NL(PLHBSIM_msg)).nonlocals));
A_PROC_EXIT(fault);
return;
} 
#undef NL

A_STATIC A68_VOID  LMHBSIM_msg(A68_106  No, A68_107  S, void *NonLocals)
#define NL(x) (((MMHBSIM_msg *)NonLocals)->x)
{ 
A68_82  NMHBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 437: */
{ 
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(NMHBSIM,mode1,1,(*NL(HMHBSIM_saved))));
A_CALLPROC(NL(Flt),(No, S),(No, S,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  QMHBSIM_fault(A68_VC  Str, void *NonLocals)
#define NL(x) (((RMHBSIM_fault *)NonLocals)->x)
{ 
A68_107  SMHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fault);
A_CALLPROC(NL(KMHBSIM_msg),(WHAAOSI_user, A_HVEC(SMHBSIM,Str,A68_VC )),(WHAAOSI_user, A_HVEC(SMHBSIM,Str,A68_VC ),(NL(KMHBSIM_msg)).nonlocals));
A_PROC_EXIT(fault);
return;
} 
#undef NL

A_STATIC A68_VOID  KNHBSIM_msg(A68_106  No, A68_107  S, void *NonLocals)
#define NL(x) (((LNHBSIM_msg *)NonLocals)->x)
{ 
A68_82  MNHBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 468: */
{ 
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(MNHBSIM,mode1,1,(*NL(GNHBSIM_saved))));
A_CALLPROC(NL(Flt),(No, S),(No, S,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  PNHBSIM_fault(A68_VC  Str, void *NonLocals)
#define NL(x) (((QNHBSIM_fault *)NonLocals)->x)
{ 
A68_107  RNHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fault);
A_CALLPROC(NL(JNHBSIM_msg),(WHAAOSI_user, A_HVEC(RNHBSIM,Str,A68_VC )),(WHAAOSI_user, A_HVEC(RNHBSIM,Str,A68_VC ),(NL(JNHBSIM_msg)).nonlocals));
A_PROC_EXIT(fault);
return;
} 
#undef NL

A_STATIC A68_VOID  NOHBSIM_fault(A68_106  No, A68_107  S, void *NonLocals)
#define NL(x) (((OOHBSIM_fault *)NonLocals)->x)
{ 
A68_82  POHBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(fault);
 /* line 501: */
{ 
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(POHBSIM,mode1,1,(*NL(JOHBSIM_saved))));
A_CALLPROC(NL(Msg),(No, S),(No, S,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(fault);
return;
} 
#undef NL

A_STATIC A68_VOID  CPHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((DPHBSIM_flt *)NonLocals)->x)
{ 
A68_107  EPHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(EPHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(EPHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  BQHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((CQHBSIM_flt *)NonLocals)->x)
{ 
A68_107  DQHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(DQHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(DQHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  WQHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((XQHBSIM_flt *)NonLocals)->x)
{ 
A68_107  YQHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(YQHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(YQHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  WSHBSIM_anonymous(A68_VC  S, void *NonLocals)
#define NL(x) (((XSHBSIM_anonymous *)NonLocals)->x)
{ 
A68_107  YSHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_CALLPROC(NL(Flt),(WHAAOSI_user, A_HVEC(YSHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(YSHBSIM,S,A68_VC ),(NL(Flt)).nonlocals));
return;
} 
#undef NL

A_STATIC A68_VOID  PUHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((QUHBSIM_flt *)NonLocals)->x)
{ 
A68_107  RUHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(RUHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(RUHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  VVHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((WVHBSIM_flt *)NonLocals)->x)
{ 
A68_107  XVHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(XVHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(XVHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  PXHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((QXHBSIM_flt *)NonLocals)->x)
{ 
A68_107  RXHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(RXHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(RXHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  TYHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((UYHBSIM_flt *)NonLocals)->x)
{ 
A68_107  VYHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(VYHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(VYHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  SZHBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((TZHBSIM_flt *)NonLocals)->x)
{ 
A68_107  UZHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(UZHBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(UZHBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  XZHBSIM_(A68_404  List, A68_37  Element, A68_404  *ReturnedValue)
{ 
A68_406  ZZHBSIM_generator;   /* proc value of non-global proc */
A68_404  EAIBSIM;  /* avoid structure result */
A68_404  FAIBSIM_ans;
A68_404  GAIBSIM;  /* OPERATORS - trim index */
A68_404  HAIBSIM;  /* YIELD */
A68_INT  IAIBSIM;  /* YIELD */
A68_37 * JAIBSIM;  /* YIELD */
A68_404  KAIBSIM;  /* clause result */
A_PROC_ENTRY(+);
 /* line 922: */
 /* line 923: */
{ 
A_CLOSURE( ZZHBSIM_generator, AAIBSIM_generator, BAIBSIM_generator );
(( BAIBSIM_generator * ) ( ZZHBSIM_generator.nonlocals )) -> List = List;
A_CALLPROC(ZZHBSIM_generator,(A68_FALSE, &EAIBSIM),(A68_FALSE, &EAIBSIM,(ZZHBSIM_generator).nonlocals));
FAIBSIM_ans = EAIBSIM;
 /* line 924: */
if ( (List.upb>0) )
{ 
HAIBSIM = A_VTRIM(GAIBSIM,(FAIBSIM_ans),A_VTSCRIPT(&(GAIBSIM.upb),(FAIBSIM_ans).upb,1,List.upb)) ;
A_VASSIGN2(List,HAIBSIM,A68_37 );
} 
 /* line 925: */
IAIBSIM = (List.upb+1) ;
JAIBSIM = (&A_VINDEX(FAIBSIM_ans,IAIBSIM)) ;
(*JAIBSIM) = Element;
 /* line 926: */
 /* line 927: */
KAIBSIM = FAIBSIM_ans;
} 
A_PROC_EXIT(+);
*ReturnedValue = (KAIBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XAIBSIM_generator(A68_BOOL  VAIBSIM_anonymous, A68_404  *ReturnedValue, void *NonLocals)
#define NL(x) (((YAIBSIM_generator *)NonLocals)->x)
{ 
A68_404  ZAIBSIM;  /* clause result */
A68_404  ABIBSIM;  /* OPERATORS - dynamic generator */
{ 
ABIBSIM.upb = 0 ;
( VAIBSIM_anonymous? A_VLOC(A68_37 ,ABIBSIM): A_VHEAP(A68_37 ,ABIBSIM) );
ZAIBSIM = ABIBSIM;
} 
*ReturnedValue = (ZAIBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ACIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((BCIBSIM_flt *)NonLocals)->x)
{ 
A68_107  CCIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(CCIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(CCIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  HDIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((IDIBSIM_flt *)NonLocals)->x)
{ 
A68_107  JDIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(JDIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(JDIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  HEIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((IEIBSIM_flt *)NonLocals)->x)
{ 
A68_107  JEIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(JEIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(JEIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  MEIBSIM_(A68_35  A, A68_35  B, A68_35  *ReturnedValue)
{ 
A68_230  OEIBSIM_generator;   /* proc value of non-global proc */
A68_35  TEIBSIM;  /* avoid structure result */
A68_35  UEIBSIM_ans;
A68_35  VEIBSIM;  /* OPERATORS - trim index */
A68_35  WEIBSIM;  /* YIELD */
A68_35  XEIBSIM;  /* OPERATORS - trim index */
A68_35  YEIBSIM;  /* YIELD */
A68_35  ZEIBSIM;  /* clause result */
A_PROC_ENTRY(+);
 /* line 1037: */
 /* line 1038: */
{ 
A_CLOSURE( OEIBSIM_generator, PEIBSIM_generator, QEIBSIM_generator );
(( QEIBSIM_generator * ) ( OEIBSIM_generator.nonlocals )) -> A = A;
(( QEIBSIM_generator * ) ( OEIBSIM_generator.nonlocals )) -> B = B;
A_CALLPROC(OEIBSIM_generator,(A68_FALSE, &TEIBSIM),(A68_FALSE, &TEIBSIM,(OEIBSIM_generator).nonlocals));
UEIBSIM_ans = TEIBSIM;
 /* line 1039: */
if ( (A.upb>0) )
{ 
WEIBSIM = A_VTRIM(VEIBSIM,(UEIBSIM_ans),A_VTSCRIPT(&(VEIBSIM.upb),(UEIBSIM_ans).upb,1,A.upb)) ;
A_VASSIGN2(A,WEIBSIM,A68_INT );
} 
 /* line 1040: */
if ( (B.upb>0) )
{ 
YEIBSIM = A_VTRIM(XEIBSIM,(UEIBSIM_ans),A_VTSCRIPT(&(XEIBSIM.upb),(UEIBSIM_ans).upb,(A.upb+1),(UEIBSIM_ans).upb)) ;
A_VASSIGN2(B,YEIBSIM,A68_INT );
} 
 /* line 1041: */
 /* line 1042: */
ZEIBSIM = UEIBSIM_ans;
} 
A_PROC_EXIT(+);
*ReturnedValue = (ZEIBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CFIBSIM_expandjoinsto(A68_INT  Base, A68_35  *ReturnedValue, void *NonLocals)
#define NL(x) (((DFIBSIM_expandjoinsto *)NonLocals)->x)
{ 
A68_35  FFIBSIM;  /* avoid structure result */
A68_35  EFIBSIM_branches;
A68_INT  GFIBSIM_i;
A68_INT  HFIBSIM;  /* to part of loop */
A68_35  IFIBSIM;  /* avoid structure result */
A68_35  JFIBSIM;  /* avoid structure result */
A68_35  KFIBSIM;  /* clause result */
A_PROC_ENTRY(expandjoinsto);
 /* line 1045: */
 /* line 1046: */
{ 
SSCBSIM_listprobesconnectedto( Base, &FFIBSIM );
EFIBSIM_branches = FFIBSIM;
 /* line 1047: */
HFIBSIM = EFIBSIM_branches.upb;
for ( GFIBSIM_i = 1;
GFIBSIM_i <= HFIBSIM;
GFIBSIM_i += 1 )
{ 
 /* line 1048: */
 /* line 1049: */
A_CALLPROC(NL(BFIBSIM_expandjoinsto),((*(&A_VINDEX(EFIBSIM_branches,GFIBSIM_i))), &IFIBSIM),((*(&A_VINDEX(EFIBSIM_branches,GFIBSIM_i))), &IFIBSIM,(NL(BFIBSIM_expandjoinsto)).nonlocals));
MEIBSIM_( EFIBSIM_branches, IFIBSIM, &JFIBSIM );
EFIBSIM_branches = JFIBSIM;
}
 /* line 1050: */
 /* line 1051: */
KFIBSIM = EFIBSIM_branches;
} 
A_PROC_EXIT(expandjoinsto);
*ReturnedValue = (KFIBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XFIBSIM_generator(A68_BOOL  VFIBSIM_anonymous, A68_35  *ReturnedValue, void *NonLocals)
#define NL(x) (((YFIBSIM_generator *)NonLocals)->x)
{ 
A68_35  ZFIBSIM;  /* clause result */
A68_35  AGIBSIM;  /* OPERATORS - dynamic generator */
{ 
AGIBSIM.upb = 1 ;
( VFIBSIM_anonymous? A_VLOC(A68_INT ,AGIBSIM): A_VHEAP(A68_INT ,AGIBSIM) );
ZFIBSIM = AGIBSIM;
} 
*ReturnedValue = (ZFIBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZGIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((AHIBSIM_flt *)NonLocals)->x)
{ 
A68_107  BHIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(BHIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(BHIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  THIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((UHIBSIM_flt *)NonLocals)->x)
{ 
A68_107  VHIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(VHIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(VHIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  RIIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((SIIBSIM_flt *)NonLocals)->x)
{ 
A68_107  TIIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(TIIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(TIIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  VJIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((WJIBSIM_flt *)NonLocals)->x)
{ 
A68_107  XJIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(XJIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(XJIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  MKIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((NKIBSIM_flt *)NonLocals)->x)
{ 
A68_107  OKIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(OKIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(OKIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  ILIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((JLIBSIM_flt *)NonLocals)->x)
{ 
A68_107  KLIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(KLIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(KLIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  FMIBSIM_localflt(A68_VC  Msg, void *NonLocals)
#define NL(x) (((GMIBSIM_localflt *)NonLocals)->x)
{ 
A_PROC_ENTRY(localflt);
 /* line 1266: */
 /* line 1267: */
{ 
YPAASIM_activetime = NL(AMIBSIM_savedtime);
 /* line 1268: */
ZPAASIM_timemode = NL(BMIBSIM_savedmode);
 /* line 1269: */
BSFBSIM_savedtestpoints = NL(CMIBSIM_savedsavedtestpoints);
 /* line 1270: */
RZFBSIM_clear(XSFBSIM_testpoints);
 /* line 1271: */
 /* line 1272: */
A_CALLPROC(NL(HLIBSIM_flt),(Msg),(Msg,(NL(HLIBSIM_flt)).nonlocals));
} 
A_PROC_EXIT(localflt);
return;
} 
#undef NL

A_STATIC A68_VOID  NMIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((OMIBSIM_flt *)NonLocals)->x)
{ 
A68_107  PMIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(PMIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(PMIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  DNIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((ENIBSIM_flt *)NonLocals)->x)
{ 
A68_107  FNIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(FNIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(FNIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  JOIBSIM_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((KOIBSIM_flt *)NonLocals)->x)
{ 
A68_107  LOIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(LOIBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(LOIBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_INT  OOIBSIM_scaleifok(A68_INT  Numberread, A68_70  Flt)
{ 
A68_INT  ROIBSIM;  /* clause result */
A_PROC_ENTRY(scaleifok);
 /* line 1408: */
 /* line 1409: */
if ( (Numberread>(AJDAOST_maxint/EQAASIM_scaletime)) )
{ 
A_CALLPROC(Flt,(QOIBSIM),(QOIBSIM,(Flt).nonlocals));
 /* line 1410: */
 /* line 1411: */
 /* line 1412: */
ROIBSIM = 0;
} 
else
{ 
 /* line 1413: */
ROIBSIM = (Numberread*EQAASIM_scaletime);
} 
A_PROC_EXIT(scaleifok);
return( ROIBSIM );
} 
#undef NL

A_STATIC A68_VOID  YBHBSIM_flattenfunctiontypes(A68_60  Wire, A68_60  *ReturnedValue)
{ 
A68_48  QCHBSIM_type;
A68_54 * RCHBSIM_sst;
A68_54 * SCHBSIM_p;
A68_54 ** TCHBSIM_pp;
A68_48  UCHBSIM;  /* united object - for case conformity */
A68_53 * VCHBSIM_sfn;
A68_54 * WCHBSIM_rest;
A68_60  XCHBSIM;  /* collateral clause result */
A68_48  YCHBSIM;  /* OPERATORS - mode -> union mode */
A68_60  ZCHBSIM;  /* clause result */
A_PROC_ENTRY(flattenfunctiontypes);
 /* line 139: */
 /* line 140: */
{ 
 /* line 156: */
QCHBSIM_type = Wire.Type;
 /* line 157: */
RCHBSIM_sst = PZCBSIM_trimsignal(QCHBSIM_type, 1, VYCBSIM_signalwidth(QCHBSIM_type));
 /* line 158: */
SCHBSIM_p = RCHBSIM_sst;
 /* line 159: */
TCHBSIM_pp = (&SCHBSIM_p);
 /* line 160: */
for ( ;; )
{ 
 /* line 161: */
if ( !(((*TCHBSIM_pp)!=WSAASIM_nilsst)) ) break;
 /* line 162: */
UCHBSIM = (*(&((*TCHBSIM_pp)->T))) ;
switch ( UCHBSIM.mode )
{ 
case 6: /* REF STRUCT(MODE48,MODE48)  */
VCHBSIM_sfn = (UCHBSIM.data.mode6);
 /* line 163: */
 /* line 164: */
{ 
WCHBSIM_rest = (*(&((*TCHBSIM_pp)->Rest)));
 /* line 165: */
(*TCHBSIM_pp) = BCHBSIM_flattenfunctiontype((*VCHBSIM_sfn));
 /* line 166: */
for ( ;; )
{ 
if ( !(((*TCHBSIM_pp)!=WSAASIM_nilsst)) ) break;
TCHBSIM_pp = (&((*TCHBSIM_pp)->Rest));
}
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 170: */
(*TCHBSIM_pp) = WCHBSIM_rest;
} 
break;
default: 
 /* line 171: */
 /* line 172: */
TCHBSIM_pp = (&((*TCHBSIM_pp)->Rest));
break;
} 
}
 /* line 173: */
XCHBSIM.Type = A_UNITE(YCHBSIM,mode7,7,RCHBSIM_sst);
 /* line 174: */
XCHBSIM.Blocks = Wire.Blocks;
ZCHBSIM = XCHBSIM;
} 
A_PROC_EXIT(flattenfunctiontypes);
*ReturnedValue = (ZCHBSIM);
return;
} 
#undef NL
 /* line 189: */

A_STATIC A68_131 * IDHBSIM_rdtrimmedram(A68_104  Names, A68_INT * Index, A68_INT * Instance, A68_INT * Lwb, A68_INT * Upb, A68_INT * Circuit, A68_INT * Base, A68_105  Msg)
{ 
A68_70  LDHBSIM_flt;   /* proc value of non-global proc */
A68_72 * PDHBSIM_pathname;
A68_131 * SDHBSIM_ram;
A68_36  TDHBSIM_mnode;
A68_57  UDHBSIM;  /* united object - for case conformity */
A68_58  VDHBSIM_b;
A68_133  WDHBSIM;  /* avoid structure result */
A68_INT  BEHBSIM_upbofram;
A68_BOOL  CEHBSIM;  /* optbool result */
A68_INT  DEHBSIM;  /* YIELD */
A68_BOOL  EEHBSIM_has_trim;
A68_325  FEHBSIM;  /* collateral clause result */
A68_325  GEHBSIM;  /* clause result */
A68_INT  HEHBSIM;  /* YIELD */
A68_325  IEHBSIM;  /* avoid structure result */
A68_325  JEHBSIM_trim;
A68_131 * KEHBSIM;  /* clause result */
A_PROC_ENTRY(rdtrimmedram);
 /* line 190: */
 /* line 191: */
{ 
A_CLOSURE( LDHBSIM_flt, MDHBSIM_flt, NDHBSIM_flt );
(( NDHBSIM_flt * ) ( LDHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 192: */
PDHBSIM_pathname = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, Index, Msg));
 /* line 193: */
 /* line 194: */
if ( (PDHBSIM_pathname==HGDBSIM_nilpath) )
{ 
 /* line 195: */
A_CALLPROC(LDHBSIM_flt,(RDHBSIM),(RDHBSIM,(LDHBSIM_flt).nonlocals));
} 
 /* line 196: */
 /* line 197: */
TDHBSIM_mnode = (*SPFBSIM_node(PDHBSIM_pathname, LDHBSIM_flt));
 /* line 198: */
 /* line 199: */
UDHBSIM = TDHBSIM_mnode.Node ;
switch ( UDHBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
VDHBSIM_b = (UDHBSIM.data.mode1);
 /* line 200: */
 /* line 201: */
{ 
MWCBSIM_lookupfunction( VDHBSIM_b.Fn, &WDHBSIM );
SDHBSIM_ram = WDHBSIM.Ram;
 /* line 202: */
 /* line 203: */
 /* line 204: */
(*Instance) = VDHBSIM_b.Instance;
} 
break;
default: 
 /* line 205: */
A_CALLPROC(LDHBSIM_flt,(YDHBSIM),(YDHBSIM,(LDHBSIM_flt).nonlocals));
break;
} 
 /* line 206: */
 /* line 207: */
if ( (SDHBSIM_ram==STAASIM_nilsram) )
{ 
 /* line 208: */
A_CALLPROC(LDHBSIM_flt,(AEHBSIM),(AEHBSIM,(LDHBSIM_flt).nonlocals));
} 
 /* line 209: */
BEHBSIM_upbofram = ((*(&(SDHBSIM_ram->Lwb)))+((*(&(SDHBSIM_ram->Ramsize)))-1));
 /* line 210: */
CEHBSIM = (Names.upb>(*Index));
if ( CEHBSIM )
{DEHBSIM = ((*Index)+1) ;
CEHBSIM = QAGAOST_is_trim((*(&A_VINDEX(Names,DEHBSIM))));
}
EEHBSIM_has_trim = CEHBSIM;
 /* line 211: */
 /* line 212: */
if ( EEHBSIM_has_trim )
{ 
FEHBSIM.Lwb = (*(&(SDHBSIM_ram->Lwb)));
FEHBSIM.Upb = BEHBSIM_upbofram;
 /* line 213: */
 /* line 214: */
HEHBSIM = (*Index)+=1 ;
VAGAOST_get_trim( (*(&A_VINDEX(Names,HEHBSIM))), FEHBSIM, Msg, &IEHBSIM );
GEHBSIM = IEHBSIM;
} 
else
{ 
GEHBSIM.Lwb = (*(&(SDHBSIM_ram->Lwb)));
 /* line 215: */
GEHBSIM.Upb = BEHBSIM_upbofram;
} 
JEHBSIM_trim = GEHBSIM;
 /* line 216: */
(*Lwb) = JEHBSIM_trim.Lwb;
 /* line 217: */
(*Upb) = JEHBSIM_trim.Upb;
 /* line 218: */
(*Circuit) = TDHBSIM_mnode.Circuit;
 /* line 219: */
(*Base) = TDHBSIM_mnode.Base;
 /* line 220: */
 /* line 221: */
KEHBSIM = SDHBSIM_ram;
} 
A_PROC_EXIT(rdtrimmedram);
return( KEHBSIM );
} 
#undef NL

A_STATIC A68_VOID  NEHBSIM_withdrawncmd(A68_104  Names, A68_105  Flt)
{ 
A68_107  QEHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(withdrawncmd);
 /* line 239: */
A_CALLPROC(Flt,(WHAAOSI_user, A_HVEC(QEHBSIM,PEHBSIM,A68_VC )),(WHAAOSI_user, A_HVEC(QEHBSIM,PEHBSIM,A68_VC ),(Flt).nonlocals));
A_PROC_EXIT(withdrawncmd);
return;
} 
#undef NL

A_STATIC A68_VOID  TEHBSIM_printpointercmd(A68_104  Names, A68_105  Flt)
{ 
A68_72 * UEHBSIM_monptr;
A68_384  VEHBSIM;  /* collateral clause result */
A68_VC  WEHBSIM;  /* avoid structure result */
A68_238  XEHBSIM;  /* OPERATORS - mode -> union mode */
A68_238  YEHBSIM;  /* OPERATORS - mode -> union mode */
A68_240  ZEHBSIM;  /* procedure value */
A68_269  AFHBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printpointercmd);
 /* line 245: */
 /* line 246: */
{ 
 /* line 247: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&UEHBSIM_monptr));
 /* line 248: */
RBFBSIM_nodename( UEHBSIM_monptr, &WEHBSIM );
VEHBSIM.data[0] = A_UNITE(XEHBSIM,mode7,7,WEHBSIM);
ZEHBSIM.fn.fn_global = LRAAOSL_newline;
ZEHBSIM.nonlocals = A68_NIL;
VEHBSIM.data[1] = A_UNITE(YEHBSIM,mode12,12,ZEHBSIM);
 /* line 249: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(AFHBSIM,VEHBSIM,2,A68_238 ));
} 
A_PROC_EXIT(printpointercmd);
return;
} 
#undef NL

A_STATIC A68_VOID  DFHBSIM_printramcmd(A68_104  Names, A68_105  Flt)
{ 
A68_INT  EFHBSIM_instance;
A68_INT  FFHBSIM_lwb;
A68_INT  GFHBSIM_upb;
A68_INT  HFHBSIM_circuit;
A68_INT  IFHBSIM_base;
A68_107  LFHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * MFHBSIM;  /* YIELD */
A68_131 * NFHBSIM_ram;
A68_INT  OFHBSIM_fieldwidth;
A68_INT  PFHBSIM_j;
A68_INT  QFHBSIM;  /* to part of loop */
A68_INT  RFHBSIM_i;
A68_238  UFHBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  VFHBSIM;  /* YIELD */
A68_269  WFHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_238  ZFHBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  AGHBSIM;  /* YIELD */
A68_269  BGHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CGHBSIM;  /* avoid structure result */
A68_238  DGHBSIM;  /* OPERATORS - mode -> union mode */
A68_269  EGHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_238  HGHBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  IGHBSIM;  /* YIELD */
A68_269  JGHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_59  KGHBSIM;  /* collateral clause result */
A68_60  LGHBSIM;  /* avoid structure result */
A68_60 * MGHBSIM;  /* YIELD */
A68_59  NGHBSIM_element;
A68_INT  OGHBSIM_size;
A68_62 * PGHBSIM_block;
A68_61  QGHBSIM;  /* forall yield */
A68_INT  RGHBSIM;  /* forall loop counter */
A68_229  TGHBSIM_generator;   /* proc value of non-global proc */
A68_VC  ZGHBSIM;  /* avoid structure result */
A68_VC  YGHBSIM_workspace;
A68_36  AHHBSIM;  /* collateral clause result */
A68_57  BHHBSIM;  /* OPERATORS - mode -> union mode */
A68_37  CHHBSIM;  /* avoid structure result */
A68_37  DHHBSIM_value;
A68_238  EHHBSIM;  /* OPERATORS - mode -> union mode */
A68_240  FHHBSIM;  /* procedure value */
A68_269  GHHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(printramcmd);
 /* line 255: */
 /* line 256: */
{ 
 /* line 257: */
 /* line 258: */
if ( (ZPAASIM_timemode!=AQAASIM_present) )
{ 
 /* line 259: */
A_CALLPROC(Flt,(WHAAOSI_user, A_HVEC(LFHBSIM,KFHBSIM,A68_VC )),(WHAAOSI_user, A_HVEC(LFHBSIM,KFHBSIM,A68_VC ),(Flt).nonlocals));
} 
 /* line 260: */
 /* line 261: */
MFHBSIM = A_HEAP(A68_INT ) ;
(*MFHBSIM) = 0 ;
NFHBSIM_ram = IDHBSIM_rdtrimmedram(Names, MFHBSIM, (&EFHBSIM_instance), (&FFHBSIM_lwb), (&GFHBSIM_upb), (&HFHBSIM_circuit), (&IFHBSIM_base), Flt);
 /* line 262: */
OFHBSIM_fieldwidth = MQAASIM_max(TQAASIM_digits(GFHBSIM_upb), TQAASIM_digits(FFHBSIM_lwb));
 /* line 270: */
QFHBSIM = (GFHBSIM_upb-FFHBSIM_lwb);
for ( PFHBSIM_j = 0;
PFHBSIM_j <= QFHBSIM;
PFHBSIM_j += 1 )
{ 
 /* line 271: */
RFHBSIM_i = (PFHBSIM_j+FFHBSIM_lwb);
 /* line 272: */
 /* line 273: */
if ( (RFHBSIM_i==FFHBSIM_lwb) )
{ 
 /* line 274: */
 /* line 275: */
VFHBSIM = TFHBSIM ;
GFBAOSL_put(LEAAOST_out, A_HVEC(WFHBSIM,A_UNITE(UFHBSIM,mode7,7,VFHBSIM),A68_238 ));
} 
else
{ 
 /* line 276: */
AGHBSIM = YFHBSIM ;
GFBAOSL_put(LEAAOST_out, A_HVEC(BGHBSIM,A_UNITE(ZFHBSIM,mode7,7,AGHBSIM),A68_238 ));
} 
 /* line 277: */
ZQAASIM_whole( RFHBSIM_i, (-OFHBSIM_fieldwidth), &CGHBSIM );
GFBAOSL_put(LEAAOST_out, A_HVEC(EGHBSIM,A_UNITE(DGHBSIM,mode7,7,CGHBSIM),A68_238 ));
 /* line 278: */
IGHBSIM = GGHBSIM ;
GFBAOSL_put(LEAAOST_out, A_HVEC(JGHBSIM,A_UNITE(HGHBSIM,mode7,7,IGHBSIM),A68_238 ));
 /* line 279: */
BCDBSIM_trimram( NFHBSIM_ram, RFHBSIM_i, RFHBSIM_i, &LGHBSIM );
MGHBSIM = A_LOC(A68_60 ) ;
(*MGHBSIM) = LGHBSIM ;
KGHBSIM.Wire = MGHBSIM;
KGHBSIM.Instance = EFHBSIM_instance;
NGHBSIM_element = KGHBSIM;
 /* line 280: */
OGHBSIM_size = 0;
 /* line 281: */
QGHBSIM = (*(&(NGHBSIM_element.Wire->Blocks))) ;
RGHBSIM = QGHBSIM.upb -1;
PGHBSIM_block = QGHBSIM.data;
for (;RGHBSIM-- >= 0;
(PGHBSIM_block++
) )
{
 /* line 282: */
 /* line 283: */
OGHBSIM_size+=(*(&(PGHBSIM_block->Size)));
}
 /* line 284: */
A_CLOSURE( TGHBSIM_generator, UGHBSIM_generator, VGHBSIM_generator );
(( VGHBSIM_generator * ) ( TGHBSIM_generator.nonlocals )) -> OGHBSIM_size = (&OGHBSIM_size);
A_CALLPROC(TGHBSIM_generator,(A68_TRUE, &ZGHBSIM),(A68_TRUE, &ZGHBSIM,(TGHBSIM_generator).nonlocals));
YGHBSIM_workspace = ZGHBSIM;
 /* line 285: */
AHHBSIM.Node = A_UNITE(BHHBSIM,mode2,2,NGHBSIM_element);
AHHBSIM.Circuit = HFHBSIM_circuit;
AHHBSIM.Base = IFHBSIM_base;
MFEBSIM_peekanddecode( AHHBSIM, YGHBSIM_workspace, &CHHBSIM );
DHHBSIM_value = CHHBSIM;
 /* line 286: */
LHEBSIM_printsignalvalue(DHHBSIM_value, UFEBSIM_nopunctuation, LEAAOST_out);
 /* line 287: */
 /* line 288: */
FHHBSIM.fn.fn_global = LRAAOSL_newline;
FHHBSIM.nonlocals = A68_NIL;
GFBAOSL_put(LEAAOST_out, A_HVEC(GHHBSIM,A_UNITE(EHHBSIM,mode12,12,FHHBSIM),A68_238 ));
}
 /* line 289: */
} 
A_PROC_EXIT(printramcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  LHHBSIM_dontcommon(A68_104  Names, A68_INT  Action, A68_VC  Str, A68_105  Msg)
{ 
A68_70  OHHBSIM_flt;   /* proc value of non-global proc */
A68_INT  SHHBSIM_index;
A68_INT  THHBSIM;  /* YIELD */
A68_72 * UHHBSIM_monptr;
A68_77  VHHBSIM;  /* OPERATORS - mode -> union mode */
A68_35  WHHBSIM;  /* avoid structure result */
A68_35  XHHBSIM_list;
A68_INT  YHHBSIM_i;
A68_INT  ZHHBSIM;  /* to part of loop */
A68_72 * AIHBSIM_path;
A68_77  DIHBSIM;  /* OPERATORS - mode -> union mode */
A68_35  EIHBSIM;  /* avoid structure result */
A68_35  FIHBSIM_list;
A68_INT  GIHBSIM_i;
A68_INT  HIHBSIM;  /* to part of loop */
A_PROC_ENTRY(dontcommon);
 /* line 295: */
 /* line 296: */
{ 
A_CLOSURE( OHHBSIM_flt, PHHBSIM_flt, QHHBSIM_flt );
(( QHHBSIM_flt * ) ( OHHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 297: */
SHHBSIM_index = 0;
 /* line 298: */
 /* line 299: */
THHBSIM = (SHHBSIM_index+1) ;
if ( !HFAASIM_is_nodename((*(&A_VINDEX(Names,THHBSIM)))) )
{ 
 /* line 300: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&UHHBSIM_monptr));
 /* line 301: */
 /* line 302: */
IQGBSIM_listmonitors( A_UNITE(VHHBSIM,mode1,1,UHHBSIM_monptr), Action, GZEBSIM_nocondition, A68_FALSE, &WHHBSIM );
XHHBSIM_list = WHHBSIM;
 /* line 303: */
 /* line 304: */
if ( (XHHBSIM_list.upb>0) )
{ 
ZHHBSIM = XHHBSIM_list.upb;
for ( YHHBSIM_i = 1;
YHHBSIM_i <= ZHHBSIM;
YHHBSIM_i += 1 )
{ 
QVGBSIM_removemonitor((*(&A_VINDEX(XHHBSIM_list,YHHBSIM_i))), A68_FALSE, OHHBSIM_flt);
}
 /* line 305: */
 /* line 306: */
} 
else
{ 
 /* line 307: */
 /* line 308: */
 /* line 309: */
A_CALLPROC(OHHBSIM_flt,(Str),(Str,(OHHBSIM_flt).nonlocals));
} 
} 
else
{ 
for ( ;; )
{ 
 /* line 310: */
if ( !((SHHBSIM_index<Names.upb)) ) break;
AIHBSIM_path = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&SHHBSIM_index), Msg));
 /* line 311: */
 /* line 312: */
if ( (AIHBSIM_path==HGDBSIM_nilpath) )
{ 
 /* line 313: */
A_CALLPROC(OHHBSIM_flt,(CIHBSIM),(CIHBSIM,(OHHBSIM_flt).nonlocals));
} 
 /* line 314: */
SPFBSIM_node(AIHBSIM_path, OHHBSIM_flt);
 /* line 315: */
 /* line 316: */
IQGBSIM_listmonitors( A_UNITE(DIHBSIM,mode1,1,AIHBSIM_path), Action, GZEBSIM_nocondition, A68_FALSE, &EIHBSIM );
FIHBSIM_list = EIHBSIM;
 /* line 317: */
 /* line 318: */
if ( (FIHBSIM_list.upb>0) )
{ 
HIHBSIM = FIHBSIM_list.upb;
for ( GIHBSIM_i = 1;
GIHBSIM_i <= HIHBSIM;
GIHBSIM_i += 1 )
{ 
QVGBSIM_removemonitor((*(&A_VINDEX(FIHBSIM_list,GIHBSIM_i))), A68_FALSE, OHHBSIM_flt);
}
 /* line 319: */
 /* line 320: */
} 
else
{ 
 /* line 321: */
 /* line 322: */
A_CALLPROC(OHHBSIM_flt,(Str),(Str,(OHHBSIM_flt).nonlocals));
} 
}
 /* line 323: */
 /* line 324: */
} 
} 
A_PROC_EXIT(dontcommon);
return;
} 
#undef NL

A_STATIC A68_VOID  KIHBSIM_dontdisplaycmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(dontdisplaycmd);
 /* line 330: */
LHHBSIM_dontcommon(Names, DZEBSIM_display, MIHBSIM, Flt);
A_PROC_EXIT(dontdisplaycmd);
return;
} 
#undef NL

A_STATIC A68_VOID  PIHBSIM_dontkeepcmd(A68_104  Names, A68_105  Flt)
{ 
A68_107  SIHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dontkeepcmd);
 /* line 336: */
 /* line 337: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
 /* line 338: */
 /* line 339: */
A_CALLPROC(Flt,(WHAAOSI_user, A_HVEC(SIHBSIM,RIHBSIM,A68_VC )),(WHAAOSI_user, A_HVEC(SIHBSIM,RIHBSIM,A68_VC ),(Flt).nonlocals));
} 
else
{ 
 /* line 340: */
LHHBSIM_dontcommon(Names, FZEBSIM_keep, UIHBSIM, Flt);
} 
A_PROC_EXIT(dontkeepcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  XIHBSIM_dontmonitorcmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(dontmonitorcmd);
 /* line 346: */
LHHBSIM_dontcommon(Names, CZEBSIM_monitor, ZIHBSIM, Flt);
A_PROC_EXIT(dontmonitorcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  CJHBSIM_dontstopcmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(dontstopcmd);
 /* line 362: */
LHHBSIM_dontcommon(Names, EZEBSIM_stop, EJHBSIM, Flt);
A_PROC_EXIT(dontstopcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  HJHBSIM_cleardisplayscmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  KJHBSIM_flt;   /* proc value of non-global proc */
A68_77  OJHBSIM;  /* OPERATORS - mode -> union mode */
A68_35  PJHBSIM;  /* avoid structure result */
A68_35  QJHBSIM_list;
A68_INT  RJHBSIM_i;
A68_INT  SJHBSIM;  /* to part of loop */
A_PROC_ENTRY(cleardisplayscmd);
 /* line 368: */
 /* line 369: */
{ 
A_CLOSURE( KJHBSIM_flt, LJHBSIM_flt, MJHBSIM_flt );
(( MJHBSIM_flt * ) ( KJHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 370: */
 /* line 371: */
IQGBSIM_listmonitors( A_UNITE(OJHBSIM,mode1,1,HGDBSIM_nilpath), DZEBSIM_display, GZEBSIM_nocondition, A68_FALSE, &PJHBSIM );
QJHBSIM_list = PJHBSIM;
 /* line 372: */
SJHBSIM = QJHBSIM_list.upb;
for ( RJHBSIM_i = 1;
RJHBSIM_i <= SJHBSIM;
RJHBSIM_i += 1 )
{ 
QVGBSIM_removemonitor((*(&A_VINDEX(QJHBSIM_list,RJHBSIM_i))), A68_FALSE, KJHBSIM_flt);
}
 /* line 373: */
} 
A_PROC_EXIT(cleardisplayscmd);
return;
} 
#undef NL

A_STATIC A68_VOID  VJHBSIM_clearmonitorscmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  YJHBSIM_flt;   /* proc value of non-global proc */
A68_77  CKHBSIM;  /* OPERATORS - mode -> union mode */
A68_35  DKHBSIM;  /* avoid structure result */
A68_35  EKHBSIM_list;
A68_INT  FKHBSIM_i;
A68_INT  GKHBSIM;  /* to part of loop */
A_PROC_ENTRY(clearmonitorscmd);
 /* line 379: */
 /* line 380: */
{ 
A_CLOSURE( YJHBSIM_flt, ZJHBSIM_flt, AKHBSIM_flt );
(( AKHBSIM_flt * ) ( YJHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 381: */
 /* line 382: */
IQGBSIM_listmonitors( A_UNITE(CKHBSIM,mode1,1,HGDBSIM_nilpath), CZEBSIM_monitor, GZEBSIM_nocondition, A68_FALSE, &DKHBSIM );
EKHBSIM_list = DKHBSIM;
 /* line 383: */
GKHBSIM = EKHBSIM_list.upb;
for ( FKHBSIM_i = 1;
FKHBSIM_i <= GKHBSIM;
FKHBSIM_i += 1 )
{ 
QVGBSIM_removemonitor((*(&A_VINDEX(EKHBSIM_list,FKHBSIM_i))), A68_FALSE, YJHBSIM_flt);
}
 /* line 384: */
} 
A_PROC_EXIT(clearmonitorscmd);
return;
} 
#undef NL

A_STATIC A68_VOID  JKHBSIM_clearstopscmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  MKHBSIM_flt;   /* proc value of non-global proc */
A68_77  QKHBSIM;  /* OPERATORS - mode -> union mode */
A68_35  RKHBSIM;  /* avoid structure result */
A68_35  SKHBSIM_list;
A68_INT  TKHBSIM_i;
A68_INT  UKHBSIM;  /* to part of loop */
A_PROC_ENTRY(clearstopscmd);
 /* line 390: */
 /* line 391: */
{ 
A_CLOSURE( MKHBSIM_flt, NKHBSIM_flt, OKHBSIM_flt );
(( OKHBSIM_flt * ) ( MKHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 392: */
 /* line 393: */
IQGBSIM_listmonitors( A_UNITE(QKHBSIM,mode1,1,HGDBSIM_nilpath), EZEBSIM_stop, GZEBSIM_nocondition, A68_FALSE, &RKHBSIM );
SKHBSIM_list = RKHBSIM;
 /* line 394: */
UKHBSIM = SKHBSIM_list.upb;
for ( TKHBSIM_i = 1;
TKHBSIM_i <= UKHBSIM;
TKHBSIM_i += 1 )
{ 
QVGBSIM_removemonitor((*(&A_VINDEX(SKHBSIM_list,TKHBSIM_i))), A68_FALSE, MKHBSIM_flt);
}
 /* line 395: */
} 
A_PROC_EXIT(clearstopscmd);
return;
} 
#undef NL

A_STATIC A68_VOID  XKHBSIM_clearkeepscmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  ALHBSIM_flt;   /* proc value of non-global proc */
A68_77  ELHBSIM;  /* OPERATORS - mode -> union mode */
A68_35  FLHBSIM;  /* avoid structure result */
A68_35  GLHBSIM_list;
A68_INT  HLHBSIM_i;
A68_INT  ILHBSIM;  /* to part of loop */
A_PROC_ENTRY(clearkeepscmd);
 /* line 401: */
 /* line 402: */
{ 
A_CLOSURE( ALHBSIM_flt, BLHBSIM_flt, CLHBSIM_flt );
(( CLHBSIM_flt * ) ( ALHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 403: */
 /* line 404: */
IQGBSIM_listmonitors( A_UNITE(ELHBSIM,mode1,1,HGDBSIM_nilpath), FZEBSIM_keep, GZEBSIM_nocondition, A68_FALSE, &FLHBSIM );
GLHBSIM_list = FLHBSIM;
 /* line 405: */
ILHBSIM = GLHBSIM_list.upb;
for ( HLHBSIM_i = 1;
HLHBSIM_i <= ILHBSIM;
HLHBSIM_i += 1 )
{ 
QVGBSIM_removemonitor((*(&A_VINDEX(GLHBSIM_list,HLHBSIM_i))), A68_FALSE, ALHBSIM_flt);
}
 /* line 406: */
} 
A_PROC_EXIT(clearkeepscmd);
return;
} 
#undef NL

A_STATIC A68_VOID  LLHBSIM_gotocmd(A68_104  Names, A68_105  Flt)
{ 
A68_72 * MLHBSIM_saved;
A68_105  PLHBSIM_msg;   /* proc value of non-global proc */
A68_70  ULHBSIM_fault;   /* proc value of non-global proc */
A68_INT  YLHBSIM_index;
A68_72 * ZLHBSIM_pathname;
A68_107  CMHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_82  DMHBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(gotocmd);
 /* line 412: */
 /* line 413: */
{ 
 /* line 414: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&MLHBSIM_saved));
 /* line 415: */
A_CLOSURE( PLHBSIM_msg, QLHBSIM_msg, RLHBSIM_msg );
(( RLHBSIM_msg * ) ( PLHBSIM_msg.nonlocals )) -> MLHBSIM_saved = (&MLHBSIM_saved);
(( RLHBSIM_msg * ) ( PLHBSIM_msg.nonlocals )) -> Flt = Flt;
 /* line 417: */
A_CLOSURE( ULHBSIM_fault, VLHBSIM_fault, WLHBSIM_fault );
(( WLHBSIM_fault * ) ( ULHBSIM_fault.nonlocals )) -> PLHBSIM_msg = PLHBSIM_msg;
 /* line 418: */
YLHBSIM_index = 0;
 /* line 419: */
for ( ;; )
{ 
 /* line 420: */
if ( !((YLHBSIM_index<Names.upb)) ) break;
ZLHBSIM_pathname = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&YLHBSIM_index), PLHBSIM_msg));
 /* line 421: */
SPFBSIM_node(ZLHBSIM_pathname, ULHBSIM_fault);
 /* line 422: */
if ( (ZLHBSIM_pathname==HGDBSIM_nilpath) )
{ 
A_CALLPROC(Flt,(WHAAOSI_user, A_HVEC(CMHBSIM,BMHBSIM,A68_VC )),(WHAAOSI_user, A_HVEC(CMHBSIM,BMHBSIM,A68_VC ),(Flt).nonlocals));
} 
 /* line 423: */
 /* line 424: */
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(DMHBSIM,mode1,1,ZLHBSIM_pathname));
}
 /* line 425: */
} 
A_PROC_EXIT(gotocmd);
return;
} 
#undef NL

A_STATIC A68_VOID  GMHBSIM_goincmd(A68_104  Names, A68_105  Flt)
{ 
A68_72 * HMHBSIM_saved;
A68_105  KMHBSIM_msg;   /* proc value of non-global proc */
A68_70  PMHBSIM_fault;   /* proc value of non-global proc */
A68_INT  TMHBSIM_index;
A68_72 * UMHBSIM_pathname;
A68_INT  VMHBSIM;  /* YIELD */
A68_72 * WMHBSIM_monptr;
A68_107  ZMHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_82  ANHBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(goincmd);
 /* line 433: */
 /* line 434: */
{ 
 /* line 435: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&HMHBSIM_saved));
 /* line 436: */
A_CLOSURE( KMHBSIM_msg, LMHBSIM_msg, MMHBSIM_msg );
(( MMHBSIM_msg * ) ( KMHBSIM_msg.nonlocals )) -> HMHBSIM_saved = (&HMHBSIM_saved);
(( MMHBSIM_msg * ) ( KMHBSIM_msg.nonlocals )) -> Flt = Flt;
 /* line 438: */
A_CLOSURE( PMHBSIM_fault, QMHBSIM_fault, RMHBSIM_fault );
(( RMHBSIM_fault * ) ( PMHBSIM_fault.nonlocals )) -> KMHBSIM_msg = KMHBSIM_msg;
 /* line 439: */
TMHBSIM_index = 0;
 /* line 440: */
for ( ;; )
{ 
 /* line 441: */
if ( !((TMHBSIM_index<Names.upb)) ) break;
 /* line 442: */
 /* line 443: */
VMHBSIM = (TMHBSIM_index+1) ;
if ( HFAASIM_is_nodename((*(&A_VINDEX(Names,VMHBSIM)))) )
{ 
 /* line 444: */
UMHBSIM_pathname = DNFBSIM_goin(QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&TMHBSIM_index), KMHBSIM_msg)));
} 
else
{ 
TMHBSIM_index+=1;
 /* line 445: */
 /* line 446: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&WMHBSIM_monptr));
 /* line 447: */
 /* line 448: */
UMHBSIM_pathname = DNFBSIM_goin(WMHBSIM_monptr);
} 
 /* line 449: */
if ( (UMHBSIM_pathname==HGDBSIM_nilpath) )
{ 
A_CALLPROC(Flt,(WHAAOSI_user, A_HVEC(ZMHBSIM,YMHBSIM,A68_VC )),(WHAAOSI_user, A_HVEC(ZMHBSIM,YMHBSIM,A68_VC ),(Flt).nonlocals));
} 
 /* line 450: */
SPFBSIM_node(UMHBSIM_pathname, PMHBSIM_fault);
 /* line 451: */
 /* line 452: */
if ( (UMHBSIM_pathname!=HGDBSIM_nilpath) )
{ 
 /* line 453: */
 /* line 454: */
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(ANHBSIM,mode1,1,UMHBSIM_pathname));
} 
else
{ 
 /* line 455: */
 /* line 456: */
A_CALLPROC(PMHBSIM_fault,(CNHBSIM),(CNHBSIM,(PMHBSIM_fault).nonlocals));
} 
}
 /* line 457: */
} 
A_PROC_EXIT(goincmd);
return;
} 
#undef NL

A_STATIC A68_VOID  FNHBSIM_gooutcmd(A68_104  Names, A68_105  Flt)
{ 
A68_72 * GNHBSIM_saved;
A68_105  JNHBSIM_msg;   /* proc value of non-global proc */
A68_70  ONHBSIM_fault;   /* proc value of non-global proc */
A68_INT  SNHBSIM;  /* YIELD */
A68_111 * TNHBSIM_n;
A68_INT  UNHBSIM;  /* forall loop counter */
A68_VC  VNHBSIM;  /* avoid structure result */
A68_VC  WNHBSIM_name;
A68_72 * XNHBSIM_monptr;
A68_VC  ZNHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_82  BOHBSIM;  /* OPERATORS - mode -> union mode */
A68_72 * COHBSIM_monptr;
A68_82  FOHBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(gooutcmd);
 /* line 464: */
 /* line 465: */
{ 
 /* line 466: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&GNHBSIM_saved));
 /* line 467: */
A_CLOSURE( JNHBSIM_msg, KNHBSIM_msg, LNHBSIM_msg );
(( LNHBSIM_msg * ) ( JNHBSIM_msg.nonlocals )) -> GNHBSIM_saved = (&GNHBSIM_saved);
(( LNHBSIM_msg * ) ( JNHBSIM_msg.nonlocals )) -> Flt = Flt;
 /* line 469: */
A_CLOSURE( ONHBSIM_fault, PNHBSIM_fault, QNHBSIM_fault );
(( QNHBSIM_fault * ) ( ONHBSIM_fault.nonlocals )) -> JNHBSIM_msg = JNHBSIM_msg;
 /* line 471: */
 /* line 472: */
SNHBSIM = 1 ;
if ( ELFAOST_is_name((*(&A_VINDEX(Names,SNHBSIM)))) )
{ 
UNHBSIM = Names.upb -1;
TNHBSIM_n = Names.data;
for (;UNHBSIM-- >= 0;
(TNHBSIM_n++
) )
{
 /* line 473: */
JLFAOST_get_name( (*TNHBSIM_n), JNHBSIM_msg, &VNHBSIM );
WNHBSIM_name = VNHBSIM;
 /* line 474: */
 /* line 475: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&XNHBSIM_monptr));
 /* line 476: */
XNHBSIM_monptr = YNFBSIM_goout(WNHBSIM_name, XNHBSIM_monptr);
 /* line 477: */
 /* line 478: */
if ( (XNHBSIM_monptr==HGDBSIM_nilpath) )
{ 
 /* line 479: */
A_CALLPROC(ONHBSIM_fault,(A_VC_PLUS(A_VC_PLUS(A_HVEC(ZNHBSIM,'\"',A68_CHAR ),WNHBSIM_name),AOHBSIM)),(A_VC_PLUS(A_VC_PLUS(A_HVEC(ZNHBSIM,'\"',A68_CHAR ),WNHBSIM_name),AOHBSIM),(ONHBSIM_fault).nonlocals));
} 
 /* line 480: */
 /* line 481: */
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(BOHBSIM,mode1,1,XNHBSIM_monptr));
}
 /* line 482: */
 /* line 483: */
} 
else
{ 
 /* line 484: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&COHBSIM_monptr));
 /* line 485: */
COHBSIM_monptr = PNFBSIM_goout(COHBSIM_monptr);
 /* line 486: */
 /* line 487: */
if ( (COHBSIM_monptr==HGDBSIM_nilpath) )
{ 
 /* line 488: */
A_CALLPROC(ONHBSIM_fault,(EOHBSIM),(EOHBSIM,(ONHBSIM_fault).nonlocals));
} 
 /* line 489: */
 /* line 490: */
 /* line 491: */
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(FOHBSIM,mode1,1,COHBSIM_monptr));
} 
} 
A_PROC_EXIT(gooutcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  IOHBSIM_gobackcmd(A68_104  Names, A68_105  Msg)
{ 
A68_72 * JOHBSIM_saved;
A68_105  MOHBSIM_fault;   /* proc value of non-global proc */
A_PROC_ENTRY(gobackcmd);
 /* line 497: */
 /* line 498: */
{ 
 /* line 499: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&JOHBSIM_saved));
 /* line 500: */
A_CLOSURE( MOHBSIM_fault, NOHBSIM_fault, OOHBSIM_fault );
(( OOHBSIM_fault * ) ( MOHBSIM_fault.nonlocals )) -> JOHBSIM_saved = (&JOHBSIM_saved);
(( OOHBSIM_fault * ) ( MOHBSIM_fault.nonlocals )) -> Msg = Msg;
 /* line 502: */
FNHBSIM_gooutcmd(Names, Msg);
 /* line 503: */
 /* line 504: */
GMHBSIM_goincmd(Names, MOHBSIM_fault);
} 
A_PROC_EXIT(gobackcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  SOHBSIM_gohomecmd(A68_104  Names, A68_105  Flt)
{ 
A68_72 * TOHBSIM_simfn;
A68_72 * UOHBSIM;  /* YIELD */
A68_82  VOHBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(gohomecmd);
 /* line 510: */
 /* line 515: */
{ 
 /* line 516: */
UKDBSIM_simtablelookuppath(KGDBSIM_simulatedfunctionname, MGDBSIM_any, (&TOHBSIM_simfn));
 /* line 517: */
 /* line 518: */
UOHBSIM = A_HEAP(A68_72 ) ;
(*UOHBSIM) = (*TOHBSIM_simfn) ;
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(VOHBSIM,mode1,1,UOHBSIM));
} 
A_PROC_EXIT(gohomecmd);
return;
} 
#undef NL

A_STATIC A68_VOID  YOHBSIM_displaysignalcmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  BPHBSIM_flt;   /* proc value of non-global proc */
A68_INT  FPHBSIM;  /* YIELD */
A68_72 * GPHBSIM_monptr;
A68_34 * HPHBSIM_m;
A68_37  IPHBSIM;  /* avoid structure result */
A68_37 * JPHBSIM;  /* YIELD */
A68_37 * KPHBSIM_value;
A68_INT  LPHBSIM_index;
A68_72 * MPHBSIM_path;
A68_34 * PPHBSIM_m;
A68_37  QPHBSIM;  /* avoid structure result */
A68_37 * RPHBSIM;  /* YIELD */
A68_37 * SPHBSIM_value;
A_PROC_ENTRY(displaysignalcmd);
 /* line 525: */
 /* line 526: */
{ 
A_CLOSURE( BPHBSIM_flt, CPHBSIM_flt, DPHBSIM_flt );
(( DPHBSIM_flt * ) ( BPHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 527: */
 /* line 528: */
FPHBSIM = 1 ;
if ( !HFAASIM_is_nodename((*(&A_VINDEX(Names,FPHBSIM)))) )
{ 
 /* line 529: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&GPHBSIM_monptr));
 /* line 530: */
HPHBSIM_m = ATGBSIM_loadmonitor(GPHBSIM_monptr, DZEBSIM_display, GZEBSIM_nocondition, BPHBSIM_flt);
 /* line 531: */
 /* line 535: */
 /* line 549: */
MFEBSIM_peekanddecode( (*(&(HPHBSIM_m->Location))), (*(&(HPHBSIM_m->Workspace))), &IPHBSIM );
JPHBSIM = A_HEAP(A68_37 ) ;
(*JPHBSIM) = IPHBSIM ;
KPHBSIM_value = JPHBSIM;
 /* line 550: */
 /* line 551: */
 /* line 552: */
KKGBSIM_printfreeform(YPAASIM_activetime, HPHBSIM_m, KPHBSIM_value, DKGBSIM_printequals);
} 
else
{ 
LPHBSIM_index = 0;
 /* line 553: */
for ( ;; )
{ 
 /* line 554: */
if ( !((LPHBSIM_index<Names.upb)) ) break;
MPHBSIM_path = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&LPHBSIM_index), Msg));
 /* line 555: */
 /* line 556: */
if ( (MPHBSIM_path==HGDBSIM_nilpath) )
{ 
 /* line 557: */
A_CALLPROC(BPHBSIM_flt,(OPHBSIM),(OPHBSIM,(BPHBSIM_flt).nonlocals));
} 
 /* line 558: */
SPFBSIM_node(MPHBSIM_path, BPHBSIM_flt);
 /* line 559: */
PPHBSIM_m = ATGBSIM_loadmonitor(MPHBSIM_path, DZEBSIM_display, GZEBSIM_nocondition, BPHBSIM_flt);
 /* line 560: */
 /* line 564: */
 /* line 579: */
MFEBSIM_peekanddecode( (*(&(PPHBSIM_m->Location))), (*(&(PPHBSIM_m->Workspace))), &QPHBSIM );
RPHBSIM = A_HEAP(A68_37 ) ;
(*RPHBSIM) = QPHBSIM ;
SPHBSIM_value = RPHBSIM;
 /* line 580: */
 /* line 581: */
KKGBSIM_printfreeform(YPAASIM_activetime, PPHBSIM_m, SPHBSIM_value, DKGBSIM_printequals);
}
 /* line 582: */
} 
 /* line 583: */
 /* line 584: */
LRAAOSL_newline(LEAAOST_out);
} 
A_PROC_EXIT(displaysignalcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  XPHBSIM_alwaysorchanges(A68_104  Names, A68_INT  Action, A68_INT  Condition, A68_105  Msg)
{ 
A68_70  AQHBSIM_flt;   /* proc value of non-global proc */
A68_INT  EQHBSIM_firstnew;
A68_INT  FQHBSIM;  /* YIELD */
A68_72 * GQHBSIM_monptr;
A68_34 * HQHBSIM_m;
A68_INT  IQHBSIM_index;
A68_72 * JQHBSIM_path;
A68_34 * MQHBSIM_m;
A68_INT  NQHBSIM_handle;
A_PROC_ENTRY(alwaysorchanges);
 /* line 593: */
 /* line 594: */
{ 
A_CLOSURE( AQHBSIM_flt, BQHBSIM_flt, CQHBSIM_flt );
(( CQHBSIM_flt * ) ( AQHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 595: */
EQHBSIM_firstnew = (-1);
 /* line 596: */
 /* line 597: */
FQHBSIM = 1 ;
if ( !HFAASIM_is_nodename((*(&A_VINDEX(Names,FQHBSIM)))) )
{ 
 /* line 598: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&GQHBSIM_monptr));
 /* line 599: */
HQHBSIM_m = ATGBSIM_loadmonitor(GQHBSIM_monptr, Action, Condition, AQHBSIM_flt);
 /* line 600: */
 /* line 601: */
 /* line 602: */
EQHBSIM_firstnew = MUGBSIM_addmonitor(HQHBSIM_m);
} 
else
{ 
IQHBSIM_index = 0;
 /* line 603: */
for ( ;; )
{ 
 /* line 604: */
if ( !((IQHBSIM_index<Names.upb)) ) break;
JQHBSIM_path = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&IQHBSIM_index), Msg));
 /* line 605: */
 /* line 606: */
if ( (JQHBSIM_path==HGDBSIM_nilpath) )
{ 
 /* line 607: */
A_CALLPROC(AQHBSIM_flt,(LQHBSIM),(LQHBSIM,(AQHBSIM_flt).nonlocals));
} 
 /* line 608: */
SPFBSIM_node(JQHBSIM_path, AQHBSIM_flt);
 /* line 609: */
MQHBSIM_m = ATGBSIM_loadmonitor(JQHBSIM_path, Action, Condition, AQHBSIM_flt);
 /* line 610: */
NQHBSIM_handle = MUGBSIM_addmonitor(MQHBSIM_m);
 /* line 611: */
if ( (EQHBSIM_firstnew==(-1)) )
{ 
 /* line 612: */
EQHBSIM_firstnew = NQHBSIM_handle;
} 
}
 /* line 613: */
} 
 /* line 614: */
 /* line 615: */
UUGBSIM_newtestpoints(EQHBSIM_firstnew, AQHBSIM_flt);
} 
A_PROC_EXIT(alwaysorchanges);
return;
} 
#undef NL

A_STATIC A68_VOID  SQHBSIM_becomesorequals(A68_104  Names, A68_INT  Action, A68_INT  Condition, A68_105  Msg)
{ 
A68_70  VQHBSIM_flt;   /* proc value of non-global proc */
A68_INT  ZQHBSIM_index;
A68_72 * ARHBSIM_path;
A68_34 * DRHBSIM_m;
A68_57  ERHBSIM;  /* united object - for case conformity */
A68_59  FRHBSIM_l;
A68_59  GRHBSIM;  /* clause result */
A68_59  HRHBSIM_locofm;
A68_37  IRHBSIM;  /* avoid structure result */
A68_VC * JRHBSIM;  /* YIELD */
A_PROC_ENTRY(becomesorequals);
 /* line 624: */
 /* line 625: */
{ 
A_CLOSURE( VQHBSIM_flt, WQHBSIM_flt, XQHBSIM_flt );
(( XQHBSIM_flt * ) ( VQHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 626: */
ZQHBSIM_index = 0;
 /* line 627: */
ARHBSIM_path = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&ZQHBSIM_index), Msg));
 /* line 628: */
 /* line 629: */
if ( (ARHBSIM_path==HGDBSIM_nilpath) )
{ 
 /* line 630: */
A_CALLPROC(VQHBSIM_flt,(CRHBSIM),(CRHBSIM,(VQHBSIM_flt).nonlocals));
} 
 /* line 631: */
SPFBSIM_node(ARHBSIM_path, VQHBSIM_flt);
 /* line 632: */
DRHBSIM_m = ATGBSIM_loadmonitor(ARHBSIM_path, Action, Condition, VQHBSIM_flt);
 /* line 633: */
ERHBSIM = (*(&((&(DRHBSIM_m->Location))->Node))) ;
switch ( ERHBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE60,INT)  */
FRHBSIM_l = (ERHBSIM.data.mode2);
GRHBSIM = FRHBSIM_l;
break;
default: 
A_IMP_SKIP ;
break;
} 
HRHBSIM_locofm = GRHBSIM;
 /* line 634: */
 /* line 635: */
 /* line 636: */
 /* line 637: */
FLEBSIM_get_values( Names, (&ZQHBSIM_index), (*(&(HRHBSIM_locofm.Wire->Type))), YKEBSIM_nocycle_and_check, VQHBSIM_flt, &IRHBSIM );
JRHBSIM = (&(DRHBSIM_m->Testvalues)) ;
(*JRHBSIM) = (*AEDBSIM_encode(IRHBSIM, (*(&(HRHBSIM_locofm.Wire->Type)))));
 /* line 638: */
 /* line 639: */
UUGBSIM_newtestpoints(MUGBSIM_addmonitor(DRHBSIM_m), VQHBSIM_flt);
} 
A_PROC_EXIT(becomesorequals);
return;
} 
#undef NL

A_STATIC A68_VOID  MRHBSIM_displaychangescmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(displaychangescmd);
 /* line 645: */
XPHBSIM_alwaysorchanges(Names, DZEBSIM_display, IZEBSIM_changes, Flt);
A_PROC_EXIT(displaychangescmd);
return;
} 
#undef NL

A_STATIC A68_VOID  PRHBSIM_displayequalscmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(displayequalscmd);
 /* line 651: */
SQHBSIM_becomesorequals(Names, DZEBSIM_display, JZEBSIM_equals, Flt);
A_PROC_EXIT(displayequalscmd);
return;
} 
#undef NL

A_STATIC A68_VOID  SRHBSIM_displayalwayscmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(displayalwayscmd);
 /* line 657: */
XPHBSIM_alwaysorchanges(Names, DZEBSIM_display, HZEBSIM_always, Flt);
A_PROC_EXIT(displayalwayscmd);
return;
} 
#undef NL

A_STATIC A68_VOID  VRHBSIM_displaybecomescmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(displaybecomescmd);
 /* line 663: */
SQHBSIM_becomesorequals(Names, DZEBSIM_display, KZEBSIM_becomes, Flt);
A_PROC_EXIT(displaybecomescmd);
return;
} 
#undef NL

A_STATIC A68_VOID  YRHBSIM_monitorchangescmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(monitorchangescmd);
 /* line 669: */
XPHBSIM_alwaysorchanges(Names, CZEBSIM_monitor, IZEBSIM_changes, Flt);
A_PROC_EXIT(monitorchangescmd);
return;
} 
#undef NL

A_STATIC A68_VOID  BSHBSIM_monitorequalscmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(monitorequalscmd);
 /* line 675: */
SQHBSIM_becomesorequals(Names, CZEBSIM_monitor, JZEBSIM_equals, Flt);
A_PROC_EXIT(monitorequalscmd);
return;
} 
#undef NL

A_STATIC A68_VOID  ESHBSIM_monitoralwayscmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(monitoralwayscmd);
 /* line 681: */
XPHBSIM_alwaysorchanges(Names, CZEBSIM_monitor, HZEBSIM_always, Flt);
A_PROC_EXIT(monitoralwayscmd);
return;
} 
#undef NL

A_STATIC A68_VOID  HSHBSIM_monitorbecomescmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(monitorbecomescmd);
 /* line 687: */
SQHBSIM_becomesorequals(Names, CZEBSIM_monitor, KZEBSIM_becomes, Flt);
A_PROC_EXIT(monitorbecomescmd);
return;
} 
#undef NL

A_STATIC A68_VOID  KSHBSIM_setnowcmd(A68_104  Names, A68_105  Flt)
{ 
A68_82  LSHBSIM;  /* OPERATORS - mode -> union mode */
A68_384  MSHBSIM;  /* collateral clause result */
A68_238  PSHBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  QSHBSIM;  /* YIELD */
A68_238  RSHBSIM;  /* OPERATORS - mode -> union mode */
A68_240  SSHBSIM;  /* procedure value */
A68_269  TSHBSIM;  /* OPERATORS - istruct -> vector */
A68_70  VSHBSIM_anonymous;   /* proc value of non-global proc */
A_PROC_ENTRY(setnowcmd);
 /* line 693: */
 /* line 694: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
DQAASIM_settimemode(AQAASIM_present);
 /* line 695: */
ZAGBSIM_monitoringseparator = ASFBSIM_savedmonitoringseparator;
 /* line 696: */
YPAASIM_activetime = CSFBSIM_savedactivetime;
 /* line 697: */
XSFBSIM_testpoints = BSFBSIM_savedtestpoints;
 /* line 698: */
 /* line 699: */
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(LSHBSIM,mode1,1,DSFBSIM_savedmonitoringpointer));
 /* line 700: */
TSFBSIM_printstyle = YRFBSIM_savedprintstyle;
 /* line 701: */
(*QPAASIM_simprompt) = RPAASIM_presentsimprompt;
 /* line 702: */
QSHBSIM = OSHBSIM ;
MSHBSIM.data[0] = A_UNITE(PSHBSIM,mode7,7,QSHBSIM);
SSHBSIM.fn.fn_global = LRAAOSL_newline;
SSHBSIM.nonlocals = A68_NIL;
MSHBSIM.data[1] = A_UNITE(RSHBSIM,mode12,12,SSHBSIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(TSHBSIM,MSHBSIM,2,A68_238 ));
 /* line 703: */
BMGBSIM_monitorheading();
 /* line 704: */
A_CLOSURE( VSHBSIM_anonymous, WSHBSIM_anonymous, XSHBSIM_anonymous );
(( XSHBSIM_anonymous * ) ( VSHBSIM_anonymous.nonlocals )) -> Flt = Flt;
 /* line 705: */
VWGBSIM_simulateandmonitor(0, A_LOC(A68_BOOL ), A_LOC(A68_BOOL ), VSHBSIM_anonymous);
} 
A_PROC_EXIT(setnowcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  BTHBSIM_setpastcmd(A68_104  Names, A68_105  Flt)
{ 
A68_72 * CTHBSIM_monptr;
A68_384  DTHBSIM;  /* collateral clause result */
A68_238  GTHBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  HTHBSIM;  /* YIELD */
A68_238  ITHBSIM;  /* OPERATORS - mode -> union mode */
A68_240  JTHBSIM;  /* procedure value */
A68_269  KTHBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(setpastcmd);
 /* line 711: */
 /* line 712: */
if ( (ZPAASIM_timemode==AQAASIM_present) )
{ 
DQAASIM_settimemode(BQAASIM_past);
 /* line 713: */
ASFBSIM_savedmonitoringseparator = ZAGBSIM_monitoringseparator;
 /* line 714: */
CSFBSIM_savedactivetime = YPAASIM_activetime;
 /* line 715: */
RZFBSIM_clear(XSFBSIM_testpoints);
 /* line 716: */
BSFBSIM_savedtestpoints = XSFBSIM_testpoints;
 /* line 717: */
XSFBSIM_testpoints = NYFBSIM_new(XSFBSIM_testpoints);
 /* line 718: */
 /* line 719: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&CTHBSIM_monptr));
 /* line 720: */
DSFBSIM_savedmonitoringpointer = GMFBSIM_new(CTHBSIM_monptr);
 /* line 721: */
YRFBSIM_savedprintstyle = TSFBSIM_printstyle;
 /* line 725: */
(*QPAASIM_simprompt) = SPAASIM_pastsimprompt;
 /* line 726: */
HTHBSIM = FTHBSIM ;
DTHBSIM.data[0] = A_UNITE(GTHBSIM,mode7,7,HTHBSIM);
JTHBSIM.fn.fn_global = LRAAOSL_newline;
JTHBSIM.nonlocals = A68_NIL;
DTHBSIM.data[1] = A_UNITE(ITHBSIM,mode12,12,JTHBSIM);
 /* line 727: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(KTHBSIM,DTHBSIM,2,A68_238 ));
} 
A_PROC_EXIT(setpastcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  NTHBSIM_stopchangescmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(stopchangescmd);
 /* line 733: */
XPHBSIM_alwaysorchanges(Names, EZEBSIM_stop, IZEBSIM_changes, Flt);
A_PROC_EXIT(stopchangescmd);
return;
} 
#undef NL

A_STATIC A68_VOID  QTHBSIM_stopequalscmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(stopequalscmd);
 /* line 739: */
SQHBSIM_becomesorequals(Names, EZEBSIM_stop, JZEBSIM_equals, Flt);
A_PROC_EXIT(stopequalscmd);
return;
} 
#undef NL

A_STATIC A68_VOID  TTHBSIM_stopbecomescmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(stopbecomescmd);
 /* line 745: */
SQHBSIM_becomesorequals(Names, EZEBSIM_stop, KZEBSIM_becomes, Flt);
A_PROC_EXIT(stopbecomescmd);
return;
} 
#undef NL

A68_VOID  ZTHBSIM_setcpcache(void)
{ 
A68_72 * AUHBSIM_simfn;
A68_57  BUHBSIM;  /* united object - for case conformity */
A68_58  CUHBSIM_b;
A68_58  DUHBSIM;  /* clause result */
A68_133  GUHBSIM;  /* avoid structure result */
A68_60  HUHBSIM;  /* avoid structure result */
A68_60  IUHBSIM;  /* avoid structure result */
A_PROC_ENTRY(setcpcache);
{ 
 /* line 760: */
UKDBSIM_simtablelookuppath(KGDBSIM_simulatedfunctionname, MGDBSIM_any, (&AUHBSIM_simfn));
 /* line 762: */
 /* line 763: */
 /* line 764: */
BUHBSIM = (*(&((*(&((*(&(AUHBSIM_simfn->Bind)))->Node)))->Node))) ;
switch ( BUHBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
CUHBSIM_b = (BUHBSIM.data.mode1);
 /* line 765: */
 /* line 766: */
DUHBSIM = CUHBSIM_b;
break;
default: 
NKDAOST_sysfault(FUHBSIM);
 /* line 767: */
DUHBSIM.Fn = 0;
 /* line 768: */
DUHBSIM.Instance = 0;
break;
} 
UTHBSIM_sb = DUHBSIM;
 /* line 769: */
MWCBSIM_lookupfunction( (*(&((&UTHBSIM_sb)->Fn))), &GUHBSIM );
VTHBSIM_sf = GUHBSIM;
 /* line 770: */
FDDBSIM_inputs( VTHBSIM_sf, &HUHBSIM );
YBHBSIM_flattenfunctiontypes( HUHBSIM, &IUHBSIM );
WTHBSIM_sfi = IUHBSIM;
 /* line 771: */
XTHBSIM_sfitype = (*(&((&WTHBSIM_sfi)->Type)));
 /* line 772: */
 /* line 773: */
YTHBSIM_sfiwidth = VYCBSIM_signalwidth(XTHBSIM_sfitype);
} 
A_PROC_EXIT(setcpcache);
return;
} 
#undef NL

A_STATIC A68_VOID  LUHBSIM_changeparameterscmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  OUHBSIM_flt;   /* proc value of non-global proc */
A68_INT  UUHBSIM_index;
A68_INT  VUHBSIM;  /* YIELD */
A68_BOOL  WUHBSIM_has_trim;
A68_325  XUHBSIM;  /* collateral clause result */
A68_325  YUHBSIM;  /* clause result */
A68_INT  ZUHBSIM;  /* YIELD */
A68_325  AVHBSIM;  /* avoid structure result */
A68_325  BVHBSIM_trim;
A68_INT  CVHBSIM_lwb;
A68_INT  DVHBSIM_upb;
A68_60  EVHBSIM;  /* clause result */
A68_60  FVHBSIM;  /* avoid structure result */
A68_60  GVHBSIM_trimsfi;
A68_48  HVHBSIM_trimsfitype;
A68_37  IVHBSIM;  /* avoid structure result */
A68_37  JVHBSIM_sfivalue;
A68_59  KVHBSIM;  /* collateral clause result */
A68_60 * LVHBSIM;  /* YIELD */
A68_59  MVHBSIM_trimsfiline;
A68_36  NVHBSIM;  /* collateral clause result */
A68_57  OVHBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(changeparameterscmd);
 /* line 779: */
 /* line 780: */
{ 
A_CLOSURE( OUHBSIM_flt, PUHBSIM_flt, QUHBSIM_flt );
(( QUHBSIM_flt * ) ( OUHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 782: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
A_CALLPROC(OUHBSIM_flt,(TUHBSIM),(TUHBSIM,(OUHBSIM_flt).nonlocals));
} 
 /* line 785: */
UUHBSIM_index = 0;
 /* line 786: */
VUHBSIM = (UUHBSIM_index+1) ;
WUHBSIM_has_trim = QAGAOST_is_trim((*(&A_VINDEX(Names,VUHBSIM))));
 /* line 787: */
 /* line 788: */
if ( WUHBSIM_has_trim )
{ 
XUHBSIM.Lwb = 1;
XUHBSIM.Upb = YTHBSIM_sfiwidth;
 /* line 789: */
 /* line 790: */
ZUHBSIM = UUHBSIM_index+=1 ;
VAGAOST_get_trim( (*(&A_VINDEX(Names,ZUHBSIM))), XUHBSIM, Msg, &AVHBSIM );
YUHBSIM = AVHBSIM;
} 
else
{ 
YUHBSIM.Lwb = 1;
 /* line 791: */
YUHBSIM.Upb = YTHBSIM_sfiwidth;
} 
BVHBSIM_trim = YUHBSIM;
 /* line 792: */
CVHBSIM_lwb = BVHBSIM_trim.Lwb;
 /* line 793: */
DVHBSIM_upb = BVHBSIM_trim.Upb;
 /* line 794: */
 /* line 795: */
if ( ((CVHBSIM_lwb>1)|(DVHBSIM_upb<YTHBSIM_sfiwidth)) )
{ 
 /* line 796: */
 /* line 797: */
VADBSIM_trimwire( WTHBSIM_sfi, CVHBSIM_lwb, DVHBSIM_upb, &FVHBSIM );
EVHBSIM = FVHBSIM;
} 
else
{ 
EVHBSIM = WTHBSIM_sfi;
} 
GVHBSIM_trimsfi = EVHBSIM;
 /* line 798: */
HVHBSIM_trimsfitype = GVHBSIM_trimsfi.Type;
 /* line 801: */
 /* line 802: */
FLEBSIM_get_values( Names, (&UUHBSIM_index), HVHBSIM_trimsfitype, YKEBSIM_nocycle_and_check, OUHBSIM_flt, &IVHBSIM );
JVHBSIM_sfivalue = IVHBSIM;
 /* line 805: */
LVHBSIM = A_HEAP(A68_60 ) ;
(*LVHBSIM) = GVHBSIM_trimsfi ;
KVHBSIM.Wire = LVHBSIM;
KVHBSIM.Instance = (*(&((&UTHBSIM_sb)->Instance)));
MVHBSIM_trimsfiline = KVHBSIM;
 /* line 806: */
NVHBSIM.Node = A_UNITE(OVHBSIM,mode2,2,MVHBSIM_trimsfiline);
NVHBSIM.Circuit = 0;
NVHBSIM.Base = 0;
TKCBSIM_pokesignalvalue(NVHBSIM, (*AEDBSIM_encode(JVHBSIM_sfivalue, HVHBSIM_trimsfitype)));
 /* line 807: */
ZVGBSIM_monitorspending = A68_TRUE;
 /* line 810: */
BMGBSIM_monitorheading();
 /* line 813: */
 /* line 814: */
VWGBSIM_simulateandmonitor(0, A_LOC(A68_BOOL ), A_LOC(A68_BOOL ), OUHBSIM_flt);
} 
A_PROC_EXIT(changeparameterscmd);
return;
} 
#undef NL

A_STATIC A68_VOID  RVHBSIM_changeoutputcmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  UVHBSIM_flt;   /* proc value of non-global proc */
A68_INT  AWHBSIM_index;
A68_72 * BWHBSIM_pathname;
A68_36  EWHBSIM_mnode;
A68_57  FWHBSIM;  /* united object - for case conformity */
A68_58  GWHBSIM_b;
A68_58  HWHBSIM;  /* clause result */
A68_58  KWHBSIM;  /* OPERATORS - skip to mode */
A68_58  LWHBSIM_box;
A68_60  MWHBSIM;  /* avoid structure result */
A68_60  NWHBSIM_output;
A68_INT  OWHBSIM_outputwidth;
A68_INT  PWHBSIM;  /* YIELD */
A68_BOOL  QWHBSIM_has_trim;
A68_325  RWHBSIM;  /* collateral clause result */
A68_325  SWHBSIM;  /* clause result */
A68_INT  TWHBSIM;  /* YIELD */
A68_325  UWHBSIM;  /* avoid structure result */
A68_325  VWHBSIM_trim;
A68_INT  WWHBSIM_lwb;
A68_INT  XWHBSIM_upb;
A68_60  YWHBSIM;  /* clause result */
A68_60  ZWHBSIM;  /* avoid structure result */
A68_60  AXHBSIM_trimoutput;
A68_48  BXHBSIM_trimoutputtype;
A68_37  CXHBSIM;  /* avoid structure result */
A68_37  DXHBSIM_outputvalue;
A68_59  EXHBSIM;  /* collateral clause result */
A68_60 * FXHBSIM;  /* YIELD */
A68_59  GXHBSIM_trimoutputline;
A68_36  HXHBSIM;  /* collateral clause result */
A68_57  IXHBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(changeoutputcmd);
 /* line 820: */
 /* line 821: */
{ 
A_CLOSURE( UVHBSIM_flt, VVHBSIM_flt, WVHBSIM_flt );
(( WVHBSIM_flt * ) ( UVHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 823: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
A_CALLPROC(UVHBSIM_flt,(ZVHBSIM),(ZVHBSIM,(UVHBSIM_flt).nonlocals));
} 
 /* line 825: */
AWHBSIM_index = 0;
 /* line 826: */
BWHBSIM_pathname = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&AWHBSIM_index), Msg));
 /* line 827: */
if ( (BWHBSIM_pathname==HGDBSIM_nilpath) )
{ 
A_CALLPROC(UVHBSIM_flt,(DWHBSIM),(DWHBSIM,(UVHBSIM_flt).nonlocals));
} 
 /* line 828: */
EWHBSIM_mnode = (*SPFBSIM_node(BWHBSIM_pathname, UVHBSIM_flt));
 /* line 829: */
 /* line 830: */
FWHBSIM = EWHBSIM_mnode.Node ;
switch ( FWHBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
GWHBSIM_b = (FWHBSIM.data.mode1);
 /* line 831: */
HWHBSIM = GWHBSIM_b;
break;
default: 
A_CALLPROC(UVHBSIM_flt,(JWHBSIM),(JWHBSIM,(UVHBSIM_flt).nonlocals));
 /* line 832: */
HWHBSIM = KWHBSIM;
break;
} 
LWHBSIM_box = HWHBSIM;
 /* line 833: */
MWCASIM_lookupoutputs( (*(&((&LWHBSIM_box)->Fn))), &MWHBSIM );
NWHBSIM_output = MWHBSIM;
 /* line 834: */
OWHBSIM_outputwidth = VYCBSIM_signalwidth(NWHBSIM_output.Type);
 /* line 837: */
PWHBSIM = (AWHBSIM_index+1) ;
QWHBSIM_has_trim = QAGAOST_is_trim((*(&A_VINDEX(Names,PWHBSIM))));
 /* line 838: */
 /* line 839: */
if ( QWHBSIM_has_trim )
{ 
RWHBSIM.Lwb = 1;
RWHBSIM.Upb = OWHBSIM_outputwidth;
 /* line 840: */
 /* line 841: */
TWHBSIM = AWHBSIM_index+=1 ;
VAGAOST_get_trim( (*(&A_VINDEX(Names,TWHBSIM))), RWHBSIM, Msg, &UWHBSIM );
SWHBSIM = UWHBSIM;
} 
else
{ 
SWHBSIM.Lwb = 1;
 /* line 842: */
SWHBSIM.Upb = OWHBSIM_outputwidth;
} 
VWHBSIM_trim = SWHBSIM;
 /* line 843: */
WWHBSIM_lwb = VWHBSIM_trim.Lwb;
 /* line 844: */
XWHBSIM_upb = VWHBSIM_trim.Upb;
 /* line 845: */
 /* line 846: */
if ( ((WWHBSIM_lwb>1)|(XWHBSIM_upb<OWHBSIM_outputwidth)) )
{ 
 /* line 847: */
 /* line 848: */
VADBSIM_trimwire( NWHBSIM_output, WWHBSIM_lwb, XWHBSIM_upb, &ZWHBSIM );
YWHBSIM = ZWHBSIM;
} 
else
{ 
YWHBSIM = NWHBSIM_output;
} 
AXHBSIM_trimoutput = YWHBSIM;
 /* line 849: */
BXHBSIM_trimoutputtype = AXHBSIM_trimoutput.Type;
 /* line 853: */
 /* line 854: */
FLEBSIM_get_values( Names, (&AWHBSIM_index), BXHBSIM_trimoutputtype, YKEBSIM_nocycle_and_check, UVHBSIM_flt, &CXHBSIM );
DXHBSIM_outputvalue = CXHBSIM;
 /* line 857: */
FXHBSIM = A_HEAP(A68_60 ) ;
(*FXHBSIM) = AXHBSIM_trimoutput ;
EXHBSIM.Wire = FXHBSIM;
EXHBSIM.Instance = (*(&((&LWHBSIM_box)->Instance)));
GXHBSIM_trimoutputline = EXHBSIM;
 /* line 858: */
 /* line 859: */
HXHBSIM.Node = A_UNITE(IXHBSIM,mode2,2,GXHBSIM_trimoutputline);
HXHBSIM.Circuit = EWHBSIM_mnode.Circuit;
HXHBSIM.Base = EWHBSIM_mnode.Base;
 /* line 860: */
 /* line 861: */
TVCBSIM_pokesignalvalueandfanout(HXHBSIM, (*AEDBSIM_encode(DXHBSIM_outputvalue, BXHBSIM_trimoutputtype)));
} 
A_PROC_EXIT(changeoutputcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  LXHBSIM_freezecmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  OXHBSIM_flt;   /* proc value of non-global proc */
A68_INT  UXHBSIM_index;
A68_72 * VXHBSIM_pathname;
A68_36  YXHBSIM_mnode;
A68_57  BYHBSIM;  /* united object - for case conformity */
A68_58  CYHBSIM_b;
A68_INT  FYHBSIM_state;
A68_238  IYHBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  JYHBSIM;  /* YIELD */
A68_269  KYHBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(freezecmd);
 /* line 868: */
 /* line 869: */
{ 
A_CLOSURE( OXHBSIM_flt, PXHBSIM_flt, QXHBSIM_flt );
(( QXHBSIM_flt * ) ( OXHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 870: */
 /* line 871: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
 /* line 872: */
A_CALLPROC(OXHBSIM_flt,(TXHBSIM),(TXHBSIM,(OXHBSIM_flt).nonlocals));
} 
 /* line 873: */
UXHBSIM_index = 0;
 /* line 874: */
VXHBSIM_pathname = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&UXHBSIM_index), Msg));
 /* line 875: */
if ( (VXHBSIM_pathname==HGDBSIM_nilpath) )
{ 
A_CALLPROC(OXHBSIM_flt,(XXHBSIM),(XXHBSIM,(OXHBSIM_flt).nonlocals));
} 
 /* line 876: */
YXHBSIM_mnode = (*SPFBSIM_node(VXHBSIM_pathname, OXHBSIM_flt));
 /* line 877: */
if ( (YXHBSIM_mnode.Circuit!=0) )
{ 
A_CALLPROC(OXHBSIM_flt,(AYHBSIM),(AYHBSIM,(OXHBSIM_flt).nonlocals));
} 
 /* line 878: */
BYHBSIM = YXHBSIM_mnode.Node ;
switch ( BYHBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
CYHBSIM_b = (BYHBSIM.data.mode1);
 /* line 879: */
/*SKIP*/;
break;
default: 
A_CALLPROC(OXHBSIM_flt,(EYHBSIM),(EYHBSIM,(OXHBSIM_flt).nonlocals));
 /* line 880: */
/*SKIP*/;
break;
} 
 /* line 882: */
FYHBSIM_state = OUCBSIM_freezeinstance(YXHBSIM_mnode);
 /* line 883: */
 /* line 884: */
if ( (FYHBSIM_state==1) )
{ 
 /* line 885: */
JYHBSIM = HYHBSIM ;
GFBAOSL_put(LEAAOST_out, A_HVEC(KYHBSIM,A_UNITE(IYHBSIM,mode7,7,JYHBSIM),A68_238 ));
} 
else
{ 
 /* line 886: */
if ( (FYHBSIM_state==2) )
{ 
 /* line 887: */
 /* line 888: */
A_CALLPROC(OXHBSIM_flt,(MYHBSIM),(MYHBSIM,(OXHBSIM_flt).nonlocals));
} 
} 
} 
A_PROC_EXIT(freezecmd);
return;
} 
#undef NL

A_STATIC A68_VOID  PYHBSIM_dontfreezecmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  SYHBSIM_flt;   /* proc value of non-global proc */
A68_INT  YYHBSIM_index;
A68_72 * ZYHBSIM_pathname;
A68_36  CZHBSIM_mnode;
A68_57  DZHBSIM;  /* united object - for case conformity */
A68_58  EZHBSIM_b;
A_PROC_ENTRY(dontfreezecmd);
 /* line 894: */
 /* line 895: */
{ 
A_CLOSURE( SYHBSIM_flt, TYHBSIM_flt, UYHBSIM_flt );
(( UYHBSIM_flt * ) ( SYHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 896: */
 /* line 897: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
 /* line 898: */
A_CALLPROC(SYHBSIM_flt,(XYHBSIM),(XYHBSIM,(SYHBSIM_flt).nonlocals));
} 
 /* line 899: */
YYHBSIM_index = 0;
 /* line 900: */
ZYHBSIM_pathname = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&YYHBSIM_index), Msg));
 /* line 901: */
if ( (ZYHBSIM_pathname==HGDBSIM_nilpath) )
{ 
A_CALLPROC(SYHBSIM_flt,(BZHBSIM),(BZHBSIM,(SYHBSIM_flt).nonlocals));
} 
 /* line 902: */
CZHBSIM_mnode = (*SPFBSIM_node(ZYHBSIM_pathname, SYHBSIM_flt));
 /* line 903: */
DZHBSIM = CZHBSIM_mnode.Node ;
switch ( DZHBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
EZHBSIM_b = (DZHBSIM.data.mode1);
 /* line 904: */
/*SKIP*/;
break;
default: 
A_CALLPROC(SYHBSIM_flt,(GZHBSIM),(GZHBSIM,(SYHBSIM_flt).nonlocals));
 /* line 905: */
/*SKIP*/;
break;
} 
 /* line 906: */
if ( !DVCBSIM_unfreezeinstance(CZHBSIM_mnode) )
{ 
 /* line 907: */
A_CALLPROC(SYHBSIM_flt,(IZHBSIM),(IZHBSIM,(SYHBSIM_flt).nonlocals));
} 
} 
A_PROC_EXIT(dontfreezecmd);
return;
} 
#undef NL

A_STATIC A68_VOID  LZHBSIM_freeformcmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(freeformcmd);
 /* line 913: */
TSFBSIM_printstyle = USFBSIM_freeform;
A_PROC_EXIT(freeformcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  OZHBSIM_initialiseramcmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  RZHBSIM_flt;   /* proc value of non-global proc */
A68_INT  LAIBSIM_index;
A68_INT  MAIBSIM_instance;
A68_INT  NAIBSIM_lwb;
A68_INT  OAIBSIM_upb;
A68_INT  PAIBSIM_circuit;
A68_INT  QAIBSIM_base;
A68_131 * TAIBSIM_ram;
A68_48  UAIBSIM_type;
A68_406  WAIBSIM_generator;   /* proc value of non-global proc */
A68_404  CBIBSIM;  /* avoid structure result */
A68_404  BBIBSIM_values;
A68_INT  DBIBSIM_max;
A68_INT  EBIBSIM_i;
A68_INT  FBIBSIM;  /* to part of loop */
A68_INT  GBIBSIM;  /* clause result */
A68_37  HBIBSIM;  /* avoid structure result */
A68_404  IBIBSIM;  /* avoid structure result */
A68_INT  JBIBSIM_loop;
A68_INT  KBIBSIM_j;
A68_INT  LBIBSIM;  /* to part of loop */
A68_INT  MBIBSIM_i;
A68_59  NBIBSIM;  /* collateral clause result */
A68_60  OBIBSIM;  /* avoid structure result */
A68_60 * PBIBSIM;  /* YIELD */
A68_59  QBIBSIM_element;
A68_36  RBIBSIM;  /* collateral clause result */
A68_57  SBIBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  TBIBSIM;  /* clause result */
A_PROC_ENTRY(initialiseramcmd);
 /* line 919: */
 /* line 920: */
{ 
A_CLOSURE( RZHBSIM_flt, SZHBSIM_flt, TZHBSIM_flt );
(( TZHBSIM_flt * ) ( RZHBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 921: */
 /* line 929: */
LAIBSIM_index = 0;
 /* line 930: */
 /* line 931: */
if ( (ZPAASIM_timemode!=AQAASIM_present) )
{ 
 /* line 932: */
A_CALLPROC(RZHBSIM_flt,(SAIBSIM),(SAIBSIM,(RZHBSIM_flt).nonlocals));
} 
 /* line 933: */
 /* line 934: */
TAIBSIM_ram = IDHBSIM_rdtrimmedram(Names, (&LAIBSIM_index), (&MAIBSIM_instance), (&NAIBSIM_lwb), (&OAIBSIM_upb), (&PAIBSIM_circuit), (&QAIBSIM_base), Msg);
 /* line 935: */
UAIBSIM_type = (*(&((&(TAIBSIM_ram->Firstcell))->Type)));
 /* line 936: */
A_CLOSURE( WAIBSIM_generator, XAIBSIM_generator, YAIBSIM_generator );
A_CALLPROC(WAIBSIM_generator,(A68_TRUE, &CBIBSIM),(A68_TRUE, &CBIBSIM,(WAIBSIM_generator).nonlocals));
BBIBSIM_values = CBIBSIM;
 /* line 938: */
DBIBSIM_max = ((OAIBSIM_upb-NAIBSIM_lwb)+1);
 /* line 939: */
FBIBSIM = DBIBSIM_max;
for ( EBIBSIM_i = 1;
EBIBSIM_i <= FBIBSIM;
EBIBSIM_i += 1 )
{ 
 /* line 940: */
 /* line 941: */
if ( !((LAIBSIM_index<Names.upb)) ) break;
 /* line 942: */
 /* line 943: */
if ( (EBIBSIM_i==DBIBSIM_max) )
{ 
 /* line 944: */
GBIBSIM = YKEBSIM_nocycle_and_check;
} 
else
{ 
GBIBSIM = ZKEBSIM_nocycle_nocheck;
} 
 /* line 945: */
FLEBSIM_get_values( Names, (&LAIBSIM_index), UAIBSIM_type, GBIBSIM, RZHBSIM_flt, &HBIBSIM );
XZHBSIM_( BBIBSIM_values, HBIBSIM, &IBIBSIM );
BBIBSIM_values = IBIBSIM;
}
 /* line 946: */
JBIBSIM_loop = 1;
 /* line 948: */
LBIBSIM = (OAIBSIM_upb-NAIBSIM_lwb);
for ( KBIBSIM_j = 0;
KBIBSIM_j <= LBIBSIM;
KBIBSIM_j += 1 )
{ 
 /* line 949: */
MBIBSIM_i = (KBIBSIM_j+NAIBSIM_lwb);
 /* line 950: */
BCDBSIM_trimram( TAIBSIM_ram, MBIBSIM_i, MBIBSIM_i, &OBIBSIM );
PBIBSIM = A_LOC(A68_60 ) ;
(*PBIBSIM) = OBIBSIM ;
NBIBSIM.Wire = PBIBSIM;
NBIBSIM.Instance = MAIBSIM_instance;
QBIBSIM_element = NBIBSIM;
 /* line 951: */
RBIBSIM.Node = A_UNITE(SBIBSIM,mode2,2,QBIBSIM_element);
RBIBSIM.Circuit = PAIBSIM_circuit;
RBIBSIM.Base = QAIBSIM_base;
TKCBSIM_pokesignalvalue(RBIBSIM, (*AEDBSIM_encode((*(&A_VINDEX(BBIBSIM_values,JBIBSIM_loop))), UAIBSIM_type)));
 /* line 952: */
if ( (JBIBSIM_loop==BBIBSIM_values.upb) )
{ 
TBIBSIM = 1;
} 
else
{ 
 /* line 953: */
TBIBSIM = (JBIBSIM_loop+1);
} 
JBIBSIM_loop = TBIBSIM;
}
 /* line 954: */
 /* line 955: */
VWGBSIM_simulateandmonitor(0, A_LOC(A68_BOOL ), A_LOC(A68_BOOL ), RZHBSIM_flt);
} 
A_PROC_EXIT(initialiseramcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  WBIBSIM_keepcmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  ZBIBSIM_flt;   /* proc value of non-global proc */
A68_INT  FCIBSIM_firstnew;
A68_INT  GCIBSIM;  /* YIELD */
A68_72 * HCIBSIM_monptr;
A68_77  ICIBSIM;  /* OPERATORS - mode -> union mode */
A68_35  JCIBSIM;  /* avoid structure result */
A68_35  KCIBSIM_list;
A68_BOOL  LCIBSIM;  /* clause result */
A68_34 * OCIBSIM_m;
A68_INT  PCIBSIM_index;
A68_72 * QCIBSIM_path;
A68_77  TCIBSIM;  /* OPERATORS - mode -> union mode */
A68_35  UCIBSIM;  /* avoid structure result */
A68_35  VCIBSIM_list;
A68_BOOL  WCIBSIM;  /* clause result */
A68_34 * ZCIBSIM_m;
A68_INT  ADIBSIM_handle;
A_PROC_ENTRY(keepcmd);
 /* line 961: */
 /* line 962: */
{ 
A_CLOSURE( ZBIBSIM_flt, ACIBSIM_flt, BCIBSIM_flt );
(( BCIBSIM_flt * ) ( ZBIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 963: */
 /* line 964: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
 /* line 965: */
 /* line 966: */
A_CALLPROC(ZBIBSIM_flt,(ECIBSIM),(ECIBSIM,(ZBIBSIM_flt).nonlocals));
} 
else
{ 
FCIBSIM_firstnew = (-1);
 /* line 967: */
 /* line 968: */
GCIBSIM = 1 ;
if ( !HFAASIM_is_nodename((*(&A_VINDEX(Names,GCIBSIM)))) )
{ 
 /* line 969: */
 /* line 970: */
{ 
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&HCIBSIM_monptr));
 /* line 971: */
 /* line 972: */
IQGBSIM_listmonitors( A_UNITE(ICIBSIM,mode1,1,HCIBSIM_monptr), FZEBSIM_keep, GZEBSIM_nocondition, A68_FALSE, &JCIBSIM );
KCIBSIM_list = JCIBSIM;
 /* line 973: */
 /* line 974: */
LCIBSIM = (KCIBSIM_list.upb>0);
if ( LCIBSIM )
{ 
 /* line 975: */
A_CALLPROC(ZBIBSIM_flt,(NCIBSIM),(NCIBSIM,(ZBIBSIM_flt).nonlocals));
} 
} 
 /* line 976: */
OCIBSIM_m = ATGBSIM_loadmonitor(HCIBSIM_monptr, FZEBSIM_keep, GZEBSIM_nocondition, ZBIBSIM_flt);
 /* line 977: */
 /* line 978: */
 /* line 979: */
FCIBSIM_firstnew = MUGBSIM_addmonitor(OCIBSIM_m);
} 
else
{ 
PCIBSIM_index = 0;
 /* line 980: */
for ( ;; )
{ 
 /* line 981: */
if ( !((PCIBSIM_index<Names.upb)) ) break;
QCIBSIM_path = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&PCIBSIM_index), Msg));
 /* line 982: */
 /* line 983: */
if ( (QCIBSIM_path==HGDBSIM_nilpath) )
{ 
 /* line 984: */
A_CALLPROC(ZBIBSIM_flt,(SCIBSIM),(SCIBSIM,(ZBIBSIM_flt).nonlocals));
} 
 /* line 985: */
SPFBSIM_node(QCIBSIM_path, ZBIBSIM_flt);
 /* line 986: */
 /* line 988: */
{ 
IQGBSIM_listmonitors( A_UNITE(TCIBSIM,mode1,1,QCIBSIM_path), FZEBSIM_keep, GZEBSIM_nocondition, A68_FALSE, &UCIBSIM );
VCIBSIM_list = UCIBSIM;
 /* line 989: */
 /* line 994: */
WCIBSIM = (VCIBSIM_list.upb>0);
if ( WCIBSIM )
{ 
 /* line 995: */
A_CALLPROC(ZBIBSIM_flt,(YCIBSIM),(YCIBSIM,(ZBIBSIM_flt).nonlocals));
} 
} 
 /* line 996: */
ZCIBSIM_m = ATGBSIM_loadmonitor(QCIBSIM_path, FZEBSIM_keep, GZEBSIM_nocondition, ZBIBSIM_flt);
 /* line 997: */
ADIBSIM_handle = MUGBSIM_addmonitor(ZCIBSIM_m);
 /* line 998: */
if ( (FCIBSIM_firstnew==(-1)) )
{ 
 /* line 999: */
FCIBSIM_firstnew = ADIBSIM_handle;
} 
}
 /* line 1000: */
} 
 /* line 1001: */
 /* line 1002: */
 /* line 1003: */
UUGBSIM_newtestpoints(FCIBSIM_firstnew, ZBIBSIM_flt);
} 
} 
A_PROC_EXIT(keepcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  DDIBSIM_makeprobecmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  GDIBSIM_flt;   /* proc value of non-global proc */
A68_INT  KDIBSIM;  /* YIELD */
A68_VC  LDIBSIM;  /* avoid structure result */
A68_VC  MDIBSIM_fn;
A68_INT  NDIBSIM;  /* YIELD */
A68_VC  ODIBSIM;  /* avoid structure result */
A68_VC  PDIBSIM_name;
A68_72 * SDIBSIM_dummy;
A68_36 * VDIBSIM_probemnode;
A68_36  WDIBSIM;  /* avoid structure result */
A68_73 * XDIBSIM_newprobe;
A68_73  YDIBSIM;  /* collateral clause result */
A68_82  ZDIBSIM;  /* OPERATORS - mode -> union mode */
A68_72 * AEIBSIM;  /* YIELD */
A_PROC_ENTRY(makeprobecmd);
 /* line 1009: */
 /* line 1010: */
{ 
A_CLOSURE( GDIBSIM_flt, HDIBSIM_flt, IDIBSIM_flt );
(( IDIBSIM_flt * ) ( GDIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1011: */
KDIBSIM = 1 ;
LKFAOST_get_fnname( (*(&A_VINDEX(Names,KDIBSIM))), Msg, &LDIBSIM );
MDIBSIM_fn = LDIBSIM;
 /* line 1012: */
NDIBSIM = 2 ;
SIFAOST_get_ident( (*(&A_VINDEX(Names,NDIBSIM))), Msg, &ODIBSIM );
PDIBSIM_name = ODIBSIM;
 /* line 1014: */
 /* line 1015: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
 /* line 1016: */
A_CALLPROC(GDIBSIM_flt,(RDIBSIM),(RDIBSIM,(GDIBSIM_flt).nonlocals));
} 
 /* line 1018: */
 /* line 1019: */
 /* line 1020: */
if ( UKDBSIM_simtablelookuppath(PDIBSIM_name, NGDBSIM_probename, (&SDIBSIM_dummy)) )
{ 
 /* line 1021: */
A_CALLPROC(GDIBSIM_flt,(UDIBSIM),(UDIBSIM,(GDIBSIM_flt).nonlocals));
} 
 /* line 1023: */
VDIBSIM_probemnode = (A_HEAP(A68_36 ));
KPCBSIM_initialiseprobeinstance( MDIBSIM_fn, GDIBSIM_flt, &WDIBSIM );
(*VDIBSIM_probemnode) = WDIBSIM;
 /* line 1024: */
XDIBSIM_newprobe = (A_HEAP(A68_73 ));
YDIBSIM.Uname = MDIBSIM_fn;
YDIBSIM.Lname = PDIBSIM_name;
YDIBSIM.Node = VDIBSIM_probemnode;
(*XDIBSIM_newprobe) = YDIBSIM;
 /* line 1025: */
 /* line 1026: */
AEIBSIM = LCFBSIM_makepath(1, PDIBSIM_name, XDIBSIM_newprobe) ;
XIDBSIM_simtableaddbinding(PDIBSIM_name, NGDBSIM_probename, A_UNITE(ZDIBSIM,mode1,1,AEIBSIM));
} 
A_PROC_EXIT(makeprobecmd);
return;
} 
#undef NL

A_STATIC A68_VOID  DEIBSIM_dontmakeprobecmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  GEIBSIM_flt;   /* proc value of non-global proc */
A68_162  BFIBSIM_expandjoinsto;   /* proc value of non-global proc */
A68_INT  LFIBSIM;  /* YIELD */
A68_VC  MFIBSIM;  /* avoid structure result */
A68_VC  NFIBSIM_name;
A68_72 * QFIBSIM_probe;
A68_72 * TFIBSIM_monptr;
A68_INT  UFIBSIM_monptrbase;
A68_230  WFIBSIM_generator;   /* proc value of non-global proc */
A68_35  CGIBSIM;  /* avoid structure result */
A68_35  BGIBSIM_thisprobe;
A68_35  DGIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_35  EGIBSIM;  /* OPERATORS - assign op */
A68_35  FGIBSIM;  /* avoid structure result */
A68_35  GGIBSIM;  /* avoid structure result */
A68_35  HGIBSIM_probechain;
A68_BOOL  IGIBSIM_deletedmonptr;
A68_INT  JGIBSIM_i;
A68_INT  KGIBSIM;  /* by part of loop */
A68_INT  LGIBSIM_thisprobe;
A68_77  MGIBSIM;  /* OPERATORS - mode -> union mode */
A68_35  NGIBSIM;  /* avoid structure result */
A68_35  OGIBSIM_list;
A68_INT  PGIBSIM_j;
A68_INT  QGIBSIM;  /* to part of loop */
A68_INT  RGIBSIM_circuit;
A68_BOOL  SGIBSIM;  /* optbool result */
A_PROC_ENTRY(dontmakeprobecmd);
 /* line 1033: */
 /* line 1034: */
{ 
A_CLOSURE( GEIBSIM_flt, HEIBSIM_flt, IEIBSIM_flt );
(( IEIBSIM_flt * ) ( GEIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1036: */
 /* line 1044: */
A_CLOSURE( BFIBSIM_expandjoinsto, CFIBSIM_expandjoinsto, DFIBSIM_expandjoinsto );
(( DFIBSIM_expandjoinsto * ) ( BFIBSIM_expandjoinsto.nonlocals )) -> BFIBSIM_expandjoinsto = BFIBSIM_expandjoinsto;
 /* line 1053: */
LFIBSIM = 1 ;
SIFAOST_get_ident( (*(&A_VINDEX(Names,LFIBSIM))), Msg, &MFIBSIM );
NFIBSIM_name = MFIBSIM;
 /* line 1055: */
 /* line 1056: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
 /* line 1057: */
A_CALLPROC(GEIBSIM_flt,(PFIBSIM),(PFIBSIM,(GEIBSIM_flt).nonlocals));
} 
 /* line 1059: */
 /* line 1060: */
 /* line 1061: */
if ( !UKDBSIM_simtablelookuppath(NFIBSIM_name, NGDBSIM_probename, (&QFIBSIM_probe)) )
{ 
 /* line 1062: */
A_CALLPROC(GEIBSIM_flt,(SFIBSIM),(SFIBSIM,(GEIBSIM_flt).nonlocals));
} 
 /* line 1064: */
 /* line 1065: */
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&TFIBSIM_monptr));
 /* line 1066: */
UFIBSIM_monptrbase = (*(&((*(&((*(&(TFIBSIM_monptr->Bind)))->Node)))->Base)));
 /* line 1070: */
A_CLOSURE( WFIBSIM_generator, XFIBSIM_generator, YFIBSIM_generator );
A_CALLPROC(WFIBSIM_generator,(A68_TRUE, &CGIBSIM),(A68_TRUE, &CGIBSIM,(WFIBSIM_generator).nonlocals));
BGIBSIM_thisprobe = CGIBSIM;
EGIBSIM = A_HVEC(DGIBSIM,(*(&((*(&((*(&(QFIBSIM_probe->Bind)))->Node)))->Base))),A68_INT ) ;
A_VASSIGN2(EGIBSIM,BGIBSIM_thisprobe,A68_INT );
 /* line 1071: */
 /* line 1072: */
A_CALLPROC(BFIBSIM_expandjoinsto,((*(&((*(&((*(&(QFIBSIM_probe->Bind)))->Node)))->Base))), &FGIBSIM),((*(&((*(&((*(&(QFIBSIM_probe->Bind)))->Node)))->Base))), &FGIBSIM,(BFIBSIM_expandjoinsto).nonlocals));
MEIBSIM_( BGIBSIM_thisprobe, FGIBSIM, &GGIBSIM );
HGIBSIM_probechain = GGIBSIM;
 /* line 1074: */
JTCBSIM_stopprobeinstances(HGIBSIM_probechain);
 /* line 1076: */
IGIBSIM_deletedmonptr = A68_FALSE;
 /* line 1077: */
KGIBSIM = (-1);
for ( JGIBSIM_i = HGIBSIM_probechain.upb;
( KGIBSIM > 0 && JGIBSIM_i <= 1) ||
( KGIBSIM < 0 && JGIBSIM_i >= 1) ||
( KGIBSIM == 0 ) ;
JGIBSIM_i += KGIBSIM )
{ 
 /* line 1078: */
LGIBSIM_thisprobe = (*(&A_VINDEX(HGIBSIM_probechain,JGIBSIM_i)));
 /* line 1080: */
 /* line 1081: */
IQGBSIM_listmonitors( A_UNITE(MGIBSIM,mode2,2,LGIBSIM_thisprobe), BZEBSIM_noaction, GZEBSIM_nocondition, A68_FALSE, &NGIBSIM );
OGIBSIM_list = NGIBSIM;
 /* line 1082: */
QGIBSIM = OGIBSIM_list.upb;
for ( PGIBSIM_j = 1;
PGIBSIM_j <= QGIBSIM;
PGIBSIM_j += 1 )
{ 
QVGBSIM_removemonitor((*(&A_VINDEX(OGIBSIM_list,PGIBSIM_j))), A68_TRUE, GEIBSIM_flt);
}
 /* line 1085: */
 /* line 1086: */
DLDBSIM_simtablelookupcircuitbybase(LGIBSIM_thisprobe, (&RGIBSIM_circuit));
 /* line 1087: */
RQCBSIM_destroyprobeinstance(RGIBSIM_circuit, LGIBSIM_thisprobe);
 /* line 1090: */
SGIBSIM = !IGIBSIM_deletedmonptr;
if ( SGIBSIM )
{SGIBSIM = (UFIBSIM_monptrbase==LGIBSIM_thisprobe);
}
 /* line 1091: */
if ( SGIBSIM )
{ 
SOHBSIM_gohomecmd(Names, Msg);
 /* line 1092: */
 /* line 1093: */
IGIBSIM_deletedmonptr = A68_TRUE;
} 
 /* line 1096: */
 /* line 1097: */
EKDBSIM_simtablediscardbindingsbybase(LGIBSIM_thisprobe);
}
 /* line 1098: */
} 
A_PROC_EXIT(dontmakeprobecmd);
return;
} 
#undef NL

A_STATIC A68_VOID  VGIBSIM_letcmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  YGIBSIM_flt;   /* proc value of non-global proc */
A68_INT  CHIBSIM;  /* YIELD */
A68_VC  DHIBSIM;  /* avoid structure result */
A68_VC  EHIBSIM_name;
A68_INT * FHIBSIM;  /* YIELD */
A68_72 * GHIBSIM_path;
A68_82  JHIBSIM;  /* OPERATORS - mode -> union mode */
A68_72 * KHIBSIM;  /* YIELD */
A_PROC_ENTRY(letcmd);
 /* line 1104: */
 /* line 1105: */
{ 
A_CLOSURE( YGIBSIM_flt, ZGIBSIM_flt, AHIBSIM_flt );
(( AHIBSIM_flt * ) ( YGIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1106: */
CHIBSIM = 1 ;
SIFAOST_get_ident( (*(&A_VINDEX(Names,CHIBSIM))), Msg, &DHIBSIM );
EHIBSIM_name = DHIBSIM;
 /* line 1107: */
FHIBSIM = A_HEAP(A68_INT ) ;
(*FHIBSIM) = 1 ;
GHIBSIM_path = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, FHIBSIM, Msg));
 /* line 1108: */
if ( (GHIBSIM_path==HGDBSIM_nilpath) )
{ 
A_CALLPROC(YGIBSIM_flt,(IHIBSIM),(IHIBSIM,(YGIBSIM_flt).nonlocals));
} 
 /* line 1109: */
SPFBSIM_node(GHIBSIM_path, YGIBSIM_flt);
 /* line 1110: */
 /* line 1111: */
 /* line 1112: */
KHIBSIM = MOFBSIM_newalias(GHIBSIM_path, EHIBSIM_name) ;
if ( !XIDBSIM_simtableaddbinding(EHIBSIM_name, OGDBSIM_aliasname, A_UNITE(JHIBSIM,mode1,1,KHIBSIM)) )
{ 
 /* line 1113: */
 /* line 1115: */
A_CALLPROC(YGIBSIM_flt,(MHIBSIM),(MHIBSIM,(YGIBSIM_flt).nonlocals));
} 
} 
A_PROC_EXIT(letcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  PHIBSIM_dontletcmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  SHIBSIM_flt;   /* proc value of non-global proc */
A68_INT  WHIBSIM;  /* YIELD */
A68_VC  XHIBSIM;  /* avoid structure result */
A68_VC  YHIBSIM_name;
A_PROC_ENTRY(dontletcmd);
 /* line 1121: */
 /* line 1122: */
{ 
A_CLOSURE( SHIBSIM_flt, THIBSIM_flt, UHIBSIM_flt );
(( UHIBSIM_flt * ) ( SHIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1123: */
WHIBSIM = 1 ;
SIFAOST_get_ident( (*(&A_VINDEX(Names,WHIBSIM))), Msg, &XHIBSIM );
YHIBSIM_name = XHIBSIM;
 /* line 1124: */
 /* line 1125: */
if ( !UJDBSIM_simtablediscardbinding(YHIBSIM_name, OGDBSIM_aliasname) )
{ 
 /* line 1126: */
 /* line 1127: */
A_CALLPROC(SHIBSIM_flt,(AIIBSIM),(AIIBSIM,(SHIBSIM_flt).nonlocals));
} 
} 
A_PROC_EXIT(dontletcmd);
return;
} 
#undef NL

A_STATIC A68_BOOL  DIIBSIM_isjoinedto(A68_INT  Base, A68_INT  Root)
{ 
A68_BOOL  EIIBSIM_found;
A68_35  FIIBSIM;  /* avoid structure result */
A68_35  GIIBSIM_branches;
A68_INT  HIIBSIM_i;
A68_INT  IIIBSIM;  /* to part of loop */
A68_BOOL  JIIBSIM;  /* optbool result */
A68_BOOL  KIIBSIM;  /* clause result */
A_PROC_ENTRY(isjoinedto);
 /* line 1132: */
 /* line 1133: */
{ 
EIIBSIM_found = (Base==Root);
 /* line 1134: */
SSCBSIM_listprobesconnectedto( Root, &FIIBSIM );
GIIBSIM_branches = FIIBSIM;
 /* line 1135: */
IIIBSIM = GIIBSIM_branches.upb;
for ( HIIBSIM_i = 1;
HIIBSIM_i <= IIIBSIM;
HIIBSIM_i += 1 )
{ 
 /* line 1136: */
if ( !(!EIIBSIM_found) ) break;
JIIBSIM = (Base==(*(&A_VINDEX(GIIBSIM_branches,HIIBSIM_i))));
if ( ! JIIBSIM )
{ /* line 1137: */
JIIBSIM = DIIBSIM_isjoinedto(Base, (*(&A_VINDEX(GIIBSIM_branches,HIIBSIM_i))));
}
EIIBSIM_found = JIIBSIM;
}
 /* line 1138: */
 /* line 1139: */
KIIBSIM = EIIBSIM_found;
} 
A_PROC_EXIT(isjoinedto);
return( KIIBSIM );
} 
#undef NL

A_STATIC A68_VOID  NIIBSIM_joinprobecmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  QIIBSIM_flt;   /* proc value of non-global proc */
A68_INT  WIIBSIM_index;
A68_INT  XIIBSIM;  /* YIELD */
A68_BOOL  YIIBSIM;  /* clause result */
A68_BOOL  ZIIBSIM_joiningvalue;
A68_36  AJIBSIM_linemnode;
A68_72 * BJIBSIM_path;
A68_72 * EJIBSIM_probe;
A68_INT  FJIBSIM;  /* YIELD */
A68_VC  GJIBSIM;  /* avoid structure result */
A68_36  JJIBSIM_probemnode;
A68_36  KJIBSIM;  /* avoid structure result */
A_PROC_ENTRY(joinprobecmd);
 /* line 1154: */
 /* line 1155: */
{ 
A_CLOSURE( QIIBSIM_flt, RIIBSIM_flt, SIIBSIM_flt );
(( SIIBSIM_flt * ) ( QIIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1156: */
 /* line 1157: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
 /* line 1158: */
A_CALLPROC(QIIBSIM_flt,(VIIBSIM),(VIIBSIM,(QIIBSIM_flt).nonlocals));
} 
 /* line 1162: */
WIIBSIM_index = 0;
 /* line 1163: */
 /* line 1164: */
XIIBSIM = (WIIBSIM_index+1) ;
if ( QJAASIM_is_query((*(&A_VINDEX(Names,XIIBSIM)))) )
{ 
WIIBSIM_index+=1;
 /* line 1165: */
YIIBSIM = A68_TRUE;
} 
else
{ 
 /* line 1166: */
YIIBSIM = A68_FALSE;
} 
ZIIBSIM_joiningvalue = YIIBSIM;
 /* line 1167: */
 /* line 1168: */
 /* line 1169: */
if ( !ZIIBSIM_joiningvalue )
{ 
BJIBSIM_path = QOFBSIM_expandroot(SEFBSIM_get_nodename(Names, (&WIIBSIM_index), Msg));
 /* line 1170: */
if ( (BJIBSIM_path==HGDBSIM_nilpath) )
{ 
A_CALLPROC(QIIBSIM_flt,(DJIBSIM),(DJIBSIM,(QIIBSIM_flt).nonlocals));
} 
 /* line 1171: */
 /* line 1172: */
AJIBSIM_linemnode = (*SPFBSIM_node(BJIBSIM_path, QIIBSIM_flt));
} 
 /* line 1175: */
 /* line 1176: */
 /* line 1177: */
 /* line 1178: */
FJIBSIM = WIIBSIM_index+=1 ;
SIFAOST_get_ident( (*(&A_VINDEX(Names,FJIBSIM))), Msg, &GJIBSIM );
if ( !UKDBSIM_simtablelookuppath(GJIBSIM, NGDBSIM_probename, (&EJIBSIM_probe)) )
{ 
 /* line 1179: */
A_CALLPROC(QIIBSIM_flt,(IJIBSIM),(IJIBSIM,(QIIBSIM_flt).nonlocals));
} 
 /* line 1180: */
JJIBSIM_probemnode = (*(*(&((*(&(EJIBSIM_probe->Bind)))->Node))));
 /* line 1182: */
 /* line 1183: */
if ( ZIIBSIM_joiningvalue )
{ 
 /* line 1184: */
 /* line 1185: */
YRCBSIM_probeinputnode( JJIBSIM_probemnode, &KJIBSIM );
AJIBSIM_linemnode = KJIBSIM;
} 
else
{ 
 /* line 1186: */
if ( !STCBSIM_probetypematchesline(JJIBSIM_probemnode, AJIBSIM_linemnode) )
{ 
 /* line 1187: */
A_CALLPROC(QIIBSIM_flt,(MJIBSIM),(MJIBSIM,(QIIBSIM_flt).nonlocals));
} 
 /* line 1189: */
 /* line 1190: */
if ( DIIBSIM_isjoinedto((*(&((&AJIBSIM_linemnode)->Base))), JJIBSIM_probemnode.Base) )
{ 
 /* line 1191: */
 /* line 1192: */
A_CALLPROC(QIIBSIM_flt,(OJIBSIM),(OJIBSIM,(QIIBSIM_flt).nonlocals));
} 
} 
 /* line 1194: */
 /* line 1195: */
HRCBSIM_reconnectprobeinstance(JJIBSIM_probemnode, AJIBSIM_linemnode);
} 
A_PROC_EXIT(joinprobecmd);
return;
} 
#undef NL

A_STATIC A68_VOID  RJIBSIM_restartprobecmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  UJIBSIM_flt;   /* proc value of non-global proc */
A68_INT  YJIBSIM;  /* YIELD */
A68_VC  ZJIBSIM;  /* avoid structure result */
A68_VC  AKIBSIM_name;
A68_72 * DKIBSIM_probe;
A_PROC_ENTRY(restartprobecmd);
 /* line 1201: */
 /* line 1202: */
{ 
A_CLOSURE( UJIBSIM_flt, VJIBSIM_flt, WJIBSIM_flt );
(( WJIBSIM_flt * ) ( UJIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1203: */
YJIBSIM = 1 ;
SIFAOST_get_ident( (*(&A_VINDEX(Names,YJIBSIM))), Msg, &ZJIBSIM );
AKIBSIM_name = ZJIBSIM;
 /* line 1204: */
 /* line 1205: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
 /* line 1206: */
A_CALLPROC(UJIBSIM_flt,(CKIBSIM),(CKIBSIM,(UJIBSIM_flt).nonlocals));
} 
 /* line 1208: */
 /* line 1209: */
 /* line 1210: */
if ( !UKDBSIM_simtablelookuppath(AKIBSIM_name, NGDBSIM_probename, (&DKIBSIM_probe)) )
{ 
 /* line 1211: */
A_CALLPROC(UJIBSIM_flt,(FKIBSIM),(FKIBSIM,(UJIBSIM_flt).nonlocals));
} 
 /* line 1212: */
 /* line 1213: */
DQCBSIM_reinitialiseprobeinstance((*(*(&((*(&(DKIBSIM_probe->Bind)))->Node)))));
} 
A_PROC_EXIT(restartprobecmd);
return;
} 
#undef NL

A_STATIC A68_VOID  IKIBSIM_listnamescmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  LKIBSIM_flt;   /* proc value of non-global proc */
A68_414  PKIBSIM;  /* collateral clause result */
A68_VC  QKIBSIM;  /* avoid structure result */
A68_238  RKIBSIM;  /* OPERATORS - mode -> union mode */
A68_238  SKIBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  TKIBSIM;  /* YIELD */
A68_VC  UKIBSIM;  /* avoid structure result */
A68_238  VKIBSIM;  /* OPERATORS - mode -> union mode */
A68_238  WKIBSIM;  /* OPERATORS - mode -> union mode */
A68_240  XKIBSIM;  /* procedure value */
A68_269  YKIBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(listnamescmd);
 /* line 1219: */
 /* line 1220: */
{ 
A_CLOSURE( LKIBSIM_flt, MKIBSIM_flt, NKIBSIM_flt );
(( NKIBSIM_flt * ) ( LKIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1221: */
PMDBSIM_simtablestartlistingpathnames();
 /* line 1222: */
for ( ;; )
{ 
 /* line 1223: */
if ( !(QMDBSIM_simtablemorepathnames()) ) break;
WMDBSIM_simtablenextpathname(  &QKIBSIM );
PKIBSIM.data[0] = A_UNITE(RKIBSIM,mode7,7,QKIBSIM);
TKIBSIM = ' ' ;
PKIBSIM.data[1] = A_UNITE(SKIBSIM,mode6,6,TKIBSIM);
 /* line 1224: */
RBFBSIM_nodename( ZMDBSIM_simtablenextpath(), &UKIBSIM );
PKIBSIM.data[2] = A_UNITE(VKIBSIM,mode7,7,UKIBSIM);
XKIBSIM.fn.fn_global = LRAAOSL_newline;
XKIBSIM.nonlocals = A68_NIL;
PKIBSIM.data[3] = A_UNITE(WKIBSIM,mode12,12,XKIBSIM);
 /* line 1225: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(YKIBSIM,PKIBSIM,4,A68_238 ));
}
 /* line 1226: */
} 
A_PROC_EXIT(listnamescmd);
return;
} 
#undef NL

A_STATIC A68_VOID  BLIBSIM_noprintcmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(noprintcmd);
TSFBSIM_printstyle = WSFBSIM_noprint;
A_PROC_EXIT(noprintcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  ELIBSIM_replaycmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  HLIBSIM_flt;   /* proc value of non-global proc */
A68_BOOL  LLIBSIM_set1;
A68_INT  MLIBSIM;  /* clause result */
A68_INT  NLIBSIM_end;
A68_INT  OLIBSIM;  /* YIELD */
A68_INT  PLIBSIM;  /* clause result */
A68_INT  QLIBSIM;  /* YIELD */
A68_INT  RLIBSIM_t1;
A68_BOOL  SLIBSIM;  /* optbool result */
A68_INT  TLIBSIM;  /* YIELD */
A68_INT  ULIBSIM;  /* clause result */
A68_INT  VLIBSIM;  /* YIELD */
A68_INT  WLIBSIM_t2;
A68_BOOL  XLIBSIM;  /* optbool result */
A68_INT  AMIBSIM_savedtime;
A68_INT  BMIBSIM_savedmode;
A68_63 * CMIBSIM_savedsavedtestpoints;
A68_70  EMIBSIM_localflt;   /* proc value of non-global proc */
A_PROC_ENTRY(replaycmd);
 /* line 1237: */
 /* line 1238: */
{ 
A_CLOSURE( HLIBSIM_flt, ILIBSIM_flt, JLIBSIM_flt );
(( JLIBSIM_flt * ) ( HLIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1240: */
LLIBSIM_set1 = A68_FALSE;
 /* line 1241: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
MLIBSIM = CSFBSIM_savedactivetime;
} 
else
{ 
MLIBSIM = YPAASIM_activetime;
} 
NLIBSIM_end = MLIBSIM;
 /* line 1242: */
 /* line 1243: */
OLIBSIM = 1 ;
if ( DLAASIM_is_time((*(&A_VINDEX(Names,OLIBSIM)))) )
{ 
LLIBSIM_set1 = A68_TRUE;
 /* line 1244: */
 /* line 1245: */
QLIBSIM = 1 ;
PLIBSIM = (HLAASIM_get_time((*(&A_VINDEX(Names,QLIBSIM))), Msg)*EQAASIM_scaletime);
} 
else
{ 
PLIBSIM = 0;
} 
RLIBSIM_t1 = PLIBSIM;
 /* line 1246: */
SLIBSIM = (Names.upb==2);
if ( SLIBSIM )
{ /* line 1247: */
TLIBSIM = 2 ;
SLIBSIM = DLAASIM_is_time((*(&A_VINDEX(Names,TLIBSIM))));
}
if ( SLIBSIM )
{ 
 /* line 1248: */
VLIBSIM = 2 ;
ULIBSIM = (HLAASIM_get_time((*(&A_VINDEX(Names,VLIBSIM))), Msg)*EQAASIM_scaletime);
} 
else
{ 
if ( LLIBSIM_set1 )
{ 
 /* line 1249: */
ULIBSIM = RLIBSIM_t1;
} 
else
{ 
ULIBSIM = NLIBSIM_end;
} 
} 
WLIBSIM_t2 = ULIBSIM;
 /* line 1250: */
XLIBSIM = (RLIBSIM_t1<0);
if ( ! XLIBSIM )
{XLIBSIM = (WLIBSIM_t2<RLIBSIM_t1);
}
if ( ! XLIBSIM )
{XLIBSIM = (WLIBSIM_t2>NLIBSIM_end);
}
 /* line 1251: */
if ( XLIBSIM )
{ 
 /* line 1252: */
A_CALLPROC(HLIBSIM_flt,(ZLIBSIM),(ZLIBSIM,(HLIBSIM_flt).nonlocals));
} 
 /* line 1260: */
AMIBSIM_savedtime = YPAASIM_activetime;
 /* line 1261: */
BMIBSIM_savedmode = ZPAASIM_timemode;
 /* line 1262: */
CMIBSIM_savedsavedtestpoints = BSFBSIM_savedtestpoints;
 /* line 1263: */
RZFBSIM_clear(XSFBSIM_testpoints);
 /* line 1265: */
A_CLOSURE( EMIBSIM_localflt, FMIBSIM_localflt, GMIBSIM_localflt );
(( GMIBSIM_localflt * ) ( EMIBSIM_localflt.nonlocals )) -> AMIBSIM_savedtime = AMIBSIM_savedtime;
(( GMIBSIM_localflt * ) ( EMIBSIM_localflt.nonlocals )) -> BMIBSIM_savedmode = BMIBSIM_savedmode;
(( GMIBSIM_localflt * ) ( EMIBSIM_localflt.nonlocals )) -> CMIBSIM_savedsavedtestpoints = CMIBSIM_savedsavedtestpoints;
(( GMIBSIM_localflt * ) ( EMIBSIM_localflt.nonlocals )) -> HLIBSIM_flt = HLIBSIM_flt;
 /* line 1275: */
 /* line 1276: */
 /* line 1277: */
if ( (ZPAASIM_timemode==AQAASIM_present) )
{ 
CSFBSIM_savedactivetime = YPAASIM_activetime;
 /* line 1278: */
 /* line 1279: */
BSFBSIM_savedtestpoints = XSFBSIM_testpoints;
} 
 /* line 1282: */
ZPAASIM_timemode = BQAASIM_past;
 /* line 1283: */
YPAASIM_activetime = RLIBSIM_t1;
 /* line 1284: */
BMGBSIM_monitorheading();
 /* line 1285: */
HXGBSIM_replayandmonitor(0, A68_TRUE, EMIBSIM_localflt);
 /* line 1286: */
 /* line 1287: */
if ( (WLIBSIM_t2>RLIBSIM_t1) )
{ 
 /* line 1288: */
HXGBSIM_replayandmonitor((WLIBSIM_t2-RLIBSIM_t1), A68_TRUE, EMIBSIM_localflt);
} 
 /* line 1289: */
YPAASIM_activetime = AMIBSIM_savedtime;
 /* line 1290: */
ZPAASIM_timemode = BMIBSIM_savedmode;
 /* line 1291: */
BSFBSIM_savedtestpoints = CMIBSIM_savedsavedtestpoints;
 /* line 1292: */
 /* line 1293: */
RZFBSIM_clear(XSFBSIM_testpoints);
} 
A_PROC_EXIT(replaycmd);
return;
} 
#undef NL

A_STATIC A68_VOID  JMIBSIM_scaletimecmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  MMIBSIM_flt;   /* proc value of non-global proc */
A68_INT  QMIBSIM_scaletimeinput;
A68_INT  RMIBSIM;  /* YIELD */
A68_INT  SMIBSIM;  /* clause result */
A68_INT  TMIBSIM;  /* YIELD */
A68_INT  UMIBSIM;  /* YIELD */
A_PROC_ENTRY(scaletimecmd);
 /* line 1336: */
 /* line 1337: */
{ 
A_CLOSURE( MMIBSIM_flt, NMIBSIM_flt, OMIBSIM_flt );
(( OMIBSIM_flt * ) ( MMIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1338: */
 /* line 1340: */
 /* line 1341: */
RMIBSIM = 1 ;
if ( GHFAOST_is_int((*(&A_VINDEX(Names,RMIBSIM)))) )
{ 
 /* line 1342: */
TMIBSIM = 1 ;
SMIBSIM = KHFAOST_get_int((*(&A_VINDEX(Names,TMIBSIM))), Msg);
} 
else
{ 
 /* line 1343: */
UMIBSIM = 2 ;
SMIBSIM = KHFAOST_get_int((*(&A_VINDEX(Names,UMIBSIM))), Msg);
} 
QMIBSIM_scaletimeinput = SMIBSIM;
 /* line 1345: */
 /* line 1346: */
if ( (QMIBSIM_scaletimeinput<1) )
{ 
 /* line 1347: */
A_CALLPROC(MMIBSIM_flt,(WMIBSIM),(WMIBSIM,(MMIBSIM_flt).nonlocals));
} 
 /* line 1349: */
 /* line 1351: */
EQAASIM_scaletime = QMIBSIM_scaletimeinput;
} 
A_PROC_EXIT(scaletimecmd);
return;
} 
#undef NL

A_STATIC A68_VOID  ZMIBSIM_simulatefncmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  CNIBSIM_flt;   /* proc value of non-global proc */
A68_INT  GNIBSIM;  /* YIELD */
A68_VC  HNIBSIM;  /* avoid structure result */
A68_VC  INIBSIM_fn;
A_PROC_ENTRY(simulatefncmd);
 /* line 1358: */
 /* line 1359: */
{ 
A_CLOSURE( CNIBSIM_flt, DNIBSIM_flt, ENIBSIM_flt );
(( ENIBSIM_flt * ) ( CNIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1360: */
GNIBSIM = 1 ;
LKFAOST_get_fnname( (*(&A_VINDEX(Names,GNIBSIM))), Msg, &HNIBSIM );
INIBSIM_fn = HNIBSIM;
 /* line 1362: */
 /* line 1363: */
if ( (ZPAASIM_timemode==BQAASIM_past) )
{ 
 /* line 1364: */
A_CALLPROC(CNIBSIM_flt,(KNIBSIM),(KNIBSIM,(CNIBSIM_flt).nonlocals));
} 
 /* line 1365: */
XAHBSIM_initialiseshellwithfn(INIBSIM_fn, CNIBSIM_flt);
 /* line 1366: */
ZTHBSIM_setcpcache();
 /* line 1367: */
VWGBSIM_simulateandmonitor(0, A_LOC(A68_BOOL ), A_LOC(A68_BOOL ), CNIBSIM_flt);
 /* line 1368: */
 /* line 1369: */
(*QPAASIM_simprompt) = RPAASIM_presentsimprompt;
} 
A_PROC_EXIT(simulatefncmd);
return;
} 
#undef NL

A_STATIC A68_VOID  NNIBSIM_tabulatedcmd(A68_104  Names, A68_105  Flt)
{ 
A_PROC_ENTRY(tabulatedcmd);
 /* line 1375: */
TSFBSIM_printstyle = VSFBSIM_tabulated;
A_PROC_EXIT(tabulatedcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  QNIBSIM_dontsetseparatorcmd(A68_104  Params, A68_105  Msg)
{ 
A_PROC_ENTRY(dontsetseparatorcmd);
 /* line 1379: */
ZAGBSIM_monitoringseparator = ' ';
A_PROC_EXIT(dontsetseparatorcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  TNIBSIM_setseparatorcmd(A68_104  Params, A68_105  Msg)
{ 
A68_INT  UNIBSIM;  /* YIELD */
A68_INT  VNIBSIM;  /* YIELD */
A68_INT  WNIBSIM;  /* YIELD */
A68_VC  XNIBSIM;  /* avoid structure result */
A68_VC  YNIBSIM_str;
A68_INT  ZNIBSIM;  /* YIELD */
A68_107  COIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(setseparatorcmd);
 /* line 1382: */
 /* line 1383: */
UNIBSIM = 1 ;
if ( MFGAOST_is_character((*(&A_VINDEX(Params,UNIBSIM)))) )
{ 
 /* line 1384: */
VNIBSIM = 1 ;
ZAGBSIM_monitoringseparator = QFGAOST_get_character((*(&A_VINDEX(Params,VNIBSIM))), Msg);
} 
else
{ 
WNIBSIM = 1 ;
SEGAOST_get_quoted_string( (*(&A_VINDEX(Params,WNIBSIM))), Msg, &XNIBSIM );
YNIBSIM_str = XNIBSIM;
 /* line 1385: */
if ( (YNIBSIM_str.upb==1) )
{ 
 /* line 1386: */
ZNIBSIM = 1 ;
ZAGBSIM_monitoringseparator = (*(&A_VINDEX(YNIBSIM_str,ZNIBSIM)));
} 
else
{ 
 /* line 1387: */
 /* line 1388: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(COIBSIM,BOIBSIM,A68_VC )),(WHAAOSI_user, A_HVEC(COIBSIM,BOIBSIM,A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(setseparatorcmd);
return;
} 
#undef NL

A_STATIC A68_VOID  FOIBSIM_timecmd(A68_104  Names, A68_105  Msg)
{ 
A68_70  IOIBSIM_flt;   /* proc value of non-global proc */
A68_INT  SOIBSIM;  /* YIELD */
A68_INT  TOIBSIM;  /* YIELD */
A68_INT  UOIBSIM_inc;
A68_INT  VOIBSIM_scaledinc;
A68_INT  YOIBSIM;  /* clause result */
A68_INT  ZOIBSIM;  /* YIELD */
A68_INT  APIBSIM_newtime;
A68_BOOL  DPIBSIM;  /* optbool result */
A68_414  GPIBSIM;  /* collateral clause result */
A68_238  JPIBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  KPIBSIM;  /* YIELD */
A68_238  LPIBSIM;  /* OPERATORS - mode -> union mode */
A68_238  OPIBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  PPIBSIM;  /* YIELD */
A68_238  QPIBSIM;  /* OPERATORS - mode -> union mode */
A68_240  RPIBSIM;  /* procedure value */
A68_269  SPIBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(timecmd);
 /* line 1405: */
 /* line 1406: */
{ 
A_CLOSURE( IOIBSIM_flt, JOIBSIM_flt, KOIBSIM_flt );
(( KOIBSIM_flt * ) ( IOIBSIM_flt.nonlocals )) -> Msg = Msg;
 /* line 1407: */
 /* line 1414: */
 /* line 1415: */
 /* line 1417: */
SOIBSIM = 1 ;
if ( KCFAOST_is_plus((*(&A_VINDEX(Names,SOIBSIM)))) )
{ 
TOIBSIM = 2 ;
UOIBSIM_inc = KHFAOST_get_int((*(&A_VINDEX(Names,TOIBSIM))), Msg);
 /* line 1418: */
VOIBSIM_scaledinc = OOIBSIM_scaleifok(UOIBSIM_inc, IOIBSIM_flt);
 /* line 1419: */
 /* line 1420: */
if ( (YPAASIM_activetime>(AJDAOST_maxint-VOIBSIM_scaledinc)) )
{ 
A_CALLPROC(IOIBSIM_flt,(XOIBSIM),(XOIBSIM,(IOIBSIM_flt).nonlocals));
 /* line 1421: */
 /* line 1422: */
 /* line 1423: */
YOIBSIM = 0;
} 
else
{ 
 /* line 1424: */
 /* line 1431: */
 /* line 1433: */
YOIBSIM = (YPAASIM_activetime+VOIBSIM_scaledinc);
} 
} 
else
{ 
 /* line 1434: */
ZOIBSIM = 1 ;
YOIBSIM = OOIBSIM_scaleifok(KHFAOST_get_int((*(&A_VINDEX(Names,ZOIBSIM))), Msg), IOIBSIM_flt);
} 
APIBSIM_newtime = YOIBSIM;
 /* line 1435: */
 /* line 1436: */
if ( (APIBSIM_newtime<0) )
{ 
 /* line 1437: */
A_CALLPROC(IOIBSIM_flt,(CPIBSIM),(CPIBSIM,(IOIBSIM_flt).nonlocals));
} 
else
{ 
DPIBSIM = (ZPAASIM_timemode==AQAASIM_present);
if ( DPIBSIM )
{DPIBSIM = (APIBSIM_newtime<YPAASIM_activetime);
}
 /* line 1438: */
if ( DPIBSIM )
{ 
 /* line 1439: */
A_CALLPROC(IOIBSIM_flt,(FPIBSIM),(FPIBSIM,(IOIBSIM_flt).nonlocals));
} 
} 
 /* line 1440: */
 /* line 1441: */
if ( (APIBSIM_newtime==YPAASIM_activetime) )
{ 
 /* line 1442: */
if ( (EQAASIM_scaletime>1) )
{ 
 /* line 1443: */
 /* line 1444: */
BIGBSIM_pttimefreeformscaled(YPAASIM_activetime, EQAASIM_scaletime);
} 
else
{ 
KPIBSIM = IPIBSIM ;
GPIBSIM.data[0] = A_UNITE(JPIBSIM,mode7,7,KPIBSIM);
GPIBSIM.data[1] = A_UNITE(LPIBSIM,mode1,1,YPAASIM_activetime);
PPIBSIM = NPIBSIM ;
GPIBSIM.data[2] = A_UNITE(OPIBSIM,mode7,7,PPIBSIM);
RPIBSIM.fn.fn_global = LRAAOSL_newline;
RPIBSIM.nonlocals = A68_NIL;
GPIBSIM.data[3] = A_UNITE(QPIBSIM,mode12,12,RPIBSIM);
 /* line 1445: */
 /* line 1446: */
 /* line 1447: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(SPIBSIM,GPIBSIM,4,A68_238 ));
} 
} 
else
{ 
BMGBSIM_monitorheading();
 /* line 1448: */
 /* line 1449: */
if ( (ZPAASIM_timemode==AQAASIM_present) )
{ 
 /* line 1450: */
 /* line 1451: */
VWGBSIM_simulateandmonitor((APIBSIM_newtime-YPAASIM_activetime), A_LOC(A68_BOOL ), A_LOC(A68_BOOL ), IOIBSIM_flt);
} 
else
{ 
 /* line 1452: */
 /* line 1453: */
 /* line 1454: */
HXGBSIM_replayandmonitor((APIBSIM_newtime-YPAASIM_activetime), A68_FALSE, IOIBSIM_flt);
} 
} 
} 
A_PROC_EXIT(timecmd);
return;
} 
#undef NL

A68_VOID  TPIBSIM_make_sim_commands(A68_341  *ReturnedValue)
{ 
A68_469  UPIBSIM;  /* collateral clause result */
A68_427  WPIBSIM;  /* collateral clause result */
A68_338  XPIBSIM;  /* collateral clause result */
A68_VC  AQIBSIM;  /* avoid structure result */
A68_VC  BQIBSIM;  /* avoid structure result */
A68_290  CQIBSIM;  /* avoid structure result */
A68_292  DQIBSIM;  /* OPERATORS - mode -> union mode */
A68_290  EQIBSIM;  /* avoid structure result */
A68_292  FQIBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  IQIBSIM;  /* avoid structure result */
A68_342  JQIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  KQIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  LQIBSIM;  /* YIELD */
A68_336  MQIBSIM;  /* procedure value */
A68_338 * NQIBSIM;  /* YIELD */
A68_337  OQIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  PQIBSIM;  /* collateral clause result */
A68_VC  SQIBSIM;  /* avoid structure result */
A68_VC  TQIBSIM;  /* avoid structure result */
A68_290  UQIBSIM;  /* avoid structure result */
A68_292  VQIBSIM;  /* OPERATORS - mode -> union mode */
A68_290  WQIBSIM;  /* avoid structure result */
A68_292  XQIBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ARIBSIM;  /* avoid structure result */
A68_342  BRIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  CRIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  DRIBSIM;  /* YIELD */
A68_336  ERIBSIM;  /* procedure value */
A68_338 * FRIBSIM;  /* YIELD */
A68_337  GRIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  HRIBSIM;  /* collateral clause result */
A68_VC  KRIBSIM;  /* avoid structure result */
A68_VC  NRIBSIM;  /* avoid structure result */
A68_342  ORIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  PRIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  QRIBSIM;  /* YIELD */
A68_336  RRIBSIM;  /* procedure value */
A68_338 * SRIBSIM;  /* YIELD */
A68_337  TRIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  URIBSIM;  /* collateral clause result */
A68_VC  XRIBSIM;  /* avoid structure result */
A68_VC  ASIBSIM;  /* avoid structure result */
A68_342  BSIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  CSIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  DSIBSIM;  /* YIELD */
A68_336  ESIBSIM;  /* procedure value */
A68_338 * FSIBSIM;  /* YIELD */
A68_337  GSIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  HSIBSIM;  /* collateral clause result */
A68_VC  KSIBSIM;  /* avoid structure result */
A68_VC  NSIBSIM;  /* avoid structure result */
A68_342  OSIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  PSIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  QSIBSIM;  /* YIELD */
A68_336  RSIBSIM;  /* procedure value */
A68_338 * SSIBSIM;  /* YIELD */
A68_337  TSIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  USIBSIM;  /* collateral clause result */
A68_VC  XSIBSIM;  /* avoid structure result */
A68_VC  ATIBSIM;  /* avoid structure result */
A68_VC  DTIBSIM;  /* avoid structure result */
A68_342  ETIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  FTIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  GTIBSIM;  /* YIELD */
A68_336  HTIBSIM;  /* procedure value */
A68_338 * ITIBSIM;  /* YIELD */
A68_337  JTIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  KTIBSIM;  /* collateral clause result */
A68_VC  NTIBSIM;  /* avoid structure result */
A68_VC  QTIBSIM;  /* avoid structure result */
A68_290  RTIBSIM;  /* avoid structure result */
A68_292  STIBSIM;  /* OPERATORS - mode -> union mode */
A68_290  TTIBSIM;  /* avoid structure result */
A68_292  UTIBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  XTIBSIM;  /* avoid structure result */
A68_342  YTIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  ZTIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  AUIBSIM;  /* YIELD */
A68_336  BUIBSIM;  /* procedure value */
A68_338 * CUIBSIM;  /* YIELD */
A68_337  DUIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  EUIBSIM;  /* collateral clause result */
A68_VC  HUIBSIM;  /* avoid structure result */
A68_VC  IUIBSIM;  /* avoid structure result */
A68_290  JUIBSIM;  /* avoid structure result */
A68_292  KUIBSIM;  /* OPERATORS - mode -> union mode */
A68_290  LUIBSIM;  /* avoid structure result */
A68_292  MUIBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  PUIBSIM;  /* avoid structure result */
A68_342  QUIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  RUIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  SUIBSIM;  /* YIELD */
A68_336  TUIBSIM;  /* procedure value */
A68_338 * UUIBSIM;  /* YIELD */
A68_337  VUIBSIM;  /* OPERATORS - mode -> union mode */
A68_341  WUIBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  XUIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_337  ZUIBSIM;  /* OPERATORS - mode -> union mode */
A68_339 * AVIBSIM;  /* YIELD */
A68_432  CVIBSIM;  /* collateral clause result */
A68_338  DVIBSIM;  /* collateral clause result */
A68_VC  GVIBSIM;  /* avoid structure result */
A68_VC  HVIBSIM;  /* avoid structure result */
A68_VC  KVIBSIM;  /* avoid structure result */
A68_342  LVIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  MVIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  NVIBSIM;  /* YIELD */
A68_336  OVIBSIM;  /* procedure value */
A68_338 * PVIBSIM;  /* YIELD */
A68_337  QVIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  RVIBSIM;  /* collateral clause result */
A68_VC  UVIBSIM;  /* avoid structure result */
A68_430  VVIBSIM;  /* collateral clause result */
A68_290  WVIBSIM;  /* avoid structure result */
A68_292  XVIBSIM;  /* OPERATORS - mode -> union mode */
A68_291  YVIBSIM;  /* OPERATORS - istruct -> vector */
A68_290  ZVIBSIM;  /* avoid structure result */
A68_292  AWIBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  DWIBSIM;  /* avoid structure result */
A68_342  EWIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  FWIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  GWIBSIM;  /* YIELD */
A68_336  HWIBSIM;  /* procedure value */
A68_338 * IWIBSIM;  /* YIELD */
A68_337  JWIBSIM;  /* OPERATORS - mode -> union mode */
A68_341  KWIBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  LWIBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_337  NWIBSIM;  /* OPERATORS - mode -> union mode */
A68_339 * OWIBSIM;  /* YIELD */
A68_439  RWIBSIM;  /* collateral clause result */
A68_338  SWIBSIM;  /* collateral clause result */
A68_VC  VWIBSIM;  /* avoid structure result */
A68_VC  YWIBSIM;  /* avoid structure result */
A68_342  ZWIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  AXIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  BXIBSIM;  /* YIELD */
A68_336  CXIBSIM;  /* procedure value */
A68_338 * DXIBSIM;  /* YIELD */
A68_337  EXIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  FXIBSIM;  /* collateral clause result */
A68_VC  IXIBSIM;  /* avoid structure result */
A68_VC  LXIBSIM;  /* avoid structure result */
A68_342  MXIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  NXIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  OXIBSIM;  /* YIELD */
A68_336  PXIBSIM;  /* procedure value */
A68_338 * QXIBSIM;  /* YIELD */
A68_337  RXIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  SXIBSIM;  /* collateral clause result */
A68_VC  VXIBSIM;  /* avoid structure result */
A68_VC  YXIBSIM;  /* avoid structure result */
A68_VC  BYIBSIM;  /* avoid structure result */
A68_342  CYIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  DYIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  EYIBSIM;  /* YIELD */
A68_336  FYIBSIM;  /* procedure value */
A68_338 * GYIBSIM;  /* YIELD */
A68_337  HYIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  IYIBSIM;  /* collateral clause result */
A68_VC  LYIBSIM;  /* avoid structure result */
A68_VC  OYIBSIM;  /* avoid structure result */
A68_342  PYIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  QYIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  RYIBSIM;  /* YIELD */
A68_336  SYIBSIM;  /* procedure value */
A68_338 * TYIBSIM;  /* YIELD */
A68_337  UYIBSIM;  /* OPERATORS - mode -> union mode */
A68_338  VYIBSIM;  /* collateral clause result */
A68_VC  YYIBSIM;  /* avoid structure result */
A68_VC  BZIBSIM;  /* avoid structure result */
A68_342  CZIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  DZIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  EZIBSIM;  /* YIELD */
A68_336  FZIBSIM;  /* procedure value */
A68_338 * GZIBSIM;  /* YIELD */
A68_337  HZIBSIM;  /* OPERATORS - mode -> union mode */
A68_341  IZIBSIM;  /* OPERATORS - istruct -> vector */
A68_337  LZIBSIM;  /* OPERATORS - mode -> union mode */
A68_339 * MZIBSIM;  /* YIELD */
A68_445  OZIBSIM;  /* collateral clause result */
A68_338  PZIBSIM;  /* collateral clause result */
A68_VC  SZIBSIM;  /* avoid structure result */
A68_VC  TZIBSIM;  /* avoid structure result */
A68_VC  WZIBSIM;  /* avoid structure result */
A68_342  XZIBSIM;  /* OPERATORS - mode -> union mode */
A68_334  YZIBSIM;  /* OPERATORS - mode -> union mode */
A68_336  ZZIBSIM;  /* YIELD */
A68_336  AAJBSIM;  /* procedure value */
A68_338 * BAJBSIM;  /* YIELD */
A68_337  CAJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  DAJBSIM;  /* collateral clause result */
A68_VC  GAJBSIM;  /* avoid structure result */
A68_VC  HAJBSIM;  /* avoid structure result */
A68_290  IAJBSIM;  /* avoid structure result */
A68_292  JAJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MAJBSIM;  /* avoid structure result */
A68_342  NAJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  OAJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  PAJBSIM;  /* YIELD */
A68_336  QAJBSIM;  /* procedure value */
A68_338 * RAJBSIM;  /* YIELD */
A68_337  SAJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  TAJBSIM;  /* collateral clause result */
A68_VC  WAJBSIM;  /* avoid structure result */
A68_VC  XAJBSIM;  /* avoid structure result */
A68_290  YAJBSIM;  /* avoid structure result */
A68_292  ZAJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  CBJBSIM;  /* avoid structure result */
A68_342  DBJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  EBJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  FBJBSIM;  /* YIELD */
A68_336  GBJBSIM;  /* procedure value */
A68_338 * HBJBSIM;  /* YIELD */
A68_337  IBJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  JBJBSIM;  /* collateral clause result */
A68_VC  MBJBSIM;  /* avoid structure result */
A68_VC  NBJBSIM;  /* avoid structure result */
A68_290  OBJBSIM;  /* avoid structure result */
A68_292  PBJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  QBJBSIM;  /* avoid structure result */
A68_292  RBJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  UBJBSIM;  /* avoid structure result */
A68_342  VBJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  WBJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  XBJBSIM;  /* YIELD */
A68_336  YBJBSIM;  /* procedure value */
A68_338 * ZBJBSIM;  /* YIELD */
A68_337  ACJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  BCJBSIM;  /* collateral clause result */
A68_VC  ECJBSIM;  /* avoid structure result */
A68_VC  FCJBSIM;  /* avoid structure result */
A68_430  GCJBSIM;  /* collateral clause result */
A68_291  HCJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  ICJBSIM;  /* avoid structure result */
A68_292  JCJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  KCJBSIM;  /* avoid structure result */
A68_292  LCJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  MCJBSIM;  /* avoid structure result */
A68_292  NCJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  QCJBSIM;  /* avoid structure result */
A68_342  RCJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  SCJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  TCJBSIM;  /* YIELD */
A68_336  UCJBSIM;  /* procedure value */
A68_338 * VCJBSIM;  /* YIELD */
A68_337  WCJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  XCJBSIM;  /* collateral clause result */
A68_VC  ADJBSIM;  /* avoid structure result */
A68_VC  BDJBSIM;  /* avoid structure result */
A68_430  CDJBSIM;  /* collateral clause result */
A68_291  DDJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  EDJBSIM;  /* avoid structure result */
A68_292  FDJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  GDJBSIM;  /* avoid structure result */
A68_292  HDJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  IDJBSIM;  /* avoid structure result */
A68_292  JDJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MDJBSIM;  /* avoid structure result */
A68_342  NDJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  ODJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  PDJBSIM;  /* YIELD */
A68_336  QDJBSIM;  /* procedure value */
A68_338 * RDJBSIM;  /* YIELD */
A68_337  SDJBSIM;  /* OPERATORS - mode -> union mode */
A68_341  TDJBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  UDJBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_337  WDJBSIM;  /* OPERATORS - mode -> union mode */
A68_339 * XDJBSIM;  /* YIELD */
A68_439  ZDJBSIM;  /* collateral clause result */
A68_338  AEJBSIM;  /* collateral clause result */
A68_VC  DEJBSIM;  /* avoid structure result */
A68_VC  EEJBSIM;  /* avoid structure result */
A68_290  FEJBSIM;  /* avoid structure result */
A68_292  GEJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  HEJBSIM;  /* avoid structure result */
A68_292  IEJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LEJBSIM;  /* avoid structure result */
A68_342  MEJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  NEJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  OEJBSIM;  /* YIELD */
A68_336  PEJBSIM;  /* procedure value */
A68_338 * QEJBSIM;  /* YIELD */
A68_337  REJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  SEJBSIM;  /* collateral clause result */
A68_VC  VEJBSIM;  /* avoid structure result */
A68_VC  YEJBSIM;  /* avoid structure result */
A68_430  ZEJBSIM;  /* collateral clause result */
A68_290  AFJBSIM;  /* avoid structure result */
A68_292  BFJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  CFJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  DFJBSIM;  /* avoid structure result */
A68_292  EFJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  HFJBSIM;  /* avoid structure result */
A68_342  IFJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  JFJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  KFJBSIM;  /* YIELD */
A68_336  LFJBSIM;  /* procedure value */
A68_338 * MFJBSIM;  /* YIELD */
A68_337  NFJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  OFJBSIM;  /* collateral clause result */
A68_VC  RFJBSIM;  /* avoid structure result */
A68_VC  SFJBSIM;  /* avoid structure result */
A68_290  TFJBSIM;  /* avoid structure result */
A68_292  UFJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  VFJBSIM;  /* avoid structure result */
A68_292  WFJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ZFJBSIM;  /* avoid structure result */
A68_342  AGJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  BGJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  CGJBSIM;  /* YIELD */
A68_336  DGJBSIM;  /* procedure value */
A68_338 * EGJBSIM;  /* YIELD */
A68_337  FGJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  GGJBSIM;  /* collateral clause result */
A68_VC  JGJBSIM;  /* avoid structure result */
A68_VC  KGJBSIM;  /* avoid structure result */
A68_430  LGJBSIM;  /* collateral clause result */
A68_290  MGJBSIM;  /* avoid structure result */
A68_292  NGJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  OGJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  PGJBSIM;  /* avoid structure result */
A68_292  QGJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  TGJBSIM;  /* avoid structure result */
A68_342  UGJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  VGJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  WGJBSIM;  /* YIELD */
A68_336  XGJBSIM;  /* procedure value */
A68_338 * YGJBSIM;  /* YIELD */
A68_337  ZGJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  AHJBSIM;  /* collateral clause result */
A68_VC  DHJBSIM;  /* avoid structure result */
A68_VC  EHJBSIM;  /* avoid structure result */
A68_290  FHJBSIM;  /* avoid structure result */
A68_292  GHJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  HHJBSIM;  /* avoid structure result */
A68_292  IHJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LHJBSIM;  /* avoid structure result */
A68_342  MHJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  NHJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  OHJBSIM;  /* YIELD */
A68_336  PHJBSIM;  /* procedure value */
A68_338 * QHJBSIM;  /* YIELD */
A68_337  RHJBSIM;  /* OPERATORS - mode -> union mode */
A68_341  SHJBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  THJBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_337  VHJBSIM;  /* OPERATORS - mode -> union mode */
A68_339 * WHJBSIM;  /* YIELD */
A68_455  YHJBSIM;  /* collateral clause result */
A68_338  ZHJBSIM;  /* collateral clause result */
A68_VC  CIJBSIM;  /* avoid structure result */
A68_VC  DIJBSIM;  /* avoid structure result */
A68_290  EIJBSIM;  /* avoid structure result */
A68_292  FIJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  GIJBSIM;  /* avoid structure result */
A68_292  HIJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  KIJBSIM;  /* avoid structure result */
A68_342  LIJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  MIJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  NIJBSIM;  /* YIELD */
A68_336  OIJBSIM;  /* procedure value */
A68_338 * PIJBSIM;  /* YIELD */
A68_337  QIJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  RIJBSIM;  /* collateral clause result */
A68_VC  UIJBSIM;  /* avoid structure result */
A68_VC  XIJBSIM;  /* avoid structure result */
A68_430  YIJBSIM;  /* collateral clause result */
A68_290  ZIJBSIM;  /* avoid structure result */
A68_292  AJJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  BJJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  CJJBSIM;  /* avoid structure result */
A68_292  DJJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  GJJBSIM;  /* avoid structure result */
A68_342  HJJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  IJJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  JJJBSIM;  /* YIELD */
A68_336  KJJBSIM;  /* procedure value */
A68_338 * LJJBSIM;  /* YIELD */
A68_337  MJJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  NJJBSIM;  /* collateral clause result */
A68_VC  QJJBSIM;  /* avoid structure result */
A68_VC  RJJBSIM;  /* avoid structure result */
A68_290  SJJBSIM;  /* avoid structure result */
A68_292  TJJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  UJJBSIM;  /* avoid structure result */
A68_292  VJJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YJJBSIM;  /* avoid structure result */
A68_342  ZJJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  AKJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  BKJBSIM;  /* YIELD */
A68_336  CKJBSIM;  /* procedure value */
A68_338 * DKJBSIM;  /* YIELD */
A68_337  EKJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  FKJBSIM;  /* collateral clause result */
A68_VC  IKJBSIM;  /* avoid structure result */
A68_VC  JKJBSIM;  /* avoid structure result */
A68_430  KKJBSIM;  /* collateral clause result */
A68_290  LKJBSIM;  /* avoid structure result */
A68_292  MKJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  NKJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  OKJBSIM;  /* avoid structure result */
A68_292  PKJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  SKJBSIM;  /* avoid structure result */
A68_342  TKJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  UKJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  VKJBSIM;  /* YIELD */
A68_336  WKJBSIM;  /* procedure value */
A68_338 * XKJBSIM;  /* YIELD */
A68_337  YKJBSIM;  /* OPERATORS - mode -> union mode */
A68_341  ZKJBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  ALJBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_337  CLJBSIM;  /* OPERATORS - mode -> union mode */
A68_339 * DLJBSIM;  /* YIELD */
A68_458  FLJBSIM;  /* collateral clause result */
A68_338  GLJBSIM;  /* collateral clause result */
A68_VC  JLJBSIM;  /* avoid structure result */
A68_VC  KLJBSIM;  /* avoid structure result */
A68_VC  NLJBSIM;  /* avoid structure result */
A68_342  OLJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  PLJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  QLJBSIM;  /* YIELD */
A68_336  RLJBSIM;  /* procedure value */
A68_338 * SLJBSIM;  /* YIELD */
A68_337  TLJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  ULJBSIM;  /* collateral clause result */
A68_VC  XLJBSIM;  /* avoid structure result */
A68_VC  AMJBSIM;  /* avoid structure result */
A68_430  BMJBSIM;  /* collateral clause result */
A68_291  CMJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  DMJBSIM;  /* avoid structure result */
A68_292  EMJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  HMJBSIM;  /* avoid structure result */
A68_342  IMJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  JMJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  KMJBSIM;  /* YIELD */
A68_336  LMJBSIM;  /* procedure value */
A68_338 * MMJBSIM;  /* YIELD */
A68_337  NMJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  OMJBSIM;  /* collateral clause result */
A68_VC  RMJBSIM;  /* avoid structure result */
A68_VC  SMJBSIM;  /* avoid structure result */
A68_VC  VMJBSIM;  /* avoid structure result */
A68_342  WMJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  XMJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  YMJBSIM;  /* YIELD */
A68_336  ZMJBSIM;  /* procedure value */
A68_338 * ANJBSIM;  /* YIELD */
A68_337  BNJBSIM;  /* OPERATORS - mode -> union mode */
A68_341  CNJBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  DNJBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_337  FNJBSIM;  /* OPERATORS - mode -> union mode */
A68_339 * GNJBSIM;  /* YIELD */
A68_458  JNJBSIM;  /* collateral clause result */
A68_338  KNJBSIM;  /* collateral clause result */
A68_VC  NNJBSIM;  /* avoid structure result */
A68_VC  ONJBSIM;  /* avoid structure result */
A68_290  PNJBSIM;  /* avoid structure result */
A68_292  QNJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  RNJBSIM;  /* avoid structure result */
A68_292  SNJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  VNJBSIM;  /* avoid structure result */
A68_342  WNJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  XNJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  YNJBSIM;  /* YIELD */
A68_336  ZNJBSIM;  /* procedure value */
A68_338 * AOJBSIM;  /* YIELD */
A68_337  BOJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  COJBSIM;  /* collateral clause result */
A68_VC  FOJBSIM;  /* avoid structure result */
A68_VC  IOJBSIM;  /* avoid structure result */
A68_430  JOJBSIM;  /* collateral clause result */
A68_290  KOJBSIM;  /* avoid structure result */
A68_292  LOJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  MOJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  NOJBSIM;  /* avoid structure result */
A68_292  OOJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ROJBSIM;  /* avoid structure result */
A68_342  SOJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  TOJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  UOJBSIM;  /* YIELD */
A68_336  VOJBSIM;  /* procedure value */
A68_338 * WOJBSIM;  /* YIELD */
A68_337  XOJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  YOJBSIM;  /* collateral clause result */
A68_VC  BPJBSIM;  /* avoid structure result */
A68_VC  CPJBSIM;  /* avoid structure result */
A68_430  DPJBSIM;  /* collateral clause result */
A68_290  EPJBSIM;  /* avoid structure result */
A68_292  FPJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  GPJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  HPJBSIM;  /* avoid structure result */
A68_292  IPJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LPJBSIM;  /* avoid structure result */
A68_342  MPJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  NPJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  OPJBSIM;  /* YIELD */
A68_336  PPJBSIM;  /* procedure value */
A68_338 * QPJBSIM;  /* YIELD */
A68_337  RPJBSIM;  /* OPERATORS - mode -> union mode */
A68_341  SPJBSIM;  /* OPERATORS - istruct -> vector */
A68_337  VPJBSIM;  /* OPERATORS - mode -> union mode */
A68_339 * WPJBSIM;  /* YIELD */
A68_338  XPJBSIM;  /* collateral clause result */
A68_VC  AQJBSIM;  /* avoid structure result */
A68_VC  DQJBSIM;  /* avoid structure result */
A68_430  EQJBSIM;  /* collateral clause result */
A68_290  FQJBSIM;  /* avoid structure result */
A68_292  GQJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  HQJBSIM;  /* avoid structure result */
A68_292  IQJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  JQJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  KQJBSIM;  /* avoid structure result */
A68_292  LQJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  OQJBSIM;  /* avoid structure result */
A68_342  PQJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  QQJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  RQJBSIM;  /* YIELD */
A68_336  SQJBSIM;  /* procedure value */
A68_338 * TQJBSIM;  /* YIELD */
A68_337  UQJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  VQJBSIM;  /* collateral clause result */
A68_VC  YQJBSIM;  /* avoid structure result */
A68_VC  BRJBSIM;  /* avoid structure result */
A68_463  CRJBSIM;  /* collateral clause result */
A68_290  DRJBSIM;  /* avoid structure result */
A68_292  ERJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  FRJBSIM;  /* avoid structure result */
A68_292  GRJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  HRJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  IRJBSIM;  /* avoid structure result */
A68_292  JRJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MRJBSIM;  /* avoid structure result */
A68_342  NRJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  ORJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  PRJBSIM;  /* YIELD */
A68_336  QRJBSIM;  /* procedure value */
A68_338 * RRJBSIM;  /* YIELD */
A68_337  SRJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  TRJBSIM;  /* collateral clause result */
A68_VC  WRJBSIM;  /* avoid structure result */
A68_VC  ZRJBSIM;  /* avoid structure result */
A68_342  ASJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  BSJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  CSJBSIM;  /* YIELD */
A68_336  DSJBSIM;  /* procedure value */
A68_338 * ESJBSIM;  /* YIELD */
A68_337  FSJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  GSJBSIM;  /* collateral clause result */
A68_VC  JSJBSIM;  /* avoid structure result */
A68_VC  MSJBSIM;  /* avoid structure result */
A68_VC  PSJBSIM;  /* avoid structure result */
A68_342  QSJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  RSJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  SSJBSIM;  /* YIELD */
A68_336  TSJBSIM;  /* procedure value */
A68_338 * USJBSIM;  /* YIELD */
A68_337  VSJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  WSJBSIM;  /* collateral clause result */
A68_VC  ZSJBSIM;  /* avoid structure result */
A68_VC  CTJBSIM;  /* avoid structure result */
A68_463  DTJBSIM;  /* collateral clause result */
A68_290  ETJBSIM;  /* avoid structure result */
A68_292  FTJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  GTJBSIM;  /* avoid structure result */
A68_292  HTJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  ITJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  JTJBSIM;  /* avoid structure result */
A68_292  KTJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  NTJBSIM;  /* avoid structure result */
A68_342  OTJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  PTJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  QTJBSIM;  /* YIELD */
A68_336  RTJBSIM;  /* procedure value */
A68_338 * STJBSIM;  /* YIELD */
A68_337  TTJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  UTJBSIM;  /* collateral clause result */
A68_VC  XTJBSIM;  /* avoid structure result */
A68_VC  YTJBSIM;  /* avoid structure result */
A68_290  ZTJBSIM;  /* avoid structure result */
A68_292  AUJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  BUJBSIM;  /* avoid structure result */
A68_292  CUJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  FUJBSIM;  /* avoid structure result */
A68_342  GUJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  HUJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  IUJBSIM;  /* YIELD */
A68_336  JUJBSIM;  /* procedure value */
A68_338 * KUJBSIM;  /* YIELD */
A68_337  LUJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  MUJBSIM;  /* collateral clause result */
A68_VC  PUJBSIM;  /* avoid structure result */
A68_430  QUJBSIM;  /* collateral clause result */
A68_291  RUJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  SUJBSIM;  /* avoid structure result */
A68_292  TUJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  WUJBSIM;  /* avoid structure result */
A68_342  XUJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  YUJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  ZUJBSIM;  /* YIELD */
A68_336  AVJBSIM;  /* procedure value */
A68_338 * BVJBSIM;  /* YIELD */
A68_337  CVJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  DVJBSIM;  /* collateral clause result */
A68_VC  GVJBSIM;  /* avoid structure result */
A68_VC  HVJBSIM;  /* avoid structure result */
A68_430  IVJBSIM;  /* collateral clause result */
A68_430  JVJBSIM;  /* collateral clause result */
A68_291  KVJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  LVJBSIM;  /* avoid structure result */
A68_292  MVJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  NVJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  OVJBSIM;  /* avoid structure result */
A68_292  PVJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  SVJBSIM;  /* avoid structure result */
A68_342  TVJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  UVJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  VVJBSIM;  /* YIELD */
A68_336  WVJBSIM;  /* procedure value */
A68_338 * XVJBSIM;  /* YIELD */
A68_337  YVJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  ZVJBSIM;  /* collateral clause result */
A68_VC  CWJBSIM;  /* avoid structure result */
A68_VC  FWJBSIM;  /* avoid structure result */
A68_342  GWJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  HWJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  IWJBSIM;  /* YIELD */
A68_336  JWJBSIM;  /* procedure value */
A68_338 * KWJBSIM;  /* YIELD */
A68_337  LWJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  MWJBSIM;  /* collateral clause result */
A68_VC  PWJBSIM;  /* avoid structure result */
A68_VC  SWJBSIM;  /* avoid structure result */
A68_342  TWJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  UWJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  VWJBSIM;  /* YIELD */
A68_336  WWJBSIM;  /* procedure value */
A68_338 * XWJBSIM;  /* YIELD */
A68_337  YWJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  ZWJBSIM;  /* collateral clause result */
A68_VC  CXJBSIM;  /* avoid structure result */
A68_430  DXJBSIM;  /* collateral clause result */
A68_291  EXJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  FXJBSIM;  /* avoid structure result */
A68_292  GXJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  JXJBSIM;  /* avoid structure result */
A68_342  KXJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  LXJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  MXJBSIM;  /* YIELD */
A68_336  NXJBSIM;  /* procedure value */
A68_338 * OXJBSIM;  /* YIELD */
A68_337  PXJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  QXJBSIM;  /* collateral clause result */
A68_VC  TXJBSIM;  /* avoid structure result */
A68_VC  WXJBSIM;  /* avoid structure result */
A68_VC  ZXJBSIM;  /* avoid structure result */
A68_342  AYJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  BYJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  CYJBSIM;  /* YIELD */
A68_336  DYJBSIM;  /* procedure value */
A68_338 * EYJBSIM;  /* YIELD */
A68_337  FYJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  GYJBSIM;  /* collateral clause result */
A68_VC  JYJBSIM;  /* avoid structure result */
A68_VC  KYJBSIM;  /* avoid structure result */
A68_430  LYJBSIM;  /* collateral clause result */
A68_290  MYJBSIM;  /* avoid structure result */
A68_292  NYJBSIM;  /* OPERATORS - mode -> union mode */
A68_290  OYJBSIM;  /* avoid structure result */
A68_292  PYJBSIM;  /* OPERATORS - mode -> union mode */
A68_291  QYJBSIM;  /* OPERATORS - istruct -> vector */
A68_290  RYJBSIM;  /* avoid structure result */
A68_292  SYJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  VYJBSIM;  /* avoid structure result */
A68_342  WYJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  XYJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  YYJBSIM;  /* YIELD */
A68_336  ZYJBSIM;  /* procedure value */
A68_338 * AZJBSIM;  /* YIELD */
A68_337  BZJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  CZJBSIM;  /* collateral clause result */
A68_VC  FZJBSIM;  /* avoid structure result */
A68_VC  IZJBSIM;  /* avoid structure result */
A68_290  JZJBSIM;  /* avoid structure result */
A68_292  KZJBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  NZJBSIM;  /* avoid structure result */
A68_342  OZJBSIM;  /* OPERATORS - mode -> union mode */
A68_334  PZJBSIM;  /* OPERATORS - mode -> union mode */
A68_336  QZJBSIM;  /* YIELD */
A68_336  RZJBSIM;  /* procedure value */
A68_338 * SZJBSIM;  /* YIELD */
A68_337  TZJBSIM;  /* OPERATORS - mode -> union mode */
A68_338  UZJBSIM;  /* collateral clause result */
A68_VC  XZJBSIM;  /* avoid structure result */
A68_VC  AAKBSIM;  /* avoid structure result */
A68_430  BAKBSIM;  /* collateral clause result */
A68_290  CAKBSIM;  /* avoid structure result */
A68_292  DAKBSIM;  /* OPERATORS - mode -> union mode */
A68_291  EAKBSIM;  /* OPERATORS - istruct -> vector */
A68_290  FAKBSIM;  /* avoid structure result */
A68_292  GAKBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  JAKBSIM;  /* avoid structure result */
A68_342  KAKBSIM;  /* OPERATORS - mode -> union mode */
A68_334  LAKBSIM;  /* OPERATORS - mode -> union mode */
A68_336  MAKBSIM;  /* YIELD */
A68_336  NAKBSIM;  /* procedure value */
A68_338 * OAKBSIM;  /* YIELD */
A68_337  PAKBSIM;  /* OPERATORS - mode -> union mode */
A68_338  QAKBSIM;  /* collateral clause result */
A68_VC  TAKBSIM;  /* avoid structure result */
A68_VC  WAKBSIM;  /* avoid structure result */
A68_342  XAKBSIM;  /* OPERATORS - mode -> union mode */
A68_334  YAKBSIM;  /* OPERATORS - mode -> union mode */
A68_336  ZAKBSIM;  /* YIELD */
A68_336  ABKBSIM;  /* procedure value */
A68_338 * BBKBSIM;  /* YIELD */
A68_337  CBKBSIM;  /* OPERATORS - mode -> union mode */
A68_338  DBKBSIM;  /* collateral clause result */
A68_VC  GBKBSIM;  /* avoid structure result */
A68_VC  HBKBSIM;  /* avoid structure result */
A68_VC  KBKBSIM;  /* avoid structure result */
A68_342  LBKBSIM;  /* OPERATORS - mode -> union mode */
A68_334  MBKBSIM;  /* OPERATORS - mode -> union mode */
A68_336  NBKBSIM;  /* YIELD */
A68_336  OBKBSIM;  /* procedure value */
A68_338 * PBKBSIM;  /* YIELD */
A68_337  QBKBSIM;  /* OPERATORS - mode -> union mode */
A68_338  RBKBSIM;  /* collateral clause result */
A68_VC  UBKBSIM;  /* avoid structure result */
A68_VC  XBKBSIM;  /* avoid structure result */
A68_430  YBKBSIM;  /* collateral clause result */
A68_290  ZBKBSIM;  /* avoid structure result */
A68_292  ACKBSIM;  /* OPERATORS - mode -> union mode */
A68_291  BCKBSIM;  /* OPERATORS - istruct -> vector */
A68_290  CCKBSIM;  /* avoid structure result */
A68_292  DCKBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  GCKBSIM;  /* avoid structure result */
A68_342  HCKBSIM;  /* OPERATORS - mode -> union mode */
A68_334  ICKBSIM;  /* OPERATORS - mode -> union mode */
A68_336  JCKBSIM;  /* YIELD */
A68_336  KCKBSIM;  /* procedure value */
A68_338 * LCKBSIM;  /* YIELD */
A68_337  MCKBSIM;  /* OPERATORS - mode -> union mode */
A68_338  NCKBSIM;  /* collateral clause result */
A68_VC  QCKBSIM;  /* avoid structure result */
A68_VC  TCKBSIM;  /* avoid structure result */
A68_342  UCKBSIM;  /* OPERATORS - mode -> union mode */
A68_334  VCKBSIM;  /* OPERATORS - mode -> union mode */
A68_335  WCKBSIM;  /* procedure value */
A68_338 * XCKBSIM;  /* YIELD */
A68_337  YCKBSIM;  /* OPERATORS - mode -> union mode */
A68_341  ZCKBSIM;  /* clause result */
A68_341  ADKBSIM;  /* OPERATORS - istruct -> vector */
A68_341  BDKBSIM;  /* avoid structure result */
A_PROC_ENTRY(make_sim_commands);
 /* line 1530: */
 /* line 1531: */
 /* line 1532: */
ZAAAOSI_makervc( ZPIBSIM, &AQIBSIM );
XPIBSIM.Name = AQIBSIM;
NAAAOSI_makervc( 'D', &BQIBSIM );
XPIBSIM.Abreviation = BQIBSIM;
 /* line 1533: */
LTAAOST_opt( TBAASIM_nodename_syntax, &CQIBSIM );
DUAAOST_star( A_UNITE(DQIBSIM,mode2,2,CQIBSIM), &EQIBSIM );
XPIBSIM.Parameter = A_UNITE(FQIBSIM,mode2,2,EQIBSIM);
XPIBSIM.Access = XMDAOST_normalaccess;
 /* line 1535: */
XPIBSIM.Continuation = ZNDAOST_continue;
 /* line 1536: */
 /* line 1540: */
ZAAAOSI_makervc( HQIBSIM, &IQIBSIM );
XPIBSIM.Help = A_UNITE(JQIBSIM,mode1,1,IQIBSIM);
MQIBSIM.fn.fn_global = KIHBSIM_dontdisplaycmd;
MQIBSIM.nonlocals = A68_NIL;
LQIBSIM = MQIBSIM ;
XPIBSIM.Command = A_UNITE(KQIBSIM,mode3,3,LQIBSIM);
 /* line 1542: */
NQIBSIM = A_HEAP(A68_338 ) ;
(*NQIBSIM) = XPIBSIM ;
WPIBSIM.data[0] = A_UNITE(OQIBSIM,mode1,1,NQIBSIM);
 /* line 1543: */
ZAAAOSI_makervc( RQIBSIM, &SQIBSIM );
PQIBSIM.Name = SQIBSIM;
NAAAOSI_makervc( 'M', &TQIBSIM );
PQIBSIM.Abreviation = TQIBSIM;
 /* line 1544: */
LTAAOST_opt( TBAASIM_nodename_syntax, &UQIBSIM );
DUAAOST_star( A_UNITE(VQIBSIM,mode2,2,UQIBSIM), &WQIBSIM );
PQIBSIM.Parameter = A_UNITE(XQIBSIM,mode2,2,WQIBSIM);
PQIBSIM.Access = XMDAOST_normalaccess;
 /* line 1546: */
PQIBSIM.Continuation = ZNDAOST_continue;
 /* line 1547: */
 /* line 1552: */
ZAAAOSI_makervc( ZQIBSIM, &ARIBSIM );
PQIBSIM.Help = A_UNITE(BRIBSIM,mode1,1,ARIBSIM);
ERIBSIM.fn.fn_global = KIHBSIM_dontdisplaycmd;
ERIBSIM.nonlocals = A68_NIL;
DRIBSIM = ERIBSIM ;
PQIBSIM.Command = A_UNITE(CRIBSIM,mode3,3,DRIBSIM);
 /* line 1554: */
FRIBSIM = A_HEAP(A68_338 ) ;
(*FRIBSIM) = PQIBSIM ;
WPIBSIM.data[1] = A_UNITE(GRIBSIM,mode1,1,FRIBSIM);
 /* line 1555: */
ZAAAOSI_makervc( JRIBSIM, &KRIBSIM );
HRIBSIM.Name = KRIBSIM;
HRIBSIM.Abreviation = NTCAOST_nilid;
 /* line 1556: */
HRIBSIM.Parameter = IIFAOST_ident_syntax;
HRIBSIM.Access = BNDAOST_hiddenaccess;
HRIBSIM.Continuation = ZNDAOST_continue;
 /* line 1561: */
ZAAAOSI_makervc( MRIBSIM, &NRIBSIM );
HRIBSIM.Help = A_UNITE(ORIBSIM,mode1,1,NRIBSIM);
RRIBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
RRIBSIM.nonlocals = A68_NIL;
QRIBSIM = RRIBSIM ;
HRIBSIM.Command = A_UNITE(PRIBSIM,mode3,3,QRIBSIM);
 /* line 1563: */
SRIBSIM = A_HEAP(A68_338 ) ;
(*SRIBSIM) = HRIBSIM ;
WPIBSIM.data[2] = A_UNITE(TRIBSIM,mode1,1,SRIBSIM);
 /* line 1564: */
ZAAAOSI_makervc( WRIBSIM, &XRIBSIM );
URIBSIM.Name = XRIBSIM;
URIBSIM.Abreviation = NTCAOST_nilid;
 /* line 1565: */
URIBSIM.Parameter = IIFAOST_ident_syntax;
URIBSIM.Access = BNDAOST_hiddenaccess;
URIBSIM.Continuation = ZNDAOST_continue;
 /* line 1569: */
ZAAAOSI_makervc( ZRIBSIM, &ASIBSIM );
URIBSIM.Help = A_UNITE(BSIBSIM,mode1,1,ASIBSIM);
ESIBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
ESIBSIM.nonlocals = A68_NIL;
DSIBSIM = ESIBSIM ;
URIBSIM.Command = A_UNITE(CSIBSIM,mode3,3,DSIBSIM);
 /* line 1571: */
FSIBSIM = A_HEAP(A68_338 ) ;
(*FSIBSIM) = URIBSIM ;
WPIBSIM.data[3] = A_UNITE(GSIBSIM,mode1,1,FSIBSIM);
 /* line 1572: */
ZAAAOSI_makervc( JSIBSIM, &KSIBSIM );
HSIBSIM.Name = KSIBSIM;
HSIBSIM.Abreviation = NTCAOST_nilid;
 /* line 1573: */
HSIBSIM.Parameter = TBAASIM_nodename_syntax;
HSIBSIM.Access = BNDAOST_hiddenaccess;
HSIBSIM.Continuation = ZNDAOST_continue;
 /* line 1577: */
ZAAAOSI_makervc( MSIBSIM, &NSIBSIM );
HSIBSIM.Help = A_UNITE(OSIBSIM,mode1,1,NSIBSIM);
RSIBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
RSIBSIM.nonlocals = A68_NIL;
QSIBSIM = RSIBSIM ;
HSIBSIM.Command = A_UNITE(PSIBSIM,mode3,3,QSIBSIM);
 /* line 1579: */
SSIBSIM = A_HEAP(A68_338 ) ;
(*SSIBSIM) = HSIBSIM ;
WPIBSIM.data[4] = A_UNITE(TSIBSIM,mode1,1,SSIBSIM);
 /* line 1580: */
ZAAAOSI_makervc( WSIBSIM, &XSIBSIM );
USIBSIM.Name = XSIBSIM;
ZAAAOSI_makervc( ZSIBSIM, &ATIBSIM );
USIBSIM.Abreviation = ATIBSIM;
 /* line 1581: */
USIBSIM.Parameter = SRAAOST_noparameters;
USIBSIM.Access = BNDAOST_hiddenaccess;
USIBSIM.Continuation = ZNDAOST_continue;
 /* line 1587: */
ZAAAOSI_makervc( CTIBSIM, &DTIBSIM );
USIBSIM.Help = A_UNITE(ETIBSIM,mode1,1,DTIBSIM);
HTIBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
HTIBSIM.nonlocals = A68_NIL;
GTIBSIM = HTIBSIM ;
USIBSIM.Command = A_UNITE(FTIBSIM,mode3,3,GTIBSIM);
 /* line 1589: */
ITIBSIM = A_HEAP(A68_338 ) ;
(*ITIBSIM) = USIBSIM ;
WPIBSIM.data[5] = A_UNITE(JTIBSIM,mode1,1,ITIBSIM);
 /* line 1590: */
ZAAAOSI_makervc( MTIBSIM, &NTIBSIM );
KTIBSIM.Name = NTIBSIM;
ZAAAOSI_makervc( PTIBSIM, &QTIBSIM );
KTIBSIM.Abreviation = QTIBSIM;
 /* line 1595: */
LTAAOST_opt( TBAASIM_nodename_syntax, &RTIBSIM );
DUAAOST_star( A_UNITE(STIBSIM,mode2,2,RTIBSIM), &TTIBSIM );
KTIBSIM.Parameter = A_UNITE(UTIBSIM,mode2,2,TTIBSIM);
KTIBSIM.Access = XMDAOST_normalaccess;
 /* line 1597: */
KTIBSIM.Continuation = ZNDAOST_continue;
 /* line 1598: */
 /* line 1602: */
ZAAAOSI_makervc( WTIBSIM, &XTIBSIM );
KTIBSIM.Help = A_UNITE(YTIBSIM,mode1,1,XTIBSIM);
BUIBSIM.fn.fn_global = CJHBSIM_dontstopcmd;
BUIBSIM.nonlocals = A68_NIL;
AUIBSIM = BUIBSIM ;
KTIBSIM.Command = A_UNITE(ZTIBSIM,mode3,3,AUIBSIM);
 /* line 1604: */
CUIBSIM = A_HEAP(A68_338 ) ;
(*CUIBSIM) = KTIBSIM ;
WPIBSIM.data[6] = A_UNITE(DUIBSIM,mode1,1,CUIBSIM);
 /* line 1605: */
ZAAAOSI_makervc( GUIBSIM, &HUIBSIM );
EUIBSIM.Name = HUIBSIM;
NAAAOSI_makervc( 'K', &IUIBSIM );
EUIBSIM.Abreviation = IUIBSIM;
 /* line 1606: */
LTAAOST_opt( TBAASIM_nodename_syntax, &JUIBSIM );
DUAAOST_star( A_UNITE(KUIBSIM,mode2,2,JUIBSIM), &LUIBSIM );
EUIBSIM.Parameter = A_UNITE(MUIBSIM,mode2,2,LUIBSIM);
EUIBSIM.Access = BNDAOST_hiddenaccess;
EUIBSIM.Continuation = ZNDAOST_continue;
 /* line 1613: */
ZAAAOSI_makervc( OUIBSIM, &PUIBSIM );
EUIBSIM.Help = A_UNITE(QUIBSIM,mode1,1,PUIBSIM);
 /* line 1615: */
TUIBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
TUIBSIM.nonlocals = A68_NIL;
SUIBSIM = TUIBSIM ;
EUIBSIM.Command = A_UNITE(RUIBSIM,mode3,3,SUIBSIM);
UUIBSIM = A_HEAP(A68_338 ) ;
(*UUIBSIM) = EUIBSIM ;
WPIBSIM.data[7] = A_UNITE(VUIBSIM,mode1,1,UUIBSIM);
 /* line 1617: */
AVIBSIM = NSDAOST_make_group(YUIBSIM, A_HVEC(XUIBSIM,'D',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(WUIBSIM,WPIBSIM,8,A68_337 )) ;
UPIBSIM.data[0] = A_UNITE(ZUIBSIM,mode2,2,AVIBSIM);
 /* line 1618: */
 /* line 1620: */
 /* line 1621: */
ZAAAOSI_makervc( FVIBSIM, &GVIBSIM );
DVIBSIM.Name = GVIBSIM;
NAAAOSI_makervc( 'P', &HVIBSIM );
DVIBSIM.Abreviation = HVIBSIM;
DVIBSIM.Parameter = SRAAOST_noparameters;
 /* line 1622: */
DVIBSIM.Access = XMDAOST_normalaccess;
 /* line 1624: */
DVIBSIM.Continuation = ZNDAOST_continue;
 /* line 1625: */
 /* line 1627: */
ZAAAOSI_makervc( JVIBSIM, &KVIBSIM );
DVIBSIM.Help = A_UNITE(LVIBSIM,mode1,1,KVIBSIM);
OVIBSIM.fn.fn_global = TEHBSIM_printpointercmd;
OVIBSIM.nonlocals = A68_NIL;
NVIBSIM = OVIBSIM ;
DVIBSIM.Command = A_UNITE(MVIBSIM,mode3,3,NVIBSIM);
 /* line 1629: */
PVIBSIM = A_HEAP(A68_338 ) ;
(*PVIBSIM) = DVIBSIM ;
CVIBSIM.data[0] = A_UNITE(QVIBSIM,mode1,1,PVIBSIM);
 /* line 1630: */
ZAAAOSI_makervc( TVIBSIM, &UVIBSIM );
RVIBSIM.Name = UVIBSIM;
RVIBSIM.Abreviation = NTCAOST_nilid;
VVIBSIM.data[0] = TBAASIM_nodename_syntax;
LTAAOST_opt( VXFAOST_trim_syntax, &WVIBSIM );
VVIBSIM.data[1] = A_UNITE(XVIBSIM,mode2,2,WVIBSIM);
 /* line 1631: */
ATAAOST_prod( A_HISVEC(YVIBSIM,VVIBSIM,2,A68_292 ), &ZVIBSIM );
RVIBSIM.Parameter = A_UNITE(AWIBSIM,mode2,2,ZVIBSIM);
RVIBSIM.Access = XMDAOST_normalaccess;
 /* line 1633: */
RVIBSIM.Continuation = ZNDAOST_continue;
 /* line 1635: */
ZAAAOSI_makervc( CWIBSIM, &DWIBSIM );
RVIBSIM.Help = A_UNITE(EWIBSIM,mode1,1,DWIBSIM);
 /* line 1636: */
HWIBSIM.fn.fn_global = DFHBSIM_printramcmd;
HWIBSIM.nonlocals = A68_NIL;
GWIBSIM = HWIBSIM ;
RVIBSIM.Command = A_UNITE(FWIBSIM,mode3,3,GWIBSIM);
IWIBSIM = A_HEAP(A68_338 ) ;
(*IWIBSIM) = RVIBSIM ;
CVIBSIM.data[1] = A_UNITE(JWIBSIM,mode1,1,IWIBSIM);
 /* line 1638: */
OWIBSIM = NSDAOST_make_group(MWIBSIM, A_HVEC(LWIBSIM,'P',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(KWIBSIM,CVIBSIM,2,A68_337 )) ;
UPIBSIM.data[1] = A_UNITE(NWIBSIM,mode2,2,OWIBSIM);
 /* line 1639: */
 /* line 1641: */
 /* line 1642: */
ZAAAOSI_makervc( UWIBSIM, &VWIBSIM );
SWIBSIM.Name = VWIBSIM;
SWIBSIM.Abreviation = EOAAOSL_nullstr;
SWIBSIM.Parameter = SRAAOST_noparameters;
 /* line 1643: */
SWIBSIM.Access = XMDAOST_normalaccess;
 /* line 1645: */
SWIBSIM.Continuation = ZNDAOST_continue;
 /* line 1648: */
ZAAAOSI_makervc( XWIBSIM, &YWIBSIM );
SWIBSIM.Help = A_UNITE(ZWIBSIM,mode1,1,YWIBSIM);
CXIBSIM.fn.fn_global = HJHBSIM_cleardisplayscmd;
CXIBSIM.nonlocals = A68_NIL;
BXIBSIM = CXIBSIM ;
SWIBSIM.Command = A_UNITE(AXIBSIM,mode3,3,BXIBSIM);
 /* line 1650: */
DXIBSIM = A_HEAP(A68_338 ) ;
(*DXIBSIM) = SWIBSIM ;
RWIBSIM.data[0] = A_UNITE(EXIBSIM,mode1,1,DXIBSIM);
 /* line 1651: */
ZAAAOSI_makervc( HXIBSIM, &IXIBSIM );
FXIBSIM.Name = IXIBSIM;
FXIBSIM.Abreviation = EOAAOSL_nullstr;
FXIBSIM.Parameter = SRAAOST_noparameters;
 /* line 1652: */
FXIBSIM.Access = XMDAOST_normalaccess;
 /* line 1654: */
FXIBSIM.Continuation = ZNDAOST_continue;
 /* line 1656: */
ZAAAOSI_makervc( KXIBSIM, &LXIBSIM );
FXIBSIM.Help = A_UNITE(MXIBSIM,mode1,1,LXIBSIM);
PXIBSIM.fn.fn_global = VJHBSIM_clearmonitorscmd;
PXIBSIM.nonlocals = A68_NIL;
OXIBSIM = PXIBSIM ;
FXIBSIM.Command = A_UNITE(NXIBSIM,mode3,3,OXIBSIM);
 /* line 1658: */
QXIBSIM = A_HEAP(A68_338 ) ;
(*QXIBSIM) = FXIBSIM ;
RWIBSIM.data[1] = A_UNITE(RXIBSIM,mode1,1,QXIBSIM);
 /* line 1659: */
ZAAAOSI_makervc( UXIBSIM, &VXIBSIM );
SXIBSIM.Name = VXIBSIM;
ZAAAOSI_makervc( XXIBSIM, &YXIBSIM );
SXIBSIM.Abreviation = YXIBSIM;
 /* line 1660: */
SXIBSIM.Parameter = SRAAOST_noparameters;
SXIBSIM.Access = XMDAOST_normalaccess;
 /* line 1661: */
SXIBSIM.Continuation = ZNDAOST_continue;
 /* line 1663: */
ZAAAOSI_makervc( AYIBSIM, &BYIBSIM );
SXIBSIM.Help = A_UNITE(CYIBSIM,mode1,1,BYIBSIM);
FYIBSIM.fn.fn_global = QNIBSIM_dontsetseparatorcmd;
FYIBSIM.nonlocals = A68_NIL;
EYIBSIM = FYIBSIM ;
SXIBSIM.Command = A_UNITE(DYIBSIM,mode3,3,EYIBSIM);
 /* line 1665: */
GYIBSIM = A_HEAP(A68_338 ) ;
(*GYIBSIM) = SXIBSIM ;
RWIBSIM.data[2] = A_UNITE(HYIBSIM,mode1,1,GYIBSIM);
 /* line 1666: */
ZAAAOSI_makervc( KYIBSIM, &LYIBSIM );
IYIBSIM.Name = LYIBSIM;
IYIBSIM.Abreviation = EOAAOSL_nullstr;
IYIBSIM.Parameter = SRAAOST_noparameters;
IYIBSIM.Access = XMDAOST_normalaccess;
 /* line 1669: */
IYIBSIM.Continuation = ZNDAOST_continue;
 /* line 1671: */
ZAAAOSI_makervc( NYIBSIM, &OYIBSIM );
IYIBSIM.Help = A_UNITE(PYIBSIM,mode1,1,OYIBSIM);
SYIBSIM.fn.fn_global = JKHBSIM_clearstopscmd;
SYIBSIM.nonlocals = A68_NIL;
RYIBSIM = SYIBSIM ;
IYIBSIM.Command = A_UNITE(QYIBSIM,mode3,3,RYIBSIM);
 /* line 1673: */
TYIBSIM = A_HEAP(A68_338 ) ;
(*TYIBSIM) = IYIBSIM ;
RWIBSIM.data[3] = A_UNITE(UYIBSIM,mode1,1,TYIBSIM);
 /* line 1674: */
ZAAAOSI_makervc( XYIBSIM, &YYIBSIM );
VYIBSIM.Name = YYIBSIM;
VYIBSIM.Abreviation = EOAAOSL_nullstr;
VYIBSIM.Parameter = SRAAOST_noparameters;
VYIBSIM.Access = BNDAOST_hiddenaccess;
 /* line 1675: */
VYIBSIM.Continuation = ZNDAOST_continue;
 /* line 1680: */
ZAAAOSI_makervc( AZIBSIM, &BZIBSIM );
VYIBSIM.Help = A_UNITE(CZIBSIM,mode1,1,BZIBSIM);
 /* line 1681: */
FZIBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
FZIBSIM.nonlocals = A68_NIL;
EZIBSIM = FZIBSIM ;
VYIBSIM.Command = A_UNITE(DZIBSIM,mode3,3,EZIBSIM);
GZIBSIM = A_HEAP(A68_338 ) ;
(*GZIBSIM) = VYIBSIM ;
RWIBSIM.data[4] = A_UNITE(HZIBSIM,mode1,1,GZIBSIM);
 /* line 1683: */
MZIBSIM = NSDAOST_make_group(KZIBSIM, JZIBSIM, XMDAOST_normalaccess, A_HISVEC(IZIBSIM,RWIBSIM,5,A68_337 )) ;
UPIBSIM.data[2] = A_UNITE(LZIBSIM,mode2,2,MZIBSIM);
 /* line 1684: */
 /* line 1685: */
 /* line 1686: */
 /* line 1687: */
ZAAAOSI_makervc( RZIBSIM, &SZIBSIM );
PZIBSIM.Name = SZIBSIM;
NAAAOSI_makervc( 'H', &TZIBSIM );
PZIBSIM.Abreviation = TZIBSIM;
PZIBSIM.Parameter = SRAAOST_noparameters;
 /* line 1688: */
PZIBSIM.Access = XMDAOST_normalaccess;
 /* line 1690: */
PZIBSIM.Continuation = ZNDAOST_continue;
 /* line 1692: */
ZAAAOSI_makervc( VZIBSIM, &WZIBSIM );
PZIBSIM.Help = A_UNITE(XZIBSIM,mode1,1,WZIBSIM);
AAJBSIM.fn.fn_global = SOHBSIM_gohomecmd;
AAJBSIM.nonlocals = A68_NIL;
ZZIBSIM = AAJBSIM ;
PZIBSIM.Command = A_UNITE(YZIBSIM,mode3,3,ZZIBSIM);
 /* line 1694: */
BAJBSIM = A_HEAP(A68_338 ) ;
(*BAJBSIM) = PZIBSIM ;
OZIBSIM.data[0] = A_UNITE(CAJBSIM,mode1,1,BAJBSIM);
 /* line 1695: */
 /* line 1696: */
ZAAAOSI_makervc( FAJBSIM, &GAJBSIM );
DAJBSIM.Name = GAJBSIM;
NAAAOSI_makervc( 'T', &HAJBSIM );
DAJBSIM.Abreviation = HAJBSIM;
DUAAOST_star( TBAASIM_nodename_syntax, &IAJBSIM );
DAJBSIM.Parameter = A_UNITE(JAJBSIM,mode2,2,IAJBSIM);
 /* line 1697: */
DAJBSIM.Access = XMDAOST_normalaccess;
 /* line 1699: */
DAJBSIM.Continuation = ZNDAOST_continue;
 /* line 1701: */
ZAAAOSI_makervc( LAJBSIM, &MAJBSIM );
DAJBSIM.Help = A_UNITE(NAJBSIM,mode1,1,MAJBSIM);
QAJBSIM.fn.fn_global = LLHBSIM_gotocmd;
QAJBSIM.nonlocals = A68_NIL;
PAJBSIM = QAJBSIM ;
DAJBSIM.Command = A_UNITE(OAJBSIM,mode3,3,PAJBSIM);
 /* line 1703: */
RAJBSIM = A_HEAP(A68_338 ) ;
(*RAJBSIM) = DAJBSIM ;
OZIBSIM.data[1] = A_UNITE(SAJBSIM,mode1,1,RAJBSIM);
 /* line 1704: */
 /* line 1705: */
ZAAAOSI_makervc( VAJBSIM, &WAJBSIM );
TAJBSIM.Name = WAJBSIM;
NAAAOSI_makervc( 'P', &XAJBSIM );
TAJBSIM.Abreviation = XAJBSIM;
 /* line 1706: */
DUAAOST_star( TBAASIM_nodename_syntax, &YAJBSIM );
TAJBSIM.Parameter = A_UNITE(ZAJBSIM,mode2,2,YAJBSIM);
TAJBSIM.Access = BNDAOST_hiddenaccess;
TAJBSIM.Continuation = ZNDAOST_continue;
 /* line 1711: */
ZAAAOSI_makervc( BBJBSIM, &CBJBSIM );
TAJBSIM.Help = A_UNITE(DBJBSIM,mode1,1,CBJBSIM);
GBJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
GBJBSIM.nonlocals = A68_NIL;
FBJBSIM = GBJBSIM ;
TAJBSIM.Command = A_UNITE(EBJBSIM,mode3,3,FBJBSIM);
 /* line 1713: */
HBJBSIM = A_HEAP(A68_338 ) ;
(*HBJBSIM) = TAJBSIM ;
OZIBSIM.data[2] = A_UNITE(IBJBSIM,mode1,1,HBJBSIM);
 /* line 1714: */
 /* line 1715: */
ZAAAOSI_makervc( LBJBSIM, &MBJBSIM );
JBJBSIM.Name = MBJBSIM;
NAAAOSI_makervc( 'I', &NBJBSIM );
JBJBSIM.Abreviation = NBJBSIM;
 /* line 1716: */
LTAAOST_opt( TBAASIM_nodename_syntax, &OBJBSIM );
DUAAOST_star( A_UNITE(PBJBSIM,mode2,2,OBJBSIM), &QBJBSIM );
JBJBSIM.Parameter = A_UNITE(RBJBSIM,mode2,2,QBJBSIM);
JBJBSIM.Access = XMDAOST_normalaccess;
 /* line 1718: */
JBJBSIM.Continuation = ZNDAOST_continue;
 /* line 1719: */
 /* line 1721: */
ZAAAOSI_makervc( TBJBSIM, &UBJBSIM );
JBJBSIM.Help = A_UNITE(VBJBSIM,mode1,1,UBJBSIM);
YBJBSIM.fn.fn_global = GMHBSIM_goincmd;
YBJBSIM.nonlocals = A68_NIL;
XBJBSIM = YBJBSIM ;
JBJBSIM.Command = A_UNITE(WBJBSIM,mode3,3,XBJBSIM);
 /* line 1723: */
ZBJBSIM = A_HEAP(A68_338 ) ;
(*ZBJBSIM) = JBJBSIM ;
OZIBSIM.data[3] = A_UNITE(ACJBSIM,mode1,1,ZBJBSIM);
 /* line 1724: */
 /* line 1725: */
ZAAAOSI_makervc( DCJBSIM, &ECJBSIM );
BCJBSIM.Name = ECJBSIM;
 /* line 1726: */
NAAAOSI_makervc( 'O', &FCJBSIM );
BCJBSIM.Abreviation = FCJBSIM;
GCJBSIM.data[0] = CJFAOST_fnname_syntax;
GCJBSIM.data[1] = IIFAOST_ident_syntax;
 /* line 1727: */
PSAAOST_alt( A_HISVEC(HCJBSIM,GCJBSIM,2,A68_292 ), &ICJBSIM );
LTAAOST_opt( A_UNITE(JCJBSIM,mode2,2,ICJBSIM), &KCJBSIM );
DUAAOST_star( A_UNITE(LCJBSIM,mode2,2,KCJBSIM), &MCJBSIM );
BCJBSIM.Parameter = A_UNITE(NCJBSIM,mode2,2,MCJBSIM);
BCJBSIM.Access = XMDAOST_normalaccess;
 /* line 1728: */
BCJBSIM.Continuation = ZNDAOST_continue;
 /* line 1730: */
ZAAAOSI_makervc( PCJBSIM, &QCJBSIM );
BCJBSIM.Help = A_UNITE(RCJBSIM,mode1,1,QCJBSIM);
UCJBSIM.fn.fn_global = FNHBSIM_gooutcmd;
UCJBSIM.nonlocals = A68_NIL;
TCJBSIM = UCJBSIM ;
BCJBSIM.Command = A_UNITE(SCJBSIM,mode3,3,TCJBSIM);
 /* line 1732: */
VCJBSIM = A_HEAP(A68_338 ) ;
(*VCJBSIM) = BCJBSIM ;
OZIBSIM.data[4] = A_UNITE(WCJBSIM,mode1,1,VCJBSIM);
 /* line 1733: */
 /* line 1734: */
ZAAAOSI_makervc( ZCJBSIM, &ADJBSIM );
XCJBSIM.Name = ADJBSIM;
 /* line 1735: */
NAAAOSI_makervc( 'B', &BDJBSIM );
XCJBSIM.Abreviation = BDJBSIM;
CDJBSIM.data[0] = CJFAOST_fnname_syntax;
CDJBSIM.data[1] = IIFAOST_ident_syntax;
 /* line 1736: */
PSAAOST_alt( A_HISVEC(DDJBSIM,CDJBSIM,2,A68_292 ), &EDJBSIM );
LTAAOST_opt( A_UNITE(FDJBSIM,mode2,2,EDJBSIM), &GDJBSIM );
DUAAOST_star( A_UNITE(HDJBSIM,mode2,2,GDJBSIM), &IDJBSIM );
XCJBSIM.Parameter = A_UNITE(JDJBSIM,mode2,2,IDJBSIM);
XCJBSIM.Access = XMDAOST_normalaccess;
 /* line 1738: */
XCJBSIM.Continuation = ZNDAOST_continue;
 /* line 1739: */
 /* line 1741: */
ZAAAOSI_makervc( LDJBSIM, &MDJBSIM );
XCJBSIM.Help = A_UNITE(NDJBSIM,mode1,1,MDJBSIM);
 /* line 1742: */
QDJBSIM.fn.fn_global = IOHBSIM_gobackcmd;
QDJBSIM.nonlocals = A68_NIL;
PDJBSIM = QDJBSIM ;
XCJBSIM.Command = A_UNITE(ODJBSIM,mode3,3,PDJBSIM);
RDJBSIM = A_HEAP(A68_338 ) ;
(*RDJBSIM) = XCJBSIM ;
OZIBSIM.data[5] = A_UNITE(SDJBSIM,mode1,1,RDJBSIM);
 /* line 1744: */
XDJBSIM = NSDAOST_make_group(VDJBSIM, A_HVEC(UDJBSIM,'G',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(TDJBSIM,OZIBSIM,6,A68_337 )) ;
UPIBSIM.data[3] = A_UNITE(WDJBSIM,mode2,2,XDJBSIM);
 /* line 1745: */
 /* line 1746: */
 /* line 1747: */
ZAAAOSI_makervc( CEJBSIM, &DEJBSIM );
AEJBSIM.Name = DEJBSIM;
NAAAOSI_makervc( 'C', &EEJBSIM );
AEJBSIM.Abreviation = EEJBSIM;
 /* line 1748: */
DUAAOST_star( TBAASIM_nodename_syntax, &FEJBSIM );
LTAAOST_opt( A_UNITE(GEJBSIM,mode2,2,FEJBSIM), &HEJBSIM );
AEJBSIM.Parameter = A_UNITE(IEJBSIM,mode2,2,HEJBSIM);
AEJBSIM.Access = XMDAOST_normalaccess;
 /* line 1750: */
AEJBSIM.Continuation = ZNDAOST_continue;
 /* line 1751: */
 /* line 1753: */
ZAAAOSI_makervc( KEJBSIM, &LEJBSIM );
AEJBSIM.Help = A_UNITE(MEJBSIM,mode1,1,LEJBSIM);
PEJBSIM.fn.fn_global = MRHBSIM_displaychangescmd;
PEJBSIM.nonlocals = A68_NIL;
OEJBSIM = PEJBSIM ;
AEJBSIM.Command = A_UNITE(NEJBSIM,mode3,3,OEJBSIM);
 /* line 1755: */
QEJBSIM = A_HEAP(A68_338 ) ;
(*QEJBSIM) = AEJBSIM ;
ZDJBSIM.data[0] = A_UNITE(REJBSIM,mode1,1,QEJBSIM);
 /* line 1756: */
ZAAAOSI_makervc( UEJBSIM, &VEJBSIM );
SEJBSIM.Name = VEJBSIM;
 /* line 1757: */
ZAAAOSI_makervc( XEJBSIM, &YEJBSIM );
SEJBSIM.Abreviation = YEJBSIM;
ZEJBSIM.data[0] = TBAASIM_nodename_syntax;
DUAAOST_star( PGAASIM_values_syntax, &AFJBSIM );
ZEJBSIM.data[1] = A_UNITE(BFJBSIM,mode2,2,AFJBSIM);
ATAAOST_prod( A_HISVEC(CFJBSIM,ZEJBSIM,2,A68_292 ), &DFJBSIM );
SEJBSIM.Parameter = A_UNITE(EFJBSIM,mode2,2,DFJBSIM);
 /* line 1758: */
SEJBSIM.Access = XMDAOST_normalaccess;
 /* line 1760: */
SEJBSIM.Continuation = ZNDAOST_continue;
 /* line 1761: */
 /* line 1763: */
ZAAAOSI_makervc( GFJBSIM, &HFJBSIM );
SEJBSIM.Help = A_UNITE(IFJBSIM,mode1,1,HFJBSIM);
LFJBSIM.fn.fn_global = PRHBSIM_displayequalscmd;
LFJBSIM.nonlocals = A68_NIL;
KFJBSIM = LFJBSIM ;
SEJBSIM.Command = A_UNITE(JFJBSIM,mode3,3,KFJBSIM);
 /* line 1765: */
MFJBSIM = A_HEAP(A68_338 ) ;
(*MFJBSIM) = SEJBSIM ;
ZDJBSIM.data[1] = A_UNITE(NFJBSIM,mode1,1,MFJBSIM);
 /* line 1766: */
ZAAAOSI_makervc( QFJBSIM, &RFJBSIM );
OFJBSIM.Name = RFJBSIM;
NAAAOSI_makervc( 'A', &SFJBSIM );
OFJBSIM.Abreviation = SFJBSIM;
 /* line 1767: */
LTAAOST_opt( TBAASIM_nodename_syntax, &TFJBSIM );
DUAAOST_star( A_UNITE(UFJBSIM,mode2,2,TFJBSIM), &VFJBSIM );
OFJBSIM.Parameter = A_UNITE(WFJBSIM,mode2,2,VFJBSIM);
OFJBSIM.Access = XMDAOST_normalaccess;
 /* line 1769: */
OFJBSIM.Continuation = ZNDAOST_continue;
 /* line 1770: */
 /* line 1772: */
ZAAAOSI_makervc( YFJBSIM, &ZFJBSIM );
OFJBSIM.Help = A_UNITE(AGJBSIM,mode1,1,ZFJBSIM);
DGJBSIM.fn.fn_global = SRHBSIM_displayalwayscmd;
DGJBSIM.nonlocals = A68_NIL;
CGJBSIM = DGJBSIM ;
OFJBSIM.Command = A_UNITE(BGJBSIM,mode3,3,CGJBSIM);
 /* line 1774: */
EGJBSIM = A_HEAP(A68_338 ) ;
(*EGJBSIM) = OFJBSIM ;
ZDJBSIM.data[2] = A_UNITE(FGJBSIM,mode1,1,EGJBSIM);
 /* line 1775: */
ZAAAOSI_makervc( IGJBSIM, &JGJBSIM );
GGJBSIM.Name = JGJBSIM;
 /* line 1776: */
NAAAOSI_makervc( 'B', &KGJBSIM );
GGJBSIM.Abreviation = KGJBSIM;
LGJBSIM.data[0] = TBAASIM_nodename_syntax;
DUAAOST_star( PGAASIM_values_syntax, &MGJBSIM );
LGJBSIM.data[1] = A_UNITE(NGJBSIM,mode2,2,MGJBSIM);
ATAAOST_prod( A_HISVEC(OGJBSIM,LGJBSIM,2,A68_292 ), &PGJBSIM );
GGJBSIM.Parameter = A_UNITE(QGJBSIM,mode2,2,PGJBSIM);
 /* line 1777: */
GGJBSIM.Access = XMDAOST_normalaccess;
 /* line 1779: */
GGJBSIM.Continuation = ZNDAOST_continue;
 /* line 1780: */
 /* line 1782: */
ZAAAOSI_makervc( SGJBSIM, &TGJBSIM );
GGJBSIM.Help = A_UNITE(UGJBSIM,mode1,1,TGJBSIM);
XGJBSIM.fn.fn_global = VRHBSIM_displaybecomescmd;
XGJBSIM.nonlocals = A68_NIL;
WGJBSIM = XGJBSIM ;
GGJBSIM.Command = A_UNITE(VGJBSIM,mode3,3,WGJBSIM);
 /* line 1784: */
YGJBSIM = A_HEAP(A68_338 ) ;
(*YGJBSIM) = GGJBSIM ;
ZDJBSIM.data[3] = A_UNITE(ZGJBSIM,mode1,1,YGJBSIM);
 /* line 1785: */
 /* line 1786: */
ZAAAOSI_makervc( CHJBSIM, &DHJBSIM );
AHJBSIM.Name = DHJBSIM;
NAAAOSI_makervc( 'S', &EHJBSIM );
AHJBSIM.Abreviation = EHJBSIM;
 /* line 1787: */
LTAAOST_opt( TBAASIM_nodename_syntax, &FHJBSIM );
DUAAOST_star( A_UNITE(GHJBSIM,mode2,2,FHJBSIM), &HHJBSIM );
AHJBSIM.Parameter = A_UNITE(IHJBSIM,mode2,2,HHJBSIM);
AHJBSIM.Access = XMDAOST_normalaccess;
 /* line 1789: */
AHJBSIM.Continuation = ZNDAOST_continue;
 /* line 1790: */
 /* line 1792: */
ZAAAOSI_makervc( KHJBSIM, &LHJBSIM );
AHJBSIM.Help = A_UNITE(MHJBSIM,mode1,1,LHJBSIM);
 /* line 1793: */
PHJBSIM.fn.fn_global = YOHBSIM_displaysignalcmd;
PHJBSIM.nonlocals = A68_NIL;
OHJBSIM = PHJBSIM ;
AHJBSIM.Command = A_UNITE(NHJBSIM,mode3,3,OHJBSIM);
QHJBSIM = A_HEAP(A68_338 ) ;
(*QHJBSIM) = AHJBSIM ;
ZDJBSIM.data[4] = A_UNITE(RHJBSIM,mode1,1,QHJBSIM);
 /* line 1795: */
WHJBSIM = NSDAOST_make_group(UHJBSIM, A_HVEC(THJBSIM,'D',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(SHJBSIM,ZDJBSIM,5,A68_337 )) ;
UPIBSIM.data[4] = A_UNITE(VHJBSIM,mode2,2,WHJBSIM);
 /* line 1796: */
 /* line 1798: */
 /* line 1799: */
ZAAAOSI_makervc( BIJBSIM, &CIJBSIM );
ZHJBSIM.Name = CIJBSIM;
NAAAOSI_makervc( 'C', &DIJBSIM );
ZHJBSIM.Abreviation = DIJBSIM;
 /* line 1800: */
LTAAOST_opt( TBAASIM_nodename_syntax, &EIJBSIM );
DUAAOST_star( A_UNITE(FIJBSIM,mode2,2,EIJBSIM), &GIJBSIM );
ZHJBSIM.Parameter = A_UNITE(HIJBSIM,mode2,2,GIJBSIM);
ZHJBSIM.Access = XMDAOST_normalaccess;
 /* line 1801: */
ZHJBSIM.Continuation = ZNDAOST_continue;
 /* line 1804: */
ZAAAOSI_makervc( JIJBSIM, &KIJBSIM );
ZHJBSIM.Help = A_UNITE(LIJBSIM,mode1,1,KIJBSIM);
OIJBSIM.fn.fn_global = MRHBSIM_displaychangescmd;
OIJBSIM.nonlocals = A68_NIL;
NIJBSIM = OIJBSIM ;
ZHJBSIM.Command = A_UNITE(MIJBSIM,mode3,3,NIJBSIM);
 /* line 1806: */
PIJBSIM = A_HEAP(A68_338 ) ;
(*PIJBSIM) = ZHJBSIM ;
YHJBSIM.data[0] = A_UNITE(QIJBSIM,mode1,1,PIJBSIM);
 /* line 1807: */
ZAAAOSI_makervc( TIJBSIM, &UIJBSIM );
RIJBSIM.Name = UIJBSIM;
 /* line 1808: */
ZAAAOSI_makervc( WIJBSIM, &XIJBSIM );
RIJBSIM.Abreviation = XIJBSIM;
YIJBSIM.data[0] = TBAASIM_nodename_syntax;
DUAAOST_star( PGAASIM_values_syntax, &ZIJBSIM );
YIJBSIM.data[1] = A_UNITE(AJJBSIM,mode2,2,ZIJBSIM);
 /* line 1809: */
ATAAOST_prod( A_HISVEC(BJJBSIM,YIJBSIM,2,A68_292 ), &CJJBSIM );
RIJBSIM.Parameter = A_UNITE(DJJBSIM,mode2,2,CJJBSIM);
RIJBSIM.Access = XMDAOST_normalaccess;
 /* line 1811: */
RIJBSIM.Continuation = ZNDAOST_continue;
 /* line 1814: */
ZAAAOSI_makervc( FJJBSIM, &GJJBSIM );
RIJBSIM.Help = A_UNITE(HJJBSIM,mode1,1,GJJBSIM);
KJJBSIM.fn.fn_global = PRHBSIM_displayequalscmd;
KJJBSIM.nonlocals = A68_NIL;
JJJBSIM = KJJBSIM ;
RIJBSIM.Command = A_UNITE(IJJBSIM,mode3,3,JJJBSIM);
 /* line 1816: */
LJJBSIM = A_HEAP(A68_338 ) ;
(*LJJBSIM) = RIJBSIM ;
YHJBSIM.data[1] = A_UNITE(MJJBSIM,mode1,1,LJJBSIM);
 /* line 1817: */
ZAAAOSI_makervc( PJJBSIM, &QJJBSIM );
NJJBSIM.Name = QJJBSIM;
NAAAOSI_makervc( 'A', &RJJBSIM );
NJJBSIM.Abreviation = RJJBSIM;
 /* line 1818: */
LTAAOST_opt( TBAASIM_nodename_syntax, &SJJBSIM );
DUAAOST_star( A_UNITE(TJJBSIM,mode2,2,SJJBSIM), &UJJBSIM );
NJJBSIM.Parameter = A_UNITE(VJJBSIM,mode2,2,UJJBSIM);
NJJBSIM.Access = XMDAOST_normalaccess;
 /* line 1820: */
NJJBSIM.Continuation = ZNDAOST_continue;
 /* line 1821: */
 /* line 1824: */
ZAAAOSI_makervc( XJJBSIM, &YJJBSIM );
NJJBSIM.Help = A_UNITE(ZJJBSIM,mode1,1,YJJBSIM);
CKJBSIM.fn.fn_global = SRHBSIM_displayalwayscmd;
CKJBSIM.nonlocals = A68_NIL;
BKJBSIM = CKJBSIM ;
NJJBSIM.Command = A_UNITE(AKJBSIM,mode3,3,BKJBSIM);
 /* line 1826: */
DKJBSIM = A_HEAP(A68_338 ) ;
(*DKJBSIM) = NJJBSIM ;
YHJBSIM.data[2] = A_UNITE(EKJBSIM,mode1,1,DKJBSIM);
 /* line 1827: */
ZAAAOSI_makervc( HKJBSIM, &IKJBSIM );
FKJBSIM.Name = IKJBSIM;
 /* line 1828: */
NAAAOSI_makervc( 'B', &JKJBSIM );
FKJBSIM.Abreviation = JKJBSIM;
KKJBSIM.data[0] = TBAASIM_nodename_syntax;
DUAAOST_star( PGAASIM_values_syntax, &LKJBSIM );
KKJBSIM.data[1] = A_UNITE(MKJBSIM,mode2,2,LKJBSIM);
 /* line 1829: */
ATAAOST_prod( A_HISVEC(NKJBSIM,KKJBSIM,2,A68_292 ), &OKJBSIM );
FKJBSIM.Parameter = A_UNITE(PKJBSIM,mode2,2,OKJBSIM);
FKJBSIM.Access = XMDAOST_normalaccess;
 /* line 1831: */
FKJBSIM.Continuation = ZNDAOST_continue;
 /* line 1832: */
 /* line 1835: */
ZAAAOSI_makervc( RKJBSIM, &SKJBSIM );
FKJBSIM.Help = A_UNITE(TKJBSIM,mode1,1,SKJBSIM);
 /* line 1836: */
WKJBSIM.fn.fn_global = VRHBSIM_displaybecomescmd;
WKJBSIM.nonlocals = A68_NIL;
VKJBSIM = WKJBSIM ;
FKJBSIM.Command = A_UNITE(UKJBSIM,mode3,3,VKJBSIM);
XKJBSIM = A_HEAP(A68_338 ) ;
(*XKJBSIM) = FKJBSIM ;
YHJBSIM.data[3] = A_UNITE(YKJBSIM,mode1,1,XKJBSIM);
 /* line 1838: */
DLJBSIM = NSDAOST_make_group(BLJBSIM, A_HVEC(ALJBSIM,'M',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(ZKJBSIM,YHJBSIM,4,A68_337 )) ;
UPIBSIM.data[5] = A_UNITE(CLJBSIM,mode2,2,DLJBSIM);
 /* line 1839: */
 /* line 1840: */
 /* line 1841: */
ZAAAOSI_makervc( ILJBSIM, &JLJBSIM );
GLJBSIM.Name = JLJBSIM;
NAAAOSI_makervc( 'N', &KLJBSIM );
GLJBSIM.Abreviation = KLJBSIM;
GLJBSIM.Parameter = SRAAOST_noparameters;
 /* line 1842: */
GLJBSIM.Access = BNDAOST_hiddenaccess;
GLJBSIM.Continuation = ZNDAOST_continue;
 /* line 1848: */
ZAAAOSI_makervc( MLJBSIM, &NLJBSIM );
GLJBSIM.Help = A_UNITE(OLJBSIM,mode1,1,NLJBSIM);
RLJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
RLJBSIM.nonlocals = A68_NIL;
QLJBSIM = RLJBSIM ;
GLJBSIM.Command = A_UNITE(PLJBSIM,mode3,3,QLJBSIM);
 /* line 1850: */
SLJBSIM = A_HEAP(A68_338 ) ;
(*SLJBSIM) = GLJBSIM ;
FLJBSIM.data[0] = A_UNITE(TLJBSIM,mode1,1,SLJBSIM);
 /* line 1851: */
ZAAAOSI_makervc( WLJBSIM, &XLJBSIM );
ULJBSIM.Name = XLJBSIM;
 /* line 1852: */
ZAAAOSI_makervc( ZLJBSIM, &AMJBSIM );
ULJBSIM.Abreviation = AMJBSIM;
BMJBSIM.data[0] = ADGAOST_quoted_string_syntax;
BMJBSIM.data[1] = WEGAOST_character_syntax;
 /* line 1853: */
PSAAOST_alt( A_HISVEC(CMJBSIM,BMJBSIM,2,A68_292 ), &DMJBSIM );
ULJBSIM.Parameter = A_UNITE(EMJBSIM,mode2,2,DMJBSIM);
ULJBSIM.Access = XMDAOST_normalaccess;
 /* line 1855: */
ULJBSIM.Continuation = ZNDAOST_continue;
 /* line 1857: */
ZAAAOSI_makervc( GMJBSIM, &HMJBSIM );
ULJBSIM.Help = A_UNITE(IMJBSIM,mode1,1,HMJBSIM);
LMJBSIM.fn.fn_global = TNIBSIM_setseparatorcmd;
LMJBSIM.nonlocals = A68_NIL;
KMJBSIM = LMJBSIM ;
ULJBSIM.Command = A_UNITE(JMJBSIM,mode3,3,KMJBSIM);
 /* line 1859: */
MMJBSIM = A_HEAP(A68_338 ) ;
(*MMJBSIM) = ULJBSIM ;
FLJBSIM.data[1] = A_UNITE(NMJBSIM,mode1,1,MMJBSIM);
 /* line 1860: */
ZAAAOSI_makervc( QMJBSIM, &RMJBSIM );
OMJBSIM.Name = RMJBSIM;
NAAAOSI_makervc( 'P', &SMJBSIM );
OMJBSIM.Abreviation = SMJBSIM;
OMJBSIM.Parameter = SRAAOST_noparameters;
 /* line 1861: */
OMJBSIM.Access = BNDAOST_hiddenaccess;
OMJBSIM.Continuation = ZNDAOST_continue;
 /* line 1866: */
ZAAAOSI_makervc( UMJBSIM, &VMJBSIM );
OMJBSIM.Help = A_UNITE(WMJBSIM,mode1,1,VMJBSIM);
 /* line 1867: */
ZMJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
ZMJBSIM.nonlocals = A68_NIL;
YMJBSIM = ZMJBSIM ;
OMJBSIM.Command = A_UNITE(XMJBSIM,mode3,3,YMJBSIM);
ANJBSIM = A_HEAP(A68_338 ) ;
(*ANJBSIM) = OMJBSIM ;
FLJBSIM.data[2] = A_UNITE(BNJBSIM,mode1,1,ANJBSIM);
 /* line 1869: */
GNJBSIM = NSDAOST_make_group(ENJBSIM, A_HVEC(DNJBSIM,'S',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(CNJBSIM,FLJBSIM,3,A68_337 )) ;
UPIBSIM.data[6] = A_UNITE(FNJBSIM,mode2,2,GNJBSIM);
 /* line 1870: */
 /* line 1871: */
 /* line 1872: */
ZAAAOSI_makervc( MNJBSIM, &NNJBSIM );
KNJBSIM.Name = NNJBSIM;
NAAAOSI_makervc( 'C', &ONJBSIM );
KNJBSIM.Abreviation = ONJBSIM;
 /* line 1873: */
LTAAOST_opt( TBAASIM_nodename_syntax, &PNJBSIM );
DUAAOST_star( A_UNITE(QNJBSIM,mode2,2,PNJBSIM), &RNJBSIM );
KNJBSIM.Parameter = A_UNITE(SNJBSIM,mode2,2,RNJBSIM);
KNJBSIM.Access = XMDAOST_normalaccess;
 /* line 1875: */
KNJBSIM.Continuation = ZNDAOST_continue;
 /* line 1876: */
 /* line 1878: */
ZAAAOSI_makervc( UNJBSIM, &VNJBSIM );
KNJBSIM.Help = A_UNITE(WNJBSIM,mode1,1,VNJBSIM);
ZNJBSIM.fn.fn_global = NTHBSIM_stopchangescmd;
ZNJBSIM.nonlocals = A68_NIL;
YNJBSIM = ZNJBSIM ;
KNJBSIM.Command = A_UNITE(XNJBSIM,mode3,3,YNJBSIM);
 /* line 1880: */
AOJBSIM = A_HEAP(A68_338 ) ;
(*AOJBSIM) = KNJBSIM ;
JNJBSIM.data[0] = A_UNITE(BOJBSIM,mode1,1,AOJBSIM);
 /* line 1881: */
ZAAAOSI_makervc( EOJBSIM, &FOJBSIM );
COJBSIM.Name = FOJBSIM;
 /* line 1882: */
ZAAAOSI_makervc( HOJBSIM, &IOJBSIM );
COJBSIM.Abreviation = IOJBSIM;
JOJBSIM.data[0] = TBAASIM_nodename_syntax;
DUAAOST_star( PGAASIM_values_syntax, &KOJBSIM );
JOJBSIM.data[1] = A_UNITE(LOJBSIM,mode2,2,KOJBSIM);
 /* line 1883: */
ATAAOST_prod( A_HISVEC(MOJBSIM,JOJBSIM,2,A68_292 ), &NOJBSIM );
COJBSIM.Parameter = A_UNITE(OOJBSIM,mode2,2,NOJBSIM);
COJBSIM.Access = XMDAOST_normalaccess;
 /* line 1885: */
COJBSIM.Continuation = ZNDAOST_continue;
 /* line 1886: */
 /* line 1887: */
 /* line 1889: */
ZAAAOSI_makervc( QOJBSIM, &ROJBSIM );
COJBSIM.Help = A_UNITE(SOJBSIM,mode1,1,ROJBSIM);
VOJBSIM.fn.fn_global = QTHBSIM_stopequalscmd;
VOJBSIM.nonlocals = A68_NIL;
UOJBSIM = VOJBSIM ;
COJBSIM.Command = A_UNITE(TOJBSIM,mode3,3,UOJBSIM);
 /* line 1891: */
WOJBSIM = A_HEAP(A68_338 ) ;
(*WOJBSIM) = COJBSIM ;
JNJBSIM.data[1] = A_UNITE(XOJBSIM,mode1,1,WOJBSIM);
 /* line 1892: */
ZAAAOSI_makervc( APJBSIM, &BPJBSIM );
YOJBSIM.Name = BPJBSIM;
 /* line 1893: */
NAAAOSI_makervc( 'B', &CPJBSIM );
YOJBSIM.Abreviation = CPJBSIM;
DPJBSIM.data[0] = TBAASIM_nodename_syntax;
DUAAOST_star( PGAASIM_values_syntax, &EPJBSIM );
DPJBSIM.data[1] = A_UNITE(FPJBSIM,mode2,2,EPJBSIM);
 /* line 1894: */
ATAAOST_prod( A_HISVEC(GPJBSIM,DPJBSIM,2,A68_292 ), &HPJBSIM );
YOJBSIM.Parameter = A_UNITE(IPJBSIM,mode2,2,HPJBSIM);
YOJBSIM.Access = XMDAOST_normalaccess;
 /* line 1896: */
YOJBSIM.Continuation = ZNDAOST_continue;
 /* line 1897: */
 /* line 1898: */
 /* line 1900: */
ZAAAOSI_makervc( KPJBSIM, &LPJBSIM );
YOJBSIM.Help = A_UNITE(MPJBSIM,mode1,1,LPJBSIM);
 /* line 1901: */
PPJBSIM.fn.fn_global = TTHBSIM_stopbecomescmd;
PPJBSIM.nonlocals = A68_NIL;
OPJBSIM = PPJBSIM ;
YOJBSIM.Command = A_UNITE(NPJBSIM,mode3,3,OPJBSIM);
QPJBSIM = A_HEAP(A68_338 ) ;
(*QPJBSIM) = YOJBSIM ;
JNJBSIM.data[2] = A_UNITE(RPJBSIM,mode1,1,QPJBSIM);
 /* line 1903: */
WPJBSIM = NSDAOST_make_group(UPJBSIM, TPJBSIM, XMDAOST_normalaccess, A_HISVEC(SPJBSIM,JNJBSIM,3,A68_337 )) ;
UPIBSIM.data[7] = A_UNITE(VPJBSIM,mode2,2,WPJBSIM);
 /* line 1904: */
 /* line 1905: */
ZAAAOSI_makervc( ZPJBSIM, &AQJBSIM );
XPJBSIM.Name = AQJBSIM;
 /* line 1906: */
ZAAAOSI_makervc( CQJBSIM, &DQJBSIM );
XPJBSIM.Abreviation = DQJBSIM;
LTAAOST_opt( VXFAOST_trim_syntax, &FQJBSIM );
EQJBSIM.data[0] = A_UNITE(GQJBSIM,mode2,2,FQJBSIM);
DUAAOST_star( PGAASIM_values_syntax, &HQJBSIM );
EQJBSIM.data[1] = A_UNITE(IQJBSIM,mode2,2,HQJBSIM);
 /* line 1907: */
ATAAOST_prod( A_HISVEC(JQJBSIM,EQJBSIM,2,A68_292 ), &KQJBSIM );
XPJBSIM.Parameter = A_UNITE(LQJBSIM,mode2,2,KQJBSIM);
XPJBSIM.Access = XMDAOST_normalaccess;
 /* line 1909: */
XPJBSIM.Continuation = ZNDAOST_continue;
 /* line 1910: */
 /* line 1911: */
 /* line 1913: */
ZAAAOSI_makervc( NQJBSIM, &OQJBSIM );
XPJBSIM.Help = A_UNITE(PQJBSIM,mode1,1,OQJBSIM);
SQJBSIM.fn.fn_global = LUHBSIM_changeparameterscmd;
SQJBSIM.nonlocals = A68_NIL;
RQJBSIM = SQJBSIM ;
XPJBSIM.Command = A_UNITE(QQJBSIM,mode3,3,RQJBSIM);
 /* line 1915: */
TQJBSIM = A_HEAP(A68_338 ) ;
(*TQJBSIM) = XPJBSIM ;
UPIBSIM.data[8] = A_UNITE(UQJBSIM,mode1,1,TQJBSIM);
 /* line 1916: */
 /* line 1917: */
ZAAAOSI_makervc( XQJBSIM, &YQJBSIM );
VQJBSIM.Name = YQJBSIM;
 /* line 1918: */
ZAAAOSI_makervc( ARJBSIM, &BRJBSIM );
VQJBSIM.Abreviation = BRJBSIM;
CRJBSIM.data[0] = TBAASIM_nodename_syntax;
LTAAOST_opt( VXFAOST_trim_syntax, &DRJBSIM );
CRJBSIM.data[1] = A_UNITE(ERJBSIM,mode2,2,DRJBSIM);
DUAAOST_star( PGAASIM_values_syntax, &FRJBSIM );
CRJBSIM.data[2] = A_UNITE(GRJBSIM,mode2,2,FRJBSIM);
 /* line 1919: */
ATAAOST_prod( A_HISVEC(HRJBSIM,CRJBSIM,3,A68_292 ), &IRJBSIM );
VQJBSIM.Parameter = A_UNITE(JRJBSIM,mode2,2,IRJBSIM);
VQJBSIM.Access = BNDAOST_hiddenaccess;
VQJBSIM.Continuation = ZNDAOST_continue;
 /* line 1926: */
ZAAAOSI_makervc( LRJBSIM, &MRJBSIM );
VQJBSIM.Help = A_UNITE(NRJBSIM,mode1,1,MRJBSIM);
QRJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
QRJBSIM.nonlocals = A68_NIL;
PRJBSIM = QRJBSIM ;
VQJBSIM.Command = A_UNITE(ORJBSIM,mode3,3,PRJBSIM);
 /* line 1927: */
RRJBSIM = A_HEAP(A68_338 ) ;
(*RRJBSIM) = VQJBSIM ;
UPIBSIM.data[9] = A_UNITE(SRJBSIM,mode1,1,RRJBSIM);
 /* line 1928: */
 /* line 1929: */
ZAAAOSI_makervc( VRJBSIM, &WRJBSIM );
TRJBSIM.Name = WRJBSIM;
TRJBSIM.Abreviation = NTCAOST_nilid;
 /* line 1930: */
TRJBSIM.Parameter = TBAASIM_nodename_syntax;
TRJBSIM.Access = BNDAOST_hiddenaccess;
TRJBSIM.Continuation = ZNDAOST_continue;
 /* line 1934: */
ZAAAOSI_makervc( YRJBSIM, &ZRJBSIM );
TRJBSIM.Help = A_UNITE(ASJBSIM,mode1,1,ZRJBSIM);
DSJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
DSJBSIM.nonlocals = A68_NIL;
CSJBSIM = DSJBSIM ;
TRJBSIM.Command = A_UNITE(BSJBSIM,mode3,3,CSJBSIM);
 /* line 1936: */
ESJBSIM = A_HEAP(A68_338 ) ;
(*ESJBSIM) = TRJBSIM ;
UPIBSIM.data[10] = A_UNITE(FSJBSIM,mode1,1,ESJBSIM);
 /* line 1937: */
ZAAAOSI_makervc( ISJBSIM, &JSJBSIM );
GSJBSIM.Name = JSJBSIM;
ZAAAOSI_makervc( LSJBSIM, &MSJBSIM );
GSJBSIM.Abreviation = MSJBSIM;
GSJBSIM.Parameter = SRAAOST_noparameters;
 /* line 1938: */
GSJBSIM.Access = XMDAOST_normalaccess;
 /* line 1939: */
GSJBSIM.Continuation = ZNDAOST_continue;
 /* line 1941: */
ZAAAOSI_makervc( OSJBSIM, &PSJBSIM );
GSJBSIM.Help = A_UNITE(QSJBSIM,mode1,1,PSJBSIM);
TSJBSIM.fn.fn_global = LZHBSIM_freeformcmd;
TSJBSIM.nonlocals = A68_NIL;
SSJBSIM = TSJBSIM ;
GSJBSIM.Command = A_UNITE(RSJBSIM,mode3,3,SSJBSIM);
 /* line 1943: */
USJBSIM = A_HEAP(A68_338 ) ;
(*USJBSIM) = GSJBSIM ;
UPIBSIM.data[11] = A_UNITE(VSJBSIM,mode1,1,USJBSIM);
 /* line 1944: */
ZAAAOSI_makervc( YSJBSIM, &ZSJBSIM );
WSJBSIM.Name = ZSJBSIM;
 /* line 1945: */
ZAAAOSI_makervc( BTJBSIM, &CTJBSIM );
WSJBSIM.Abreviation = CTJBSIM;
DTJBSIM.data[0] = TBAASIM_nodename_syntax;
LTAAOST_opt( VXFAOST_trim_syntax, &ETJBSIM );
DTJBSIM.data[1] = A_UNITE(FTJBSIM,mode2,2,ETJBSIM);
DUAAOST_star( PGAASIM_values_syntax, &GTJBSIM );
DTJBSIM.data[2] = A_UNITE(HTJBSIM,mode2,2,GTJBSIM);
 /* line 1946: */
ATAAOST_prod( A_HISVEC(ITJBSIM,DTJBSIM,3,A68_292 ), &JTJBSIM );
WSJBSIM.Parameter = A_UNITE(KTJBSIM,mode2,2,JTJBSIM);
WSJBSIM.Access = XMDAOST_normalaccess;
 /* line 1948: */
WSJBSIM.Continuation = ZNDAOST_continue;
 /* line 1949: */
 /* line 1951: */
ZAAAOSI_makervc( MTJBSIM, &NTJBSIM );
WSJBSIM.Help = A_UNITE(OTJBSIM,mode1,1,NTJBSIM);
RTJBSIM.fn.fn_global = OZHBSIM_initialiseramcmd;
RTJBSIM.nonlocals = A68_NIL;
QTJBSIM = RTJBSIM ;
WSJBSIM.Command = A_UNITE(PTJBSIM,mode3,3,QTJBSIM);
 /* line 1953: */
STJBSIM = A_HEAP(A68_338 ) ;
(*STJBSIM) = WSJBSIM ;
UPIBSIM.data[12] = A_UNITE(TTJBSIM,mode1,1,STJBSIM);
 /* line 1954: */
 /* line 1955: */
ZAAAOSI_makervc( WTJBSIM, &XTJBSIM );
UTJBSIM.Name = XTJBSIM;
NAAAOSI_makervc( 'K', &YTJBSIM );
UTJBSIM.Abreviation = YTJBSIM;
LTAAOST_opt( TBAASIM_nodename_syntax, &ZTJBSIM );
DUAAOST_star( A_UNITE(AUJBSIM,mode2,2,ZTJBSIM), &BUJBSIM );
UTJBSIM.Parameter = A_UNITE(CUJBSIM,mode2,2,BUJBSIM);
 /* line 1956: */
UTJBSIM.Access = BNDAOST_hiddenaccess;
UTJBSIM.Continuation = ZNDAOST_continue;
 /* line 1962: */
ZAAAOSI_makervc( EUJBSIM, &FUJBSIM );
UTJBSIM.Help = A_UNITE(GUJBSIM,mode1,1,FUJBSIM);
JUJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
JUJBSIM.nonlocals = A68_NIL;
IUJBSIM = JUJBSIM ;
UTJBSIM.Command = A_UNITE(HUJBSIM,mode3,3,IUJBSIM);
 /* line 1964: */
KUJBSIM = A_HEAP(A68_338 ) ;
(*KUJBSIM) = UTJBSIM ;
UPIBSIM.data[13] = A_UNITE(LUJBSIM,mode1,1,KUJBSIM);
 /* line 1965: */
 /* line 1966: */
ZAAAOSI_makervc( OUJBSIM, &PUJBSIM );
MUJBSIM.Name = PUJBSIM;
MUJBSIM.Abreviation = NTCAOST_nilid;
QUJBSIM.data[0] = CJFAOST_fnname_syntax;
QUJBSIM.data[1] = IIFAOST_ident_syntax;
 /* line 1967: */
ATAAOST_prod( A_HISVEC(RUJBSIM,QUJBSIM,2,A68_292 ), &SUJBSIM );
MUJBSIM.Parameter = A_UNITE(TUJBSIM,mode2,2,SUJBSIM);
MUJBSIM.Access = BNDAOST_hiddenaccess;
MUJBSIM.Continuation = ZNDAOST_continue;
 /* line 1972: */
ZAAAOSI_makervc( VUJBSIM, &WUJBSIM );
MUJBSIM.Help = A_UNITE(XUJBSIM,mode1,1,WUJBSIM);
AVJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
AVJBSIM.nonlocals = A68_NIL;
ZUJBSIM = AVJBSIM ;
MUJBSIM.Command = A_UNITE(YUJBSIM,mode3,3,ZUJBSIM);
 /* line 1975: */
BVJBSIM = A_HEAP(A68_338 ) ;
(*BVJBSIM) = MUJBSIM ;
UPIBSIM.data[14] = A_UNITE(CVJBSIM,mode1,1,BVJBSIM);
 /* line 1976: */
 /* line 1977: */
ZAAAOSI_makervc( FVJBSIM, &GVJBSIM );
DVJBSIM.Name = GVJBSIM;
 /* line 1978: */
NAAAOSI_makervc( 'J', &HVJBSIM );
DVJBSIM.Abreviation = HVJBSIM;
JVJBSIM.data[0] = WFAASIM_query_syntax;
JVJBSIM.data[1] = TBAASIM_nodename_syntax;
PSAAOST_alt( A_HISVEC(KVJBSIM,JVJBSIM,2,A68_292 ), &LVJBSIM );
IVJBSIM.data[0] = A_UNITE(MVJBSIM,mode2,2,LVJBSIM);
IVJBSIM.data[1] = IIFAOST_ident_syntax;
 /* line 1979: */
ATAAOST_prod( A_HISVEC(NVJBSIM,IVJBSIM,2,A68_292 ), &OVJBSIM );
DVJBSIM.Parameter = A_UNITE(PVJBSIM,mode2,2,OVJBSIM);
DVJBSIM.Access = BNDAOST_hiddenaccess;
DVJBSIM.Continuation = ZNDAOST_continue;
 /* line 1985: */
ZAAAOSI_makervc( RVJBSIM, &SVJBSIM );
DVJBSIM.Help = A_UNITE(TVJBSIM,mode1,1,SVJBSIM);
WVJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
WVJBSIM.nonlocals = A68_NIL;
VVJBSIM = WVJBSIM ;
DVJBSIM.Command = A_UNITE(UVJBSIM,mode3,3,VVJBSIM);
 /* line 1987: */
XVJBSIM = A_HEAP(A68_338 ) ;
(*XVJBSIM) = DVJBSIM ;
UPIBSIM.data[15] = A_UNITE(YVJBSIM,mode1,1,XVJBSIM);
 /* line 1988: */
 /* line 1989: */
ZAAAOSI_makervc( BWJBSIM, &CWJBSIM );
ZVJBSIM.Name = CWJBSIM;
ZVJBSIM.Abreviation = NTCAOST_nilid;
 /* line 1990: */
ZVJBSIM.Parameter = IIFAOST_ident_syntax;
ZVJBSIM.Access = BNDAOST_hiddenaccess;
ZVJBSIM.Continuation = ZNDAOST_continue;
 /* line 1994: */
ZAAAOSI_makervc( EWJBSIM, &FWJBSIM );
ZVJBSIM.Help = A_UNITE(GWJBSIM,mode1,1,FWJBSIM);
JWJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
JWJBSIM.nonlocals = A68_NIL;
IWJBSIM = JWJBSIM ;
ZVJBSIM.Command = A_UNITE(HWJBSIM,mode3,3,IWJBSIM);
 /* line 1996: */
KWJBSIM = A_HEAP(A68_338 ) ;
(*KWJBSIM) = ZVJBSIM ;
UPIBSIM.data[16] = A_UNITE(LWJBSIM,mode1,1,KWJBSIM);
 /* line 1997: */
 /* line 1998: */
ZAAAOSI_makervc( OWJBSIM, &PWJBSIM );
MWJBSIM.Name = PWJBSIM;
MWJBSIM.Abreviation = NTCAOST_nilid;
 /* line 1999: */
MWJBSIM.Parameter = SRAAOST_noparameters;
MWJBSIM.Access = BNDAOST_hiddenaccess;
MWJBSIM.Continuation = ZNDAOST_continue;
 /* line 2003: */
ZAAAOSI_makervc( RWJBSIM, &SWJBSIM );
MWJBSIM.Help = A_UNITE(TWJBSIM,mode1,1,SWJBSIM);
WWJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
WWJBSIM.nonlocals = A68_NIL;
VWJBSIM = WWJBSIM ;
MWJBSIM.Command = A_UNITE(UWJBSIM,mode3,3,VWJBSIM);
 /* line 2005: */
XWJBSIM = A_HEAP(A68_338 ) ;
(*XWJBSIM) = MWJBSIM ;
UPIBSIM.data[17] = A_UNITE(YWJBSIM,mode1,1,XWJBSIM);
 /* line 2006: */
 /* line 2007: */
ZAAAOSI_makervc( BXJBSIM, &CXJBSIM );
ZWJBSIM.Name = CXJBSIM;
ZWJBSIM.Abreviation = NTCAOST_nilid;
DXJBSIM.data[0] = IIFAOST_ident_syntax;
DXJBSIM.data[1] = TBAASIM_nodename_syntax;
 /* line 2008: */
ATAAOST_prod( A_HISVEC(EXJBSIM,DXJBSIM,2,A68_292 ), &FXJBSIM );
ZWJBSIM.Parameter = A_UNITE(GXJBSIM,mode2,2,FXJBSIM);
ZWJBSIM.Access = BNDAOST_hiddenaccess;
ZWJBSIM.Continuation = ZNDAOST_continue;
 /* line 2013: */
ZAAAOSI_makervc( IXJBSIM, &JXJBSIM );
ZWJBSIM.Help = A_UNITE(KXJBSIM,mode1,1,JXJBSIM);
NXJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
NXJBSIM.nonlocals = A68_NIL;
MXJBSIM = NXJBSIM ;
ZWJBSIM.Command = A_UNITE(LXJBSIM,mode3,3,MXJBSIM);
 /* line 2015: */
OXJBSIM = A_HEAP(A68_338 ) ;
(*OXJBSIM) = ZWJBSIM ;
UPIBSIM.data[18] = A_UNITE(PXJBSIM,mode1,1,OXJBSIM);
 /* line 2016: */
ZAAAOSI_makervc( SXJBSIM, &TXJBSIM );
QXJBSIM.Name = TXJBSIM;
ZAAAOSI_makervc( VXJBSIM, &WXJBSIM );
QXJBSIM.Abreviation = WXJBSIM;
QXJBSIM.Parameter = SRAAOST_noparameters;
 /* line 2017: */
QXJBSIM.Access = XMDAOST_normalaccess;
 /* line 2019: */
QXJBSIM.Continuation = ZNDAOST_continue;
 /* line 2021: */
ZAAAOSI_makervc( YXJBSIM, &ZXJBSIM );
QXJBSIM.Help = A_UNITE(AYJBSIM,mode1,1,ZXJBSIM);
DYJBSIM.fn.fn_global = BLIBSIM_noprintcmd;
DYJBSIM.nonlocals = A68_NIL;
CYJBSIM = DYJBSIM ;
QXJBSIM.Command = A_UNITE(BYJBSIM,mode3,3,CYJBSIM);
 /* line 2023: */
EYJBSIM = A_HEAP(A68_338 ) ;
(*EYJBSIM) = QXJBSIM ;
UPIBSIM.data[19] = A_UNITE(FYJBSIM,mode1,1,EYJBSIM);
 /* line 2024: */
ZAAAOSI_makervc( IYJBSIM, &JYJBSIM );
GYJBSIM.Name = JYJBSIM;
 /* line 2025: */
NAAAOSI_makervc( 'R', &KYJBSIM );
GYJBSIM.Abreviation = KYJBSIM;
LTAAOST_opt( RKAASIM_time_syntax, &MYJBSIM );
LYJBSIM.data[0] = A_UNITE(NYJBSIM,mode2,2,MYJBSIM);
LTAAOST_opt( RKAASIM_time_syntax, &OYJBSIM );
LYJBSIM.data[1] = A_UNITE(PYJBSIM,mode2,2,OYJBSIM);
 /* line 2026: */
ATAAOST_prod( A_HISVEC(QYJBSIM,LYJBSIM,2,A68_292 ), &RYJBSIM );
GYJBSIM.Parameter = A_UNITE(SYJBSIM,mode2,2,RYJBSIM);
GYJBSIM.Access = BNDAOST_hiddenaccess;
GYJBSIM.Continuation = ZNDAOST_continue;
 /* line 2031: */
ZAAAOSI_makervc( UYJBSIM, &VYJBSIM );
GYJBSIM.Help = A_UNITE(WYJBSIM,mode1,1,VYJBSIM);
ZYJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
ZYJBSIM.nonlocals = A68_NIL;
YYJBSIM = ZYJBSIM ;
GYJBSIM.Command = A_UNITE(XYJBSIM,mode3,3,YYJBSIM);
 /* line 2033: */
AZJBSIM = A_HEAP(A68_338 ) ;
(*AZJBSIM) = GYJBSIM ;
UPIBSIM.data[20] = A_UNITE(BZJBSIM,mode1,1,AZJBSIM);
 /* line 2034: */
ZAAAOSI_makervc( EZJBSIM, &FZJBSIM );
CZJBSIM.Name = FZJBSIM;
ZAAAOSI_makervc( HZJBSIM, &IZJBSIM );
CZJBSIM.Abreviation = IZJBSIM;
 /* line 2035: */
LTAAOST_opt( HNFAOST_filename_syntax, &JZJBSIM );
CZJBSIM.Parameter = A_UNITE(KZJBSIM,mode2,2,JZJBSIM);
CZJBSIM.Access = BNDAOST_hiddenaccess;
CZJBSIM.Continuation = ZNDAOST_continue;
 /* line 2041: */
ZAAAOSI_makervc( MZJBSIM, &NZJBSIM );
CZJBSIM.Help = A_UNITE(OZJBSIM,mode1,1,NZJBSIM);
RZJBSIM.fn.fn_global = NEHBSIM_withdrawncmd;
RZJBSIM.nonlocals = A68_NIL;
QZJBSIM = RZJBSIM ;
CZJBSIM.Command = A_UNITE(PZJBSIM,mode3,3,QZJBSIM);
 /* line 2043: */
SZJBSIM = A_HEAP(A68_338 ) ;
(*SZJBSIM) = CZJBSIM ;
UPIBSIM.data[21] = A_UNITE(TZJBSIM,mode1,1,SZJBSIM);
 /* line 2044: */
 /* line 2045: */
ZAAAOSI_makervc( WZJBSIM, &XZJBSIM );
UZJBSIM.Name = XZJBSIM;
 /* line 2046: */
ZAAAOSI_makervc( ZZJBSIM, &AAKBSIM );
UZJBSIM.Abreviation = AAKBSIM;
LTAAOST_opt( OAFAOST_plus_syntax, &CAKBSIM );
BAKBSIM.data[0] = A_UNITE(DAKBSIM,mode2,2,CAKBSIM);
BAKBSIM.data[1] = AHFAOST_int_syntax;
ATAAOST_prod( A_HISVEC(EAKBSIM,BAKBSIM,2,A68_292 ), &FAKBSIM );
UZJBSIM.Parameter = A_UNITE(GAKBSIM,mode2,2,FAKBSIM);
UZJBSIM.Access = XMDAOST_normalaccess;
 /* line 2049: */
UZJBSIM.Continuation = ZNDAOST_continue;
 /* line 2050: */
 /* line 2051: */
 /* line 2052: */
 /* line 2053: */
 /* line 2055: */
ZAAAOSI_makervc( IAKBSIM, &JAKBSIM );
UZJBSIM.Help = A_UNITE(KAKBSIM,mode1,1,JAKBSIM);
NAKBSIM.fn.fn_global = JMIBSIM_scaletimecmd;
NAKBSIM.nonlocals = A68_NIL;
MAKBSIM = NAKBSIM ;
UZJBSIM.Command = A_UNITE(LAKBSIM,mode3,3,MAKBSIM);
 /* line 2057: */
OAKBSIM = A_HEAP(A68_338 ) ;
(*OAKBSIM) = UZJBSIM ;
UPIBSIM.data[22] = A_UNITE(PAKBSIM,mode1,1,OAKBSIM);
 /* line 2058: */
 /* line 2059: */
ZAAAOSI_makervc( SAKBSIM, &TAKBSIM );
QAKBSIM.Name = TAKBSIM;
QAKBSIM.Abreviation = NTCAOST_nilid;
QAKBSIM.Parameter = CJFAOST_fnname_syntax;
 /* line 2060: */
QAKBSIM.Access = XMDAOST_normalaccess;
 /* line 2061: */
QAKBSIM.Continuation = ZNDAOST_continue;
 /* line 2064: */
ZAAAOSI_makervc( VAKBSIM, &WAKBSIM );
QAKBSIM.Help = A_UNITE(XAKBSIM,mode1,1,WAKBSIM);
ABKBSIM.fn.fn_global = ZMIBSIM_simulatefncmd;
ABKBSIM.nonlocals = A68_NIL;
ZAKBSIM = ABKBSIM ;
QAKBSIM.Command = A_UNITE(YAKBSIM,mode3,3,ZAKBSIM);
 /* line 2066: */
BBKBSIM = A_HEAP(A68_338 ) ;
(*BBKBSIM) = QAKBSIM ;
UPIBSIM.data[23] = A_UNITE(CBKBSIM,mode1,1,BBKBSIM);
 /* line 2067: */
ZAAAOSI_makervc( FBKBSIM, &GBKBSIM );
DBKBSIM.Name = GBKBSIM;
NAAAOSI_makervc( 'T', &HBKBSIM );
DBKBSIM.Abreviation = HBKBSIM;
DBKBSIM.Parameter = SRAAOST_noparameters;
 /* line 2068: */
DBKBSIM.Access = XMDAOST_normalaccess;
 /* line 2070: */
DBKBSIM.Continuation = ZNDAOST_continue;
 /* line 2072: */
ZAAAOSI_makervc( JBKBSIM, &KBKBSIM );
DBKBSIM.Help = A_UNITE(LBKBSIM,mode1,1,KBKBSIM);
OBKBSIM.fn.fn_global = NNIBSIM_tabulatedcmd;
OBKBSIM.nonlocals = A68_NIL;
NBKBSIM = OBKBSIM ;
DBKBSIM.Command = A_UNITE(MBKBSIM,mode3,3,NBKBSIM);
 /* line 2074: */
PBKBSIM = A_HEAP(A68_338 ) ;
(*PBKBSIM) = DBKBSIM ;
UPIBSIM.data[24] = A_UNITE(QBKBSIM,mode1,1,PBKBSIM);
 /* line 2075: */
 /* line 2076: */
ZAAAOSI_makervc( TBKBSIM, &UBKBSIM );
RBKBSIM.Name = UBKBSIM;
 /* line 2077: */
ZAAAOSI_makervc( WBKBSIM, &XBKBSIM );
RBKBSIM.Abreviation = XBKBSIM;
LTAAOST_opt( OAFAOST_plus_syntax, &ZBKBSIM );
YBKBSIM.data[0] = A_UNITE(ACKBSIM,mode2,2,ZBKBSIM);
YBKBSIM.data[1] = AHFAOST_int_syntax;
 /* line 2078: */
ATAAOST_prod( A_HISVEC(BCKBSIM,YBKBSIM,2,A68_292 ), &CCKBSIM );
RBKBSIM.Parameter = A_UNITE(DCKBSIM,mode2,2,CCKBSIM);
RBKBSIM.Access = XMDAOST_normalaccess;
 /* line 2080: */
RBKBSIM.Continuation = ZNDAOST_continue;
 /* line 2082: */
ZAAAOSI_makervc( FCKBSIM, &GCKBSIM );
RBKBSIM.Help = A_UNITE(HCKBSIM,mode1,1,GCKBSIM);
KCKBSIM.fn.fn_global = FOIBSIM_timecmd;
KCKBSIM.nonlocals = A68_NIL;
JCKBSIM = KCKBSIM ;
RBKBSIM.Command = A_UNITE(ICKBSIM,mode3,3,JCKBSIM);
 /* line 2084: */
LCKBSIM = A_HEAP(A68_338 ) ;
(*LCKBSIM) = RBKBSIM ;
UPIBSIM.data[25] = A_UNITE(MCKBSIM,mode1,1,LCKBSIM);
 /* line 2085: */
ZAAAOSI_makervc( PCKBSIM, &QCKBSIM );
NCKBSIM.Name = QCKBSIM;
NCKBSIM.Abreviation = EOAAOSL_nullstr;
NCKBSIM.Parameter = SRAAOST_noparameters;
NCKBSIM.Access = BNDAOST_hiddenaccess;
 /* line 2086: */
NCKBSIM.Continuation = DODAOST_return;
 /* line 2088: */
ZAAAOSI_makervc( SCKBSIM, &TCKBSIM );
NCKBSIM.Help = A_UNITE(UCKBSIM,mode1,1,TCKBSIM);
 /* line 2089: */
WCKBSIM.fn.fn_global = MMDAOST_nullcommand;
WCKBSIM.nonlocals = A68_NIL;
NCKBSIM.Command = A_UNITE(VCKBSIM,mode2,2,WCKBSIM);
XCKBSIM = A_HEAP(A68_338 ) ;
(*XCKBSIM) = NCKBSIM ;
UPIBSIM.data[26] = A_UNITE(YCKBSIM,mode1,1,XCKBSIM);
ARDAOST_makecommands( A_HISVEC(ADKBSIM,UPIBSIM,27,A68_337 ), &BDKBSIM );
ZCKBSIM = BDKBSIM;
A_PROC_EXIT(make_sim_commands);
*ReturnedValue = (ZCKBSIM);
return;
} 
#undef NL

A68_VOID  EDKBSIM_sim_startup(A68_128 * Simfile, A68_70  Flt)
{ 
A68_VC  FDKBSIM_title;
A68_VC  IDKBSIM;  /* avoid structure result */
A68_VC  LDKBSIM;  /* avoid structure result */
A_PROC_ENTRY(sim_startup);
 /* line 2109: */
 /* line 2110: */
{ 
 /* line 2112: */
XZGBSIM_initialiseshell(Simfile, Flt);
 /* line 2113: */
ZTHBSIM_setcpcache();
 /* line 2114: */
VWGBSIM_simulateandmonitor(0, A_LOC(A68_BOOL ), A_LOC(A68_BOOL ), Flt);
 /* line 2115: */
ZAAAOSI_makervc( HDKBSIM, &IDKBSIM );
RPAASIM_presentsimprompt = IDKBSIM;
 /* line 2116: */
(*QPAASIM_simprompt) = RPAASIM_presentsimprompt;
 /* line 2117: */
 /* line 2118: */
 /* line 2121: */
ZAAAOSI_makervc( A_VC_PLUS((*QPAASIM_simprompt),KDKBSIM), &LDKBSIM );
SPAASIM_pastsimprompt = LDKBSIM;
} 
A_PROC_EXIT(sim_startup);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 7: */
void SBHBSIM(void)   /* initialise DECS simcmd */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simcmd.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/simreader.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","./mfiles/kernel.m","./mfiles/simtime.m","./mfiles/simstart.m","./mfiles/simrun.m","./mfiles/simprompt.m","./mfiles/simpoke.m","./mfiles/simpeek.m","./mfiles/simpast.m","./mfiles/simnode.m","./mfiles/simtable.m","./mfiles/simmonitor.m","./mfiles/simbasics.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WAAASIM();   /* USE simreader */
TIGAOST();   /* USE ioprocs */
FMDAOST();   /* USE command */
TXEAOST();   /* USE kernelreader */
LRAAOST();   /* USE commandsyntax */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
XWBBSIM();   /* USE kernel */
TPAASIM();   /* USE simtime */
XXGBSIM();   /* USE simstart */
UVGBSIM();   /* USE simrun */
LPAASIM();   /* USE simprompt */
SKEBSIM();   /* USE simpoke */
FFEBSIM();   /* USE simpeek */
TRFBSIM();   /* USE simpast */
RZEBSIM();   /* USE simnode */
ZFDBSIM();   /* USE simtable */
FSFBSIM();   /* USE simmonitor */
FQAASIM();   /* USE simbasics */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simcmd.a68";
A_config.translation_time = "Tue Apr  4 11:15:17 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "RBHBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:15:17 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simcmd);
UEAALIB_a68config(LGAALIB_configinfo, WBHBSIM);
 /* line 138: */
 /* line 188: */
 /* line 238: */
 /* line 244: */
 /* line 254: */
 /* line 294: */
 /* line 329: */
 /* line 335: */
 /* line 345: */
 /* line 361: */
 /* line 367: */
 /* line 378: */
 /* line 389: */
 /* line 400: */
 /* line 411: */
 /* line 432: */
 /* line 463: */
 /* line 496: */
 /* line 509: */
 /* line 523: */
 /* line 591: */
 /* line 622: */
 /* line 644: */
 /* line 650: */
 /* line 656: */
 /* line 662: */
 /* line 668: */
 /* line 674: */
 /* line 680: */
 /* line 686: */
 /* line 692: */
 /* line 710: */
 /* line 732: */
 /* line 738: */
 /* line 744: */
 /* line 750: */
 /* line 751: */
 /* line 752: */
 /* line 753: */
 /* line 754: */
 /* line 756: */
 /* line 757: */
 /* line 759: */
 /* line 778: */
 /* line 819: */
 /* line 867: */
 /* line 893: */
 /* line 912: */
 /* line 918: */
 /* line 960: */
 /* line 1008: */
 /* line 1032: */
 /* line 1103: */
 /* line 1120: */
 /* line 1131: */
 /* line 1153: */
 /* line 1200: */
 /* line 1218: */
 /* line 1231: */
 /* line 1236: */
 /* line 1334: */
 /* line 1357: */
 /* line 1374: */
 /* line 1378: */
 /* line 1381: */
 /* line 1404: */
 /* line 1527: */
 /* line 1529: */
 /* line 2108: */
 /* line 2122: */
A_PROC_EXIT(DECS simcmd);
} 
#undef NL
/* end of translation of ./a68files/simcmd.a68 */
