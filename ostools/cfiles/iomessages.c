
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
/* UNAME:WBBAOST */
#include "Asupport.h"
struct A68t31{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t32 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t31  A68_31 ;    /* STRUCT(INT,REF MODE32,BITS)  */
A_VECTOR(struct A68t34 ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE34 */
struct A68t34{
struct A68t31  Msgno;
A68_VC  Text;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE31,REF MODE26)  */
struct A68t32{
A68_VC  Name;
struct A68t33  Messages;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(REF MODE26,REF MODE33)  */

A_PROCEDURE(A68_VOID ,A68t35,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t37,(A68_BOOL ,struct A68t36 *),(A68_BOOL ,struct A68t36 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(BOOL) MODE36 */

A_PROCEDURE(A68_VOID ,A68t38,(struct A68t31 ,struct A68t36 ),(struct A68t31 ,struct A68t36 ,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE31,MODE36) VOID */
A_VECTOR(struct A68t41 ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] MODE41 */
struct A68t41{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t39{
A68_VC  Name;
struct A68t33  Messages;
A68_BOOL * Initialised;
struct A68t40  Setup;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(MODE26,REF MODE33,REF BOOL,MODE40)  */

A_PROCEDURE(A68_VOID ,A68t42,(A68_BOOL ,struct A68t39 *),(A68_BOOL ,struct A68t39 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(BOOL) MODE39 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t44);
typedef struct A68t44  A68_44 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t36 ,struct A68t44 *),(struct A68t36 ,struct A68t44 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE36) MODE44 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t44 ,struct A68t36 *),(struct A68t44 ,struct A68t36 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE44) MODE36 */
struct A68t48 ;

A_PROCEDURE(A68_BOOL ,A68t47,(struct A68t48 ),(struct A68t48 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE48) BOOL */
struct A68t48 { A68_INT mode; union {
struct A68t31  mode1;
struct A68t34  mode2;
} data; };
typedef struct A68t48  A68_48 ;    /* UNION(MODE31,MODE34)  */

A_PROCEDURE(A68_INT ,A68t49,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE31) INT */

A_PROCEDURE(A68_VOID ,A68t50,(A68_INT ,struct A68t39 ,struct A68t31 *),(A68_INT ,struct A68t39 ,struct A68t31 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(INT,MODE39) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t51,(struct A68t31 ,struct A68t39 ),(struct A68t31 ,struct A68t39 ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE31,MODE39) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t31 ,struct A68t36 ,struct A68t34 *),(struct A68t31 ,struct A68t36 ,struct A68t34 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE31,MODE36) MODE34 */

A_PROCEDURE(A68_VOID ,A68t53,(void),(void *));
typedef struct A68t53  A68_53 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t53 ),(struct A68t53 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ),(A68_VC ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t58);
typedef struct A68t58  A68_58 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t59);
typedef struct A68t59  A68_59 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_VOID ,A68t60,(A68_BOOL ,struct A68t33 *),(A68_BOOL ,struct A68t33 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(BOOL) MODE33 */
A_ISTRUCT(A68_CHAR ,46,A68t61);
typedef struct A68t61  A68_61 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t63);
typedef struct A68t63  A68_63 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t65);
typedef struct A68t65  A68_65 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t67);
typedef struct A68t67  A68_67 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t68);
typedef struct A68t68  A68_68 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t69);
typedef struct A68t69  A68_69 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t70);
typedef struct A68t70  A68_70 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t71);
typedef struct A68t71  A68_71 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t73);
typedef struct A68t73  A68_73 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t74);
typedef struct A68t74  A68_74 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t76);
typedef struct A68t76  A68_76 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t78);
typedef struct A68t78  A68_78 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t79);
typedef struct A68t79  A68_79 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t80);
typedef struct A68t80  A68_80 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t82);
typedef struct A68t82  A68_82 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(struct A68t41 ,35,A68t83);
typedef struct A68t83  A68_83 ;    /* STRUCT 35 MODE41 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ,struct A68t31 *),(A68_INT ,struct A68t31 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t85,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE31) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_BITS  UIAAOSI_fatal_class;
extern A68_BITS  VIAAOSI_user_class;
extern A68_BITS  YIAAOSI_log_class;
extern A68_BITS  DJAAOSI_diag1_class;
extern A68_VOID  HMAAOSI_make_msgno(A68_INT ,struct A68t39 ,A68_31 *);
extern A68_BOOL  INAAOSI_is_facility_msg(struct A68t31 ,struct A68t39 );
/* --- End of imports from messageproc --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JFAAOSI(void);   /* messageproc */
/* --- end of DECS initialisation functions --- */
static A68_58   ACBAOST = {"$Id: iomessages.a68,v 34.2 1995/03/29 13:02:25 ella Exp $"}; 
A_GISVEC(A68_VC ,BCBAOST,ACBAOST,57)
#define CCBAOST_max_io_messages 35
static A68_59   ECBAOST = {"ioprocs"}; 
A_GISVEC(A68_VC ,FCBAOST,ECBAOST,7)
static A68_61   NCBAOST = {"* Error writing to log file - closing file \"*\""}; 
A_GISVEC(A68_VC ,OCBAOST,NCBAOST,46)
static A68_62   PCBAOST = {"* Error writing to output file - closing file \"*\""}; 
A_GISVEC(A68_VC ,QCBAOST,PCBAOST,49)
static A68_63   RCBAOST = {"Input file \"*\" closed "}; 
A_GISVEC(A68_VC ,SCBAOST,RCBAOST,22)
static A68_64   TCBAOST = {"Line of text read from file \"*\" is too long"}; 
A_GISVEC(A68_VC ,UCBAOST,TCBAOST,43)
static A68_65   VCBAOST = {"Too many END-OF-FILEs encountered on input line"}; 
A_GISVEC(A68_VC ,WCBAOST,VCBAOST,47)
static A68_66   XCBAOST = {"END-OF-FILE found on input line"}; 
A_GISVEC(A68_VC ,YCBAOST,XCBAOST,31)
static A68_67   ZCBAOST = {"Input line too long"}; 
A_GISVEC(A68_VC ,ADBAOST,ZCBAOST,19)
static A68_68   BDBAOST = {"From *"}; 
A_GISVEC(A68_VC ,CDBAOST,BDBAOST,6)
static A68_69   DDBAOST = {"Input error in non-interactive working"}; 
A_GISVEC(A68_VC ,EDBAOST,DDBAOST,38)
static A68_67   FDBAOST = {"No input files open"}; 
A_GISVEC(A68_VC ,GDBAOST,FDBAOST,19)
static A68_70   HDBAOST = {"Reading from \"*\""}; 
A_GISVEC(A68_VC ,IDBAOST,HDBAOST,16)
static A68_67   JDBAOST = {"No input files open"}; 
A_GISVEC(A68_VC ,KDBAOST,JDBAOST,19)
static A68_71   ODBAOST = {"No input file to resume"}; 
A_GISVEC(A68_VC ,PDBAOST,ODBAOST,23)
static A68_72   QDBAOST = {"Input file not suspended"}; 
A_GISVEC(A68_VC ,RDBAOST,QDBAOST,24)
static A68_62   SDBAOST = {"This command may only be given from an input file"}; 
A_GISVEC(A68_VC ,TDBAOST,SDBAOST,49)
static A68_73   UDBAOST = {"Input file suspended due to ONLINE command"}; 
A_GISVEC(A68_VC ,VDBAOST,UDBAOST,42)
static A68_74   WDBAOST = {"You are already using a log file, use \"dontlog\" first"}; 
A_GISVEC(A68_VC ,XDBAOST,WDBAOST,53)
static A68_75   YDBAOST = {"* log file  \"*\"  started on  *"}; 
A_GISVEC(A68_VC ,ZDBAOST,YDBAOST,30)
static A68_76   AEBAOST = {"Log file  \"*\"  closed"}; 
A_GISVEC(A68_VC ,BEBAOST,AEBAOST,21)
static A68_77   CEBAOST = {"Not using a log file"}; 
A_GISVEC(A68_VC ,DEBAOST,CEBAOST,20)
static A68_78   EEBAOST = {"You are already writing a file, use \"dontoutput\" first"}; 
A_GISVEC(A68_VC ,FEBAOST,EEBAOST,54)
static A68_64   GEBAOST = {"COM  * output file  \"*\"  started on  *  MOC"}; 
A_GISVEC(A68_VC ,HEBAOST,GEBAOST,43)
static A68_72   IEBAOST = {"Output file  \"*\"  closed"}; 
A_GISVEC(A68_VC ,JEBAOST,IEBAOST,24)
static A68_72   KEBAOST = {"Not using an output file"}; 
A_GISVEC(A68_VC ,LEBAOST,KEBAOST,24)
static A68_79   MEBAOST = {"Screen page length too short"}; 
A_GISVEC(A68_VC ,NEBAOST,MEBAOST,28)
static A68_80   OEBAOST = {"Screen page length is * lines"}; 
A_GISVEC(A68_VC ,PEBAOST,OEBAOST,29)
static A68_71   QEBAOST = {"Output width too narrow"}; 
A_GISVEC(A68_VC ,REBAOST,QEBAOST,23)
static A68_63   SEBAOST = {"Output  width too wide"}; 
A_GISVEC(A68_VC ,TEBAOST,SEBAOST,22)
static A68_81   UEBAOST = {"Output  width is now * characters"}; 
A_GISVEC(A68_VC ,VEBAOST,UEBAOST,33)
static A68_66   WEBAOST = {"$$$Output file width too narrow"}; 
A_GISVEC(A68_VC ,XEBAOST,WEBAOST,31)
static A68_80   YEBAOST = {"$$$Output file width too wide"}; 
A_GISVEC(A68_VC ,ZEBAOST,YEBAOST,29)
static A68_82   AFBAOST = {"$$$Output file width is now * characters"}; 
A_GISVEC(A68_VC ,BFBAOST,AFBAOST,40)
static A68_39  DFBAOST_io_facility;
static A68_34 * LFBAOST_message;

