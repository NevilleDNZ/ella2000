
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
/* UNAME:HIXASIM */
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

A_PROCEDURE(A68_VOID ,A68t223,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t224,(A68_BOOL ,struct A68t142 *),(A68_BOOL ,struct A68t142 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(BOOL) MODE142 */
struct A68t226{
A68_INT  Status;
A_PAD_INT(PAD_73)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t227,(A68_VC ,A68_INT *,struct A68t226 *),(A68_VC ,A68_INT *,struct A68t226 *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE26,REF INT) MODE226 */
struct A68t225{
A68_INT  Charnumber;
A_PAD_INT(PAD_74)
A68_INT  Linenumber;
A_PAD_INT(PAD_75)
A68_INT  Indent;
A_PAD_INT(PAD_76)
A68_INT  Width;
A_PAD_INT(PAD_77)
A68_INT  Sizeincr;
A_PAD_INT(PAD_78)
struct A68t226  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_79)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_80)
A68_BOOL  Input;
A_PAD_BOOL(PAD_81)
struct A68t222  Putbuffer;
struct A68t227  Getbuffer;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE226,REF MODE26,BOOL,BOOL,BOOL,MODE222,MODE227)  */

A_PROCEDURE(A68_VOID ,A68t228,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t142 ,struct A68t142 *),(struct A68t142 ,struct A68t142 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE142) REF MODE142 */

A_PROCEDURE(A68_VOID ,A68t230,(A68_INT ,struct A68t142 *),(A68_INT ,struct A68t142 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(INT) REF MODE142 */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE142) VOID */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t218 ,A68_VC *),(struct A68t218 ,A68_VC *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE218) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t233,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t235 ;

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t235 ,A68_VC *),(struct A68t235 ,A68_VC *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE235) MODE26 */
struct A68t235 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t235  A68_235 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t236,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_REAL ,A68t238);
typedef struct A68t238  A68_238 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t225 *),(struct A68t225 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE225) VOID */
struct A68t240{
A68_INT  Int;
A_PAD_INT(PAD_82)
A68_INT  Width;
A_PAD_INT(PAD_83)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(INT,INT)  */
struct A68t241{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_84)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE26,INT)  */
struct A68t242{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_85)
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE26,INT)  */
struct A68t243{
A68_INT  Tab;
A_PAD_INT(PAD_86)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT)  */
struct A68t244{
A68_INT  Pos;
A_PAD_INT(PAD_87)
};
typedef struct A68t244  A68_244 ;    /* STRUCT(INT)  */
struct A68t245{
A68_INT  After;
A_PAD_INT(PAD_88)
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT)  */
struct A68t246{
A68_INT  Spaces;
A_PAD_INT(PAD_89)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT)  */
struct A68t247{
A68_INT  Lines;
A_PAD_INT(PAD_90)
};
typedef struct A68t247  A68_247 ;    /* STRUCT(INT)  */
struct A68t248{
A68_INT  Indent;
A_PAD_INT(PAD_91)
};
typedef struct A68t248  A68_248 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t249);
typedef struct A68t249  A68_249 ;    /* STRAIGHT MODE237 */
struct A68t237 { A68_INT mode; union {
A68_INT  mode1;
struct A68t142  mode2;
A68_BITS  mode3;
struct A68t200  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t199  mode9;
A68_REAL  mode10;
struct A68t238  mode11;
struct A68t239  mode12;
struct A68t240  mode13;
struct A68t241  mode14;
struct A68t242  mode15;
struct A68t243  mode16;
struct A68t244  mode17;
struct A68t245  mode18;
struct A68t246  mode19;
struct A68t247  mode20;
struct A68t248  mode21;
struct A68t249  mode22;
} data; };
typedef struct A68t237  A68_237 ;    /* UNION(INT,MODE142,BITS,MODE200,SHORT BITS,CHAR,MODE26,BOOL,MODE199,REAL,MODE238,MODE239,MODE240,MODE241,MODE242,MODE243,MODE244,MODE245,MODE246,MODE247,MODE248,MODE249)  */

