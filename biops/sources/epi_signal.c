/* $Id: epi_signal.c,v 34.2 1995/03/29 13:03:56 ella Exp $ */


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
30:08:94  33.001  ELLA  NewConFig Install in new configuration management
                                  system old version was 2.1.1.3 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
$OldLog:	epi_signal.c,v $
 * Revision 2.1.1.3  91/11/05  16:01:01  aap
 * use of alloca removed (not available on VMS).
 * 
 * Revision 2.1.1.3  91/11/05  15:05:22  aap
 * use of alloca removed (not available on VMS).
 * 
 * Revision 2.1.1.2  91/11/05  12:50:24  aap
 * Use of memcmp/memcpy reinstated -- required for VMS, now available on Apollo.
 * ./
 * 
 * Revision 2.1.1.1  91/10/28  13:46:18  aap
 * Use string.h instead of strings.h (for VMS)
 * 
 * Revision 2.1  91/02/25  12:10:34  miker
 * Candidate release 5
 * 
 * Revision 1.2  90/04/18  10:05:28  cathy
 * epi_decompose_signal() renamed epi_decompose_signal_repr() - new
 * epi_decompose_signal() implemented.
 * 
 * Revision 1.1  90/04/17  15:22:43  aap
 * Initial revision
 * 
*/
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	EPI Library - signal functions

File	      :	epi_signal.c

Description   :	This module contains the signal functions
		of the EPI library.


Changes History

   26.08.88	New module for EPI Version 2. AAP
   11.10.88	Implement actions from Code Review n035.7.47. BGH
   24.11.88	Added epi_same_signal. BGH
   06.12.88	Now uses bcopy instead of memcpy, and bcmp instead of memcmp
   		as memcpy and memcmp are not available on the Apollo. BGH

*******************************************************************************
*/

static char RcsId[] = "$Id: epi_signal.c,v 34.2 1995/03/29 13:03:56 ella Exp $";

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "epi.h"
#include "epi_internal.h"
extern char *calloc();
extern char *strchr();
extern long strtol();

#define	QUERY_REPR	(strcpy(calloc(1,2),"?"))
#define EMPTY_REPR	(calloc(1,1))

EPI_SIGNAL trim_signal(signal, type)
EPI_SIGNAL signal;
EPI_TYPE type;
{
    EPI_SIGNAL result;
    int i;

    result = signal;
    switch (epi_type_class(type))
    {
    case EPI_C_TYPE_CHAR:
	result.value += 1;
	result.upb_value -= 1;
	break;
    case EPI_C_TYPE_ENUM:
	result.value += 1;
	result.upb_value -= 1;
	if( signal.value[0] != 0 )
		/* not query value */
		result = trim_signal(result,
			(type->type.enum_type.subtypes)[signal.value[0] - 1]);
	break;
    case EPI_C_TYPE_FNTYPE:
	result = trim_signal(result, type->type.fn_type.input);
	result = trim_signal(result, type->type.fn_type.output);
	break;
    case EPI_C_TYPE_INT:
	result.value += 2;
	result.upb_value -= 2;
	break;
    case EPI_C_TYPE_NULL:
	break;
    case EPI_C_TYPE_INVALID:
	break;			/* internal error? */
    case EPI_C_TYPE_ROW:
	for (i = 0; i < epi_type_row_elems(type); i++)
	    result = trim_signal(result, epi_type_row_subtype(type));
	break;
    case EPI_C_TYPE_STRING:
	result.value += epi_type_string_length(type);
	result.upb_value -= epi_type_string_length(type);
	break;
    case EPI_C_TYPE_STRUCT:
	for (i = 0; i < epi_type_struct_elems(type); i++)
	    result = trim_signal(result, (type->type.struct_type.subtypes)[i]);
	break;
    }
    return result;
}

#define RETURN(str)	{ \
    			   EPI_STRING ans; \
			   ans = str; \
			   DEBUGEND_STRING(4, EPI_DECODE_SIGNAL, ans); \
			   return(ans); \
			 } \

