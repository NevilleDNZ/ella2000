
           /*          ELLA  openinterface header file             */

#ifndef _openinterface_h
#define _openinterface_h

CF_HEADER( openinterface_h_init, \
    "$Id: openinterface.h,v 2.4 1995/03/29 13:05:30 ella Exp $" )

/* #define Config_cmodes "DRA openinterface 0.1 22-Dec-1993 16:15" */


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

                         Crown Copyright, (c)   1993

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

   ------------------------- Change History ---------------------------
06:01:95   1.001  ELLA    Created from cmodes.h to extract the bits pertaining
                         to openinterface 
12:01:95   1.002  DJS    Changes to specifications of read_signature and
                        write_signature etc. 
24:01:95   1.003  DJS    Install packed format mode. 
29:03:95   2.004  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

/* Assumes that  "cmodes.h" is already included */

/* structures and prcedures from openinterface for reading/writing dump files */
/******************************************************************************/

#define CHAR       '|'
#define INTEGER    '+'
#define STRING     '"'
#define HASHID     '#'
#define TOKEN      '*'
#define SECONDARY  '^'
#define PRIMARY    '~'
#define BADBASIC   '@'
#define EMPTYBASIC '?'

#define PACKED_INFILE   'P'
#define UNPACKED_INFILE 'R'

#define MIN_UNPACKED_BUFFERSIZE 256
/* Must be greater than 2 */

typedef unsigned char Uchar;

typedef struct hashid { int index,
                            count;
                      } HashId;

#define HashIdIndex(x)  (x.index)
#define HashIdCount(x)  (x.count)

typedef struct basicvalue { char flag;
                            union vv { long int i;
                                       char *str;
                                       char charac;
                                       Tok token;
                                       HashId hashid;
                                     } value;
                          } Basicvalue;

#define BasicvalueFlag(x)    (x.flag)
#define BasicvalueInteger(x) (x.value.i)
#define BasicvalueString(x)  (x.value.str)
#define BasicvalueChar(x)    (x.value.charac)
#define BasicvalueToken(x)   (x.value.token)
#define BasicvalueHashId(x)  (x.value.hashid)

typedef struct externalclosure { Node *closure;
                                 Size headupb;
                                 char **head_data;
                               } Externalclosure;

#define Emptyclosure {(Node *)NULL, 0, (char **)NULL}

#define ExternalclosureClosure(x)               (x.closure)
#define ExternalclosureHead_data(x)             (x.head_data)
#define ExternalclosureHeadupb(x)		(x.headupb)

/* define reading structure etc */

typedef struct assemreader { Uchar (* get_char)();
                             Basicvalue ( * initem)( Uchar (*)());
                             Node *ids_lookup;
                             Node *sec_lookup;
                           } Assemreader;


#define AssemreaderGetchar(x)    (x->get_char)
#define AssemreaderInitem(x)     (x->initem)
#define AssemreaderIds_lookup(x) (x->ids_lookup)
#define AssemreaderSec_lookup(x) (x->sec_lookup)

extern FILE *assemdiagfile;

extern Externalclosure read_closure( Assemreader *reader,
                                     Transformer * tprocs);

extern Assemreader *read_signature( Uchar( *get_char)(), char *signature);


/* writing structs and procedures etc */

typedef struct assemwriter { void (* putstring)( int, char *);
                             void (* outitem)( Basicvalue,
                                               void (*)( int, char *));
                             int putidst;
                           } Assemwriter;

#define AssemwriterPutstring(x) (x->putstring)
#define AssemwriterOutitem(x)   (x->outitem)
#define AssemwriterPutidst(x)   (x->putidst)

extern void write_closure( Externalclosure closure,
                           Assemwriter *writer,
                           Transformer *tprocs);

extern Assemwriter *write_signature( void (* putstring)( int, char *),
                                     int mode,
                                     int putidst,
                                     char *signature );

#endif