A_STATIC A68_VOID  HCBAOST_generator(A68_BOOL  GCBAOST_anonymous, A68_33  *ReturnedValue);

A68_VOID  FFBAOST_io_msg(A68_INT  Number, A68_31  *ReturnedValue);

A68_BOOL  JFBAOST_is_io_msg(A68_31  Msgno);

A_STATIC A68_VOID  HCBAOST_generator(A68_BOOL  GCBAOST_anonymous, A68_33  *ReturnedValue)
{ 
A68_33  ICBAOST;  /* clause result */
A68_33  JCBAOST;  /* OPERATORS - dynamic generator */
{ 
JCBAOST.upb = CCBAOST_max_io_messages ;
( GCBAOST_anonymous? A_VLOC(A68_34 ,JCBAOST): A_VHEAP(A68_34 ,JCBAOST) );
ICBAOST = JCBAOST;
} 
*ReturnedValue = (ICBAOST);
return;
} 
#undef NL

A68_VOID  FFBAOST_io_msg(A68_INT  Number, A68_31  *ReturnedValue)
{ 
A68_31  GFBAOST;  /* clause result */
A68_31  HFBAOST;  /* avoid structure result */
A_PROC_ENTRY(io_msg);
HMAAOSI_make_msgno( Number, DFBAOST_io_facility, &HFBAOST );
GFBAOST = HFBAOST;
A_PROC_EXIT(io_msg);
*ReturnedValue = (GFBAOST);
return;
} 
#undef NL