EPI_STRING epi_decode_signal(signal, type)
EPI_SIGNAL signal;
EPI_TYPE type;
{
    EPI_STRING repr;

    DEBUGSTART_SIGNAL_TYPE(3, EPI_DECODE_SIGNAL, signal, type);
    if (signal.ident != EPI_O_SIGNAL ||
	signal.value == (EPI_INT *) NULL ||
	signal.upb_value == 0 ||
	epi_same_type(type,EPI_NULL_TYPE) ||
	type->ident != EPI_O_TYPE
	)
	RETURN(EPI_NULL_STRING);

    switch (epi_type_class(type))
    {
    case EPI_C_TYPE_CHAR:	/* tag'x */

	/* value is a single int containing an index (from 1) into the repr
	   string, or 0 for query */
	if (signal.value[0] == 0)
	    RETURN(QUERY_REPR);
	if (signal.value[0] > strlen(epi_type_char_repr(type)))
	    RETURN(EPI_NULL_STRING);
	repr = calloc(1, strlen(epi_type_char_tag(type)) + 3);
	sprintf(repr, "%s'%c",
		epi_type_char_tag(type),
		epi_type_char_repr(type)[signal.value[0] - 1]
	    );
	RETURN(repr);
	break;

    case EPI_C_TYPE_ENUM:	/* tag or tag&repr */

	/* value[0] is the tag (>0) or query (0) value[1..] is the value of the
	   associated type */
	{
	    EPI_STRING assoc_repr;	/* the representation of the assoc
					   value */
	    EPI_SIGNAL assoc_signal;
	    EPI_TYPE assoc_type;
	    EPI_STRING tag;

	    if (signal.value[0] == 0)
		RETURN(QUERY_REPR);

	    assoc_type = (type->type.enum_type.subtypes)[signal.value[0] - 1];
	    tag = (type->type.enum_type.tags)[signal.value[0] - 1];

	    if (assoc_type == EPI_NULL_TYPE || assoc_type->ident != EPI_O_TYPE)
		RETURN(EPI_NULL_STRING);

	    switch (epi_type_class(assoc_type))
	    {
	    case EPI_C_TYPE_INVALID:
	    default:
		RETURN(EPI_NULL_STRING);
	    case EPI_C_TYPE_NULL:
		/* no associated type */
		RETURN(strcpy(calloc(1, strlen(tag) + 1), tag));
		break;
	    case EPI_C_TYPE_CHAR:
	    case EPI_C_TYPE_ENUM:
	    case EPI_C_TYPE_FNTYPE:
	    case EPI_C_TYPE_INT:
	    case EPI_C_TYPE_ROW:
	    case EPI_C_TYPE_STRING:
	    case EPI_C_TYPE_STRUCT:

		/* construct an EPI_SIGNAL for the assoc value */
		assoc_signal.ident = EPI_O_SIGNAL;
		assoc_signal.upb_value = signal.upb_value - 1;
		assoc_signal.value = &signal.value[1];

		assoc_repr = epi_decode_signal(assoc_signal, assoc_type);

		if (assoc_repr == EPI_NULL_STRING)
		    RETURN(EPI_NULL_STRING);

		repr = calloc(1, strlen(tag) + strlen(assoc_repr) + 2);
		sprintf(repr, "%s&%s", tag, assoc_repr);
		cfree(assoc_repr);
		RETURN(repr);
		break;
	    }
	}
	break;

    case EPI_C_TYPE_FNTYPE:	/* ->value */

	/* value is the concatenation of the from and to values. There is no
	   query value. */
	{
	    EPI_TYPE input_type, output_type;
	    EPI_STRING output_repr;

	    input_type = epi_type_fntype_input(type);
	    output_type = epi_type_fntype_output(type);

	    if (
		input_type == EPI_NULL_TYPE ||
		input_type->ident != EPI_O_TYPE ||
		output_type == EPI_NULL_TYPE ||
		output_type->ident != EPI_O_TYPE
		)
		RETURN(EPI_NULL_STRING);

	    output_repr =
		epi_decode_signal(trim_signal(signal, input_type), output_type);

	    if (output_repr == EPI_NULL_STRING)
		RETURN(EPI_NULL_STRING);

	    repr = calloc(1, strlen(output_repr) + 3);
	    sprintf(repr, "->%s", output_repr);
	    cfree(output_repr);
	    RETURN(repr);
	}
	break;

    case EPI_C_TYPE_INT:	/* tag/value */

	/* value is a pair of ints: value[0] is 0 for query, 1 otherwise
	   value[1] contains the signed value */
	if (signal.value[0] == 0)
	    RETURN(QUERY_REPR)
	else if (signal.value[0] != 1)
	    RETURN(EPI_NULL_STRING);
	if (signal.value[1] > epi_type_int_upb(type) ||
	    signal.value[1] < epi_type_int_lwb(type)
	    )
	    RETURN(EPI_NULL_STRING);

	repr = calloc(1, strlen(epi_type_int_tag(type)) + 20);
	sprintf(repr, "%s/%d",
		epi_type_int_tag(type),
		signal.value[1]
	    );
	RETURN(repr);
	break;

    case EPI_C_TYPE_INVALID:
	RETURN(EPI_NULL_STRING);
	break;

    case EPI_C_TYPE_NULL:
	RETURN(EMPTY_REPR);
	break;

    case EPI_C_TYPE_STRING:	/* tag"..." */

	/* value is n ints (for STRING[n], n>0), each containing an index into
	   the repr string of the associated char type or 0 for query */
	{
	    int reprlen;	/* length of char type repr string */
	    char *c;		/* loop variable */
	    int i;		/* loop variable */

	    char *char_repr;	/* identity for char type repr string */

	    if (signal.value[0] == 0)
		RETURN(QUERY_REPR);
	    if (epi_type_string_subtype(type) == EPI_NULL_TYPE ||
		epi_type_string_subtype(type)->ident != EPI_O_TYPE)
		RETURN(EPI_NULL_STRING);

	    char_repr = epi_type_char_repr(epi_type_string_subtype(type));
	    reprlen = strlen(char_repr);
	    repr = calloc(1,
		    strlen(epi_type_char_tag(epi_type_string_subtype(type))) +
			  epi_type_string_length(type) + 3);
	    sprintf(repr, "%s\"",
		    epi_type_char_tag(epi_type_string_subtype(type)));

	    for (
		 (c = strchr(repr, '\0'), i = 0);
		 i < epi_type_string_length(type);
		 (i++, c++)
		)
		if (signal.value[i] > reprlen)
		{
		    cfree(repr);
		    RETURN(EPI_NULL_STRING);
		} else
		    *c = char_repr[signal.value[i] - 1];

	    strcat(repr, "\"");
	    RETURN(repr);
	}
	break;

    case EPI_C_TYPE_ROW:
    case EPI_C_TYPE_STRUCT:	/* (repr,repr,repr,...) */

	/* value is the concatenation of the element values */
	{
	    int elems;
	    EPI_STRING *elem_repr, *this_repr;
	    EPI_SIGNAL this_signal;
	    int i, is_row, repr_len = 0;
	    EPI_TYPE *t;

	    is_row = (epi_type_class(type) == EPI_C_TYPE_ROW);

	    elems = is_row ?
		epi_type_row_elems(type) :
		epi_type_struct_elems(type);

	    elem_repr = (EPI_STRING *) calloc(1, sizeof(EPI_STRING) * elems);

	    /* set up loop through element type/signal pairs */
	    /* collect element representations in elem_reprs */

	    this_signal = signal;

	    t = is_row ?
		&(type->type.row_type.subtype) :
		type->type.struct_type.subtypes;

	    for ((i = 1, this_repr = elem_repr); i <= elems; (i++, this_repr++))
	    {
		*this_repr = epi_decode_signal(this_signal, *t);
		if (*this_repr == EPI_NULL_STRING)
		{		/* free reprs obtained so far */
		    for (this_repr--; i > 1; i--)
			cfree(*this_repr);
		    RETURN(EPI_NULL_STRING);
		}
		repr_len += strlen(*this_repr) + 1;	/* +1 for separator */

		if (i < elems)
		    this_signal = trim_signal(this_signal, *t);
		if (!is_row)
		    t++;
	    }

	    repr = calloc(1, repr_len + 2);
	    strcpy(repr, "(");

	    for ((i = 1, this_repr = elem_repr); i <= elems; (i++, this_repr++))
	    {
		strcat(repr, *this_repr);
		cfree(*this_repr);
		strcat(repr, i == elems ? ")" : ",");
	    }
	    cfree(elem_repr);
	    RETURN(repr);
	}
	break;

    default:
	RETURN(EPI_NULL_STRING);
	break;
    }
}

