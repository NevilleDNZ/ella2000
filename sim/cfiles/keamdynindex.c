
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
/* UNAME:ONWASIM */
#include "Asupport.h"
struct A68t31{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t31  A68_31 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t32{
A68_VC  Id;
struct A68t32 * Rest;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(REF MODE26,REF MODE32)  */
struct A68t33{
A68_INT  Int;
A_PAD_INT(PAD_1)
struct A68t33 * Rest;
};
typedef struct A68t33  A68_33 ;    /* STRUCT(INT,REF MODE33)  */
struct A68t34 { A68_INT mode; union {
struct A68t35 * mode1;
struct A68t36 * mode2;
struct A68t37 * mode3;
struct A68t38 * mode4;
struct A68t39 * mode5;
} data; };
typedef struct A68t34  A68_34 ;    /* UNION(REF MODE35,REF MODE36,REF MODE37,REF MODE38,REF MODE39)  */
struct A68t35{
A68_INT  Attrno;
A_PAD_INT(PAD_2)
};
typedef struct A68t35  A68_35 ;    /* STRUCT(INT)  */
struct A68t36{
A68_VC  Classname;
struct A68t32 * Strings;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(REF MODE26,REF MODE32)  */
struct A68t37{
struct A68t34  Elem;
struct A68t37 * Rest;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(MODE34,REF MODE37)  */
struct A68t38{
struct A68t34  Attr;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(MODE34)  */
struct A68t39{
A68_INT  Attrnull;
A_PAD_INT(PAD_3)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT)  */
struct A68t40{
A68_INT  Sort;
A_PAD_INT(PAD_4)
A68_VC  Attrname;
struct A68t34  Value;
struct A68t41 * Usage;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT,REF MODE26,MODE34,REF MODE41)  */
struct A68t41{
A68_INT  Contextno;
A_PAD_INT(PAD_5)
A68_INT  Closureno;
A_PAD_INT(PAD_6)
A68_INT  Libv_spec;
A_PAD_INT(PAD_7)
A68_INT  Libv_body;
A_PAD_INT(PAD_8)
A68_BOOL  Import;
A_PAD_BOOL(PAD_9)
A68_BOOL  Export;
A_PAD_BOOL(PAD_10)
};
typedef struct A68t41  A68_41 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t42{
struct A68t34  Tag;
};
typedef struct A68t42  A68_42 ;    /* STRUCT(MODE34)  */
struct A68t43 { A68_INT mode; union {
struct A68t44 * mode1;
struct A68t45 * mode2;
struct A68t46 * mode3;
struct A68t47 * mode4;
struct A68t48 * mode5;
struct A68t49 * mode6;
struct A68t50 * mode7;
struct A68t51 * mode8;
struct A68t52 * mode9;
struct A68t53 * mode10;
} data; };
typedef struct A68t43  A68_43 ;    /* UNION(REF MODE44,REF MODE45,REF MODE46,REF MODE47,REF MODE48,REF MODE49,REF MODE50,REF MODE51,REF MODE52,REF MODE53)  */
struct A68t44{
A68_INT  Int;
A_PAD_INT(PAD_11)
A68_VC  Text;
};
typedef struct A68t44  A68_44 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t45{
A68_INT  Sort;
A_PAD_INT(PAD_12)
struct A68t43  Test;
struct A68t43  Standard;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(INT,MODE43,MODE43)  */
struct A68t46{
A68_INT  Nameno;
A_PAD_INT(PAD_13)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(INT)  */
struct A68t47{
A68_INT  Intno;
A_PAD_INT(PAD_14)
};
typedef struct A68t47  A68_47 ;    /* STRUCT(INT)  */
struct A68t48{
struct A68t43  Left;
A68_INT  Sort;
A_PAD_INT(PAD_15)
struct A68t43  Right;
};
typedef struct A68t48  A68_48 ;    /* STRUCT(MODE43,INT,MODE43)  */
struct A68t49{
A68_INT  Sort;
A_PAD_INT(PAD_16)
struct A68t43  Right;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(INT,MODE43)  */
struct A68t50{
struct A68t43  Cond;
struct A68t43  True;
struct A68t43  False;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(MODE43,MODE43,MODE43)  */
struct A68t51{
struct A68t43  Formula;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(MODE43)  */
struct A68t52{
A68_INT  Macparno;
A_PAD_INT(PAD_17)
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT)  */
struct A68t53{
A68_INT  Fnull;
A_PAD_INT(PAD_18)
};
typedef struct A68t53  A68_53 ;    /* STRUCT(INT)  */
struct A68t54{
struct A68t43  Tag;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(MODE43)  */
struct A68t55{
struct A68t43  Formula;
struct A68t55 * Rest;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(MODE43,REF MODE55)  */
struct A68t58{
struct A68t43  Lwb;
struct A68t43  Upb;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE43,MODE43)  */
struct A68t57 { A68_INT mode; union {
struct A68t44 * mode1;
struct A68t45 * mode2;
struct A68t46 * mode3;
struct A68t47 * mode4;
struct A68t48 * mode5;
struct A68t49 * mode6;
struct A68t50 * mode7;
struct A68t51 * mode8;
struct A68t52 * mode9;
struct A68t53 * mode10;
struct A68t58  mode11;
} data; };
typedef struct A68t57  A68_57 ;    /* UNION(REF MODE44,REF MODE45,REF MODE46,REF MODE47,REF MODE48,REF MODE49,REF MODE50,REF MODE51,REF MODE52,REF MODE53,MODE58)  */
struct A68t56{
A68_INT  Sort;
A_PAD_INT(PAD_19)
A68_VC  Intname;
struct A68t34  Attr;
struct A68t57  Value;
struct A68t41 * Usage;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,REF MODE26,MODE34,MODE57,REF MODE41)  */
struct A68t59 { A68_INT mode; union {
struct A68t60 * mode1;
struct A68t61 * mode2;
struct A68t62 * mode3;
struct A68t63 * mode4;
struct A68t64 * mode5;
struct A68t65 * mode6;
struct A68t66 * mode7;
struct A68t52 * mode8;
struct A68t67 * mode9;
} data; };
typedef struct A68t59  A68_59 ;    /* UNION(REF MODE60,REF MODE61,REF MODE62,REF MODE63,REF MODE64,REF MODE65,REF MODE66,REF MODE52,REF MODE67)  */
struct A68t60{
A68_INT  Typeno;
A_PAD_INT(PAD_20)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */
struct A68t61{
struct A68t43  Size;
struct A68t59  Elem;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(MODE43,MODE59)  */
struct A68t62{
struct A68t59  Elem;
struct A68t62 * Rest;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(MODE59,REF MODE62)  */
struct A68t63{
struct A68t59  From;
struct A68t59  To;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE59,MODE59)  */
struct A68t64{
struct A68t59  Type;
};
typedef struct A68t64  A68_64 ;    /* STRUCT(MODE59)  */
struct A68t65{
struct A68t43  Size;
struct A68t59  Char;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(MODE43,MODE59)  */
struct A68t66{
A68_INT  Tvoid;
A_PAD_INT(PAD_21)
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT)  */
struct A68t67{
A68_INT  Tnull;
A_PAD_INT(PAD_22)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t68{
struct A68t59  Tag;
};
typedef struct A68t68  A68_68 ;    /* STRUCT(MODE59)  */
struct A68t69{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t69  A68_69 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t70{
A68_VC  Altname;
struct A68t59  Assoc;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(REF MODE26,MODE59)  */
struct A68t71{
A68_VC  Tagname;
struct A68t58  Range;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(REF MODE26,MODE58)  */
A_VECTOR(struct A68t70 ,A68t73);
typedef struct A68t73  A68_73 ;    /* VECTOR [] MODE70 */
struct A68t72 { A68_INT mode; union {
struct A68t73  mode1;
struct A68t71 * mode2;
struct A68t68 * mode3;
struct A68t69 * mode4;
} data; };
typedef struct A68t72  A68_72 ;    /* UNION(REF MODE73,REF MODE71,REF MODE68,REF MODE69)  */
struct A68t74{
A68_INT  Sort;
A_PAD_INT(PAD_23)
A68_VC  Typename;
struct A68t34  Attr;
struct A68t72  Body;
struct A68t41 * Usage;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(INT,REF MODE26,MODE34,MODE72,REF MODE41)  */
struct A68t75{
A68_INT  Constno;
A_PAD_INT(PAD_24)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT)  */
struct A68t76{
A68_INT  Typeno;
A_PAD_INT(PAD_25)
A68_INT  Primno;
A_PAD_INT(PAD_26)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT,INT)  */
struct A68t77{
A68_INT  Typeno;
A_PAD_INT(PAD_27)
struct A68t43  Index;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,MODE43)  */
struct A68t78{
A68_INT  Typeno;
A_PAD_INT(PAD_28)
struct A68t58  Range;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT,MODE58)  */
struct A68t79{
struct A68t59  Querytype;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(MODE59)  */
struct A68t81 { A68_INT mode; union {
struct A68t75 * mode1;
struct A68t76 * mode2;
struct A68t77 * mode3;
struct A68t79 * mode4;
struct A68t82 * mode5;
struct A68t83 * mode6;
struct A68t64 * mode7;
struct A68t78 * mode8;
struct A68t84 * mode9;
struct A68t85 * mode10;
struct A68t86 * mode11;
struct A68t87 * mode12;
struct A68t88 * mode13;
struct A68t89 * mode14;
struct A68t90 * mode15;
struct A68t91 * mode16;
struct A68t92 * mode17;
struct A68t93 * mode18;
struct A68t94 * mode19;
struct A68t95 * mode20;
struct A68t96 * mode21;
struct A68t97 * mode22;
struct A68t98 * mode23;
struct A68t99 * mode24;
struct A68t100 * mode25;
struct A68t101 * mode26;
struct A68t102 * mode27;
struct A68t103 * mode28;
struct A68t104 * mode29;
struct A68t105 * mode30;
struct A68t106 * mode31;
struct A68t107 * mode32;
struct A68t108 * mode33;
struct A68t109 * mode34;
} data; };
typedef struct A68t81  A68_81 ;    /* UNION(REF MODE75,REF MODE76,REF MODE77,REF MODE79,REF MODE82,REF MODE83,REF MODE64,REF MODE78,REF MODE84,REF MODE85,REF MODE86,REF MODE87,REF MODE88,REF MODE89,REF MODE90,REF MODE91,REF MODE92,REF MODE93,REF MODE94,REF MODE95,REF MODE96,REF MODE97,REF MODE98,REF MODE99,REF MODE100,REF MODE101,REF MODE102,REF MODE103,REF MODE104,REF MODE105,REF MODE106,REF MODE107,REF MODE108,REF MODE109)  */
struct A68t80{
A68_INT  Sort;
A_PAD_INT(PAD_29)
A68_VC  Constname;
struct A68t34  Attr;
struct A68t81  Value;
struct A68t41 * Usage;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT,REF MODE26,MODE34,MODE81,REF MODE41)  */
A_VECTOR(A68_INT ,A68t142);
typedef struct A68t142  A68_142 ;    /* VECTOR [] INT */
struct A68t82{
A68_INT  Typeno;
A_PAD_INT(PAD_30)
struct A68t142  String;
};
typedef struct A68t82  A68_82 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t83{
A68_INT  Cvoid;
A_PAD_INT(PAD_31)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(INT)  */
struct A68t84{
A68_INT  Typeno;
A_PAD_INT(PAD_32)
A68_INT  Firstno;
A_PAD_INT(PAD_33)
A68_INT  Lastno;
A_PAD_INT(PAD_34)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT,INT,INT)  */
struct A68t85{
struct A68t81  Alt;
struct A68t85 * Rest;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE81,REF MODE85)  */
struct A68t86{
A68_INT  Sort;
A_PAD_INT(PAD_35)
A68_INT  Nameno;
A_PAD_INT(PAD_36)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT,INT)  */
struct A68t87{
struct A68t81  Sink;
struct A68t81  Source;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(MODE81,MODE81)  */
struct A68t88{
A68_INT  Typeno;
A_PAD_INT(PAD_37)
A68_INT  Altno;
A_PAD_INT(PAD_38)
struct A68t81  Assoc;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT,INT,MODE81)  */
struct A68t89{
struct A68t81  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_39)
A68_INT  Altno;
A_PAD_INT(PAD_40)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(MODE81,INT,INT)  */
struct A68t90{
struct A68t81  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_41)
A68_INT  Nameno;
A_PAD_INT(PAD_42)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE81,INT,INT)  */
struct A68t91{
struct A68t81  Unit;
struct A68t43  Index;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(MODE81,MODE43)  */
struct A68t92{
struct A68t81  Unit;
struct A68t58  Range;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(MODE81,MODE58)  */
struct A68t93{
struct A68t81  Unit;
struct A68t81  Index;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(MODE81,MODE81)  */
struct A68t94{
struct A68t81  Unit;
struct A68t81  Index;
struct A68t81  From;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE81,MODE81,MODE81)  */
struct A68t95{
struct A68t43  Size;
struct A68t81  Elem;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE43,MODE81)  */
struct A68t96{
struct A68t81  Elem;
struct A68t96 * Rest;
};
typedef struct A68t96  A68_96 ;    /* STRUCT(MODE81,REF MODE96)  */
struct A68t97{
A68_BOOL  String;
A_PAD_BOOL(PAD_43)
A68_INT  Sort;
A_PAD_INT(PAD_44)
struct A68t81  Left;
struct A68t81  Right;
};
typedef struct A68t97  A68_97 ;    /* STRUCT(BOOL,INT,MODE81,MODE81)  */
A_VECTOR(struct A68t124 ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] MODE124 */
struct A68t126{
struct A68t81  Tag;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE81)  */
struct A68t121{
A68_INT  Fnno;
A_PAD_INT(PAD_45)
struct A68t123  Macparams;
struct A68t34  Attr;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,REF MODE123,MODE34)  */
struct A68t125 { A68_INT mode; union {
struct A68t42  mode1;
struct A68t54  mode2;
struct A68t68  mode3;
struct A68t126  mode4;
struct A68t121  mode5;
} data; };
typedef struct A68t125  A68_125 ;    /* UNION(MODE42,MODE54,MODE68,MODE126,MODE121)  */
struct A68t124{
A68_INT  Sort;
A_PAD_INT(PAD_46)
struct A68t125  Param;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,MODE125)  */
struct A68t98{
struct A68t121  Inst;
struct A68t81  Right;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE121,MODE81)  */
struct A68t99{
struct A68t81  Left;
struct A68t121  Inst;
struct A68t81  Right;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(MODE81,MODE121,MODE81)  */
struct A68t100{
struct A68t81  Input;
struct A68t141 * Choices;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE81,REF MODE141)  */
struct A68t101{
struct A68t43  Cond;
struct A68t81  True;
struct A68t81  False;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE43,MODE81,MODE81)  */
struct A68t102{
struct A68t43  Repl;
struct A68t81  Body;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(MODE43,MODE81)  */
struct A68t103{
struct A68t129 * Body;
struct A68t81  Output;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(REF MODE129,MODE81)  */
struct A68t104{
struct A68t110 * Body;
struct A68t81  Output;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(REF MODE110,MODE81)  */
struct A68t105{
struct A68t81  Unit;
struct A68t34  Attr;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE81,MODE34)  */
struct A68t106{
struct A68t81  Unit;
struct A68t45  Check;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(MODE81,MODE45)  */
struct A68t107{
struct A68t81  Unit;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(MODE81)  */
struct A68t108{
struct A68t43  Size;
struct A68t81  Char;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE43,MODE81)  */
struct A68t109{
A68_INT  Unull;
A_PAD_INT(PAD_47)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT)  */
struct A68t112{
A68_INT  Fnno;
A_PAD_INT(PAD_48)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT)  */
struct A68t111 { A68_INT mode; union {
struct A68t35  mode1;
struct A68t47  mode2;
struct A68t60  mode3;
struct A68t75  mode4;
struct A68t112  mode5;
struct A68t113 * mode6;
struct A68t114 * mode7;
struct A68t115 * mode8;
struct A68t116 * mode9;
struct A68t117 * mode10;
struct A68t118 * mode11;
struct A68t119 * mode12;
} data; };
typedef struct A68t111  A68_111 ;    /* UNION(MODE35,MODE47,MODE60,MODE75,MODE112,REF MODE113,REF MODE114,REF MODE115,REF MODE116,REF MODE117,REF MODE118,REF MODE119)  */
struct A68t110{
struct A68t111  Step;
struct A68t110 * Rest;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(MODE111,REF MODE110)  */
struct A68t113{
struct A68t43  Cond;
struct A68t127 * Print;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(MODE43,REF MODE127)  */
struct A68t114{
struct A68t43  Cond;
struct A68t127 * Fault;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE43,REF MODE127)  */
struct A68t115{
struct A68t122 * Letnames;
struct A68t81  Unit;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE122,MODE81)  */
struct A68t116{
struct A68t55 * Sizes;
struct A68t121  Inst;
struct A68t122 * Makenames;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(REF MODE55,MODE121,REF MODE122)  */
struct A68t117{
struct A68t81  From;
struct A68t81  To;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(MODE81,MODE81)  */
struct A68t118{
struct A68t55 * Repls;
struct A68t120 * Joins;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE55,REF MODE120)  */
struct A68t119{
A68_INT  Stepnull;
A_PAD_INT(PAD_49)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT)  */
struct A68t120{
struct A68t117  Join;
struct A68t120 * Rest;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(MODE117,REF MODE120)  */
struct A68t122{
A68_INT  Nameno;
A_PAD_INT(PAD_50)
struct A68t122 * Rest;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,REF MODE122)  */
struct A68t128 { A68_INT mode; union {
A68_VC  mode1;
struct A68t54 * mode2;
} data; };
typedef struct A68t128  A68_128 ;    /* UNION(REF MODE26,REF MODE54)  */
struct A68t127{
struct A68t128  Item;
struct A68t127 * Rest;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE128,REF MODE127)  */
struct A68t130 { A68_INT mode; union {
struct A68t35  mode1;
struct A68t47  mode2;
struct A68t60  mode3;
struct A68t75  mode4;
struct A68t112  mode5;
struct A68t113 * mode6;
struct A68t114 * mode7;
struct A68t131 * mode8;
struct A68t132 * mode9;
struct A68t133 * mode10;
struct A68t134 * mode11;
struct A68t135 * mode12;
struct A68t136 * mode13;
struct A68t137 * mode14;
struct A68t138 * mode15;
struct A68t129 * mode16;
struct A68t139 * mode17;
} data; };
typedef struct A68t130  A68_130 ;    /* UNION(MODE35,MODE47,MODE60,MODE75,MODE112,REF MODE113,REF MODE114,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE129,REF MODE139)  */
struct A68t129{
struct A68t130  Step;
struct A68t129 * Rest;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE130,REF MODE129)  */
struct A68t131{
struct A68t115  Seqlet;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(MODE115)  */
struct A68t132{
struct A68t115  Seqvar;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(MODE115)  */
struct A68t133{
struct A68t122 * Pvarnames;
struct A68t81  Init;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(REF MODE122,MODE81)  */
struct A68t134{
struct A68t81  To;
struct A68t81  From;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE81,MODE81)  */
struct A68t135{
struct A68t81  Input;
struct A68t140 * Choices;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE81,REF MODE140)  */
struct A68t136{
struct A68t43  Cond;
struct A68t130  True;
struct A68t130  False;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE43,MODE130,MODE130)  */
struct A68t137{
struct A68t43  Repl;
struct A68t130  Body;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(MODE43,MODE130)  */
struct A68t138{
A68_INT  Seqnull;
A_PAD_INT(PAD_51)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t139{
struct A68t43  Size;
struct A68t130  Elem;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(MODE43,MODE130)  */
struct A68t140{
A68_BOOL  Check;
A_PAD_BOOL(PAD_52)
A68_INT  Sort;
A_PAD_INT(PAD_53)
struct A68t81  Test;
struct A68t130  Output;
struct A68t140 * Rest;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(BOOL,INT,MODE81,MODE130,REF MODE140)  */
struct A68t141{
A68_BOOL  Check;
A_PAD_BOOL(PAD_54)
A68_INT  Sort;
A_PAD_INT(PAD_55)
struct A68t81  Test;
struct A68t81  Output;
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(BOOL,INT,MODE81,MODE81,REF MODE141)  */
struct A68t143 { A68_INT mode; union {
struct A68t35  mode1;
struct A68t47  mode2;
struct A68t60  mode3;
struct A68t75  mode4;
struct A68t112  mode5;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(MODE35,MODE47,MODE60,MODE75,MODE112)  */
struct A68t144{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_56)
A68_VC  Name;
struct A68t123  Macparams;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(BOOL,REF MODE26,REF MODE123)  */
struct A68t145{
struct A68t43  Output;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(MODE43)  */
struct A68t146{
A68_INT  Reform;
A_PAD_INT(PAD_57)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT)  */
struct A68t147{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_58)
struct A68t31  Ctname;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE26,INT,MODE31)  */
struct A68t148{
A68_INT  Sort;
A_PAD_INT(PAD_59)
struct A68t81  Init;
struct A68t43  Ambigtime;
struct A68t81  Ambig;
struct A68t43  Delaytime;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,MODE81,MODE43,MODE81,MODE43)  */
struct A68t149{
struct A68t81  Init;
struct A68t43  Delaytime;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE81,MODE43)  */
struct A68t150{
struct A68t81  Init;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE81)  */
struct A68t151{
A68_INT  Sort;
A_PAD_INT(PAD_60)
struct A68t43  Interval;
struct A68t81  Init;
struct A68t43  Skew;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT,MODE43,MODE81,MODE43)  */
struct A68t152{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_61)
A68_INT  Sort;
A_PAD_INT(PAD_62)
struct A68t121  Inst;
struct A68t43  Scale;
struct A68t81  Init;
struct A68t43  Skew;
};
typedef struct A68t152  A68_152 ;    /* STRUCT(BOOL,INT,MODE121,MODE43,MODE81,MODE43)  */
struct A68t154 { A68_INT mode; union {
struct A68t126 * mode1;
struct A68t144 * mode2;
struct A68t145 * mode3;
struct A68t146 * mode4;
struct A68t147 * mode5;
struct A68t148 * mode6;
struct A68t149 * mode7;
struct A68t150 * mode8;
struct A68t151 * mode9;
struct A68t152 * mode10;
struct A68t153 * mode11;
struct A68t155 * mode12;
} data; };
typedef struct A68t154  A68_154 ;    /* UNION(REF MODE126,REF MODE144,REF MODE145,REF MODE146,REF MODE147,REF MODE148,REF MODE149,REF MODE150,REF MODE151,REF MODE152,REF MODE153,REF MODE155)  */
struct A68t153{
struct A68t33 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_63)
struct A68t154  Fnbody;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE33,BOOL,MODE154)  */
struct A68t155{
A68_INT  Bodynull;
A_PAD_INT(PAD_64)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT)  */
struct A68t156{
A68_INT  Sort;
A_PAD_INT(PAD_65)
struct A68t143  Spec;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,MODE143)  */
struct A68t157{
A68_VC  Name;
struct A68t59  Type;
struct A68t34  Attr;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,MODE59,MODE34)  */
A_VECTOR(struct A68t156 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE156 */
A_VECTOR(struct A68t157 ,A68t160);
typedef struct A68t160  A68_160 ;    /* VECTOR [] MODE157 */
struct A68t158{
A68_INT  Sort;
A_PAD_INT(PAD_66)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_67)
A68_VC  Fnname;
struct A68t159  Macspecs;
struct A68t34  Attr;
struct A68t122 * Inputs;
struct A68t122 * Outputs;
struct A68t160  Nametypes;
struct A68t154  Fnbody;
struct A68t41 * Usage;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE159,MODE34,REF MODE122,REF MODE122,REF MODE160,MODE154,REF MODE41)  */
A_VECTOR(struct A68t40 *,A68t162);
typedef struct A68t162  A68_162 ;    /* VECTOR [] REF MODE40 */
A_VECTOR(struct A68t56 *,A68t163);
typedef struct A68t163  A68_163 ;    /* VECTOR [] REF MODE56 */
A_VECTOR(struct A68t74 *,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] REF MODE74 */
A_VECTOR(struct A68t80 *,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] REF MODE80 */
A_VECTOR(struct A68t158 *,A68t166);
typedef struct A68t166  A68_166 ;    /* VECTOR [] REF MODE158 */
struct A68t161{
struct A68t162  Attrs;
struct A68t163  Ints;
struct A68t164  Types;
struct A68t165  Consts;
struct A68t166  Fns;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE162,REF MODE163,REF MODE164,REF MODE165,REF MODE166)  */
struct A68t167{
A68_INT  Closureno;
A_PAD_INT(PAD_68)
A68_INT  Sort;
A_PAD_INT(PAD_69)
struct A68t161 * Environ;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,REF MODE161)  */
struct A68t168{
struct A68t167  Outer;
struct A68t168 * Rest;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE167,REF MODE168)  */
A_VECTOR(struct A68t168 ,A68t170);
typedef struct A68t170  A68_170 ;    /* VECTOR [] MODE168 */
struct A68t169{
struct A68t170  Outers;
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(REF MODE170,REF MODE169)  */
struct A68t171{
A68_INT  Max_closureno;
A_PAD_INT(PAD_70)
struct A68t168 * Outers;
struct A68t168 * Freelist;
struct A68t169 * Outerslist;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,REF MODE168,REF MODE168,REF MODE169)  */
A_VECTOR(A68_VC ,A68t172);
typedef struct A68t172  A68_172 ;    /* VECTOR [] REF MODE26 */
A_VECTOR(struct A68t168 *,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] REF MODE168 */

A_PROCEDURE(struct A68t46 *,A68t174,(A68_INT ),(A68_INT ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT) REF MODE46 */

A_PROCEDURE(struct A68t47 *,A68t175,(A68_INT ),(A68_INT ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT) REF MODE47 */

A_PROCEDURE(struct A68t51 *,A68t176,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE43) REF MODE51 */

A_PROCEDURE(struct A68t54 *,A68t177,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE43) REF MODE54 */

A_PROCEDURE(struct A68t60 *,A68t178,(A68_INT ),(A68_INT ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT) REF MODE60 */

A_PROCEDURE(struct A68t64 *,A68t179,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE59) REF MODE64 */

A_PROCEDURE(struct A68t68 *,A68t180,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE59) REF MODE68 */

A_PROCEDURE(struct A68t75 *,A68t181,(A68_INT ),(A68_INT ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(INT) REF MODE75 */

A_PROCEDURE(struct A68t79 *,A68t182,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE59) REF MODE79 */

A_PROCEDURE(struct A68t131 *,A68t183,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE115) REF MODE131 */

A_PROCEDURE(struct A68t132 *,A68t184,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE115) REF MODE132 */

A_PROCEDURE(struct A68t107 *,A68t185,(struct A68t81 ),(struct A68t81 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE81) REF MODE107 */

A_PROCEDURE(struct A68t126 *,A68t186,(struct A68t81 ),(struct A68t81 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE81) REF MODE126 */

A_PROCEDURE(struct A68t112 *,A68t187,(A68_INT ),(A68_INT ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(INT) REF MODE112 */

A_PROCEDURE(struct A68t145 *,A68t188,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE43) REF MODE145 */

A_PROCEDURE(struct A68t150 *,A68t189,(struct A68t81 ),(struct A68t81 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE81) REF MODE150 */

A_PROCEDURE(struct A68t52 *,A68t190,(A68_INT ),(A68_INT ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(INT) REF MODE52 */

A_PROCEDURE(struct A68t35 *,A68t191,(A68_INT ),(A68_INT ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(INT) REF MODE35 */

A_PROCEDURE(struct A68t42 *,A68t192,(struct A68t34 ),(struct A68t34 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE34) REF MODE42 */

A_PROCEDURE(struct A68t38 *,A68t193,(struct A68t34 ),(struct A68t34 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE34) REF MODE38 */
A_VECTOR(struct A68t32 *,A68t194);
typedef struct A68t194  A68_194 ;    /* VECTOR [] REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t195,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t196,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(CHAR) REF MODE26 */
struct A68t198 ;

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE198) VOID */
A_VECTOR(A68_BOOL ,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_BITS ,A68t200);
typedef struct A68t200  A68_200 ;    /* VECTOR [] BITS */
struct A68t198 { A68_INT mode; union {
A68_VC  mode1;
struct A68t142  mode2;
struct A68t199  mode3;
struct A68t200  mode4;
} data; };
typedef struct A68t198  A68_198 ;    /* UNION(REF MODE26,REF MODE142,REF MODE199,REF MODE200)  */

A_PROCEDURE(A68_VOID ,A68t201,(A68_VC ),(A68_VC ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t202,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t203,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(BITS,BITS) BITS */
struct A68t205 ;

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t205 ,A68_INT ),(struct A68t205 ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE205,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t205,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(CHAR) VOID */
struct A68t207 ;

A_PROCEDURE(A68_INT ,A68t206,(struct A68t207 ),(struct A68t207 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE207) INT */

A_PROCEDURE(A68_CHAR ,A68t207,(void),(void *));
typedef struct A68t207  A68_207 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t208,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t209,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t210,(void),(void *));
typedef struct A68t210  A68_210 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t211,(A68_INT ),(A68_INT ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t212,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t213,(A68_VC *),(A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t214,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t216 ;

A_PROCEDURE(A68_BOOL ,A68t215,(A68_VC ,A68_INT *,struct A68t216 ),(A68_VC ,A68_INT *,struct A68t216 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE26,REF INT,MODE216) BOOL */
struct A68t217 ;
struct A68t218 ;

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t217 ,struct A68t218 ),(struct A68t217 ,struct A68t218 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE217,MODE218) VOID */
struct A68t217{
A68_INT  Number;
A_PAD_INT(PAD_71)
struct A68t219 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_72)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT,REF MODE219,BITS)  */
A_VECTOR(A68_VC ,A68t218);
typedef struct A68t218  A68_218 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t221 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE221 */
struct A68t221{
struct A68t217  Msgno;
A68_VC  Text;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE217,REF MODE26)  */
struct A68t219{
A68_VC  Name;
struct A68t220  Messages;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE26,REF MODE220)  */

A_PROCEDURE(A68_VOID ,A68t222,(A68_VC ),(A68_VC ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(void),(void *));
typedef struct A68t223  A68_223 ;    /* PROC VOID */
struct A68t225 ;
struct A68t226 ;

A_PROCEDURE(A68_INT ,A68t224,(struct A68t225 ,struct A68t226 ),(struct A68t225 ,struct A68t226 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE225,MODE226) INT */
struct A68t234{
A68_INT  Svoid;
A_PAD_INT(PAD_73)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(INT)  */
struct A68t235{
A68_INT  Snull;
A_PAD_INT(PAD_74)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT)  */
struct A68t225 { A68_INT mode; union {
struct A68t227 * mode1;
struct A68t228 * mode2;
struct A68t229 * mode3;
struct A68t230 * mode4;
struct A68t231 * mode5;
struct A68t232 * mode6;
struct A68t233 * mode7;
struct A68t234  mode8;
struct A68t235  mode9;
} data; };
typedef struct A68t225  A68_225 ;    /* UNION(REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,MODE234,MODE235)  */

A_PROCEDURE(A68_INT ,A68t226,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE225) INT */
struct A68t227{
A68_VC  Id;
struct A68t225  T;
struct A68t227 * Rest;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(REF MODE26,MODE225,REF MODE227)  */
struct A68t228{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_75)
A68_INT  Upb;
A_PAD_INT(PAD_76)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t229{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t230{
A68_INT  No;
A_PAD_INT(PAD_77)
struct A68t225  Type;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT,MODE225)  */
struct A68t231{
A68_INT  No;
A_PAD_INT(PAD_78)
struct A68t229  T;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,MODE229)  */
struct A68t232{
struct A68t225  From;
struct A68t225  To;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE225,MODE225)  */
struct A68t233{
struct A68t225  T;
struct A68t233 * Rest;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE225,REF MODE233)  */

A_PROCEDURE(A68_VOID ,A68t236,(A68_INT ,struct A68t225 *),(A68_INT ,struct A68t225 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(INT) MODE225 */
struct A68t238 ;
struct A68t239 ;
struct A68t240 ;
struct A68t241 ;

A_PROCEDURE(A68_INT ,A68t237,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t238 ,struct A68t238 ,struct A68t239 *,struct A68t240 ,struct A68t241 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t238 ,struct A68t238 ,struct A68t239 *,struct A68t240 ,struct A68t241 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE26,INT,INT,INT,MODE238,MODE238,REF MODE239,MODE240,MODE241) INT */
A_VECTOR(struct A68t243 ,A68t242);
typedef struct A68t242  A68_242 ;    /* VECTOR [] MODE243 */
struct A68t243{
A68_INT  Instoffset;
A_PAD_INT(PAD_79)
A68_INT  Offset;
A_PAD_INT(PAD_80)
A68_INT  Size;
A_PAD_INT(PAD_81)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,INT,INT)  */
struct A68t238{
struct A68t225  Type;
struct A68t242  Blocks;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE225,REF MODE242)  */
struct A68t239{
struct A68t238  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_82)
A68_INT  Ramsize;
A_PAD_INT(PAD_83)
A68_INT  Step;
A_PAD_INT(PAD_84)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE238,INT,INT,INT)  */
struct A68t240{
A68_INT  Size;
A_PAD_INT(PAD_85)
A68_INT  Offset;
A_PAD_INT(PAD_86)
A68_BITS  Sort;
A_PAD_BITS(PAD_87)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t241{
A68_INT  Workspace;
A_PAD_INT(PAD_88)
A68_INT  History;
A_PAD_INT(PAD_89)
A68_INT  Declid;
A_PAD_INT(PAD_90)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(INT,INT,INT)  */
struct A68t245 ;

A_PROCEDURE(A68_VOID ,A68t244,(A68_INT ,A68_VC ,A68_VC ,struct A68t245 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t245 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE245) VOID */
struct A68t246{
A68_INT  Fn;
A_PAD_INT(PAD_91)
A68_INT  Instance;
A_PAD_INT(PAD_92)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT,INT)  */
struct A68t245 { A68_INT mode; union {
struct A68t246  mode1;
struct A68t238  mode2;
} data; };
typedef struct A68t245  A68_245 ;    /* UNION(MODE246,MODE238)  */

A_PROCEDURE(A68_VOID ,A68t247,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(A68_INT ,struct A68t142 ),(A68_INT ,struct A68t142 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(INT,REF MODE142) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t250,(A68_INT ,struct A68t240 ),(A68_INT ,struct A68t240 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(INT,MODE240) VOID */

A_PROCEDURE(A68_VOID ,A68t251,(A68_INT ,struct A68t242 ,struct A68t242 ),(A68_INT ,struct A68t242 ,struct A68t242 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(INT,REF MODE242,REF MODE242) VOID */

A_PROCEDURE(A68_VOID ,A68t252,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t253,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE26,INT,INT) INT */
struct A68t255 ;

A_PROCEDURE(A68_VOID ,A68t254,(A68_INT ,struct A68t255 *),(A68_INT ,struct A68t255 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(INT) MODE255 */
A_VECTOR(struct A68t257 ,A68t256);
typedef struct A68t256  A68_256 ;    /* VECTOR [] MODE257 */
struct A68t257{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_93)
};
typedef struct A68t257  A68_257 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
struct A68t255{
struct A68t239 * Ram;
struct A68t238  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_94)
struct A68t256  Body;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(REF MODE239,MODE238,INT,REF MODE256)  */

A_PROCEDURE(A68_VOID ,A68t258,(A68_INT ,struct A68t245 *),(A68_INT ,struct A68t245 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(INT) MODE245 */

A_PROCEDURE(A68_VOID ,A68t259,(A68_INT ,struct A68t142 *),(A68_INT ,struct A68t142 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(INT) REF MODE142 */
struct A68t261 ;

A_PROCEDURE(A68_VOID ,A68t260,(A68_INT ,A68_INT ,struct A68t261 *),(A68_INT ,A68_INT ,struct A68t261 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(INT,INT) MODE261 */
struct A68t261{
A68_INT  Lwb;
A_PAD_INT(PAD_95)
A68_INT  Upb;
A_PAD_INT(PAD_96)
};
typedef struct A68t261  A68_261 ;    /* STRUCT(INT,INT)  */
struct A68t263 ;

A_PROCEDURE(A68_VOID ,A68t262,(A68_INT ,A68_INT ,struct A68t263 *),(A68_INT ,A68_INT ,struct A68t263 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(INT,INT) REF MODE263 */
A_VECTOR(struct A68t264 ,A68t263);
typedef struct A68t263  A68_263 ;    /* VECTOR [] MODE264 */
struct A68t264{
A68_INT  Instoffset;
A_PAD_INT(PAD_97)
A68_INT  Ipno;
A_PAD_INT(PAD_98)
};
typedef struct A68t264  A68_264 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t265,(A68_INT ,struct A68t238 *),(A68_INT ,struct A68t238 *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(INT) MODE238 */

A_PROCEDURE(A68_VOID ,A68t266,(A68_INT ,struct A68t240 *),(A68_INT ,struct A68t240 *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(INT) MODE240 */

A_PROCEDURE(A68_VOID ,A68t267,(A68_INT ,struct A68t241 *),(A68_INT ,struct A68t241 *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(INT) MODE241 */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t255 ,struct A68t238 *),(struct A68t255 ,struct A68t238 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE255) MODE238 */
struct A68t270 ;

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t270 ),(struct A68t270 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE270) VOID */

A_PROCEDURE(A68_BOOL ,A68t270,(A68_VC ),(A68_VC ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(REF MODE26) BOOL */
struct A68t272 ;

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t272 ,struct A68t222 ),(struct A68t272 ,struct A68t222 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE272,MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(A68_VC ,struct A68t222 ),(A68_VC ,struct A68t222 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE26,MODE222) VOID */
struct A68t273{
A68_INT  Sort;
A_PAD_INT(PAD_99)
A68_INT  Size;
A_PAD_INT(PAD_100)
};
typedef struct A68t273  A68_273 ;    /* STRUCT(INT,INT)  */
struct A68t274{
struct A68t273  Head;
struct A68t274 * Tail;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE273,REF MODE274)  */
struct A68t276{
A68_INT  Lab;
A_PAD_INT(PAD_101)
A68_VC  Tag;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t275{
struct A68t276  Labelint;
struct A68t276  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_102)
A68_INT  Evalfn;
A_PAD_INT(PAD_103)
A68_INT  History;
A_PAD_INT(PAD_104)
A68_INT  Declid;
A_PAD_INT(PAD_105)
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE276,MODE276,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t275 *,A68t277,(A68_VC ,struct A68t142 ,A68_INT ,struct A68t142 ,struct A68t222 ),(A68_VC ,struct A68t142 ,A68_INT ,struct A68t142 ,struct A68t222 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE26,MODE142,INT,MODE142,MODE222) REF MODE275 */
struct A68t278 { A68_INT mode; union {
A68_INT  mode1;
struct A68t276  mode2;
} data; };
typedef struct A68t278  A68_278 ;    /* UNION(INT,MODE276,VOID)  */

A_PROCEDURE(A68_VOID ,A68t279,(A68_VC ,struct A68t276 *),(A68_VC ,struct A68t276 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE26) MODE276 */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t276 *),(struct A68t276 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC MODE276 */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t201 ,A68_INT ,struct A68t222 ),(struct A68t201 ,A68_INT ,struct A68t222 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE201,INT,MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE222) VOID */

A_PROCEDURE(A68_INT ,A68t283,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t283  A68_283 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t284,(A68_VC ),(A68_VC ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t285,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t286,(A68_INT ),(A68_INT ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t287,(A68_INT ,struct A68t278 ),(A68_INT ,struct A68t278 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(INT,MODE278) VOID */

A_PROCEDURE(A68_VOID ,A68t288,(A68_INT ,A68_INT ,struct A68t278 ),(A68_INT ,A68_INT ,struct A68t278 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(INT,INT,MODE278) VOID */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t276 ),(struct A68t276 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE276) VOID */

A_PROCEDURE(A68_VOID ,A68t290,(A68_INT ,struct A68t276 ),(A68_INT ,struct A68t276 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(INT,MODE276) VOID */

A_PROCEDURE(A68_VOID ,A68t291,(struct A68t278 ,struct A68t276 ),(struct A68t278 ,struct A68t276 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(MODE278,MODE276) VOID */

A_PROCEDURE(A68_VOID ,A68t292,(struct A68t276 ,struct A68t274 *,struct A68t274 *),(struct A68t276 ,struct A68t274 *,struct A68t274 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(MODE276,REF MODE274,REF MODE274) VOID */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t276 ,A68_INT ),(struct A68t276 ,A68_INT ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE276,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t294,(A68_INT ,struct A68t222 ,A68_VC *),(A68_INT ,struct A68t222 ,A68_VC *,void *));
typedef struct A68t294  A68_294 ;    /* PROC(INT,MODE222) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t295,(A68_INT ,struct A68t222 ),(A68_INT ,struct A68t222 ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(INT,MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t296,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t297,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t299 ;

A_PROCEDURE(A68_VOID ,A68t298,(A68_INT ,struct A68t299 *),(A68_INT ,struct A68t299 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(INT) MODE299 */
struct A68t299{
A68_INT  Lasttime;
A_PAD_INT(PAD_106)
A68_INT  Interrupted;
A_PAD_INT(PAD_107)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t272 ,struct A68t272 ,struct A68t222 ),(struct A68t272 ,struct A68t272 ,struct A68t222 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(MODE272,MODE272,MODE222) VOID */
struct A68t302 ;

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t302 *),(struct A68t302 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC MODE302 */
struct A68t302{
A68_INT  Codesize;
A_PAD_INT(PAD_108)
A68_INT  Datasize;
A_PAD_INT(PAD_109)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_110)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_111)
};
typedef struct A68t302  A68_302 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t303,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE142,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t305,(struct A68t142 ,struct A68t225 ),(struct A68t142 ,struct A68t225 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF MODE142,MODE225) VOID */

A_PROCEDURE(A68_VOID ,A68t306,(struct A68t142 ,A68_INT ,struct A68t225 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t142 ,A68_INT ,struct A68t225 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE142,INT,MODE225,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t142 ,struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t142 ,struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE142,MODE142,INT,INT,INT,INT) VOID */
struct A68t309 ;

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t309 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t309 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE309,INT,INT,INT,INT) VOID */
struct A68t317{
A68_INT  Svvoid;
A_PAD_INT(PAD_112)
};
typedef struct A68t317  A68_317 ;    /* STRUCT(INT)  */
struct A68t318{
A68_INT  Svnull;
A_PAD_INT(PAD_113)
};
typedef struct A68t318  A68_318 ;    /* STRUCT(INT)  */
struct A68t309 { A68_INT mode; union {
struct A68t310 * mode1;
struct A68t311 * mode2;
struct A68t312 * mode3;
struct A68t313 * mode4;
struct A68t314 * mode5;
struct A68t315 * mode6;
struct A68t316 * mode7;
struct A68t317  mode8;
struct A68t318  mode9;
} data; };
typedef struct A68t309  A68_309 ;    /* UNION(REF MODE310,REF MODE311,REF MODE312,REF MODE313,REF MODE314,REF MODE315,REF MODE316,MODE317,MODE318)  */
struct A68t310{
struct A68t225  Type;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(MODE225)  */
struct A68t311{
struct A68t228 * Type;
A68_INT  Value;
A_PAD_INT(PAD_114)
};
typedef struct A68t311  A68_311 ;    /* STRUCT(REF MODE228,INT)  */
struct A68t312{
struct A68t229 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_115)
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE229,CHAR)  */
struct A68t313{
struct A68t231 * Type;
A68_VC  Value;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(REF MODE231,REF MODE26)  */
struct A68t314{
struct A68t227 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_116)
struct A68t309  Assoc;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(REF MODE227,INT,MODE309)  */
struct A68t315{
struct A68t309  Head;
struct A68t315 * Tail;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(MODE309,REF MODE315)  */
struct A68t316{
struct A68t309  From;
struct A68t309  To;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(MODE309,MODE309)  */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t309 ,struct A68t225 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t309 ,struct A68t225 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE309,MODE225,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t320,(A68_INT ,A68_VC ,struct A68t240 *),(A68_INT ,A68_VC ,struct A68t240 *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(INT,REF MODE26) MODE240 */

A_PROCEDURE(A68_VOID ,A68t321,(struct A68t142 ,A68_VC ,struct A68t240 *),(struct A68t142 ,A68_VC ,struct A68t240 *,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE142,MODE26) MODE240 */
struct A68t322 { A68_INT mode; union {
struct A68t227 * mode1;
struct A68t228 * mode2;
struct A68t229 * mode3;
} data; };
typedef struct A68t322  A68_322 ;    /* UNION(REF MODE227,REF MODE228,REF MODE229)  */
struct A68t323{
struct A68t238 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_117)
};
typedef struct A68t323  A68_323 ;    /* STRUCT(REF MODE238,INT)  */
struct A68t324 { A68_INT mode; union {
struct A68t246  mode1;
struct A68t323  mode2;
} data; };
typedef struct A68t324  A68_324 ;    /* UNION(MODE246,MODE323)  */
struct A68t325{
struct A68t324  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_118)
A68_INT  Base;
A_PAD_INT(PAD_119)
};
typedef struct A68t325  A68_325 ;    /* STRUCT(MODE324,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t326,(struct A68t309 ,struct A68t225 *),(struct A68t309 ,struct A68t225 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE309) MODE225 */

A_PROCEDURE(A68_BOOL ,A68t327,(struct A68t225 ,struct A68t225 ),(struct A68t225 ,struct A68t225 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE225,MODE225) BOOL */

A_PROCEDURE(A68_BOOL ,A68t328,(struct A68t309 ,struct A68t309 ),(struct A68t309 ,struct A68t309 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE309,MODE309) BOOL */

A_PROCEDURE(A68_BOOL ,A68t329,(struct A68t238 ,struct A68t238 ),(struct A68t238 ,struct A68t238 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE238,MODE238) BOOL */

A_PROCEDURE(A68_BOOL ,A68t330,(struct A68t246 ,struct A68t246 ),(struct A68t246 ,struct A68t246 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE246,MODE246) BOOL */

A_PROCEDURE(A68_BOOL ,A68t331,(struct A68t323 ,struct A68t323 ),(struct A68t323 ,struct A68t323 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE323,MODE323) BOOL */

A_PROCEDURE(A68_BOOL ,A68t332,(struct A68t324 ,struct A68t324 ),(struct A68t324 ,struct A68t324 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE324,MODE324) BOOL */

A_PROCEDURE(A68_BOOL ,A68t333,(struct A68t325 ,struct A68t325 ),(struct A68t325 ,struct A68t325 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE325,MODE325) BOOL */

A_PROCEDURE(struct A68t233 *,A68t334,(struct A68t233 *,struct A68t233 *),(struct A68t233 *,struct A68t233 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(REF MODE233,REF MODE233) REF MODE233 */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t242 ,struct A68t242 ,struct A68t242 *),(struct A68t242 ,struct A68t242 ,struct A68t242 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(REF MODE242,REF MODE242) REF MODE242 */

A_PROCEDURE(A68_INT ,A68t336,(A68_VC ),(A68_VC ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t44 *,A68t337,(A68_INT ),(A68_INT ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(INT) REF MODE44 */

A_PROCEDURE(A68_INT ,A68t338,(struct A68t43 ,struct A68t216 ),(struct A68t43 ,struct A68t216 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE43,MODE216) INT */

A_PROCEDURE(A68_INT ,A68t339,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(MODE43) INT */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t43 ,struct A68t43 *),(struct A68t43 ,struct A68t43 *,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE43) MODE43 */

A_PROCEDURE(struct A68t40 *,A68t341,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE167) REF MODE40 */

A_PROCEDURE(struct A68t56 *,A68t342,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE167) REF MODE56 */

A_PROCEDURE(struct A68t74 *,A68t343,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE167) REF MODE74 */

A_PROCEDURE(struct A68t80 *,A68t344,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE167) REF MODE80 */

A_PROCEDURE(struct A68t158 *,A68t345,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE167) REF MODE158 */

A_PROCEDURE(A68_INT ,A68t346,(struct A68t41 *,struct A68t162 ),(struct A68t41 *,struct A68t162 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(REF MODE41,REF MODE162) INT */

A_PROCEDURE(A68_INT ,A68t347,(struct A68t41 *,struct A68t163 ),(struct A68t41 *,struct A68t163 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(REF MODE41,REF MODE163) INT */

A_PROCEDURE(A68_INT ,A68t348,(struct A68t41 *,struct A68t164 ),(struct A68t41 *,struct A68t164 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE41,REF MODE164) INT */

A_PROCEDURE(A68_INT ,A68t349,(struct A68t41 *,struct A68t165 ),(struct A68t41 *,struct A68t165 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF MODE41,REF MODE165) INT */

A_PROCEDURE(A68_INT ,A68t350,(struct A68t41 *,struct A68t166 ),(struct A68t41 *,struct A68t166 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(REF MODE41,REF MODE166) INT */

A_PROCEDURE(struct A68t40 *,A68t351,(struct A68t35 ,struct A68t171 *,struct A68t161 *),(struct A68t35 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE35,REF MODE171,REF MODE161) REF MODE40 */

A_PROCEDURE(struct A68t56 *,A68t352,(struct A68t47 ,struct A68t171 *,struct A68t161 *),(struct A68t47 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE47,REF MODE171,REF MODE161) REF MODE56 */

A_PROCEDURE(struct A68t74 *,A68t353,(struct A68t60 ,struct A68t171 *,struct A68t161 *),(struct A68t60 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE60,REF MODE171,REF MODE161) REF MODE74 */

A_PROCEDURE(struct A68t80 *,A68t354,(struct A68t75 ,struct A68t171 *,struct A68t161 *),(struct A68t75 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE75,REF MODE171,REF MODE161) REF MODE80 */

A_PROCEDURE(struct A68t158 *,A68t355,(struct A68t112 ,struct A68t171 *,struct A68t161 *),(struct A68t112 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE112,REF MODE171,REF MODE161) REF MODE158 */

A_PROCEDURE(struct A68t63 *,A68t356,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF MODE158) REF MODE63 */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t62 *,struct A68t43 *),(struct A68t62 *,struct A68t43 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE62) MODE43 */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t59 ,struct A68t161 *,struct A68t43 *),(struct A68t59 ,struct A68t161 *,struct A68t43 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE59,REF MODE161) MODE43 */

A_PROCEDURE(struct A68t158 *,A68t359,(struct A68t158 *,struct A68t161 *,struct A68t161 *),(struct A68t158 *,struct A68t161 *,struct A68t161 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE158,REF MODE161,REF MODE161) REF MODE158 */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t122 *,struct A68t158 *,struct A68t59 *),(struct A68t122 *,struct A68t158 *,struct A68t59 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF MODE122,REF MODE158) MODE59 */

A_PROCEDURE(A68_INT ,A68t361,(struct A68t122 *),(struct A68t122 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE122) INT */

A_PROCEDURE(A68_INT ,A68t362,(struct A68t122 *,A68_INT ),(struct A68t122 *,A68_INT ,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE122,INT) INT */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t81 ,struct A68t158 *,struct A68t161 *,struct A68t59 *),(struct A68t81 ,struct A68t158 *,struct A68t161 *,struct A68t59 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE81,REF MODE158,REF MODE161) MODE59 */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t59 ,struct A68t161 *,struct A68t59 *),(struct A68t59 ,struct A68t161 *,struct A68t59 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE59,REF MODE161) MODE59 */

A_PROCEDURE(A68_BOOL ,A68t365,(struct A68t59 ,struct A68t59 ,struct A68t161 *,struct A68t161 *,A68_BOOL ),(struct A68t59 ,struct A68t59 ,struct A68t161 *,struct A68t161 *,A68_BOOL ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(MODE59,MODE59,REF MODE161,REF MODE161,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t366,(struct A68t90 *,struct A68t161 *),(struct A68t90 *,struct A68t161 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE90,REF MODE161) INT */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t59 ,struct A68t161 ,struct A68t171 *,struct A68t225 *),(struct A68t59 ,struct A68t161 ,struct A68t171 *,struct A68t225 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE59,MODE161,REF MODE171) MODE225 */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t81 ,struct A68t161 ,struct A68t171 *,struct A68t309 *),(struct A68t81 ,struct A68t161 ,struct A68t171 *,struct A68t309 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE81,MODE161,REF MODE171) MODE309 */

A_PROCEDURE(struct A68t233 *,A68t369,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE225) REF MODE233 */

A_PROCEDURE(struct A68t233 *,A68t370,(struct A68t225 ,A68_INT ,A68_INT ),(struct A68t225 ,A68_INT ,A68_INT ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE225,INT,INT) REF MODE233 */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t238 ,A68_INT ,A68_INT ,struct A68t238 *),(struct A68t238 ,A68_INT ,A68_INT ,struct A68t238 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE238,INT,INT) MODE238 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t239 *,A68_INT ,A68_INT ,struct A68t238 *),(struct A68t239 *,A68_INT ,A68_INT ,struct A68t238 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(REF MODE239,INT,INT) MODE238 */

A_PROCEDURE(A68_VC *,A68t373,(struct A68t309 ,struct A68t225 ),(struct A68t309 ,struct A68t225 ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE309,MODE225) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t374,(A68_VC ,struct A68t225 ,struct A68t309 *),(A68_VC ,struct A68t225 ,struct A68t309 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(REF MODE26,MODE225) MODE309 */

A_PROCEDURE(A68_VOID ,A68t375,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t223 ),(struct A68t223 ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE223) VOID */

A_PROCEDURE(A68_VOID ,A68t377,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t378);
typedef struct A68t378  A68_378 ;    /* STRUCT 59 CHAR */

A_PROCEDURE(A68_VOID ,A68t379,(A68_INT ,struct A68t142 ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(INT,MODE142,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t93 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 *,struct A68t171 *,struct A68t222 ,struct A68t240 *),(struct A68t93 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 *,struct A68t171 *,struct A68t222 ,struct A68t240 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE93,REF MODE26,MODE158,MODE142,INT,REF MODE161,REF MODE171,MODE222) MODE240 */
A_ISTRUCT(A68_CHAR ,12,A68t381);
typedef struct A68t381  A68_381 ;    /* STRUCT 12 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kesignals --- */
extern A68_INT  DCOASIM_rawsignalwidth(struct A68t225 );
/* --- End of imports from kesignals --- */


/* --- Imports from keconv --- */
extern A68_INT  XOMATRN_int(struct A68t43 );
extern A68_63 * MUNATRN_fndec_tfn(struct A68t158 *);
/* --- End of imports from keconv --- */


/* --- Imports from kebasics --- */
/* --- End of imports from kebasics --- */


/* --- Imports from keamstandard --- */
extern A68_VOID  DOPASIM_translatestartfunction(A68_VC );
extern A68_VOID  ZOPASIM_translateendfunction(A68_INT ,A68_INT );
extern A68_VOID  NPPASIM_translatecompareandsetflag(A68_INT ,A68_INT ,A68_INT ,A68_INT );
#define IPPASIM_resetflag 2
/* --- End of imports from keamstandard --- */


/* --- Imports from keambasics --- */
extern A68_278  ONFASIM_indirect;
extern A68_VOID  YLFASIM_label(A68_VC ,A68_276 *);
extern A68_VOID  YFNASIM_newlabel(A68_276 *);
#define CENASIM_bitsperbyte 8
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_VOID  SSNASIM_amadd(void);
extern A68_VOID  USNASIM_amsub(void);
extern A68_VOID  WSNASIM_ammul(void);
extern A68_VOID  QTNASIM_amtest(void);
extern A68_VOID  QUNASIM_ampushint(A68_INT );
extern A68_VOID  TUNASIM_amdrop(A68_INT );
extern A68_VOID  WUNASIM_amlocal(A68_INT );
extern A68_VOID  AVNASIM_amglobal(A68_INT ,struct A68t278 );
extern A68_VOID  FVNASIM_amstore(A68_INT ,struct A68t278 );
extern A68_VOID  LVNASIM_ambstring(A68_INT ,A68_INT ,struct A68t278 );
extern A68_VOID  QVNASIM_ambstore(A68_INT ,struct A68t278 );
extern A68_VOID  BWNASIM_amstou(void);
extern A68_VOID  EWNASIM_amjump(struct A68t276 );
extern A68_VOID  IWNASIM_amjumpno(A68_INT ,struct A68t276 );
extern A68_VOID  NWNASIM_amlabel(A68_INT ,struct A68t276 );
extern A68_VOID  BXNASIM_amcall(A68_INT ,struct A68t276 );
/* --- End of imports from keambasics --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  VGCASIM_lookuptype(A68_INT ,A68_225 *);
extern A68_INT  YGCASIM_lookuptypesize(A68_INT );
#define IHCASIM_combinatorial 0X1U
/* --- End of imports from kesymbols --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from assmodes --- */
/* --- End of imports from assmodes --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void NYNASIM(void);   /* kesignals */
extern void KUBASIM(void);   /* keconv */
extern void JSAASIM(void);   /* kebasics */
extern void HYOASIM(void);   /* keamstandard */
extern void XDNASIM(void);   /* keambasics */
extern void TCCASIM(void);   /* kesymbols */
extern void JSCAOST(void);   /* basics */
extern void BAAATRN(void);   /* assmodes */
/* --- end of DECS initialisation functions --- */
static A68_378   SNWASIM = {"$Id: keamdynindex.a68,v 34.2 1995/03/29 13:04:36 ella Exp $"}; 
A_GISVEC(A68_VC ,TNWASIM,SNWASIM,59)
static A68_381   OPWASIM = {"Genericquery"}; 
A_GISVEC(A68_VC ,PPWASIM,OPWASIM,12)

A_STATIC A68_VOID  ZNWASIM_copyfromindexedinput(A68_INT  Elemprims, A68_142  Inputs, A68_INT  Inputoffset, A68_INT  Outputoffset, A68_INT  D);

A68_VOID  OOWASIM_translatedynindex(A68_93  Body, A68_VC  Name, A68_158  Declaration, A68_142  Inputtypes, A68_INT  Outputtype, A68_161 * Environ, A68_171 * Closure, A68_222  Flt, A68_240  *ReturnedValue);
 /* line 68: */

A_STATIC A68_VOID  ZNWASIM_copyfromindexedinput(A68_INT  Elemprims, A68_142  Inputs, A68_INT  Inputoffset, A68_INT  Outputoffset, A68_INT  D)
{ 
A68_INT  AOWASIM_outputincrement;
A68_INT  BOWASIM_j;
A68_INT  COWASIM;  /* to part of loop */
A68_INT  DOWASIM_typesize;
A68_INT  EOWASIM_amstackincrement;
A68_INT  FOWASIM_bitsize;
A_PROC_ENTRY(copyfromindexedinput);
 /* line 69: */
 /* line 70: */
{ 
QUNASIM_ampushint(1);
 /* line 71: */
USNASIM_amsub();
 /* line 72: */
QUNASIM_ampushint((DENASIM_ws*Elemprims));
 /* line 73: */
WSNASIM_ammul();
 /* line 74: */
QUNASIM_ampushint(Inputoffset);
 /* line 75: */
SSNASIM_amadd();
 /* line 76: */
WUNASIM_amlocal((D-1));
 /* line 77: */
SSNASIM_amadd();
 /* line 80: */
AOWASIM_outputincrement = 0;
 /* line 81: */
COWASIM = Elemprims;
for ( BOWASIM_j = 1;
BOWASIM_j <= COWASIM;
BOWASIM_j += 1 )
{ 
 /* line 82: */
DOWASIM_typesize = YGCASIM_lookuptypesize(A_VINDEX(Inputs,BOWASIM_j));
 /* line 83: */
QUNASIM_ampushint((Outputoffset+AOWASIM_outputincrement));
 /* line 84: */
AOWASIM_outputincrement+=DOWASIM_typesize;
 /* line 85: */
WUNASIM_amlocal(D);
 /* line 86: */
SSNASIM_amadd();
 /* line 88: */
EOWASIM_amstackincrement = 0;
 /* line 89: */
 /* line 90: */
if ( (DOWASIM_typesize!=DENASIM_ws) )
{ 
QUNASIM_ampushint(0);
 /* line 91: */
 /* line 92: */
EOWASIM_amstackincrement = 1;
} 
 /* line 93: */
WUNASIM_amlocal((1+EOWASIM_amstackincrement));
 /* line 94: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 96: */
 /* line 97: */
if ( (DOWASIM_typesize==DENASIM_ws) )
{ 
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 98: */
NPPASIM_translatecompareandsetflag(DOWASIM_typesize, 1, IPPASIM_resetflag, (D+2));
 /* line 99: */
 /* line 100: */
 /* line 101: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
} 
else
{ 
FOWASIM_bitsize = (DOWASIM_typesize*CENASIM_bitsperbyte);
 /* line 102: */
LVNASIM_ambstring(FOWASIM_bitsize, FOWASIM_bitsize, ONFASIM_indirect);
 /* line 103: */
NPPASIM_translatecompareandsetflag(DOWASIM_typesize, 1, IPPASIM_resetflag, (D+2));
 /* line 104: */
 /* line 105: */
QVNASIM_ambstore(FOWASIM_bitsize, ONFASIM_indirect);
} 
 /* line 107: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 108: */
 /* line 109: */
SSNASIM_amadd();
}
 /* line 111: */
 /* line 112: */
TUNASIM_amdrop(1);
} 
A_PROC_EXIT(copyfromindexedinput);
return;
} 
#undef NL
 /* line 118: */
 /* line 119: */
 /* line 120: */

A68_VOID  OOWASIM_translatedynindex(A68_93  Body, A68_VC  Name, A68_158  Declaration, A68_142  Inputtypes, A68_INT  Outputtype, A68_161 * Environ, A68_171 * Closure, A68_222  Flt, A68_240  *ReturnedValue)
{ 
A68_INT  POWASIM_numberofinputs;
A68_INT  QOWASIM_inputoffset;
A68_INT  ROWASIM_indexoffset;
A68_INT  SOWASIM_outputoffset;
A68_225  TOWASIM;  /* avoid structure result */
A68_225  UOWASIM_unit;
A68_INT  VOWASIM_elemprims;
A68_158 * WOWASIM;  /* YIELD */
A68_59  XOWASIM_inputs;
A68_INT  YOWASIM_stringsize;
A68_59  ZOWASIM;  /* united object - for case conformity */
A68_62 * APWASIM_tstr;
A68_59  BPWASIM;  /* united object - for case conformity */
A68_65 * CPWASIM_tstring;
A68_BOOL  DPWASIM;  /* clause result */
A68_BOOL  EPWASIM_string;
A68_276  FPWASIM;  /* avoid structure result */
A68_276  GPWASIM_outputquery;
A68_276  HPWASIM;  /* avoid structure result */
A68_276  IPWASIM_end;
A68_225  JPWASIM;  /* united object - for case conformity */
A68_229 * KPWASIM_schar;
A68_229  LPWASIM;  /* clause result */
A68_229  MPWASIM_c;
A68_INT  NPWASIM_datasize;
A68_276  QPWASIM;  /* avoid structure result */
A68_INT  RPWASIM_fixedpartsize;
A68_240  SPWASIM;  /* collateral clause result */
A68_240  TPWASIM;  /* clause result */
A_PROC_ENTRY(translatedynindex);
 /* line 121: */
 /* line 127: */
{ 
POWASIM_numberofinputs = Inputtypes.upb;
 /* line 128: */
QOWASIM_inputoffset = (GENASIM_sizeunit+DENASIM_ws);
 /* line 129: */
ROWASIM_indexoffset = (QOWASIM_inputoffset+((POWASIM_numberofinputs-1)*DENASIM_ws));
 /* line 130: */
SOWASIM_outputoffset = (QOWASIM_inputoffset+(POWASIM_numberofinputs*DENASIM_ws));
 /* line 132: */
VGCASIM_lookuptype( Outputtype, &TOWASIM );
UOWASIM_unit = TOWASIM;
 /* line 133: */
VOWASIM_elemprims = DCOASIM_rawsignalwidth(UOWASIM_unit);
 /* line 134: */
WOWASIM = A_HEAP(A68_158 ) ;
(*WOWASIM) = Declaration ;
XOWASIM_inputs = (*(&(MUNATRN_fndec_tfn(WOWASIM)->From)));
 /* line 135: */
 /* line 136: */
 /* line 137: */
ZOWASIM = XOWASIM_inputs ;
switch ( ZOWASIM.mode )
{ 
case 3: /* REF STRUCT(MODE59,REF MODE62)  */
APWASIM_tstr = (ZOWASIM.data.mode3);
 /* line 138: */
BPWASIM = (*(&(APWASIM_tstr->Elem))) ;
switch ( BPWASIM.mode )
{ 
case 6: /* REF STRUCT(MODE43,MODE59)  */
CPWASIM_tstring = (BPWASIM.data.mode6);
 /* line 139: */
{ 
YOWASIM_stringsize = XOMATRN_int((*(&(CPWASIM_tstring->Size))));
 /* line 140: */
DPWASIM = A68_TRUE;
} 
break;
default: 
 /* line 141: */
 /* line 142: */
DPWASIM = A68_FALSE;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
EPWASIM_string = DPWASIM;
 /* line 147: */
YFNASIM_newlabel(  &FPWASIM );
GPWASIM_outputquery = FPWASIM;
 /* line 148: */
YFNASIM_newlabel(  &HPWASIM );
IPWASIM_end = HPWASIM;
 /* line 150: */
DOPASIM_translatestartfunction(Name);
 /* line 153: */
WUNASIM_amlocal(0);
 /* line 154: */
QUNASIM_ampushint(ROWASIM_indexoffset);
 /* line 155: */
SSNASIM_amadd();
 /* line 156: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 157: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 158: */
QTNASIM_amtest();
 /* line 159: */
IWNASIM_amjumpno(0, GPWASIM_outputquery);
 /* line 161: */
 /* line 163: */
if ( EPWASIM_string )
{ 
WUNASIM_amlocal(0);
 /* line 164: */
QUNASIM_ampushint(SOWASIM_outputoffset);
 /* line 165: */
SSNASIM_amadd();
 /* line 168: */
WUNASIM_amlocal(1);
 /* line 169: */
QUNASIM_ampushint(QOWASIM_inputoffset);
 /* line 170: */
SSNASIM_amadd();
 /* line 171: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 172: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 173: */
QTNASIM_amtest();
 /* line 174: */
IWNASIM_amjumpno(1, GPWASIM_outputquery);
 /* line 176: */
JPWASIM = UOWASIM_unit ;
switch ( JPWASIM.mode )
{ 
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
KPWASIM_schar = (JPWASIM.data.mode3);
LPWASIM = (*KPWASIM_schar);
break;
default: 
A_IMP_SKIP ;
break;
} 
MPWASIM_c = LPWASIM;
 /* line 177: */
 /* line 179: */
if ( (MPWASIM_c.Char.upb==2) )
{ 
WUNASIM_amlocal(1);
 /* line 180: */
QUNASIM_ampushint(ROWASIM_indexoffset);
 /* line 181: */
SSNASIM_amadd();
 /* line 182: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 183: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 184: */
SSNASIM_amadd();
 /* line 185: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 188: */
QUNASIM_ampushint(1);
 /* line 189: */
USNASIM_amsub();
 /* line 190: */
WUNASIM_amlocal(2);
 /* line 191: */
QUNASIM_ampushint(QOWASIM_inputoffset);
 /* line 192: */
SSNASIM_amadd();
 /* line 193: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 194: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 195: */
SSNASIM_amadd();
 /* line 196: */
LVNASIM_ambstring(1, YOWASIM_stringsize, ONFASIM_indirect);
 /* line 199: */
BWNASIM_amstou();
 /* line 200: */
QUNASIM_ampushint(1);
 /* line 201: */
SSNASIM_amadd();
 /* line 204: */
NPPASIM_translatecompareandsetflag(GENASIM_sizeunit, 1, IPPASIM_resetflag, 3);
 /* line 205: */
 /* line 207: */
 /* line 209: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
} 
else
{ 
WUNASIM_amlocal(1);
 /* line 210: */
QUNASIM_ampushint(ROWASIM_indexoffset);
 /* line 211: */
SSNASIM_amadd();
 /* line 212: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 213: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 214: */
SSNASIM_amadd();
 /* line 215: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 217: */
QUNASIM_ampushint(1);
 /* line 218: */
USNASIM_amsub();
 /* line 219: */
QUNASIM_ampushint(CENASIM_bitsperbyte);
 /* line 220: */
WSNASIM_ammul();
 /* line 222: */
WUNASIM_amlocal(2);
 /* line 223: */
QUNASIM_ampushint(QOWASIM_inputoffset);
 /* line 224: */
SSNASIM_amadd();
 /* line 225: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 226: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 227: */
SSNASIM_amadd();
 /* line 228: */
LVNASIM_ambstring(CENASIM_bitsperbyte, (YOWASIM_stringsize*CENASIM_bitsperbyte), ONFASIM_indirect);
 /* line 231: */
BWNASIM_amstou();
 /* line 232: */
NPPASIM_translatecompareandsetflag(GENASIM_sizeunit, 1, IPPASIM_resetflag, 3);
 /* line 233: */
 /* line 234: */
 /* line 235: */
 /* line 236: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
} 
} 
else
{ 
WUNASIM_amlocal(0);
 /* line 237: */
QUNASIM_ampushint(ROWASIM_indexoffset);
 /* line 238: */
SSNASIM_amadd();
 /* line 239: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 240: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 241: */
SSNASIM_amadd();
 /* line 242: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 243: */
 /* line 244: */
 /* line 245: */
ZNWASIM_copyfromindexedinput(VOWASIM_elemprims, Inputtypes, QOWASIM_inputoffset, SOWASIM_outputoffset, 2);
} 
 /* line 246: */
EWNASIM_amjump(IPWASIM_end);
 /* line 248: */
NWNASIM_amlabel(1, GPWASIM_outputquery);
 /* line 249: */
NPWASIM_datasize = YGCASIM_lookuptypesize(Outputtype);
 /* line 250: */
QUNASIM_ampushint(SOWASIM_outputoffset);
 /* line 251: */
QUNASIM_ampushint(NPWASIM_datasize);
 /* line 252: */
YLFASIM_label( PPWASIM, &QPWASIM );
BXNASIM_amcall(3, QPWASIM);
 /* line 253: */
TUNASIM_amdrop(2);
 /* line 255: */
NWNASIM_amlabel(1, IPWASIM_end);
 /* line 257: */
RPWASIM_fixedpartsize = (SOWASIM_outputoffset+YGCASIM_lookuptypesize(Outputtype));
 /* line 258: */
ZOPASIM_translateendfunction(RPWASIM_fixedpartsize, 1);
 /* line 259: */
SPWASIM.Size = RPWASIM_fixedpartsize;
SPWASIM.Offset = SOWASIM_outputoffset;
 /* line 260: */
 /* line 262: */
SPWASIM.Sort = IHCASIM_combinatorial;
TPWASIM = SPWASIM;
} 
A_PROC_EXIT(translatedynindex);
*ReturnedValue = (TPWASIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void PNWASIM(void)   /* initialise DECS keamdynindex */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keamdynindex.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kesignals.m","./mfiles/keconv.m","./mfiles/kebasics.m","./mfiles/keamstandard.m","./mfiles/keambasics.m","./mfiles/kesymbols.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/transform/assoc/mfiles/assmodes.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
NYNASIM();   /* USE kesignals */
KUBASIM();   /* USE keconv */
JSAASIM();   /* USE kebasics */
HYOASIM();   /* USE keamstandard */
XDNASIM();   /* USE keambasics */
TCCASIM();   /* USE kesymbols */
JSCAOST();   /* USE basics */
BAAATRN();   /* USE assmodes */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keamdynindex.a68";
A_config.translation_time = "Tue Apr  4 11:11:27 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ONWASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:11:27 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keamdynindex);
UEAALIB_a68config(LGAALIB_configinfo, TNWASIM);
 /* line 67: */
 /* line 117: */
 /* line 264: */
A_PROC_EXIT(DECS keamdynindex);
} 
#undef NL
/* end of translation of ./a68files/keamdynindex.a68 */