A68_BOOL  JFBAOST_is_io_msg(A68_31  Msgno)
{ 
A68_BOOL  KFBAOST;  /* clause result */
A_PROC_ENTRY(is_io_msg);
KFBAOST = INAAOSI_is_facility_msg(Msgno, DFBAOST_io_facility);
A_PROC_EXIT(is_io_msg);
return( KFBAOST );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void XBBAOST(void)   /* initialise DECS iomessages */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/iomessages.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/messageproc.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_39  DCBAOST;  /* collateral clause result */
A68_33  KCBAOST;  /* avoid structure result */
A68_BOOL * LCBAOST;  /* YIELD */
A68_83  MCBAOST;  /* collateral clause result */
A68_VC  LDBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MDBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NDBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_40  CFBAOST;  /* OPERATORS - istruct -> vector */
A68_33  MFBAOST;  /* forall yield */
A68_INT  NFBAOST;  /* forall loop counter */
A68_34  OFBAOST;  /* collateral clause result */
A68_VC  PFBAOST;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JFAAOSI();   /* USE messageproc */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/iomessages.a68";
A_config.translation_time = "Tue Apr  4 09:49:17 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "WBBAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:49:17 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS iomessages);
UEAALIB_a68config(LGAALIB_configinfo, BCBAOST);
 /* line 48: */
 /* line 50: */