#undef RETURN

/* epi_encode_signal plus support routines */

#define is_null_signal(s)	(s.ident == EPI_O_NULL_SIGNAL)

EPI_SIGNAL concat_signals(s1, s2)
EPI_SIGNAL s1, s2;
{
    EPI_SIGNAL result;

    if (is_null_signal(s1) || s1.upb_value == 0)
	return s2;
    if (is_null_signal(s2) || s2.upb_value == 0)
	return s1;

    result.ident = EPI_O_SIGNAL;
    result.upb_value = s1.upb_value + s2.upb_value;
    result.value = (EPI_INT *) calloc(sizeof(EPI_INT), result.upb_value);
    memcpy(result.value, s1.value, s1.upb_value * sizeof(EPI_INT));
    memcpy(result.value + s1.upb_value, s2.value, s2.upb_value * sizeof(EPI_INT));

    cfree(s1.value);
    cfree(s2.value);

    return result;
}

EPI_SIGNAL query_signal(type)
EPI_TYPE type;
/* generates a query signal of the required type */
{
    EPI_SIGNAL result;

    result.ident = EPI_O_SIGNAL;

    switch (epi_type_class(type))
    {
    case EPI_C_TYPE_CHAR:
	result.upb_value = 1;
	break;
    case EPI_C_TYPE_ENUM:
	result.upb_value = 1;
	break;
    case EPI_C_TYPE_INT:
	result.upb_value = 2;
	break;
    case EPI_C_TYPE_STRING:
	result.upb_value = epi_type_string_length(type);
	break;
    case EPI_C_TYPE_FNTYPE:
	return concat_signals(query_signal(type->type.fn_type.input),
				query_signal(type->type.fn_type.input));
    case EPI_C_TYPE_ROW:
	{
	    EPI_SIGNAL elem_query;
	    int i = epi_type_row_elems(type);

	    elem_query = query_signal(epi_type_row_subtype(type));
	    result = EPI_NULL_SIGNAL;
	    while( i-- > 0 )
	    {
		result = concat_signals(result,elem_query);
	    }
	    return result;
	}
    case EPI_C_TYPE_STRUCT:
	{
	    EPI_TYPE *t;
	    int i = epi_type_struct_elems(type);

	    t = type->type.struct_type.subtypes;
	    result = EPI_NULL_SIGNAL;
	    while( i-- > 0 )
	    {
		result = concat_signals(result,query_signal(*t++));
	    }
	    return result;
	}
    case EPI_C_TYPE_NULL:
    case EPI_C_TYPE_INVALID:
    default:
	return EPI_NULL_SIGNAL;
    }

    result.value = (EPI_INT *) calloc(sizeof(EPI_INT), result.upb_value);
    return result;
}