A_PROCEDURE(A68_VOID ,A68t250,(A68_BOOL ,struct A68t241 *),(A68_BOOL ,struct A68t241 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(BOOL) MODE241 */

A_PROCEDURE(A68_VOID ,A68t251,(A68_BOOL ,struct A68t242 *),(A68_BOOL ,struct A68t242 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(BOOL) MODE242 */

A_PROCEDURE(A68_INT ,A68t252,(struct A68t225 *),(struct A68t225 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE225) INT */

A_PROCEDURE(A68_INT ,A68t253,(struct A68t225 *,A68_INT ),(struct A68t225 *,A68_INT ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE225,INT) INT */

A_PROCEDURE(A68_VOID ,A68t254,(A68_INT ,A68_INT ,struct A68t240 *),(A68_INT ,A68_INT ,struct A68t240 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(INT,INT) MODE240 */

A_PROCEDURE(A68_VOID ,A68t255,(A68_VC ,A68_INT ,struct A68t241 *),(A68_VC ,A68_INT ,struct A68t241 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE26,INT) MODE241 */

A_PROCEDURE(A68_VOID ,A68t256,(A68_VC ,A68_INT ,struct A68t242 *),(A68_VC ,A68_INT ,struct A68t242 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE26,INT) MODE242 */

A_PROCEDURE(A68_VOID ,A68t257,(A68_INT ,struct A68t243 *),(A68_INT ,struct A68t243 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(INT) MODE243 */

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

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t225 *,A68_VC ),(struct A68t225 *,A68_VC ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE225,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t225 *,A68_INT ,A68_INT ),(struct A68t225 *,A68_INT ,A68_INT ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE225,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t225 *,A68_BITS ,A68_INT ),(struct A68t225 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE225,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t225 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t225 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE225,REAL,INT,INT) VOID */
struct A68t268 ;

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t225 *,struct A68t268 ),(struct A68t225 *,struct A68t268 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE225,MODE268) VOID */
A_VECTOR(struct A68t237 ,A68t268);
typedef struct A68t268  A68_268 ;    /* VECTOR [] MODE237 */
struct A68t270 ;
struct A68t271 ;

A_PROCEDURE(struct A68t225 *,A68t269,(struct A68t270 ,struct A68t271 ),(struct A68t270 ,struct A68t271 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE270,MODE271) REF MODE225 */
struct A68t270 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t270  A68_270 ;    /* UNION(INT,REF MODE26)  */
struct A68t271 { A68_INT mode; union {
struct A68t222  mode1;
struct A68t227  mode2;
} data; };
typedef struct A68t271  A68_271 ;    /* UNION(MODE222,MODE227)  */

A_PROCEDURE(A68_VOID ,A68t272,(A68_VC ,struct A68t268 ,A68_VC *),(A68_VC ,struct A68t268 ,A68_VC *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE26,MODE268) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t225 *,A68_VC *),(struct A68t225 *,A68_VC *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF MODE225) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t274,(struct A68t268 ,A68_VC *),(struct A68t268 ,A68_VC *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE268) REF MODE26 */
struct A68t275{
A68_INT  Svoid;
A_PAD_INT(PAD_92)
};
typedef struct A68t275  A68_275 ;    /* STRUCT(INT)  */
struct A68t276{
A68_INT  Snull;
A_PAD_INT(PAD_93)
};
typedef struct A68t276  A68_276 ;    /* STRUCT(INT)  */
struct A68t277{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_94)
A68_INT  Upb;
A_PAD_INT(PAD_95)
};
typedef struct A68t277  A68_277 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t278{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t279{
A68_INT  No;
A_PAD_INT(PAD_96)
struct A68t278  T;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(INT,MODE278)  */
struct A68t281 { A68_INT mode; union {
struct A68t280 * mode1;
struct A68t277 * mode2;
struct A68t278 * mode3;
struct A68t282 * mode4;
struct A68t279 * mode5;
struct A68t283 * mode6;
struct A68t284 * mode7;
struct A68t275  mode8;
struct A68t276  mode9;
} data; };
typedef struct A68t281  A68_281 ;    /* UNION(REF MODE280,REF MODE277,REF MODE278,REF MODE282,REF MODE279,REF MODE283,REF MODE284,MODE275,MODE276)  */
struct A68t280{
A68_VC  Id;
struct A68t281  T;
struct A68t280 * Rest;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE26,MODE281,REF MODE280)  */
struct A68t282{
A68_INT  No;
A_PAD_INT(PAD_97)
struct A68t281  Type;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,MODE281)  */
struct A68t283{
struct A68t281  From;
struct A68t281  To;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE281,MODE281)  */
struct A68t284{
struct A68t281  T;
struct A68t284 * Rest;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE281,REF MODE284)  */
struct A68t285 { A68_INT mode; union {
struct A68t280 * mode1;
struct A68t277 * mode2;
struct A68t278 * mode3;
} data; };
typedef struct A68t285  A68_285 ;    /* UNION(REF MODE280,REF MODE277,REF MODE278)  */
struct A68t286{
A68_INT  Svvoid;
A_PAD_INT(PAD_98)
};
typedef struct A68t286  A68_286 ;    /* STRUCT(INT)  */
struct A68t287{
A68_INT  Svnull;
A_PAD_INT(PAD_99)
};
typedef struct A68t287  A68_287 ;    /* STRUCT(INT)  */
struct A68t288{
struct A68t281  Type;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE281)  */
struct A68t289{
struct A68t277 * Type;
A68_INT  Value;
A_PAD_INT(PAD_100)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(REF MODE277,INT)  */
struct A68t290{
struct A68t278 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_101)
};
typedef struct A68t290  A68_290 ;    /* STRUCT(REF MODE278,CHAR)  */
struct A68t291{
struct A68t279 * Type;
A68_VC  Value;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(REF MODE279,REF MODE26)  */
struct A68t293 { A68_INT mode; union {
struct A68t288 * mode1;
struct A68t289 * mode2;
struct A68t290 * mode3;
struct A68t291 * mode4;
struct A68t292 * mode5;
struct A68t294 * mode6;
struct A68t295 * mode7;
struct A68t286  mode8;
struct A68t287  mode9;
} data; };
typedef struct A68t293  A68_293 ;    /* UNION(REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292,REF MODE294,REF MODE295,MODE286,MODE287)  */
struct A68t292{
struct A68t280 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_102)
struct A68t293  Assoc;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(REF MODE280,INT,MODE293)  */
struct A68t294{
struct A68t293  Head;
struct A68t294 * Tail;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE293,REF MODE294)  */
struct A68t295{
struct A68t293  From;
struct A68t293  To;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE293,MODE293)  */
struct A68t296{
A68_INT  Instoffset;
A_PAD_INT(PAD_103)
A68_INT  Offset;
A_PAD_INT(PAD_104)
A68_INT  Size;
A_PAD_INT(PAD_105)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t296 ,A68t298);
typedef struct A68t298  A68_298 ;    /* VECTOR [] MODE296 */
struct A68t297{
struct A68t281  Type;
struct A68t298  Blocks;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(MODE281,REF MODE298)  */
struct A68t299{
struct A68t297  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_106)
A68_INT  Ramsize;
A_PAD_INT(PAD_107)
A68_INT  Step;
A_PAD_INT(PAD_108)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE297,INT,INT,INT)  */
struct A68t300{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_109)
};
typedef struct A68t300  A68_300 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t300 ,A68t302);
typedef struct A68t302  A68_302 ;    /* VECTOR [] MODE300 */
struct A68t301{
struct A68t299 * Ram;
struct A68t297  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_110)
struct A68t302  Body;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(REF MODE299,MODE297,INT,REF MODE302)  */
struct A68t303{
A68_INT  Fn;
A_PAD_INT(PAD_111)
A68_INT  Instance;
A_PAD_INT(PAD_112)
};
typedef struct A68t303  A68_303 ;    /* STRUCT(INT,INT)  */
struct A68t304{
struct A68t297 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_113)
};
typedef struct A68t304  A68_304 ;    /* STRUCT(REF MODE297,INT)  */
struct A68t305 { A68_INT mode; union {
struct A68t303  mode1;
struct A68t304  mode2;
} data; };
typedef struct A68t305  A68_305 ;    /* UNION(MODE303,MODE304)  */
struct A68t306 { A68_INT mode; union {
struct A68t303  mode1;
struct A68t297  mode2;
} data; };
typedef struct A68t306  A68_306 ;    /* UNION(MODE303,MODE297)  */
struct A68t307{
struct A68t305  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_114)
A68_INT  Base;
A_PAD_INT(PAD_115)
};
typedef struct A68t307  A68_307 ;    /* STRUCT(MODE305,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t293 ,struct A68t281 *),(struct A68t293 ,struct A68t281 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE293) MODE281 */

A_PROCEDURE(A68_BOOL ,A68t309,(struct A68t281 ,struct A68t281 ),(struct A68t281 ,struct A68t281 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE281,MODE281) BOOL */

A_PROCEDURE(A68_BOOL ,A68t310,(struct A68t293 ,struct A68t293 ),(struct A68t293 ,struct A68t293 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE293,MODE293) BOOL */

A_PROCEDURE(A68_BOOL ,A68t311,(struct A68t297 ,struct A68t297 ),(struct A68t297 ,struct A68t297 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE297,MODE297) BOOL */

A_PROCEDURE(A68_BOOL ,A68t312,(struct A68t303 ,struct A68t303 ),(struct A68t303 ,struct A68t303 ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(MODE303,MODE303) BOOL */

A_PROCEDURE(A68_BOOL ,A68t313,(struct A68t304 ,struct A68t304 ),(struct A68t304 ,struct A68t304 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(MODE304,MODE304) BOOL */

A_PROCEDURE(A68_BOOL ,A68t314,(struct A68t305 ,struct A68t305 ),(struct A68t305 ,struct A68t305 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE305,MODE305) BOOL */

A_PROCEDURE(A68_BOOL ,A68t315,(struct A68t307 ,struct A68t307 ),(struct A68t307 ,struct A68t307 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE307,MODE307) BOOL */

A_PROCEDURE(struct A68t284 *,A68t316,(struct A68t284 *,struct A68t284 *),(struct A68t284 *,struct A68t284 *,void *));
typedef struct A68t316  A68_316 ;    /* PROC(REF MODE284,REF MODE284) REF MODE284 */

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t298 ,struct A68t298 ,struct A68t298 *),(struct A68t298 ,struct A68t298 ,struct A68t298 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE298,REF MODE298) REF MODE298 */

A_PROCEDURE(A68_VOID ,A68t318,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t319,(A68_VC ),(A68_VC ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE26) INT */
struct A68t320{
A68_INT  Sort;
A_PAD_INT(PAD_116)
A68_INT  Size;
A_PAD_INT(PAD_117)
};
typedef struct A68t320  A68_320 ;    /* STRUCT(INT,INT)  */
struct A68t321{
struct A68t320  Head;
struct A68t321 * Tail;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(MODE320,REF MODE321)  */
struct A68t323{
A68_INT  Lab;
A_PAD_INT(PAD_118)
A68_VC  Tag;
};
typedef struct A68t323  A68_323 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t322{
struct A68t323  Labelint;
struct A68t323  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_119)
A68_INT  Evalfn;
A_PAD_INT(PAD_120)
A68_INT  History;
A_PAD_INT(PAD_121)
A68_INT  Declid;
A_PAD_INT(PAD_122)
};
typedef struct A68t322  A68_322 ;    /* STRUCT(MODE323,MODE323,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t322 *,A68t324,(A68_VC ,struct A68t142 ,A68_INT ,struct A68t142 ,struct A68t222 ),(A68_VC ,struct A68t142 ,A68_INT ,struct A68t142 ,struct A68t222 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE26,MODE142,INT,MODE142,MODE222) REF MODE322 */
struct A68t325 { A68_INT mode; union {
A68_INT  mode1;
struct A68t323  mode2;
} data; };
typedef struct A68t325  A68_325 ;    /* UNION(INT,MODE323,VOID)  */

A_PROCEDURE(A68_VOID ,A68t326,(A68_VC ,struct A68t323 *),(A68_VC ,struct A68t323 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE26) MODE323 */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t323 *),(struct A68t323 *,void *));
typedef struct A68t327  A68_327 ;    /* PROC MODE323 */

A_PROCEDURE(A68_VOID ,A68t328,(void),(void *));
typedef struct A68t328  A68_328 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t329,(struct A68t201 ,A68_INT ,struct A68t222 ),(struct A68t201 ,A68_INT ,struct A68t222 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE201,INT,MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t330,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE222) VOID */

A_PROCEDURE(A68_INT ,A68t331,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t331  A68_331 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t332,(A68_VC ),(A68_VC ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t333,(A68_INT ),(A68_INT ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t334,(A68_INT ,struct A68t325 ),(A68_INT ,struct A68t325 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(INT,MODE325) VOID */

A_PROCEDURE(A68_VOID ,A68t335,(A68_INT ,A68_INT ,struct A68t325 ),(A68_INT ,A68_INT ,struct A68t325 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(INT,INT,MODE325) VOID */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t323 ),(struct A68t323 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(MODE323) VOID */

A_PROCEDURE(A68_VOID ,A68t337,(A68_INT ,struct A68t323 ),(A68_INT ,struct A68t323 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(INT,MODE323) VOID */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t325 ,struct A68t323 ),(struct A68t325 ,struct A68t323 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE325,MODE323) VOID */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t323 ,struct A68t321 *,struct A68t321 *),(struct A68t323 ,struct A68t321 *,struct A68t321 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(MODE323,REF MODE321,REF MODE321) VOID */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t323 ,A68_INT ),(struct A68t323 ,A68_INT ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE323,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t341,(A68_INT ,struct A68t222 ,A68_VC *),(A68_INT ,struct A68t222 ,A68_VC *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(INT,MODE222) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t342,(A68_INT ,struct A68t222 ),(A68_INT ,struct A68t222 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(INT,MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t343,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t344,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t344  A68_344 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t346 ;

A_PROCEDURE(A68_VOID ,A68t345,(A68_INT ,struct A68t346 *),(A68_INT ,struct A68t346 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(INT) MODE346 */
struct A68t346{
A68_INT  Lasttime;
A_PAD_INT(PAD_123)
A68_INT  Interrupted;
A_PAD_INT(PAD_124)
};
typedef struct A68t346  A68_346 ;    /* STRUCT(INT,INT)  */
struct A68t348 ;

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t348 ,struct A68t348 ,struct A68t222 ),(struct A68t348 ,struct A68t348 ,struct A68t222 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE348,MODE348,MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t348,(A68_VC ,struct A68t222 ),(A68_VC ,struct A68t222 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE26,MODE222) VOID */
struct A68t350 ;

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t350 *),(struct A68t350 *,void *));
typedef struct A68t349  A68_349 ;    /* PROC MODE350 */
struct A68t350{
A68_INT  Codesize;
A_PAD_INT(PAD_125)
A68_INT  Datasize;
A_PAD_INT(PAD_126)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_127)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_128)
};
typedef struct A68t350  A68_350 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t351,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t352,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE142,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t142 ,struct A68t281 ),(struct A68t142 ,struct A68t281 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE142,MODE281) VOID */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t142 ,A68_INT ,struct A68t281 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t142 ,A68_INT ,struct A68t281 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE142,INT,MODE281,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t142 ,struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t142 ,struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE142,MODE142,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t357,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t293 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t293 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE293,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t293 ,struct A68t281 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t293 ,struct A68t281 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE293,MODE281,INT,INT,INT,INT) VOID */
struct A68t361 ;

A_PROCEDURE(A68_VOID ,A68t360,(A68_INT ,A68_VC ,struct A68t361 *),(A68_INT ,A68_VC ,struct A68t361 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(INT,REF MODE26) MODE361 */
struct A68t361{
A68_INT  Size;
A_PAD_INT(PAD_129)
A68_INT  Offset;
A_PAD_INT(PAD_130)
A68_BITS  Sort;
A_PAD_BITS(PAD_131)
};
typedef struct A68t361  A68_361 ;    /* STRUCT(INT,INT,BITS)  */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t142 ,A68_VC ,struct A68t361 *),(struct A68t142 ,A68_VC ,struct A68t361 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE142,MODE26) MODE361 */
struct A68t364 ;

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t145 ,A68_VC ,struct A68t158 ,struct A68t364 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t145 ,A68_VC ,struct A68t158 ,struct A68t364 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE145,REF MODE26,MODE158,MODE364,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */
A_VECTOR(struct A68t297 ,A68t364);
typedef struct A68t364  A68_364 ;    /* VECTOR [] MODE297 */
struct A68t366 ;

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t144 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t366 *,struct A68t222 ,struct A68t361 *),(struct A68t144 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t366 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(MODE144,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,REF MODE366,MODE222) MODE361 */
struct A68t366{
A68_INT  Workspace;
A_PAD_INT(PAD_132)
A68_INT  History;
A_PAD_INT(PAD_133)
A68_INT  Declid;
A_PAD_INT(PAD_134)
};
typedef struct A68t366  A68_366 ;    /* STRUCT(INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t88 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t88 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE88,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t144 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t144 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE144,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t100 ,A68_VC ,struct A68t158 ,struct A68t364 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t100 ,A68_VC ,struct A68t158 ,struct A68t364 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE100,REF MODE26,MODE158,MODE364,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t89 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t89 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE89,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t148 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t148 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE148,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t149 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t149 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE149,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t150 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t299 **,struct A68t222 ,struct A68t361 *),(struct A68t150 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t299 **,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE150,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,REF REF MODE299,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t151 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t151 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE151,REF MODE26,MODE158,MODE142,INT,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t93 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 *,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t93 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 *,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE93,REF MODE26,MODE158,MODE142,INT,REF MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t94 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t94 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE94,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t97 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t97 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE97,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t108 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t108 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE108,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t92 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t92 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE92,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t91 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *),(struct A68t91 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE91,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE361 */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t328 ),(struct A68t328 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE328) VOID */

A_PROCEDURE(A68_VOID ,A68t382,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t383);
typedef struct A68t383  A68_383 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_BOOL ,A68t384,(A68_VC ),(A68_VC ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t144 *,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t366 *,struct A68t222 ,struct A68t361 *),(struct A68t144 *,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t366 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE144,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,REF MODE366,MODE222) MODE361 */
A_ISTRUCT(A68_CHAR ,8,A68t386);
typedef struct A68t386  A68_386 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t387);
typedef struct A68t387  A68_387 ;    /* STRUCT 4 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t388);
typedef struct A68t388  A68_388 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t154 ,A68_VC ,struct A68t158 ,struct A68t364 ,struct A68t142 ,A68_INT ,struct A68t161 *,struct A68t171 *,struct A68t299 **,struct A68t366 *,struct A68t222 ,struct A68t361 *),(struct A68t154 ,A68_VC ,struct A68t158 ,struct A68t364 ,struct A68t142 ,A68_INT ,struct A68t161 *,struct A68t171 *,struct A68t299 **,struct A68t366 *,struct A68t222 ,struct A68t361 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE154,REF MODE26,MODE158,MODE364,MODE142,INT,REF MODE161,REF MODE171,REF REF MODE299,REF MODE366,MODE222) MODE361 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from keamtrim --- */
extern A68_VOID  PFXASIM_translatetrim(struct A68t92 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
extern A68_VOID  GHXASIM_translateindex(struct A68t91 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamtrim --- */


/* --- Imports from keamstring --- */
extern A68_VOID  UCXASIM_translatestring(struct A68t108 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamstring --- */


/* --- Imports from keamconc --- */
extern A68_VOID  JZWASIM_translateconc(struct A68t97 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamconc --- */


/* --- Imports from keamreplace --- */
extern A68_VOID  HQWASIM_translatereplace(struct A68t94 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamreplace --- */


/* --- Imports from keamdynindex --- */
extern A68_VOID  OOWASIM_translatedynindex(struct A68t93 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 *,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamdynindex --- */


/* --- Imports from keamregister --- */
extern A68_VOID  HKWASIM_translateregister(struct A68t151 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
extern A68_VOID  NLWASIM_translatefullregister(struct A68t144 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamregister --- */


/* --- Imports from keamram --- */
extern A68_VOID  GBWASIM_translateram(struct A68t150 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t299 **,struct A68t222 ,A68_361 *);
/* --- End of imports from keamram --- */


/* --- Imports from keamdelay --- */
extern A68_VOID  WXVASIM_translateadelay(struct A68t148 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
extern A68_VOID  PZVASIM_translateidelay(struct A68t149 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamdelay --- */


/* --- Imports from keamextract --- */
extern A68_VOID  FTVASIM_translateextract(struct A68t89 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamextract --- */


/* --- Imports from keamcase --- */
extern A68_VOID  MSVASIM_translatecase(struct A68t100 ,A68_VC ,struct A68t158 ,struct A68t364 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamcase --- */


/* --- Imports from keambiop --- */
extern A68_VOID  ROUASIM_initialisebiop(void);
extern A68_VOID  CSUASIM_translatebiop(struct A68t144 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keambiop --- */


/* --- Imports from keamassoc --- */
extern A68_VOID  OFQASIM_translateassoc(struct A68t88 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamassoc --- */


/* --- Imports from keamalien --- */
extern A68_VOID  JDQASIM_translatealien(struct A68t144 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t366 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamalien --- */


/* --- Imports from keamarith --- */
extern A68_BOOL  VXPASIM_noarithsyet;
extern A68_VOID  BBQASIM_translatearith(struct A68t145 ,A68_VC ,struct A68t158 ,struct A68t364 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,A68_361 *);
/* --- End of imports from keamarith --- */


/* --- Imports from keamstandard --- */
extern A68_INT  MYOASIM_globaltime;
extern A68_INT  NYOASIM_globalmaxtime;
extern A68_INT  OYOASIM_globalinterrupted;
extern A68_INT  PYOASIM_globalinitialised;
extern A68_INT  QYOASIM_globalaction;
extern A68_INT  SYOASIM_globaltemp1;
extern A68_INT  TYOASIM_globalend;
extern A68_INT  RYOASIM_globaliterations;
extern A68_INT  YYOASIM_globalstartinitlist;
extern A68_INT  ZYOASIM_globalendinitlist;
extern A68_INT  AZOASIM_globalstartinstlist;
extern A68_INT  BZOASIM_globalendinstlist;
extern A68_INT  CZOASIM_globalinstancelist;
extern A68_INT  VYOASIM_globalmonitorchanged;
extern A68_INT  WYOASIM_globalnextevent;
extern A68_INT  XYOASIM_globalunitdelevent;
extern A68_INT  UYOASIM_globalcomboutputsstable;
extern A68_323  MZOASIM_globaltimelabel;
extern A68_323  WZOASIM_globalmaxtimelabel;
extern A68_323  GAPASIM_globalinterruptedlabel;
extern A68_323  QAPASIM_globalinitialisedlabel;
extern A68_323  ABPASIM_globalactionlabel;
extern A68_323  KBPASIM_globaliterationslabel;
extern A68_323  IDPASIM_globalmonitorchangedlabel;
extern A68_323  MEPASIM_globalnexteventlabel;
extern A68_323  SDPASIM_globalunitdeleventlabel;
extern A68_323  CEPASIM_globalcomboutputsstablelabel;
extern A68_323  WEPASIM_globalstartinitlabel;
extern A68_323  GFPASIM_globalendinitlabel;
extern A68_323  QFPASIM_globalstartinstlabel;
extern A68_323  AGPASIM_globalendinstlabel;
extern A68_VOID  MVPASIM_translategenericidentity(void);
extern A68_VOID  UVPASIM_translatecleargenericid(void);
extern A68_VOID  VWPASIM_translategenericquery(void);
/* --- End of imports from keamstandard --- */


/* --- Imports from keambasics --- */
extern A68_VOID  SGNASIM_aminitialise(struct A68t201 ,A68_INT ,struct A68t222 );
extern A68_INT  DENASIM_ws;
extern A68_VOID  UXNASIM_amgeneratenameddata(struct A68t323 ,A68_INT );
/* --- End of imports from keambasics --- */


/* --- Imports from kebasics --- */
/* --- End of imports from kebasics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from assmodes --- */
/* --- End of imports from assmodes --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void YDXASIM(void);   /* keamtrim */
extern void ACXASIM(void);   /* keamstring */
extern void AXWASIM(void);   /* keamconc */
extern void UPWASIM(void);   /* keamreplace */
extern void PNWASIM(void);   /* keamdynindex */
extern void SGWASIM(void);   /* keamregister */
extern void SAWASIM(void);   /* keamram */
extern void YTVASIM(void);   /* keamdelay */
extern void SSVASIM(void);   /* keamextract */
extern void HSUASIM(void);   /* keamcase */
extern void DGQASIM(void);   /* keambiop */
extern void BFQASIM(void);   /* keamassoc */
extern void GBQASIM(void);   /* keamalien */
extern void QXPASIM(void);   /* keamarith */
extern void HYOASIM(void);   /* keamstandard */
extern void XDNASIM(void);   /* keambasics */
extern void JSAASIM(void);   /* kebasics */
extern void MTAAOSL(void);   /* putstrings */
extern void JSCAOST(void);   /* basics */
extern void BAAATRN(void);   /* assmodes */
/* --- end of DECS initialisation functions --- */
static A68_383   LIXASIM = {"$Id: keamgen.a68,v 34.2 1995/03/29 13:04:37 ella Exp $"}; 
A_GISVEC(A68_VC ,MIXASIM,LIXASIM,54)
static A68_386   IJXASIM = {"REGISTER"}; 
A_GISVEC(A68_VC ,JJXASIM,IJXASIM,8)
static A68_387   LJXASIM = {"CAST"}; 
A_GISVEC(A68_VC ,MJXASIM,LJXASIM,4)
static A68_388   NJXASIM = {"_CAST"}; 
A_GISVEC(A68_VC ,OJXASIM,NJXASIM,5)

A68_VOID  NIXASIM_amlocationsinitialise(void);

A68_VOID  RIXASIM_translateinitialise(A68_201  Diag, A68_INT  Level, A68_222  Flt);

A_STATIC A68_BOOL  TIXASIM_asbiop(A68_VC  Name);

A_STATIC A68_VOID  EJXASIM_resolvealien(A68_144 * Alien, A68_VC  Name, A68_158  Declaration, A68_142  Inputtypes, A68_INT  Outputtype, A68_161  Environ, A68_171 * Closure, A68_366 * Alienshape, A68_222  Flt, A68_361  *ReturnedValue);

A68_VOID  DKXASIM_translateatomic(A68_154  Body, A68_VC  Name, A68_158  Declaration, A68_364  Inputwires, A68_142  Inputtypes, A68_INT  Outputtype, A68_161 * Environ, A68_171 * Closure, A68_299 ** Sram, A68_366 * Alienshape, A68_222  Flt, A68_361  *ReturnedValue);

A68_VOID  NIXASIM_amlocationsinitialise(void)
{ 
A_PROC_ENTRY(amlocationsinitialise);
{ 
MYOASIM_globaltime = 0;
 /* line 86: */
NYOASIM_globalmaxtime = DENASIM_ws;
 /* line 87: */
OYOASIM_globalinterrupted = (2*DENASIM_ws);
 /* line 88: */
PYOASIM_globalinitialised = (3*DENASIM_ws);
 /* line 89: */
QYOASIM_globalaction = (4*DENASIM_ws);
 /* line 90: */
SYOASIM_globaltemp1 = (5*DENASIM_ws);
 /* line 91: */
UYOASIM_globalcomboutputsstable = (6*DENASIM_ws);
 /* line 92: */
VYOASIM_globalmonitorchanged = (7*DENASIM_ws);
 /* line 93: */
WYOASIM_globalnextevent = (8*DENASIM_ws);
 /* line 94: */
XYOASIM_globalunitdelevent = (9*DENASIM_ws);
 /* line 95: */
YYOASIM_globalstartinitlist = (10*DENASIM_ws);
 /* line 96: */
ZYOASIM_globalendinitlist = (11*DENASIM_ws);
 /* line 97: */
AZOASIM_globalstartinstlist = (12*DENASIM_ws);
 /* line 98: */
BZOASIM_globalendinstlist = (13*DENASIM_ws);
 /* line 99: */
CZOASIM_globalinstancelist = (14*DENASIM_ws);
 /* line 100: */
RYOASIM_globaliterations = (15*DENASIM_ws);
 /* line 101: */
 /* line 102: */
TYOASIM_globalend = (15*DENASIM_ws);
} 
A_PROC_EXIT(amlocationsinitialise);
return;
} 
#undef NL

A68_VOID  RIXASIM_translateinitialise(A68_201  Diag, A68_INT  Level, A68_222  Flt)
{ 
A_PROC_ENTRY(translateinitialise);
 /* line 106: */
 /* line 107: */
{ 
SGNASIM_aminitialise(Diag, Level, Flt);
 /* line 109: */
NIXASIM_amlocationsinitialise();
 /* line 111: */
VXPASIM_noarithsyet = A68_TRUE;
 /* line 113: */
ROUASIM_initialisebiop();
 /* line 115: */
UXNASIM_amgeneratenameddata(MZOASIM_globaltimelabel, MYOASIM_globaltime);
 /* line 116: */
UXNASIM_amgeneratenameddata(WZOASIM_globalmaxtimelabel, NYOASIM_globalmaxtime);
 /* line 117: */
UXNASIM_amgeneratenameddata(GAPASIM_globalinterruptedlabel, OYOASIM_globalinterrupted);
 /* line 118: */
UXNASIM_amgeneratenameddata(QAPASIM_globalinitialisedlabel, PYOASIM_globalinitialised);
 /* line 119: */
UXNASIM_amgeneratenameddata(ABPASIM_globalactionlabel, QYOASIM_globalaction);
 /* line 120: */
UXNASIM_amgeneratenameddata(KBPASIM_globaliterationslabel, RYOASIM_globaliterations);
 /* line 121: */
 /* line 122: */
UXNASIM_amgeneratenameddata(IDPASIM_globalmonitorchangedlabel, VYOASIM_globalmonitorchanged);
 /* line 123: */
 /* line 124: */
UXNASIM_amgeneratenameddata(CEPASIM_globalcomboutputsstablelabel, UYOASIM_globalcomboutputsstable);
 /* line 125: */
UXNASIM_amgeneratenameddata(MEPASIM_globalnexteventlabel, WYOASIM_globalnextevent);
 /* line 126: */
UXNASIM_amgeneratenameddata(SDPASIM_globalunitdeleventlabel, XYOASIM_globalunitdelevent);
 /* line 127: */
UXNASIM_amgeneratenameddata(WEPASIM_globalstartinitlabel, YYOASIM_globalstartinitlist);
 /* line 128: */
UXNASIM_amgeneratenameddata(GFPASIM_globalendinitlabel, ZYOASIM_globalendinitlist);
 /* line 129: */
UXNASIM_amgeneratenameddata(QFPASIM_globalstartinstlabel, AZOASIM_globalstartinstlist);
 /* line 130: */
UXNASIM_amgeneratenameddata(AGPASIM_globalendinstlabel, BZOASIM_globalendinstlist);
 /* line 134: */
MVPASIM_translategenericidentity();
 /* line 135: */
UVPASIM_translatecleargenericid();
 /* line 136: */
 /* line 137: */
VWPASIM_translategenericquery();
} 
A_PROC_EXIT(translateinitialise);
return;
} 
#undef NL

A_STATIC A68_BOOL  TIXASIM_asbiop(A68_VC  Name)
{ 
A68_BOOL  UIXASIM;  /* clause result */
A_PROC_ENTRY(asbiop);
UIXASIM = A68_FALSE;
A_PROC_EXIT(asbiop);
return( UIXASIM );
} 
#undef NL
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 159: */

A_STATIC A68_VOID  EJXASIM_resolvealien(A68_144 * Alien, A68_VC  Name, A68_158  Declaration, A68_142  Inputtypes, A68_INT  Outputtype, A68_161  Environ, A68_171 * Closure, A68_366 * Alienshape, A68_222  Flt, A68_361  *ReturnedValue)
{ 
A68_BOOL  FJXASIM;  /* optbool result */
A68_361  GJXASIM;  /* clause result */
A68_361  HJXASIM;  /* avoid structure result */
A68_361  KJXASIM;  /* avoid structure result */
A68_VC  PJXASIM;  /* avoid structure result */
A68_VC * QJXASIM;  /* YIELD */
A68_361  RJXASIM;  /* avoid structure result */
A_PROC_ENTRY(resolvealien);
 /* line 160: */
FJXASIM = (*(&(Alien->Biop)));
if ( ! FJXASIM )
{FJXASIM = TIXASIM_asbiop((*(&(Alien->Name))));
}
 /* line 161: */
if ( FJXASIM )
{ 
 /* line 162: */
 /* line 163: */
CSUASIM_translatebiop( (*Alien), Name, Declaration, Inputtypes, Outputtype, Environ, Closure, Flt, &HJXASIM );
GJXASIM = HJXASIM;
} 
else
{ 
 /* line 164: */
if ( A_VC_EQ((*(&(Alien->Name))),JJXASIM) )
{ 
 /* line 165: */
 /* line 166: */
 /* line 167: */
NLWASIM_translatefullregister( (*Alien), Name, Declaration, Inputtypes, Outputtype, Environ, Closure, Flt, &KJXASIM );
GJXASIM = KJXASIM;
} 
else
{ 
 /* line 168: */
if ( A_VC_EQ((*(&(Alien->Name))),MJXASIM) )
{ 
 /* line 169: */
RSCAOST_makeid( OJXASIM, &PJXASIM );
QJXASIM = (&(Alien->Name)) ;
(*QJXASIM) = PJXASIM;
} 
 /* line 170: */
 /* line 171: */
 /* line 172: */
JDQASIM_translatealien( (*Alien), Name, Declaration, Inputtypes, Outputtype, Environ, Closure, Alienshape, Flt, &RJXASIM );
GJXASIM = RJXASIM;
} 
} 
A_PROC_EXIT(resolvealien);
*ReturnedValue = (GJXASIM);
return;
} 
#undef NL
 /* line 186: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
 /* line 190: */
 /* line 191: */

A68_VOID  DKXASIM_translateatomic(A68_154  Body, A68_VC  Name, A68_158  Declaration, A68_364  Inputwires, A68_142  Inputtypes, A68_INT  Outputtype, A68_161 * Environ, A68_171 * Closure, A68_299 ** Sram, A68_366 * Alienshape, A68_222  Flt, A68_361  *ReturnedValue)
{ 
A68_154  EKXASIM;  /* united object - for case conformity */
A68_145 * FKXASIM_arith;
A68_361  GKXASIM;  /* clause result */
A68_361  HKXASIM;  /* avoid structure result */
A68_144 * IKXASIM_alien;
A68_361  JKXASIM;  /* avoid structure result */
A68_148 * KKXASIM_adelay;
A68_361  LKXASIM;  /* avoid structure result */
A68_149 * MKXASIM_idelay;
A68_361  NKXASIM;  /* avoid structure result */
A68_150 * OKXASIM_ram;
A68_361  PKXASIM;  /* avoid structure result */
A68_151 * QKXASIM_register;
A68_361  RKXASIM;  /* avoid structure result */
A68_126 * SKXASIM_u;
A68_81  TKXASIM;  /* united object - for case conformity */
A68_100 * UKXASIM_case;
A68_361  VKXASIM;  /* avoid structure result */
A68_88 * WKXASIM_assoc;
A68_361  XKXASIM;  /* avoid structure result */
A68_89 * YKXASIM_extract;
A68_361  ZKXASIM;  /* avoid structure result */
A68_97 * ALXASIM_conc;
A68_361  BLXASIM;  /* avoid structure result */
A68_91 * CLXASIM_index;
A68_361  DLXASIM;  /* avoid structure result */
A68_92 * ELXASIM_trim;
A68_361  FLXASIM;  /* avoid structure result */
A68_93 * GLXASIM_dyindex;
A68_361  HLXASIM;  /* avoid structure result */
A68_94 * ILXASIM_replace;
A68_361  JLXASIM;  /* avoid structure result */
A68_108 * KLXASIM_string;
A68_361  LLXASIM;  /* avoid structure result */
A_PROC_ENTRY(translateatomic);
 /* line 193: */
 /* line 194: */
EKXASIM = Body ;
switch ( EKXASIM.mode )
{ 
case 3: /* REF STRUCT(MODE43)  */
FKXASIM_arith = (EKXASIM.data.mode3);
 /* line 195: */
 /* line 196: */
 /* line 197: */
BBQASIM_translatearith( (*FKXASIM_arith), Name, Declaration, Inputwires, Inputtypes, Outputtype, (*Environ), Closure, Flt, &HKXASIM );
GKXASIM = HKXASIM;
break;
case 2: /* REF STRUCT(BOOL,REF MODE26,REF MODE123)  */
IKXASIM_alien = (EKXASIM.data.mode2);
 /* line 198: */
 /* line 199: */
 /* line 200: */
EJXASIM_resolvealien( IKXASIM_alien, Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Alienshape, Flt, &JKXASIM );
GKXASIM = JKXASIM;
break;
case 6: /* REF STRUCT(INT,MODE81,MODE43,MODE81,MODE43)  */
KKXASIM_adelay = (EKXASIM.data.mode6);
 /* line 201: */
 /* line 202: */
 /* line 203: */
WXVASIM_translateadelay( (*KKXASIM_adelay), Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Flt, &LKXASIM );
GKXASIM = LKXASIM;
break;
case 7: /* REF STRUCT(MODE81,MODE43)  */
MKXASIM_idelay = (EKXASIM.data.mode7);
 /* line 204: */
 /* line 205: */
 /* line 206: */
PZVASIM_translateidelay( (*MKXASIM_idelay), Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Flt, &NKXASIM );
GKXASIM = NKXASIM;
break;
case 8: /* REF STRUCT(MODE81)  */
OKXASIM_ram = (EKXASIM.data.mode8);
 /* line 207: */
 /* line 208: */
 /* line 209: */
GBWASIM_translateram( (*OKXASIM_ram), Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Sram, Flt, &PKXASIM );
GKXASIM = PKXASIM;
break;
case 9: /* REF STRUCT(INT,MODE43,MODE81,MODE43)  */
QKXASIM_register = (EKXASIM.data.mode9);
 /* line 210: */
 /* line 211: */
 /* line 212: */
HKWASIM_translateregister( (*QKXASIM_register), Name, Declaration, Inputtypes, Outputtype, 0, (*Environ), Closure, Flt, &RKXASIM );
GKXASIM = RKXASIM;
break;
case 1: /* REF STRUCT(MODE81)  */
SKXASIM_u = (EKXASIM.data.mode1);
 /* line 213: */
 /* line 214: */
TKXASIM = (*(&(SKXASIM_u->Tag))) ;
switch ( TKXASIM.mode )
{ 
case 25: /* REF STRUCT(MODE81,REF MODE141)  */
UKXASIM_case = (TKXASIM.data.mode25);
 /* line 215: */
 /* line 216: */
 /* line 217: */
MSVASIM_translatecase( (*UKXASIM_case), Name, Declaration, Inputwires, Inputtypes, Outputtype, (*Environ), Closure, Flt, &VKXASIM );
GKXASIM = VKXASIM;
break;
case 13: /* REF STRUCT(INT,INT,MODE81)  */
WKXASIM_assoc = (TKXASIM.data.mode13);
 /* line 218: */
 /* line 219: */
 /* line 220: */
OFQASIM_translateassoc( (*WKXASIM_assoc), Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Flt, &XKXASIM );
GKXASIM = XKXASIM;
break;
case 14: /* REF STRUCT(MODE81,INT,INT)  */
YKXASIM_extract = (TKXASIM.data.mode14);
 /* line 221: */
 /* line 222: */
 /* line 223: */
FTVASIM_translateextract( (*YKXASIM_extract), Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Flt, &ZKXASIM );
GKXASIM = ZKXASIM;
break;
case 22: /* REF STRUCT(BOOL,INT,MODE81,MODE81)  */
ALXASIM_conc = (TKXASIM.data.mode22);
 /* line 224: */
 /* line 225: */
 /* line 226: */
JZWASIM_translateconc( (*ALXASIM_conc), Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Flt, &BLXASIM );
GKXASIM = BLXASIM;
break;
case 16: /* REF STRUCT(MODE81,MODE43)  */
CLXASIM_index = (TKXASIM.data.mode16);
 /* line 227: */
 /* line 228: */
 /* line 229: */
GHXASIM_translateindex( (*CLXASIM_index), Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Flt, &DLXASIM );
GKXASIM = DLXASIM;
break;
case 17: /* REF STRUCT(MODE81,MODE58)  */
ELXASIM_trim = (TKXASIM.data.mode17);
 /* line 230: */
 /* line 231: */
 /* line 232: */
PFXASIM_translatetrim( (*ELXASIM_trim), Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Flt, &FLXASIM );
GKXASIM = FLXASIM;
break;
case 18: /* REF STRUCT(MODE81,MODE81)  */
GLXASIM_dyindex = (TKXASIM.data.mode18);
 /* line 233: */
 /* line 234: */
 /* line 235: */
OOWASIM_translatedynindex( (*GLXASIM_dyindex), Name, Declaration, Inputtypes, Outputtype, Environ, Closure, Flt, &HLXASIM );
GKXASIM = HLXASIM;
break;
case 19: /* REF STRUCT(MODE81,MODE81,MODE81)  */
ILXASIM_replace = (TKXASIM.data.mode19);
 /* line 236: */
 /* line 237: */
 /* line 238: */
HQWASIM_translatereplace( (*ILXASIM_replace), Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Flt, &JLXASIM );
GKXASIM = JLXASIM;
break;
case 33: /* REF STRUCT(MODE43,MODE81)  */
KLXASIM_string = (TKXASIM.data.mode33);
 /* line 239: */
 /* line 240: */
 /* line 241: */
 /* line 242: */
 /* line 245: */
UCXASIM_translatestring( (*KLXASIM_string), Name, Declaration, Inputtypes, Outputtype, (*Environ), Closure, Flt, &LLXASIM );
GKXASIM = LLXASIM;
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
A_PROC_EXIT(translateatomic);
*ReturnedValue = (GKXASIM);
return;
} 
#undef NL
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 8: */
void IIXASIM(void)   /* initialise DECS keamgen */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keamgen.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/keamtrim.m","./mfiles/keamstring.m","./mfiles/keamconc.m","./mfiles/keamreplace.m","./mfiles/keamdynindex.m","./mfiles/keamregister.m","./mfiles/keamram.m","./mfiles/keamdelay.m","./mfiles/keamextract.m","./mfiles/keamcase.m","./mfiles/keambiop.m","./mfiles/keamassoc.m","./mfiles/keamalien.m","./mfiles/keamarith.m","./mfiles/keamstandard.m","./mfiles/keambasics.m","./mfiles/kebasics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/transform/assoc/mfiles/assmodes.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
YDXASIM();   /* USE keamtrim */
ACXASIM();   /* USE keamstring */
AXWASIM();   /* USE keamconc */
UPWASIM();   /* USE keamreplace */
PNWASIM();   /* USE keamdynindex */
SGWASIM();   /* USE keamregister */
SAWASIM();   /* USE keamram */
YTVASIM();   /* USE keamdelay */
SSVASIM();   /* USE keamextract */
HSUASIM();   /* USE keamcase */
DGQASIM();   /* USE keambiop */
BFQASIM();   /* USE keamassoc */
GBQASIM();   /* USE keamalien */
QXPASIM();   /* USE keamarith */
HYOASIM();   /* USE keamstandard */
XDNASIM();   /* USE keambasics */
JSAASIM();   /* USE kebasics */
MTAAOSL();   /* USE putstrings */
JSCAOST();   /* USE basics */
BAAATRN();   /* USE assmodes */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keamgen.a68";
A_config.translation_time = "Tue Apr  4 11:12:22 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "HIXASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:12:22 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keamgen);
UEAALIB_a68config(LGAALIB_configinfo, MIXASIM);
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 105: */
 /* line 148: */
 /* line 154: */
 /* line 185: */
 /* line 268: */
A_PROC_EXIT(DECS keamgen);
} 
#undef NL
/* end of translation of ./a68files/keamgen.a68 */