DCBAOST.Name = FCBAOST;
 /* line 51: */
HCBAOST_generator( A68_TRUE, &KCBAOST );
DCBAOST.Messages = KCBAOST;
 /* line 52: */
LCBAOST = A_LOC(A68_BOOL ) ;
(*LCBAOST) = A68_FALSE ;
DCBAOST.Initialised = LCBAOST;
 /* line 53: */
MCBAOST.data[0].Number = 1;
MCBAOST.data[0].Class = VIAAOSI_user_class;
 /* line 54: */
MCBAOST.data[0].Text = OCBAOST;
MCBAOST.data[1].Number = 2;
MCBAOST.data[1].Class = VIAAOSI_user_class;
 /* line 55: */
MCBAOST.data[1].Text = QCBAOST;
MCBAOST.data[2].Number = 3;
MCBAOST.data[2].Class = YIAAOSI_log_class;
 /* line 56: */
MCBAOST.data[2].Text = SCBAOST;
MCBAOST.data[3].Number = 4;
MCBAOST.data[3].Class = VIAAOSI_user_class;
 /* line 57: */
MCBAOST.data[3].Text = UCBAOST;
MCBAOST.data[4].Number = 5;
MCBAOST.data[4].Class = UIAAOSI_fatal_class;
 /* line 58: */
MCBAOST.data[4].Text = WCBAOST;
MCBAOST.data[5].Number = 6;
MCBAOST.data[5].Class = VIAAOSI_user_class;
 /* line 59: */
MCBAOST.data[5].Text = YCBAOST;
MCBAOST.data[6].Number = 7;
MCBAOST.data[6].Class = VIAAOSI_user_class;
 /* line 60: */
MCBAOST.data[6].Text = ADBAOST;
MCBAOST.data[7].Number = 8;
MCBAOST.data[7].Class = YIAAOSI_log_class;
 /* line 61: */
MCBAOST.data[7].Text = CDBAOST;
MCBAOST.data[8].Number = 9;
MCBAOST.data[8].Class = UIAAOSI_fatal_class;
 /* line 62: */
MCBAOST.data[8].Text = EDBAOST;
MCBAOST.data[9].Number = 10;
MCBAOST.data[9].Class = VIAAOSI_user_class;
 /* line 64: */
MCBAOST.data[9].Text = GDBAOST;
MCBAOST.data[10].Number = 11;
MCBAOST.data[10].Class = YIAAOSI_log_class;
 /* line 65: */
MCBAOST.data[10].Text = IDBAOST;
MCBAOST.data[11].Number = 12;
MCBAOST.data[11].Class = VIAAOSI_user_class;
 /* line 66: */
MCBAOST.data[11].Text = KDBAOST;
MCBAOST.data[12].Number = 13;
MCBAOST.data[12].Class = YIAAOSI_log_class;
 /* line 67: */
MCBAOST.data[12].Text = A_HVEC(LDBAOST,'*',A68_CHAR );
MCBAOST.data[13].Number = 14;
MCBAOST.data[13].Class = YIAAOSI_log_class;
 /* line 68: */
MCBAOST.data[13].Text = A_HVEC(MDBAOST,'*',A68_CHAR );
MCBAOST.data[14].Number = 15;
MCBAOST.data[14].Class = DJAAOSI_diag1_class;
 /* line 69: */
MCBAOST.data[14].Text = A_HVEC(NDBAOST,'*',A68_CHAR );
MCBAOST.data[15].Number = 16;
MCBAOST.data[15].Class = VIAAOSI_user_class;
 /* line 70: */
MCBAOST.data[15].Text = PDBAOST;
MCBAOST.data[16].Number = 17;
MCBAOST.data[16].Class = VIAAOSI_user_class;
 /* line 71: */
MCBAOST.data[16].Text = RDBAOST;
MCBAOST.data[17].Number = 18;
MCBAOST.data[17].Class = VIAAOSI_user_class;
 /* line 72: */