EPI_SIGNAL query_or_null_signal(type)
EPI_TYPE type;
/* generates a query signal for basics types, null signal otherwise */
{
    switch( epi_type_class(type) )
    {
    case EPI_C_TYPE_CHAR:
    case EPI_C_TYPE_ENUM:
    case EPI_C_TYPE_INT:
    case EPI_C_TYPE_STRING:
	return query_signal(type);
    default:
	return EPI_NULL_SIGNAL;
    }
}

#define rd_space	while(isspace(*repr)) repr++

#define rd_tag \
	rd_space; token=repr; \
	while( islower(*repr) || isdigit(*repr) || *repr=='_' ) repr++; \
	tokenlen = repr-token;

static EPI_SIGNAL encode_signal(signal_repr, type, remainder)
EPI_STRING signal_repr;
EPI_TYPE type;
EPI_STRING *remainder;
{
    char *token,		/* beginning of current token */
    *repr = signal_repr;	/* unread input */
    int tokenlen;		/* length of current token */

    EPI_SIGNAL result;

    rd_space;
    if (*repr == '?')
    {
	*remainder = repr + 1;
	return query_or_null_signal(type);
    }
    result.ident = EPI_O_SIGNAL;
    result.upb_value = 0;
    result.value = (EPI_INT *) 0;

    switch (epi_type_class(type))
    {
    case EPI_C_TYPE_CHAR:
	{
	    char *index;

	    rd_tag;
	    if (tokenlen != strlen(type->type.char_type.tag) ||
		strncmp(token, type->type.char_type.tag, tokenlen)
		)
	    {
		*remainder = repr;
		return EPI_NULL_SIGNAL;
	    }
	    rd_space;
	    if (*repr != '\'')
	    {
		*remainder = repr;
		return EPI_NULL_SIGNAL;
	    }
	    if ((index = strchr(type->type.char_type.repr, *++repr)) == NULL)
	    {
		*remainder = repr;
		return EPI_NULL_SIGNAL;
	    }
	    result.upb_value = 1;
	    result.value = (EPI_INT *) calloc(sizeof(EPI_INT), result.upb_value);
	    result.value[0] = index - type->type.char_type.repr + 1;

	    *remainder = repr + 1;
	    return result;
	}

    case EPI_C_TYPE_ENUM:
	{
	    int tagindex;
	    EPI_TYPE assoc_type;

	    rd_tag;

	    for (tagindex = 0; tagindex < type->type.enum_type.elems; tagindex++)
		if (tokenlen == strlen((type->type.enum_type.tags)[tagindex]) &&
		    !strncmp(token,
			     (type->type.enum_type.tags)[tagindex], tokenlen)
		    )
		    break;
	    if (tagindex >= type->type.enum_type.elems)
	    {
		*remainder = repr;
		return EPI_NULL_SIGNAL;
	    }
	    result.upb_value = 1;
	    result.value = (EPI_INT *) calloc(sizeof(EPI_INT), result.upb_value);
	    result.value[0] = tagindex + 1;

	    assoc_type = (type->type.enum_type.subtypes)[tagindex];

	    if (epi_type_class(assoc_type) == EPI_C_TYPE_NULL)
	    {
		*remainder = repr;
		return result;
	    } else
	    {
		rd_space;
		if (*repr == '&')
		{
		    EPI_SIGNAL assoc_sig;
		    assoc_sig = encode_signal(repr + 1, assoc_type, remainder);
		    if( epi_same_signal(assoc_sig,EPI_NULL_SIGNAL) )
			return EPI_NULL_SIGNAL;
		    else
			return concat_signals(result, assoc_sig);
		}
		else
		{
		    *remainder = repr;
		    return EPI_NULL_SIGNAL;
		}
	    }
	}

    case EPI_C_TYPE_INT:
	{
	    int abs_value;
	    int negative;
	    int radix;
	    char *term;		/* for strtol */
	    long value;

	    rd_tag;
	    if (tokenlen != strlen(type->type.int_type.tag) ||
		strncmp(token, type->type.int_type.tag, tokenlen)
		)
	    {
		*remainder = repr;
		return EPI_NULL_SIGNAL;
	    }
	    rd_space;
	    if (*repr++ != '/')
	    {
		*remainder = repr - 1;
		return EPI_NULL_SIGNAL;
	    }
	    result.upb_value = 2;
	    result.value = (EPI_INT *) calloc(sizeof(EPI_INT), result.upb_value);
	    result.value[0] = 1;/* not query */

	    rd_space;

	    if (*repr == '-')
	    {
		negative = 1;
		repr++;
	    } else
	    {
		negative = 0;
		if (*repr == '+')
		    repr++;
	    }

	    if (!strncmp(repr, "10r", 3))
	    {
		radix = 10;
		repr += 3;
	    } else if (!strncmp(repr, "2r", 2))
	    {
		radix = 2;
		repr += 2;
	    } else if (!strncmp(repr, "4r", 2))
	    {
		radix = 4;
		repr += 2;
	    } else if (!strncmp(repr, "8r", 2))
	    {
		radix = 8;
		repr += 2;
	    } else if (!strncmp(repr, "16r", 3))
	    {
		radix = 16;
		repr += 3;
	    } else
		radix = 10;

	    value = strtol(repr, &term, radix);
	    if (value == 0L && term == repr)
	    {
		*remainder = repr;
		return EPI_NULL_SIGNAL;
	    }
	    value *= negative ? -1 : 1;

	    if (value > type->type.int_type.upb ||
		value < type->type.int_type.lwb)
	    {
		*remainder = repr;
		return EPI_NULL_SIGNAL;
	    }
	    result.value[1] = (EPI_INT) value;

	    *remainder = term;
	    return result;
	}

    case EPI_C_TYPE_STRING:
	{
	    char *term, *x;
	    int i;
	    char *char_repr;	/* identity for char type repr string */
	    int space_value;	/* the signal value of " ", 0 if not allowed by type */

	    rd_tag;
	    if (tokenlen != strlen(type->type.string_type.subtype->type.char_type.tag) ||
		strncmp(token, type->type.string_type.subtype->type.char_type.tag, tokenlen))
	    {
		*remainder = repr;
		return EPI_NULL_SIGNAL;
	    }
	    rd_space;
	    if (*repr++ != '"')
	    {
		*remainder = repr - 1;
		return EPI_NULL_SIGNAL;
	    }

	    char_repr = epi_type_char_repr(epi_type_string_subtype(type));
	    space_value = (int)strchr(char_repr,' ');
	    space_value = space_value == NULL ? 0 : (char *)space_value-char_repr+1;

	    term = strchr(repr, '"');
	    if ( term == NULL	/* no quote in repr */
	       || term - repr > type->type.string_type.length  /* repr too long */
	       || (!space_value && (term - repr != type->type.string_type.length))	/* repr too short */
	       )
	    {
		*remainder = repr;
		return EPI_NULL_SIGNAL;
	    }

	    result.upb_value = type->type.string_type.length;
	    result.value = (EPI_INT *) calloc(sizeof(EPI_INT), result.upb_value);

	    for (i = 0; term > repr; (i++, repr++))
	    {
		x = strchr(char_repr, *repr);
		if (x == NULL)
		{
		    cfree(result.value);
		    *remainder = repr;
		    return EPI_NULL_SIGNAL;
		} else
		{
		    result.value[i] = x - char_repr + 1;
		}
	    }

	    /* i indexes next unfilled value at this point */
	    /* space fill if char type contains space */

	    if( space_value )
		for( ; i < result.upb_value ; i++ )
		    result.value[i] = space_value;
		
	    *remainder = term + 1;
	    return result;
	}

    case EPI_C_TYPE_FNTYPE:
	rd_space;
	if (strncmp(repr, "->", 2))
	{
	    *remainder = repr;
	    return EPI_NULL_SIGNAL;
	} else
	    return concat_signals(
	    		query_signal(epi_type_fntype_input(type)),
			encode_signal(repr + 2,
			    epi_type_fntype_output(type), remainder));

    case EPI_C_TYPE_ROW:
    case EPI_C_TYPE_STRUCT:
	{
	    int elems;
	    int is_row;
	    int i;
	    EPI_TYPE *t;

	    is_row = (epi_type_class(type) == EPI_C_TYPE_ROW);

	    elems = is_row ?
		epi_type_row_elems(type) :
		epi_type_struct_elems(type);

	    t = is_row ?
		&(type->type.row_type.subtype) :
		type->type.struct_type.subtypes;

	    rd_space;
	    if (*repr != '(')
	    {
		*remainder = repr;
		return EPI_NULL_SIGNAL;
	    } else
		repr++;

	    for (i = 1; i <= elems; i++)
	    {
		EPI_SIGNAL sig;

		sig = encode_signal(repr, *t, &repr);

		if (is_null_signal(sig))
		{
		    cfree(result.value);
		    *remainder = repr;
		    return EPI_NULL_SIGNAL;
		}
		rd_space;
		if (*repr != (i == elems ? ')' : ','))
		{
		    cfree(result.value);
		    *remainder = repr;
		    return EPI_NULL_SIGNAL;
		} else
		{
		    result = concat_signals(result, sig);
		    repr++;
		}

		if (!is_row)
		    t++;
	    }

	    *remainder = repr;
	    return result;
	}

    case EPI_C_TYPE_NULL:
    case EPI_C_TYPE_INVALID:
    default:
	*remainder = repr;
	return EPI_NULL_SIGNAL;
    }
}

