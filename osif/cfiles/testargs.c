
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
/* UNAME:XTCAOSI */
#include "Asupport.h"

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t32,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(MODE26) REF MODE26 */
struct A68t35 ;

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t35 ,A68_VC *),(struct A68t35 ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE35) REF MODE26 */
A_VECTOR(A68_VC ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT) MODE26 */
struct A68t38 ;

A_PROCEDURE(A68_VOID ,A68t37,(struct A68t38 ,struct A68t35 ),(struct A68t38 ,struct A68t35 ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(MODE38,MODE35) VOID */
struct A68t38{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t39 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(INT,REF MODE39,BITS)  */
A_VECTOR(struct A68t41 ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] MODE41 */
struct A68t41{
struct A68t38  Msgno;
A68_VC  Text;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(MODE38,REF MODE26)  */
struct A68t39{
A68_VC  Name;
struct A68t40  Messages;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(REF MODE26,REF MODE40)  */
struct A68t42{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t42  A68_42 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t43{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t43  A68_43 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t44,(struct A68t43 ,struct A68t43 ),(struct A68t43 ,struct A68t43 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE43,MODE43) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t46);
typedef struct A68t46  A68_46 ;    /* STRUCT 4 CHAR */
struct A68t45{
struct A68t46  Access;
A_PAD_ISTRUCT(A68_46 ,PAD_4)
};
typedef struct A68t45  A68_45 ;    /* STRUCT(MODE46)  */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t42 *,A68_VC *),(struct A68t42 *,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF MODE42) MODE26 */

A_PROCEDURE(struct A68t42 *,A68t48,(A68_VC ,struct A68t45 ,struct A68t37 ),(A68_VC ,struct A68t45 ,struct A68t37 ,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE26,MODE45,MODE37) REF MODE42 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t42 *,struct A68t37 ),(struct A68t42 *,struct A68t37 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE42,MODE37) VOID */

A_PROCEDURE(A68_VOID ,A68t50,(struct A68t42 *,A68_VC ,A68_INT *,struct A68t37 ,struct A68t43 *),(struct A68t42 *,A68_VC ,A68_INT *,struct A68t37 ,struct A68t43 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(REF MODE42,REF MODE26,REF INT,MODE37) MODE43 */

A_PROCEDURE(A68_VOID ,A68t51,(struct A68t42 *,A68_VC ,struct A68t37 ,struct A68t43 *),(struct A68t42 *,A68_VC ,struct A68t37 ,struct A68t43 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(REF MODE42,MODE26,MODE37) MODE43 */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t42 *,A68_LINT ,struct A68t37 ,struct A68t43 *),(struct A68t42 *,A68_LINT ,struct A68t37 ,struct A68t43 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(REF MODE42,LONG INT,MODE37) MODE43 */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t42 *,A68_LINT *,struct A68t37 ,struct A68t43 *),(struct A68t42 *,A68_LINT *,struct A68t37 ,struct A68t43 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF MODE42,REF LONG INT,MODE37) MODE43 */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t42 *,struct A68t37 ,struct A68t43 *),(struct A68t42 *,struct A68t37 ,struct A68t43 *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF MODE42,MODE37) MODE43 */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ,struct A68t37 ,struct A68t43 *),(A68_VC ,struct A68t37 ,struct A68t43 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE26,MODE37) MODE43 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_VC ,A68_VC ,struct A68t37 ,struct A68t43 *),(A68_VC ,A68_VC ,struct A68t37 ,struct A68t43 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE26,MODE26,MODE37) MODE43 */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_VC ,struct A68t37 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t37 ,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE26,MODE37) MODE26 */
struct A68t58{
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
typedef struct A68t58  A68_58 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t60 ;

A_PROCEDURE(struct A68t58 *,A68t59,(struct A68t60 ,struct A68t37 ),(struct A68t60 ,struct A68t37 ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE60,MODE37) REF MODE58 */
struct A68t60 { A68_INT mode; union {
struct A68t42 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t60  A68_60 ;    /* UNION(REF MODE42,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t61,(struct A68t42 *),(struct A68t42 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE42) BOOL */

A_PROCEDURE(A68_BITS *,A68t62,(A68_VC ,struct A68t37 ),(A68_VC ,struct A68t37 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,MODE37) REF BITS */

A_PROCEDURE(A68_VOID ,A68t63,(A68_BITS *,struct A68t37 ),(A68_BITS *,struct A68t37 ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF BITS,MODE37) VOID */

A_PROCEDURE(A68_VOID ,A68t64,(A68_BITS *,struct A68t37 ,A68_VC *),(A68_BITS *,struct A68t37 ,A68_VC *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF BITS,MODE37) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t65,(A68_VC *),(A68_VC *,void *));
typedef struct A68t65  A68_65 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t66,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t67,(void),(void *));
typedef struct A68t67  A68_67 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t68,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_INT ),(A68_INT ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t70,(A68_VC ,struct A68t37 ),(A68_VC ,struct A68t37 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26,MODE37) INT */

A_PROCEDURE(A68_INT ,A68t71,(void),(void *));
typedef struct A68t71  A68_71 ;    /* PROC INT */
struct A68t72{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_VC ,struct A68t37 ,struct A68t72 *),(A68_VC ,A68_VC ,struct A68t37 ,struct A68t72 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,MODE26,MODE37) MODE72 */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC MODE35 */

A_PROCEDURE(A68_VOID ,A68t75,(A68_VC ,struct A68t37 ,struct A68t35 *),(A68_VC ,struct A68t37 ,struct A68t35 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE26,MODE37) MODE35 */
struct A68t77 ;

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t77 ,struct A68t37 ,struct A68t37 ),(struct A68t77 ,struct A68t37 ,struct A68t37 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE77,MODE37,MODE37) VOID */
A_VECTOR(A68_INT ,A68t77);
typedef struct A68t77  A68_77 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t77 ,struct A68t37 ),(struct A68t77 ,struct A68t37 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE77,MODE37) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(A68_INT ,struct A68t37 ,struct A68t37 *),(A68_INT ,struct A68t37 ,struct A68t37 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT,MODE37) MODE37 */

A_PROCEDURE(A68_VOID ,A68t80,(void),(void *));
typedef struct A68t80  A68_80 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t81,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(BITS) VOID */
struct A68t83 ;

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t83 ),(struct A68t83 ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE83) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(A68_VC ),(A68_VC ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE26) VOID */
struct A68t84{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t85,(A68_BOOL ,struct A68t84 *),(A68_BOOL ,struct A68t84 *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(BOOL) MODE84 */
struct A68t87 ;

A_PROCEDURE(A68_VOID ,A68t86,(struct A68t87 ,struct A68t37 ),(struct A68t87 ,struct A68t37 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE87,MODE37) VOID */
A_VECTOR(struct A68t84 ,A68t87);
typedef struct A68t87  A68_87 ;    /* VECTOR [] MODE84 */
A_ISTRUCT(A68_CHAR ,16000000,A68t88);
typedef struct A68t88  A68_88 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t88 *,16000000,A68t89);
typedef struct A68t89  A68_89 ;    /* STRUCT 16000000 REF MODE88 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t88 *,A68_VC *),(struct A68t88 *,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE88) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t91,(A68_VC ),(A68_VC ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_INT *,A68t92,(struct A68t77 ),(struct A68t77 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE77) REF INT */

A_PROCEDURE(A68_CHAR *,A68t93,(struct A68t88 *),(struct A68t88 *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF MODE88) REF CHAR */

A_PROCEDURE(struct A68t88 *,A68t94,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF CHAR) REF MODE88 */
struct A68t95{
A68_BITS * Cp;
struct A68t88 * Env;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(REF BITS,REF MODE88)  */

A_PROCEDURE(struct A68t95 *,A68t96,(struct A68t80 *),(struct A68t80 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE80) REF MODE95 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t80 ,struct A68t95 *),(struct A68t80 ,struct A68t95 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE80) MODE95 */

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t69 ,struct A68t95 *),(struct A68t69 ,struct A68t95 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE69) MODE95 */

A_PROCEDURE(A68_VOID ,A68t99,(A68_INT ,struct A68t38 *),(A68_INT ,struct A68t38 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(INT) MODE38 */

A_PROCEDURE(A68_BOOL ,A68t100,(struct A68t38 ),(struct A68t38 ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE38) BOOL */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t80 ),(struct A68t80 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE80) VOID */

A_PROCEDURE(A68_VOID ,A68t102,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t103);
typedef struct A68t103  A68_103 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE35) VOID */
A_ISTRUCT(A68_VC ,2,A68t105);
typedef struct A68t105  A68_105 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,17,A68t106);
typedef struct A68t106  A68_106 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t107);
typedef struct A68t107  A68_107 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t108);
typedef struct A68t108  A68_108 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_VC ,3,A68t109);
typedef struct A68t109  A68_109 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t110);
typedef struct A68t110  A68_110 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 21 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
extern A68_VOID  JGAALIB_show_a68config(struct A68t83 );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osmessages --- */
/* --- End of imports from osmessages --- */


/* --- Imports from cif --- */
#define ODAAOSI_newline_char '\012'
#include <stdio.h>

#define QDAAOSI_nullccharptr NULL
/**/

#define DFAAOSI_shortshortmaxint (A68_SSINT)A68_MAX_SSINT
/**/

#define EFAAOSI_shortmaxint (A68_SINT)A68_MAX_SINT
/**/

#define FFAAOSI_maxint (A68_INT)A68_MAX_INT
/**/

#define GFAAOSI_longmaxint (A68_LINT)A68_MAX_LINT
/**/

#define HFAAOSI_maxabschar (A68_INT)A68_MAX_CHAR
/**/

#define IFAAOSI_bitswidth A_SZ_BITS
/* --- End of imports from cif --- */


/* --- Imports from osif --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_37  ZLBAOSI_global_msg;
extern A68_42 * JNBAOSI_stdout;
extern A68_VOID  JSBAOSI_write_buffer(struct A68t42 *,A68_VC ,struct A68t37 ,A68_43 *);
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_VOID  TNCAOSI_parse_filename(A68_VC ,A68_VC ,struct A68t37 ,A68_72 *);
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
extern A68_VOID  JQCAOSI_get_args(A68_35 *);
extern A68_VOID  LSCAOSI_prompt_args(A68_VC ,struct A68t37 ,A68_35 *);
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


/* --- Imports from strops --- */
extern A68_VOID  JBAAOSI_concat(struct A68t35 ,A68_VC *);
/* --- End of imports from strops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void MCBAOSI(void);   /* osmessages */
extern void JDAAOSI(void);   /* cif */
extern void VSCAOSI(void);   /* osif */
extern void BAAAOSI(void);   /* strops */
/* --- end of DECS initialisation functions --- */
static A68_103   AUCAOSI = {"$Id: testargs.a68,v 34.2 1995/03/29 13:01:41 ella Exp $"}; 
A_GISVEC(A68_VC ,BUCAOSI,AUCAOSI,55)
static A68_106   OUCAOSI = {"\012Arguments list:\012"}; 
A_GISVEC(A68_VC ,PUCAOSI,OUCAOSI,17)
static A68_INT  RUCAOSI_index;
static A68_35  TUCAOSI_args;
static A68_VC  UUCAOSI_arg;
static A68_107   VUCAOSI = {"-f"}; 
A_GISVEC(A68_VC ,WUCAOSI,VUCAOSI,2)
static A68_108   ZUCAOSI = {"Parameter:  <"}; 
A_GISVEC(A68_VC ,AVCAOSI,ZUCAOSI,13)
static A68_46   EVCAOSI = {".elt"}; 
A_GISVEC(A68_VC ,FVCAOSI,EVCAOSI,4)
static A68_72  HVCAOSI_fname;
static A68_110   JVCAOSI = {"File:  "}; 
A_GISVEC(A68_VC ,KVCAOSI,JVCAOSI,7)
static A68_111   QVCAOSI = {"Give more arguments: "}; 
A_GISVEC(A68_VC ,SVCAOSI,QVCAOSI,21)

A_STATIC A68_VOID  DUCAOSI_print(A68_35  S);

A_STATIC A68_VOID  LUCAOSI_anonymous(A68_VC  S);

A_STATIC A68_VOID  DUCAOSI_print(A68_35  S)
{ 
A68_105  EUCAOSI;  /* collateral clause result */
A68_VC  FUCAOSI;  /* avoid structure result */
A68_VC  GUCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_35  HUCAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  IUCAOSI;  /* avoid structure result */
A68_43  JUCAOSI;  /* avoid structure result */
A_PROC_ENTRY(print);
 /* line 51: */
JBAAOSI_concat( S, &FUCAOSI );
EUCAOSI.data[0] = FUCAOSI;
EUCAOSI.data[1] = A_HVEC(GUCAOSI,ODAAOSI_newline_char,A68_CHAR );
JBAAOSI_concat( A_HISVEC(HUCAOSI,EUCAOSI,2,A68_VC ), &IUCAOSI );
JSBAOSI_write_buffer( JNBAOSI_stdout, IUCAOSI, ZLBAOSI_global_msg, &JUCAOSI );
JUCAOSI;
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_VOID  LUCAOSI_anonymous(A68_VC  S)
{ 
A68_35  MUCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
DUCAOSI_print(A_HVEC(MUCAOSI,S,A68_VC ));
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 9: */
int main (int argc, char **argv)
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/testargs.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/osmessages.m","./mfiles/cif.m","./mfiles/osif.m","./mfiles/strops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_83  NUCAOSI;  /* procedure value */
A68_35  QUCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_35  SUCAOSI;  /* avoid structure result */
A68_BOOL  XUCAOSI;  /* optbool result */
A68_109  YUCAOSI;  /* collateral clause result */
A68_INT  BVCAOSI;  /* YIELD */
A68_VC  CVCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_35  DVCAOSI;  /* OPERATORS - istruct -> vector */
A68_72  GVCAOSI;  /* avoid structure result */
A68_105  IVCAOSI;  /* collateral clause result */
A68_35  LVCAOSI;  /* OPERATORS - istruct -> vector */
A68_109  MVCAOSI;  /* collateral clause result */
A68_VC  NVCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OVCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_35  PVCAOSI;  /* OPERATORS - istruct -> vector */
A68_BOOL  RVCAOSI;  /* clause result */
A68_35  TVCAOSI;  /* avoid structure result */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
MCBAOSI();   /* USE osmessages */
JDAAOSI();   /* USE cif */
VSCAOSI();   /* USE osif */
BAAAOSI();   /* USE strops */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/testargs.a68";
A_config.translation_time = "Tue Apr  4 09:24:56 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "XTCAOSI (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, BUCAOSI);
 /* line 50: */
 /* line 53: */
NUCAOSI.fn.fn_global = LUCAOSI_anonymous;
NUCAOSI.nonlocals = A68_NIL;
JGAALIB_show_a68config(NUCAOSI);
 /* line 54: */
for ( ;; )
{ 
 /* line 55: */
DUCAOSI_print(A_HVEC(QUCAOSI,PUCAOSI,A68_VC ));
 /* line 56: */
RUCAOSI_index = 0;
 /* line 57: */
JQCAOSI_get_args(  &SUCAOSI );
TUCAOSI_args = SUCAOSI;
 /* line 58: */
for ( ;; )
{ 
 /* line 59: */
if ( !(((RUCAOSI_index+=1)<=TUCAOSI_args.upb)) ) break;
UUCAOSI_arg = A_VINDEX(TUCAOSI_args,RUCAOSI_index);
 /* line 60: */
XUCAOSI = A_VC_EQ(UUCAOSI_arg,WUCAOSI);
if ( XUCAOSI )
{ /* line 61: */
XUCAOSI = (RUCAOSI_index<TUCAOSI_args.upb);
}
if ( XUCAOSI )
{ 
YUCAOSI.data[0] = AVCAOSI;
BVCAOSI = RUCAOSI_index+=1 ;
YUCAOSI.data[1] = A_VINDEX(TUCAOSI_args,BVCAOSI);
YUCAOSI.data[2] = A_HVEC(CVCAOSI,'>',A68_CHAR );
DUCAOSI_print(A_HISVEC(DVCAOSI,YUCAOSI,3,A68_VC ));
 /* line 62: */
TNCAOSI_parse_filename( A_VINDEX(TUCAOSI_args,RUCAOSI_index), FVCAOSI, ZLBAOSI_global_msg, &GVCAOSI );
HVCAOSI_fname = GVCAOSI;
 /* line 63: */
IVCAOSI.data[0] = KVCAOSI;
IVCAOSI.data[1] = HVCAOSI_fname.Filename;
 /* line 64: */
DUCAOSI_print(A_HISVEC(LVCAOSI,IVCAOSI,2,A68_VC ));
} 
else
{ 
MVCAOSI.data[0] = A_HVEC(NVCAOSI,'<',A68_CHAR );
MVCAOSI.data[1] = UUCAOSI_arg;
MVCAOSI.data[2] = A_HVEC(OVCAOSI,'>',A68_CHAR );
 /* line 65: */
 /* line 66: */
DUCAOSI_print(A_HISVEC(PVCAOSI,MVCAOSI,3,A68_VC ));
} 
}
 /* line 67: */
 /* line 68: */
LSCAOSI_prompt_args( SVCAOSI, ZLBAOSI_global_msg, &TVCAOSI );
RVCAOSI = (TVCAOSI.upb!=1);
if ( !RVCAOSI ) break;
/*SKIP*/;
}
 /* line 69: */
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of ./a68files/testargs.a68 */