MCBAOST.data[17].Text = TDBAOST;
MCBAOST.data[18].Number = 19;
MCBAOST.data[18].Class = YIAAOSI_log_class;
 /* line 73: */
MCBAOST.data[18].Text = VDBAOST;
MCBAOST.data[19].Number = 20;
MCBAOST.data[19].Class = VIAAOSI_user_class;
 /* line 75: */
MCBAOST.data[19].Text = XDBAOST;
MCBAOST.data[20].Number = 21;
MCBAOST.data[20].Class = YIAAOSI_log_class;
 /* line 76: */
MCBAOST.data[20].Text = ZDBAOST;
MCBAOST.data[21].Number = 22;
MCBAOST.data[21].Class = YIAAOSI_log_class;
 /* line 77: */
MCBAOST.data[21].Text = BEBAOST;
MCBAOST.data[22].Number = 23;
MCBAOST.data[22].Class = VIAAOSI_user_class;
 /* line 78: */
MCBAOST.data[22].Text = DEBAOST;
MCBAOST.data[23].Number = 24;
MCBAOST.data[23].Class = VIAAOSI_user_class;
 /* line 79: */
MCBAOST.data[23].Text = FEBAOST;
MCBAOST.data[24].Number = 25;
MCBAOST.data[24].Class = YIAAOSI_log_class;
 /* line 80: */
MCBAOST.data[24].Text = HEBAOST;
MCBAOST.data[25].Number = 26;
MCBAOST.data[25].Class = YIAAOSI_log_class;
 /* line 81: */
MCBAOST.data[25].Text = JEBAOST;
MCBAOST.data[26].Number = 27;
MCBAOST.data[26].Class = VIAAOSI_user_class;
 /* line 82: */
MCBAOST.data[26].Text = LEBAOST;
MCBAOST.data[27].Number = 28;
MCBAOST.data[27].Class = VIAAOSI_user_class;
 /* line 83: */
MCBAOST.data[27].Text = NEBAOST;
MCBAOST.data[28].Number = 29;
MCBAOST.data[28].Class = YIAAOSI_log_class;
 /* line 84: */
MCBAOST.data[28].Text = PEBAOST;
MCBAOST.data[29].Number = 30;
MCBAOST.data[29].Class = VIAAOSI_user_class;
 /* line 86: */
MCBAOST.data[29].Text = REBAOST;
MCBAOST.data[30].Number = 31;
MCBAOST.data[30].Class = VIAAOSI_user_class;
 /* line 87: */
MCBAOST.data[30].Text = TEBAOST;
MCBAOST.data[31].Number = 32;
MCBAOST.data[31].Class = YIAAOSI_log_class;
 /* line 88: */
MCBAOST.data[31].Text = VEBAOST;
MCBAOST.data[32].Number = 33;
MCBAOST.data[32].Class = VIAAOSI_user_class;
 /* line 89: */
MCBAOST.data[32].Text = XEBAOST;
MCBAOST.data[33].Number = 34;
MCBAOST.data[33].Class = VIAAOSI_user_class;
 /* line 90: */
MCBAOST.data[33].Text = ZEBAOST;
MCBAOST.data[34].Number = 35;
MCBAOST.data[34].Class = YIAAOSI_log_class;
 /* line 91: */
MCBAOST.data[34].Text = BFBAOST;
DCBAOST.Setup = A_HISVEC(CFBAOST,MCBAOST,35,A68_41 );
DFBAOST_io_facility = DCBAOST;
 /* line 93: */
 /* line 95: */
 /* line 97: */
 /* line 98: */
MFBAOST = DFBAOST_io_facility.Messages ;
NFBAOST = MFBAOST.upb -1;
LFBAOST_message = MFBAOST.data;
for (;NFBAOST-- >= 0;
(LFBAOST_message++
) )
{
OFBAOST.Msgno.Number = 0;
OFBAOST.Msgno.Facility = (A68_32 *)A68_NIL;
OFBAOST.Msgno.Class = 0X0U;
OFBAOST.Text = A_VVAC(PFBAOST);
(*LFBAOST_message) = OFBAOST;
}
 /* line 100: */
 /* line 101: */
A_PROC_EXIT(DECS iomessages);
} 
#undef NL
/* end of translation of ./a68files/iomessages.a68 */