EPI_SIGNAL epi_encode_signal(signal_repr, type)
EPI_STRING signal_repr;
EPI_TYPE type;
{
    EPI_STRING repr;
    EPI_SIGNAL ans;

    DEBUGSTART_SIGREP_TYPE(3, EPI_ENCODE_SIGNAL, signal_repr, type);

    if( epi_same_type(type,EPI_NULL_TYPE) )
	ans = EPI_NULL_SIGNAL;
    else
    {
	ans = encode_signal(signal_repr, type, &repr);

	/* check that all of signal_repr used */
	rd_space;
	if( *repr != '\0' ) ans = EPI_NULL_SIGNAL;
    }

    DEBUGEND_SIGNAL(4, EPI_ENCODE_SIGNAL, ans);
    return(ans);
}

EPI_SIGNAL *epi_decompose_signal(signal,type)
EPI_SIGNAL signal;
EPI_TYPE type;
{
    /* decompose structured signal representation into its components */

    switch( epi_type_class(type) )
    {
	default:
	    return (EPI_SIGNAL *)NULL;

	case EPI_C_TYPE_STRUCT:
	case EPI_C_TYPE_ROW:
	{
	    int elems, is_row;
	    EPI_TYPE *t;
	    EPI_SIGNAL *result,
		*this_signal;	/* steps along result */
	    EPI_SIGNAL remainder;	/* steps along signal */

	    is_row = (epi_type_class(type)==EPI_C_TYPE_ROW);

	    elems = is_row ?
			epi_type_row_elems(type) :
			epi_type_struct_elems(type);

	    t = is_row ?
			&(type->type.row_type.subtype) :
			type->type.struct_type.subtypes;

	    if( (result = (EPI_SIGNAL *)calloc(elems,sizeof(EPI_SIGNAL))) == (EPI_SIGNAL *)NULL )
		return (EPI_SIGNAL *)NULL;

	    for(
		remainder = signal, this_signal = result;
		elems > 0;
		elems--, this_signal++
	    )
	    {
		*this_signal = remainder;

		remainder = trim_signal(remainder,*t);

		this_signal->upb_value = remainder.value-this_signal->value;

		if( !is_row )
		    t++;
	    }

	    /* check all of signal consumed */

	    if( remainder.upb_value != 0 )
	    {
		/* free everything allocated */
		cfree(result);
		return (EPI_SIGNAL *)NULL;
	    }

	    return result;
	}
    }
}

