
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
/* UNAME:RYBAOSI */
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

A_PROCEDURE(A68_VOID ,A68t46,(A68_VC *),(A68_VC *,void *));
typedef struct A68t46  A68_46 ;    /* PROC REF MODE26 */
struct A68t48 ;
struct A68t49 ;

A_PROCEDURE(A68_VOID ,A68t47,(A68_INT ,struct A68t48 ,struct A68t49 ),(A68_INT ,struct A68t48 ,struct A68t49 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT,MODE48,MODE49) VOID */
A_VECTOR(A68_VC ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,struct A68t48 ),(struct A68t50 ,struct A68t48 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50,MODE48) VOID */
struct A68t50{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t51 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,REF MODE51,BITS)  */
A_VECTOR(struct A68t53 ,A68t52);
typedef struct A68t52  A68_52 ;    /* VECTOR [] MODE53 */
struct A68t53{
struct A68t50  Msgno;
A68_VC  Text;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(MODE50,REF MODE26)  */
struct A68t51{
A68_VC  Name;
struct A68t52  Messages;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(REF MODE26,REF MODE52)  */

A_PROCEDURE(A68_INT *,A68t54,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t58,(struct A68t48 ,A68_VC *),(struct A68t48 ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE48) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t59,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t62 ,A68t63,(A68_INT ),(A68_INT ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT) MODE62 */

A_PROCEDURE(A68_INT ,A68t64,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t65,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t66,(A68_VC ),(A68_VC ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t67,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t68,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t69,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t70,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t73,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t74,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t75,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ),(A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 53 CHAR */

A_PROCEDURE(struct A68t31 *,A68t82,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE26,INT) REF MODE31 */

A_PROCEDURE(struct A68t31 *,A68t83,(A68_VC ),(A68_VC ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE26) REF MODE31 */

A_PROCEDURE(A68_LINT ,A68t84,(A68_INT ),(A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) LONG INT */

A_PROCEDURE(struct A68t31 *,A68t85,(A68_LINT *),(A68_LINT *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF LONG INT) REF MODE31 */

A_PROCEDURE(struct A68t31 *,A68t86,(A68_INT ),(A68_INT ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC *),(A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC MODE26 */

A_PROCEDURE(A68_LINT ,A68t88,(void),(void *));
typedef struct A68t88  A68_88 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t89,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t90,(A68_VC ,struct A68t49 ),(A68_VC ,struct A68t49 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE26,MODE49) INT */
A_ISTRUCT(A68_CHAR ,5,A68t91);
typedef struct A68t91  A68_91 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t92);
typedef struct A68t92  A68_92 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_VC ,2,A68t93);
typedef struct A68t93  A68_93 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_INT ,A68t94,(void),(void *));
typedef struct A68t94  A68_94 ;    /* PROC INT */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t39 );
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_VOID  BLBAOSI_errnotext(A68_VC *);
extern A68_VOID  YHBAOSI_osifmessage(A68_INT ,struct A68t48 ,struct A68t49 );
/* --- End of imports from oserrors --- */


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
extern A68_VOID  UDAAOSI_cstringtorvc(struct A68t31 *,A68_VC *);
extern A68_VOID  KEAAOSI_nullstr(A68_VC ,A68_VC *);
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void WPAAOSI(void);   /* usefulops */
extern void SFBAOSI(void);   /* oserrors */
extern void JDAAOSI(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_81   VYBAOSI = {"$Id: osmisc.a68,v 34.3 1995/03/29 13:01:37 ella Exp $"}; 
A_GISVEC(A68_VC ,WYBAOSI,VYBAOSI,53)
#include <unistd.h>
#define GETCWD(buf,size) \
   ((void *)(getcwd(A_VC_charptr(buf),A_INT_size_t(size))))

#define XYBAOSI_getcwd GETCWD
#include <stdlib.h>
#define GETENV(name) ((void *)getenv(A_VC_charptr(name)))

#define YYBAOSI_getenv GETENV
#include <time.h>
#define TIME(x) A_time_t_LINT(time((time_t *)NULL))

#define ZYBAOSI_time TIME
#include <time.h>
#define CTIME(timer) ((void *)ctime((A_RLI_time_tptr(timer))))

#define AZBAOSI_ctime CTIME
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
#include <stdlib.h>
#define SYSTEM(string) A_int_INT(system(A_VC_charptr(string)))

#define CZBAOSI_system SYSTEM
#include <sys/times.h>
clock_t A_times()
{ struct tms TMS;
  times(&TMS);
  return TMS.tms_utime + TMS.tms_stime + TMS.tms_cutime + TMS.tms_cstime;
}
#define TIMES(x) A_clock_t_LINT(A_times())

#define DZBAOSI_times TIMES
#include <unistd.h>
#define GETLOGIN(x) ((void *)getlogin())

#define EZBAOSI_getlogin GETLOGIN
#define GZBAOSI_bufsize 1000
static A68_91   KACAOSI = {"SHELL"}; 
A_GISVEC(A68_VC ,LACAOSI,KACAOSI,5)
static A68_92   PACAOSI = {"/bin/sh"}; 
A_GISVEC(A68_VC ,QACAOSI,PACAOSI,7)
A68_LINT  YACAOSI_clk_tck;
#include <unistd.h>
#define SYSCONF(name) A_long_LINT(sysconf(A_INT_int(name)))

#define GBCAOSI_sysconf SYSCONF
#include <unistd.h>

#define HBCAOSI_sc_clk_tck A_int_INT(_SC_CLK_TCK)
typedef struct   /* env of non-global proc */
{
int dummy;
} KZBAOSI_generator;

A68_VOID  FZBAOSI_get_working_directory(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JZBAOSI_generator(A68_BOOL  HZBAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  RZBAOSI_get_env_var(A68_VC  Envname, A68_VC  *ReturnedValue);

A68_LINT  WZBAOSI_get_time(void);

A68_VOID  ZZBAOSI_local_time_str(A68_LINT  Time, A68_VC  *ReturnedValue);

A68_INT  IACAOSI_execute_os_command(A68_VC  Command, A68_49  Msg);

A68_INT  ZACAOSI_get_cpu_time(void);

A68_VOID  BBCAOSI_get_login_name(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FBCAOSI_init_osmisc(void);

A_STATIC A68_VOID  JZBAOSI_generator(A68_BOOL  HZBAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KZBAOSI_generator *)NonLocals)->x)
{ 
A68_VC  LZBAOSI;  /* clause result */
A68_VC  MZBAOSI;  /* OPERATORS - dynamic generator */
{ 
MZBAOSI.upb = GZBAOSI_bufsize ;
( HZBAOSI_anonymous? A_VLOC(A68_CHAR ,MZBAOSI): A_VHEAP(A68_CHAR ,MZBAOSI) );
LZBAOSI = MZBAOSI;
} 
*ReturnedValue = (LZBAOSI);
return;
} 
#undef NL

A68_VOID  FZBAOSI_get_working_directory(A68_VC  *ReturnedValue)
{ 
A68_76  IZBAOSI_generator;   /* proc value of non-global proc */
A68_VC  NZBAOSI;  /* clause result */
A68_VC  OZBAOSI;  /* avoid structure result */
A68_VC  PZBAOSI;  /* avoid structure result */
A_PROC_ENTRY(get_working_directory);
{ 
 /* line 114: */
A_CLOSURE( IZBAOSI_generator, JZBAOSI_generator, KZBAOSI_generator );
 /* line 115: */
A_CALLPROC(IZBAOSI_generator,(A68_FALSE, &OZBAOSI),(A68_FALSE, &OZBAOSI,(IZBAOSI_generator).nonlocals));
UDAAOSI_cstringtorvc( XYBAOSI_getcwd(OZBAOSI, GZBAOSI_bufsize), &PZBAOSI );
NZBAOSI = PZBAOSI;
} 
A_PROC_EXIT(get_working_directory);
*ReturnedValue = (NZBAOSI);
return;
} 
#undef NL

A68_VOID  RZBAOSI_get_env_var(A68_VC  Envname, A68_VC  *ReturnedValue)
{ 
A68_VC  SZBAOSI;  /* clause result */
A68_VC  TZBAOSI;  /* avoid structure result */
A68_VC  UZBAOSI;  /* avoid structure result */
A68_VC  VZBAOSI;  /* avoid structure result */
A_PROC_ENTRY(get_env_var);
 /* line 126: */
 /* line 127: */
 /* line 128: */
KEAAOSI_nullstr( Envname, &TZBAOSI );
UDAAOSI_cstringtorvc( YYBAOSI_getenv(TZBAOSI), &UZBAOSI );
ZAAAOSI_makervc( UZBAOSI, &VZBAOSI );
SZBAOSI = VZBAOSI;
A_PROC_EXIT(get_env_var);
*ReturnedValue = (SZBAOSI);
return;
} 
#undef NL

A68_LINT  WZBAOSI_get_time(void)
{ 
A68_LINT  XZBAOSI;  /* clause result */
A_PROC_ENTRY(get_time);
XZBAOSI = ZYBAOSI_time(0);
A_PROC_EXIT(get_time);
return( XZBAOSI );
} 
#undef NL

A68_VOID  ZZBAOSI_local_time_str(A68_LINT  Time, A68_VC  *ReturnedValue)
{ 
A68_LINT * AACAOSI;  /* YIELD */
A68_VC  BACAOSI;  /* avoid structure result */
A68_VC  CACAOSI_time_str;
A68_VC  DACAOSI;  /* clause result */
A68_VC  EACAOSI;  /* OPERATORS - trim index */
A68_VC  FACAOSI;  /* avoid structure result */
A_PROC_ENTRY(local_time_str);
 /* line 145: */
 /* line 146: */
{ 
AACAOSI = A_LOC(A68_LINT ) ;
(*AACAOSI) = Time ;
UDAAOSI_cstringtorvc( AZBAOSI_ctime(AACAOSI), &BACAOSI );
CACAOSI_time_str = BACAOSI;
 /* line 147: */
 /* line 148: */
ZAAAOSI_makervc( A_VTRIM(EACAOSI,(CACAOSI_time_str),A_VTSCRIPT(&(EACAOSI.upb),(CACAOSI_time_str).upb,1,(CACAOSI_time_str.upb-1))), &FACAOSI );
DACAOSI = FACAOSI;
} 
A_PROC_EXIT(local_time_str);
*ReturnedValue = (DACAOSI);
return;
} 
#undef NL
 /* line 166: */

A68_INT  IACAOSI_execute_os_command(A68_VC  Command, A68_49  Msg)
{ 
A68_VC  JACAOSI;  /* clause result */
A68_VC  MACAOSI;  /* avoid structure result */
A68_VC  NACAOSI_shell;
A68_BOOL  OACAOSI;  /* clause result */
A68_VC  RACAOSI_program;
A68_VC  SACAOSI;  /* avoid structure result */
A68_INT  TACAOSI_result;
A68_93  UACAOSI;  /* collateral clause result */
A68_VC  VACAOSI;  /* avoid structure result */
A68_48  WACAOSI;  /* OPERATORS - istruct -> vector */
A68_INT  XACAOSI;  /* clause result */
A_PROC_ENTRY(execute_os_command);
 /* line 167: */
 /* line 169: */
{ 
 /* line 170: */
 /* line 171: */
 /* line 173: */
if ( (Command.upb>0) )
{ 
 /* line 174: */
JACAOSI = Command;
} 
else
{ 
{ 
RZBAOSI_get_env_var( LACAOSI, &MACAOSI );
NACAOSI_shell = MACAOSI;
 /* line 175: */
 /* line 176: */
 /* line 178: */
OACAOSI = (NACAOSI_shell.upb>0);
if ( OACAOSI )
{ 
 /* line 180: */
JACAOSI = NACAOSI_shell;
} 
else
{ 
JACAOSI = QACAOSI;
} 
} 
} 
RACAOSI_program = JACAOSI;
 /* line 182: */
KEAAOSI_nullstr( RACAOSI_program, &SACAOSI );
TACAOSI_result = CZBAOSI_system(SACAOSI);
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ( (TACAOSI_result<0) )
{ 
UACAOSI.data[0] = Command;
BLBAOSI_errnotext(  &VACAOSI );
UACAOSI.data[1] = VACAOSI;
 /* line 188: */
YHBAOSI_osifmessage(81, A_HISVEC(WACAOSI,UACAOSI,2,A68_VC ), Msg);
} 
 /* line 190: */
 /* line 191: */
XACAOSI = TACAOSI_result;
} 
A_PROC_EXIT(execute_os_command);
return( XACAOSI );
} 
#undef NL

A68_INT  ZACAOSI_get_cpu_time(void)
{ 
A68_INT  ABCAOSI;  /* clause result */
A_PROC_ENTRY(get_cpu_time);
 /* line 204: */
ABCAOSI = (A68_INT )((DZBAOSI_times(0)*100)/YACAOSI_clk_tck);
A_PROC_EXIT(get_cpu_time);
return( ABCAOSI );
} 
#undef NL

A68_VOID  BBCAOSI_get_login_name(A68_VC  *ReturnedValue)
{ 
A68_VC  CBCAOSI;  /* clause result */
A68_VC  DBCAOSI;  /* avoid structure result */
A68_VC  EBCAOSI;  /* avoid structure result */
A_PROC_ENTRY(get_login_name);
UDAAOSI_cstringtorvc( EZBAOSI_getlogin(0), &DBCAOSI );
ZAAAOSI_makervc( DBCAOSI, &EBCAOSI );
CBCAOSI = EBCAOSI;
A_PROC_EXIT(get_login_name);
*ReturnedValue = (CBCAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  FBCAOSI_init_osmisc(void)
{ 
A_PROC_ENTRY(init_osmisc);
{ 
 /* line 219: */
 /* line 220: */
 /* line 222: */
 /* line 223: */
 /* line 224: */
 /* line 226: */
 /* line 227: */
YACAOSI_clk_tck = GBCAOSI_sysconf(HBCAOSI_sc_clk_tck);
} 
A_PROC_EXIT(init_osmisc);
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void SYBAOSI(void)   /* initialise DECS osmisc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/osmisc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/usefulops.m","./mfiles/oserrors.m","./mfiles/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_39  IBCAOSI;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WPAAOSI();   /* USE usefulops */
SFBAOSI();   /* USE oserrors */
JDAAOSI();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/osmisc.a68";
A_config.translation_time = "Tue Apr  4 09:24:44 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "RYBAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:44 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osmisc);
UEAALIB_a68config(LGAALIB_configinfo, WYBAOSI);
 /* line 60: */
 /* line 61: */
 /* line 62: */
 /* line 63: */
 /* line 64: */
 /* line 66: */
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 79: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 123: */
 /* line 125: */
 /* line 136: */
 /* line 144: */
 /* line 163: */
 /* line 164: */
 /* line 199: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
 /* line 211: */
 /* line 212: */
 /* line 215: */
 /* line 216: */
 /* line 218: */
 /* line 229: */
 /* line 231: */
 /* line 235: */
IBCAOSI.fn.fn_global = FBCAOSI_init_osmisc;
IBCAOSI.nonlocals = A68_NIL;
ABAALIB_a68init(IBCAOSI);
A_PROC_EXIT(DECS osmisc);
} 
#undef NL
/* end of translation of ./a68files/osmisc.a68 */
