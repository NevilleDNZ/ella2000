
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
/* UNAME:USCAOSI */
#include "Asupport.h"
A_ISTRUCT(A68_CHAR ,16000000,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t31 *,16000000,A68t32);
typedef struct A68t32  A68_32 ;    /* STRUCT 16000000 REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t31 *,A68_VC *),(struct A68t31 *,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE31) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t34,(A68_VC ),(A68_VC ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF CHAR */
A_VECTOR(A68_INT ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_INT *,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) REF INT */

A_PROCEDURE(A68_CHAR *,A68t37,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE31) REF CHAR */

A_PROCEDURE(struct A68t31 *,A68t38,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF CHAR) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t39,(void),(void *));
typedef struct A68t39  A68_39 ;    /* PROC VOID */
struct A68t40{
A68_BITS * Cp;
struct A68t31 * Env;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF BITS,REF MODE31)  */

A_PROCEDURE(struct A68t40 *,A68t41,(struct A68t39 *),(struct A68t39 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t39 ,struct A68t40 *),(struct A68t39 ,struct A68t40 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39) MODE40 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t43 ,struct A68t40 *),(struct A68t43 ,struct A68t40 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE43) MODE40 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE26) MODE26 */
struct A68t46{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t47 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(INT,REF MODE47,BITS)  */
A_VECTOR(struct A68t49 ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE49 */
struct A68t49{
struct A68t46  Msgno;
A68_VC  Text;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(MODE46,REF MODE26)  */
struct A68t47{
A68_VC  Name;
struct A68t48  Messages;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(REF MODE26,REF MODE48)  */

A_PROCEDURE(A68_VOID ,A68t50,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_VC ,A68t51);
typedef struct A68t51  A68_51 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_BOOL ,struct A68t51 *),(A68_BOOL ,struct A68t51 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(BOOL) MODE51 */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t46 ,struct A68t51 ),(struct A68t46 ,struct A68t51 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE46,MODE51) VOID */
A_VECTOR(struct A68t56 ,A68t55);
typedef struct A68t55  A68_55 ;    /* VECTOR [] MODE56 */
struct A68t56{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t54{
A68_VC  Name;
struct A68t48  Messages;
A68_BOOL * Initialised;
struct A68t55  Setup;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(MODE26,REF MODE48,REF BOOL,MODE55)  */

A_PROCEDURE(A68_VOID ,A68t57,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(A68_VOID ,A68t58,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t59);
typedef struct A68t59  A68_59 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t51 ,struct A68t59 *),(struct A68t51 ,struct A68t59 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE51) MODE59 */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t51 *),(struct A68t59 ,struct A68t51 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59) MODE51 */
struct A68t63 ;

A_PROCEDURE(A68_BOOL ,A68t62,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE63) BOOL */
struct A68t63 { A68_INT mode; union {
struct A68t46  mode1;
struct A68t49  mode2;
} data; };
typedef struct A68t63  A68_63 ;    /* UNION(MODE46,MODE49)  */

A_PROCEDURE(A68_INT ,A68t64,(struct A68t46 ),(struct A68t46 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE46) INT */

A_PROCEDURE(A68_VOID ,A68t65,(A68_INT ,struct A68t54 ,struct A68t46 *),(A68_INT ,struct A68t54 ,struct A68t46 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT,MODE54) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t66,(struct A68t46 ,struct A68t54 ),(struct A68t46 ,struct A68t54 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE46,MODE54) BOOL */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t46 ,struct A68t51 ,struct A68t49 *),(struct A68t46 ,struct A68t51 ,struct A68t49 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE46,MODE51) MODE49 */
struct A68t68{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t68  A68_68 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t69{
A68_INT  Status;
A_PAD_INT(PAD_5)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t70,(struct A68t69 ,struct A68t69 ),(struct A68t69 ,struct A68t69 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE69,MODE69) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 4 CHAR */
struct A68t71{
struct A68t72  Access;
A_PAD_ISTRUCT(A68_72 ,PAD_6)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(MODE72)  */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t68 *,A68_VC *),(struct A68t68 *,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(REF MODE68) MODE26 */

A_PROCEDURE(struct A68t68 *,A68t74,(A68_VC ,struct A68t71 ,struct A68t53 ),(A68_VC ,struct A68t71 ,struct A68t53 ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE26,MODE71,MODE53) REF MODE68 */

A_PROCEDURE(A68_VOID ,A68t75,(struct A68t68 *,struct A68t53 ),(struct A68t68 *,struct A68t53 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF MODE68,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t68 *,A68_VC ,A68_INT *,struct A68t53 ,struct A68t69 *),(struct A68t68 *,A68_VC ,A68_INT *,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE68,REF MODE26,REF INT,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t68 *,A68_VC ,struct A68t53 ,struct A68t69 *),(struct A68t68 *,A68_VC ,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE68,MODE26,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t68 *,A68_LINT ,struct A68t53 ,struct A68t69 *),(struct A68t68 *,A68_LINT ,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF MODE68,LONG INT,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t79,(struct A68t68 *,A68_LINT *,struct A68t53 ,struct A68t69 *),(struct A68t68 *,A68_LINT *,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF MODE68,REF LONG INT,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t68 *,struct A68t53 ,struct A68t69 *),(struct A68t68 *,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE68,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,struct A68t53 ,struct A68t69 *),(A68_VC ,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,A68_VC ,struct A68t53 ,struct A68t69 *),(A68_VC ,A68_VC ,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,MODE26,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_VC ,A68_VC ,struct A68t53 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t53 ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE26,MODE26,MODE53) MODE26 */
struct A68t84{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_7)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_8)
A68_SINT  Device;
A_PAD_SINT(PAD_9)
A68_SINT  Links;
A_PAD_SINT(PAD_10)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_11)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_12)
A68_LINT  Size;
A_PAD_LINT(PAD_13)
A68_LINT  Accessed;
A_PAD_LINT(PAD_14)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_15)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_16)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t86 ;

A_PROCEDURE(struct A68t84 *,A68t85,(struct A68t86 ,struct A68t53 ),(struct A68t86 ,struct A68t53 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE86,MODE53) REF MODE84 */
struct A68t86 { A68_INT mode; union {
struct A68t68 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t86  A68_86 ;    /* UNION(REF MODE68,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t87,(struct A68t68 *),(struct A68t68 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(REF MODE68) BOOL */

A_PROCEDURE(A68_BITS *,A68t88,(A68_VC ,struct A68t53 ),(A68_VC ,struct A68t53 ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,MODE53) REF BITS */

A_PROCEDURE(A68_VOID ,A68t89,(A68_BITS *,struct A68t53 ),(A68_BITS *,struct A68t53 ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF BITS,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t90,(A68_BITS *,struct A68t53 ,A68_VC *),(A68_BITS *,struct A68t53 ,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF BITS,MODE53) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(A68_VC *),(A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t92,(A68_INT ,struct A68t51 ,struct A68t53 ),(A68_INT ,struct A68t51 ,struct A68t53 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(INT,MODE51,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t35 ,struct A68t53 ,struct A68t53 ),(struct A68t35 ,struct A68t53 ,struct A68t53 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE35,MODE53,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t35 ,struct A68t53 ),(struct A68t35 ,struct A68t53 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE35,MODE53) VOID */
A_VECTOR(struct A68t53 ,A68t95);
typedef struct A68t95  A68_95 ;    /* VECTOR [] MODE53 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_INT ,struct A68t53 ,struct A68t53 *),(A68_INT ,struct A68t53 ,struct A68t53 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT,MODE53) MODE53 */

A_PROCEDURE(A68_VOID ,A68t97,(A68_VC *),(A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC MODE26 */

A_PROCEDURE(A68_LINT ,A68t98,(void),(void *));
typedef struct A68t98  A68_98 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t99,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t100,(A68_VC ,struct A68t53 ),(A68_VC ,struct A68t53 ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,MODE53) INT */

A_PROCEDURE(A68_INT ,A68t101,(void),(void *));
typedef struct A68t101  A68_101 ;    /* PROC INT */
struct A68t102{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t103,(A68_VC ,A68_VC ,struct A68t53 ,struct A68t102 *),(A68_VC ,A68_VC ,struct A68t53 ,struct A68t102 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE26,MODE53) MODE102 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t51 *),(struct A68t51 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC MODE51 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,struct A68t53 ,struct A68t51 *),(A68_VC ,struct A68t53 ,struct A68t51 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26,MODE53) MODE51 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(BITS) VOID */
struct A68t108 ;

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t108,(A68_VC ),(A68_VC ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26) VOID */
struct A68t109{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_17)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t110,(A68_BOOL ,struct A68t109 *),(A68_BOOL ,struct A68t109 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(BOOL) MODE109 */
struct A68t112 ;

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t112 ,struct A68t53 ),(struct A68t112 ,struct A68t53 ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE112,MODE53) VOID */
A_VECTOR(struct A68t109 ,A68t112);
typedef struct A68t112  A68_112 ;    /* VECTOR [] MODE109 */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,51,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 51 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t39 );
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osgc --- */
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include "Alibrary.h"

#define KDCAOSI_alwayscollect A_ALWAYS_COLLECT
#include "Alibrary.h"

#define LDCAOSI_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include "Alibrary.h"

#define MDCAOSI_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osgc --- */


/* --- Imports from osshell --- */
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
/* --- End of imports from osshell --- */


/* --- Imports from osmisc --- */
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
/* --- End of imports from osmisc --- */


/* --- Imports from ossignals --- */
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
extern A68_VOID  ZLCAOSI_init_ossignals(void);
/* --- End of imports from ossignals --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_53  XLBAOSI_ignore_msg;
extern A68_53  ZLBAOSI_global_msg;
/* --- End of imports from oserrors --- */


/* --- Imports from osfiles --- */
extern A68_68 * JNBAOSI_stdout;
extern A68_68 * KNBAOSI_stderr;
#define VPBAOSI_newline_char '\012'
extern A68_VOID  JSBAOSI_write_buffer(struct A68t68 *,A68_VC ,struct A68t53 ,A68_69 *);
/* --- End of imports from osfiles --- */


/* --- Imports from messageproc --- */
extern A68_BOOL  PKAAOSI_sysfault_msg(struct A68t63 );
extern A68_BOOL  TKAAOSI_error_msg(struct A68t63 );
extern A68_BOOL  ZKAAOSI_abort_msg(struct A68t63 );
extern A68_BOOL  ELAAOSI_cli_msg(struct A68t63 );
extern A68_BOOL  JLAAOSI_log_msg(struct A68t63 );
extern A68_BOOL  OLAAOSI_out_msg(struct A68t63 );
extern A68_BOOL  TLAAOSI_newline_msg(struct A68t63 );
extern A68_VOID  ONAAOSI_translate_msg(struct A68t46 ,struct A68t51 ,A68_49 *);
/* --- End of imports from messageproc --- */


/* --- Imports from cif --- */
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


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JBCAOSI(void);   /* osgc */
extern void CMCAOSI(void);   /* osshell */
extern void SYBAOSI(void);   /* osmisc */
extern void AECAOSI(void);   /* ossignals */
extern void SFBAOSI(void);   /* oserrors */
extern void AMBAOSI(void);   /* osfiles */
extern void JFAAOSI(void);   /* messageproc */
extern void JDAAOSI(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_115   YSCAOSI = {"$Id: osif.a68,v 34.2 1995/03/29 13:01:36 ella Exp $"}; 
A_GISVEC(A68_VC ,ZSCAOSI,YSCAOSI,51)

A68_VOID  CTCAOSI_generic_msg(A68_46  Msgno, A68_51  Params);

A_STATIC A68_VOID  VTCAOSI_init_osif(void);

A68_VOID  CTCAOSI_generic_msg(A68_46  Msgno, A68_51  Params)
{ 
A68_49  DTCAOSI;  /* avoid structure result */
A68_49  ETCAOSI_message;
A68_63  FTCAOSI;  /* OPERATORS - mode -> union mode */
A68_69  GTCAOSI;  /* avoid structure result */
A68_63  HTCAOSI;  /* OPERATORS - mode -> union mode */
A68_VC  ITCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_69  JTCAOSI;  /* avoid structure result */
A68_63  KTCAOSI;  /* OPERATORS - mode -> union mode */
A68_BOOL  LTCAOSI;  /* optbool result */
A68_63  MTCAOSI;  /* OPERATORS - mode -> union mode */
A68_63  NTCAOSI;  /* OPERATORS - mode -> union mode */
A68_63  OTCAOSI;  /* OPERATORS - mode -> union mode */
A68_BOOL  PTCAOSI;  /* optbool result */
A68_63  QTCAOSI;  /* OPERATORS - mode -> union mode */
A68_69  RTCAOSI;  /* avoid structure result */
A68_63  STCAOSI;  /* OPERATORS - mode -> union mode */
A68_VC  TTCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_69  UTCAOSI;  /* avoid structure result */
A_PROC_ENTRY(generic_msg);
 /* line 63: */
 /* line 64: */
{ 
ONAAOSI_translate_msg( Msgno, Params, &DTCAOSI );
ETCAOSI_message = DTCAOSI;
 /* line 66: */
 /* line 67: */
if ( TKAAOSI_error_msg(A_UNITE(FTCAOSI,mode2,2,ETCAOSI_message)) )
{ 
JSBAOSI_write_buffer( KNBAOSI_stderr, ETCAOSI_message.Text, XLBAOSI_ignore_msg, &GTCAOSI );
GTCAOSI;
 /* line 68: */
 /* line 69: */
if ( TLAAOSI_newline_msg(A_UNITE(HTCAOSI,mode2,2,ETCAOSI_message)) )
{ 
 /* line 70: */
JSBAOSI_write_buffer( KNBAOSI_stderr, A_HVEC(ITCAOSI,VPBAOSI_newline_char,A68_CHAR ), XLBAOSI_ignore_msg, &JTCAOSI );
JTCAOSI;
} 
 /* line 72: */
LTCAOSI = ELAAOSI_cli_msg(A_UNITE(KTCAOSI,mode2,2,ETCAOSI_message));
if ( ! LTCAOSI )
{ /* line 73: */
LTCAOSI = ZKAAOSI_abort_msg(A_UNITE(MTCAOSI,mode2,2,ETCAOSI_message));
}
if ( LTCAOSI )
{ 
 /* line 74: */
BZBAOSI_exit((-2));
} 
else
{ 
 /* line 75: */
if ( PKAAOSI_sysfault_msg(A_UNITE(NTCAOSI,mode2,2,ETCAOSI_message)) )
{ 
 /* line 76: */
 /* line 77: */
BZBAOSI_exit((-1));
} 
} 
} 
else
{ 
PTCAOSI = OLAAOSI_out_msg(A_UNITE(OTCAOSI,mode2,2,ETCAOSI_message));
if ( ! PTCAOSI )
{ /* line 78: */
PTCAOSI = JLAAOSI_log_msg(A_UNITE(QTCAOSI,mode2,2,ETCAOSI_message));
}
if ( PTCAOSI )
{ 
JSBAOSI_write_buffer( JNBAOSI_stdout, ETCAOSI_message.Text, XLBAOSI_ignore_msg, &RTCAOSI );
RTCAOSI;
 /* line 79: */
 /* line 80: */
if ( TLAAOSI_newline_msg(A_UNITE(STCAOSI,mode2,2,ETCAOSI_message)) )
{ 
 /* line 81: */
 /* line 82: */
 /* line 83: */
JSBAOSI_write_buffer( JNBAOSI_stdout, A_HVEC(TTCAOSI,VPBAOSI_newline_char,A68_CHAR ), XLBAOSI_ignore_msg, &UTCAOSI );
UTCAOSI;
} 
} 
} 
} 
A_PROC_EXIT(generic_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VTCAOSI_init_osif(void)
{ 
A68_53  WTCAOSI;  /* procedure value */
A_PROC_ENTRY(init_osif);
{ 
WTCAOSI.fn.fn_global = CTCAOSI_generic_msg;
WTCAOSI.nonlocals = A68_NIL;
ZLBAOSI_global_msg = WTCAOSI;
 /* line 92: */
 /* line 93: */
ZLCAOSI_init_ossignals();
} 
A_PROC_EXIT(init_osif);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 6: */
void VSCAOSI(void)   /* initialise DECS osif */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/osif.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/osgc.m","./mfiles/osshell.m","./mfiles/osmisc.m","./mfiles/ossignals.m","./mfiles/oserrors.m","./mfiles/osfiles.m","./mfiles/messageproc.m","./mfiles/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_39  XTCAOSI;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JBCAOSI();   /* USE osgc */
CMCAOSI();   /* USE osshell */
SYBAOSI();   /* USE osmisc */
AECAOSI();   /* USE ossignals */
SFBAOSI();   /* USE oserrors */
AMBAOSI();   /* USE osfiles */
JFAAOSI();   /* USE messageproc */
JDAAOSI();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/osif.a68";
A_config.translation_time = "Tue Apr  4 09:24:53 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "USCAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:53 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osif);
UEAALIB_a68config(LGAALIB_configinfo, ZSCAOSI);
 /* line 62: */
 /* line 87: */
 /* line 88: */
 /* line 90: */
 /* line 95: */
 /* line 97: */
 /* line 177: */
XTCAOSI.fn.fn_global = VTCAOSI_init_osif;
XTCAOSI.nonlocals = A68_NIL;
ABAALIB_a68init(XTCAOSI);
A_PROC_EXIT(DECS osif);
} 
#undef NL
/* end of translation of ./a68files/osif.a68 */