EPI_STRING *epi_decompose_signal_repr(signal_repr,type)
EPI_STRING signal_repr;
EPI_TYPE type;
{
    /* decompose structured signal representation into its components */

    switch( epi_type_class(type) )
    {
	default:
	    return (EPI_STRING *)NULL;

	case EPI_C_TYPE_STRUCT:
	case EPI_C_TYPE_ROW:
	{
	    int elems, is_row, i;
	    EPI_TYPE *t;
	    EPI_STRING *result;
	    EPI_STRING repr;	/* unconsumed repr */

	    is_row = (epi_type_class(type)==EPI_C_TYPE_ROW);

	    elems = is_row ?
			epi_type_row_elems(type) :
			epi_type_struct_elems(type);

	    t = is_row ?
			&(type->type.row_type.subtype) :
			type->type.struct_type.subtypes;

	    /* initialise repr to whole repr, and consume initial "(" */

	    repr = signal_repr;
	    rd_space;
	    if( *repr++ != '(' )
		return (EPI_STRING *)NULL;

	    if( (result = (EPI_STRING *)calloc(elems,sizeof(EPI_STRING))) == (EPI_STRING *)NULL )
		return (EPI_STRING *)NULL;

	    for( i = 1; i <= elems; i++ )
	    {
		EPI_SIGNAL dummy;
		EPI_STRING repr_start;

		rd_space;
		repr_start = repr;

		/* call encode_signal to consume repr */
		dummy = encode_signal(repr, *t, &repr);
		cfree(dummy.value);
		if( is_null_signal(dummy) )
		{
		    /* free everything allocated */
		    for( i -= 1 ; i >= 1 ; i-- )
			cfree(result[i-1]);
		    cfree(result);
		    return (EPI_STRING *)NULL;
		}

		/* allocate space and copy sub-repr */

		result[i-1] = calloc(repr-repr_start+1,sizeof(char));
		if( result[i-1] == (char *) NULL )
		{
		    /* free everything allocated */
		    for( i -= 1 ; i >= 1 ; i-- )
			cfree(result[i-1]);
		    cfree(result);
		    return (EPI_STRING *)NULL;
		}

		strncpy(result[i-1],repr_start,repr-repr_start);
		result[i-1][repr-repr_start] = '\0';

		rd_space;
		if( *repr++ != (i == elems ? ')' : ',' ) )
		{
		    /* free everything allocated */
		    for( ; i >= 1 ; i-- )
			cfree(result[i-1]);
		    cfree(result);
		    return (EPI_STRING *)NULL;
		}

		if( !is_row )
		    t++;
	    }

	    /* check all repr consumed */

	    rd_space;
	    if( *repr != '\0' )
	    {
		/* free everything allocated */
		for( i = 1 ; i <= elems ; i-- )
		    cfree(*result++);
		cfree(result);
		return (EPI_STRING *)NULL;
	    }

	    return result;
	}
    }
}
/* unpacking functions (not defined as macros) */
/* ------------------------------------------- */

EPI_BOOL epi_same_signal(signal1, signal2)
EPI_SIGNAL signal1, signal2;
{
    EPI_BOOL same;

    DEBUGSTART_SIGNAL_SIGNAL(3, EPI_SAME_SIGNAL, signal1, signal2);
    same = ((signal1.ident == EPI_O_NULL_SIGNAL &&
	     signal2.ident == EPI_O_NULL_SIGNAL) ||
	    (signal1.ident == EPI_O_SIGNAL &&
	     signal2.ident == EPI_O_SIGNAL &&
	     signal1.upb_value == signal2.upb_value &&
	     !memcmp((char*)signal1.value,(char*)signal2.value,
		    signal1.upb_value*sizeof(EPI_INT))));
    DEBUGEND_BOOL(4, EPI_SAME_SIGNAL, same);
    return (same);
}

/* end */
