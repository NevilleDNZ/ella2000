/* $Id: data_toolkit.c,v 34.2 1995/03/29 13:03:47 ella Exp $ */



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
                                  system old version was 2.2 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef DATA_TOOLKIT_C

static char rcsid[] = "$Id: data_toolkit.c,v 34.2 1995/03/29 13:03:47 ella Exp $";

#define DATA_TOOLKIT_C

/* Include file for private Alien Code functions and macros */

#include "toolkit_internal.h"

/*

       *******  THIS MODULE IS PART OF THE ALIEN CODE TOOLKIT  *******

     Data_toolkit.c defines the toolkit routines that extract information
     from the Alien Code instance data table for a given function.

     These routines are defined in Section 5 of E.N0045.50.13 - The Alien
     Code Toolkit Specification.

     Some parts of the code are only expected to be executed in exceptional
     circumstances such as simulator data corruption - these are commented
     as *** Defensive ***.

                                                          MHC  7-Nov-1989
     Changes:
     17-Sept-1990: 'aci_set_output' now only functions if 'table_output_frozen'
                   is set to 0. MDR.
 
*/


/* Local Macros for use by the following toolkit routines */

#define QUERY_REPR(buffer)  strcat((char *) buffer, "?")

#define INTAT(buffer,index) (((int *)buffer)[index])

#define QUERYSIZE  (sizeof(unsigned))
#define CHARSIZE   (sizeof(unsigned))
#define ENUMSIZE   (sizeof(unsigned))
#define INTSIZE    (sizeof(unsigned))

#define INTVALUE(buffer)  ((*((int **) buffer))[0])
#define ENUMVALUE(buffer) ((*((int **) buffer))[0])
#define CHARVALUE(buffer) ((*((int **) buffer))[0])


/*******                TOOLKIT ROUTINES BEGIN HERE                    *******/




/*****************************************************************************/
/*                                                                           */
/*                              ACI_INPUTS_UPB                               */
/*      Returns the number of input pointers held in the instance record     */


unsigned aci_inputs_upb (i)
ACI_EVAL_INST i;
{
   register unsigned *instance;
   instance = (unsigned *) (global_pointer + i);

   return table_input_size(instance);

}



/*****************************************************************************/
/*                                                                           */
/*                             ACI_INPUT                                     */
/*    Copies data for the nth input at time t units previous into buffer     */


void aci_input (i, n, buffer)
ACI_EVAL_INST i;
unsigned n;
char *buffer;
{
   unsigned input_size;     /* The input size in bytes */
   register int *instance;

   instance = (int *) (global_pointer + i);


   if ((n > table_input_size(instance)) || (n == 0))
     {
       /* error detected so return query (= size unit bytes) in buffer */
      
	 *((int *)buffer) = 0;
     }
   else
     {
       /* Use current inputs for Interface I */
       /* Copy the input pointed to into buffer */

       int temp;   /* For VMS Algol 68 pass by reference */
       input_size = (*get_input_size)(A68TEMPVAL(table_symtable_index(instance),temp),
				      A68VAL(n));
       memcpy (buffer, 
	       (char *) (instance[NINPUTS + n] + global_pointer), 
	       input_size
	      );
     }
}




/*****************************************************************************/
/*                                                                           */
/*                           ACI_DECODE_INPUT                                */
/*   Copies the n'th decoded signal value into buffer from the input area    */


void aci_decode_input (i, n, buffer)
  ACI_EVAL_INST i;
  unsigned n;
  char *buffer;
{
  extern void decode_input();  /* Copies a printable signal into buffer */
  
  register unsigned *instance;

  /* Get the input as the simulator encodes it and it's type */

  unsigned input_size = aci_input_size(i,n);  
  EPI_TYPE epi_type   = (EPI_TYPE)aci_input_type(i,n);

  instance = (unsigned *) (global_pointer + i);  


  if ((input_size != 0) && (epi_type != EPI_NULL_TYPE))
    {
      char *encoded_buffer = (char *) calloc(input_size, sizeof(char));
      aci_input(i, n, (char *) encoded_buffer);
      
      /* write null terminating byte to the user's buffer */

     buffer[0] = '\0';
      
      /* Start decoding the input */

      decode_input (buffer, encoded_buffer, epi_type, input_size);

      cfree(encoded_buffer);
    }
  else
    {
      QUERY_REPR(buffer);    /*** Defensive ***/
    }
  
  epi_free_type(epi_type); 
  
}





/*****************************************************************************/
/*                                                                           */
/*                           ACI_INSTANCE_ID                                 */
/*  Returns contents of the Instance ID field in the specified instance data */


unsigned aci_instance_id (i)
ACI_EVAL_INST i;
{
  register unsigned *instance;
  instance = (unsigned *) (global_pointer + i);

  return table_instance_id(instance);
}




/****************************************************************************/
/*                                                                          */
/*                         ACI_SET_INSTANCE_ID                              */
/*     Sets Instance ID field of the specified instance record to value     */


void aci_set_instance_id (i, value)
ACI_EVAL_INST i;
unsigned value;
{
   register unsigned *instance;

   instance = (unsigned *) (global_pointer + i);

   table_instance_id(instance) = value;

 }




/***************************************************************************/
/*                                                                         */
/*                          ACI_WORKSPACE_SIZE                             */
/* Returns the size of the workspace for the supplied instance data record */


unsigned aci_workspace_size (i)
ACI_EVAL_INST i;
{
   register unsigned *instance;

   instance = (unsigned *) (global_pointer + i);

   return table_workspace_size(instance);      
 }





/****************************************************************************/
/*                                                                          */
/*                           ACI_WORKSPACE                                  */
/*  Returns a pointer to the workspace area of the supplied instance data   */


char *aci_workspace (i)
ACI_EVAL_INST i;
{  
   register unsigned *instance;

   instance = (unsigned *) (global_pointer + i);
   
   return ((char *)(table_workspace_ptr(instance) + global_pointer));
}




/***************************************************************************/
/*                                                                         */
/*                          ACI_SET_OUTPUT                                 */
/*   Copies the signal value in buffer to the instance data output area    */


void aci_set_output (i, buffer)
ACI_EVAL_INST i;
char *buffer;
{
  extern int type_ok();         /* Type checker for encoded output buffer */
  unsigned size;                /* Size of output in bytes */
  register unsigned *instance;  /* Pointer to simulator instance data */
  int query = 0;		/* Represents query signal in output area */
  int output_buffer_ok;	        /* 1 = Buffer type check was successful */
  char **buffer_ptr;            /* Pointer to user's encoded output buffer */
  char *buffer_start;           /* Pointer to start of user's output buffer */
  
    
  instance = (unsigned *) (global_pointer + i);
  if (!table_output_frozen(instance))
    {
  
     buffer_start = buffer;
     
     size = aci_output_size(i);
     
     /* Do output type checking on the encoded buffer if type check flag set */
     
     if (output_type_check_on)
       {
         buffer_ptr = &buffer;
         output_buffer_ok = type_ok(aci_output_type(i), 
   				 (char **)buffer_ptr
   				 );
       }
     else
       output_buffer_ok = 1;
    
    
     if ((size != 0) && (output_buffer_ok))
       {
         /* Output size is non-zero & type check succeeded so write output */
         
         memcpy(((char *) &(table_output_area(instance))), buffer_start, size);
       }
     else
       {
         /* Buffer wrong size so put query in output area */
         
         memset((char *)&(table_output_area(instance)), query, SIZEUNIT);
       }
    }      
}




/**************************************************************************/
/*                                                                        */
/*                       ACI_ENCODE_OUTPUT                                */
/*  Copies the decoded signal in buffer to the Instance data output area  */


void aci_encode_output (i, buffer)
  ACI_EVAL_INST i;
  char *buffer;
{
  EPI_SIGNAL output_signal;	/* The output EPI SIGNAL */
  char *output_buffer;          /* Encoded buffer */
  unsigned size;                /* The output size (bytes) */
  int query = 0;		/* Query flag for output */

  register unsigned *instance;
  int temp;   /* For VMS Algol 68 pass by reference */

  EPI_STRING output_string = (EPI_STRING) buffer;
  EPI_TYPE epi_type = (EPI_TYPE)aci_output_type(i);

  
  
  instance = (unsigned *) (global_pointer + i);
  
  size = aci_output_size(i);

  if ((size != 0) && 
      (epi_type != EPI_NULL_TYPE) &&
      !epi_same_signal(output_signal = epi_encode_signal(output_string, 
							 epi_type), 
		       EPI_NULL_SIGNAL) &&
      ((output_buffer = (char *)
	((*get_encoded_output)(A68VAL(output_signal),
			    A68TEMPVAL(table_symtable_index(instance),temp)
			    ))) != NULL)
      )
    {
      /* All checks OK so write output buffer to output area */
      
      memcpy(((char *) &(table_output_area(instance))),
	     (char *) output_buffer,
	     size
	     );
      
      free(output_signal.value); 
    }
  else
    /* Put query in output area */
    memset (((char *) &(table_output_area(instance))), query, SIZEUNIT);

  epi_free_type(epi_type);
    
}



/******************** END OF DATA TOOLKIT ROUTINES ************************/





/******************** DATA TOOLKIT SUPPORT ROUTINES ***********************/


 /*************************************************************************/
 /*                                                                       */
 /*                         DECODE INPUT                                  */
 /*  Enters a printable representation of the encoded buffer "enc_buffer" */
 /*               into the user provided buffer "dec_buffer".             */
 /*                                                                       */


void decode_input (dec_buffer, enc_buffer, epi_type, input_size)
  char     *dec_buffer;
  char     *enc_buffer;
  EPI_TYPE epi_type;
  unsigned input_size;
{
  int i, j;   /* Loop indices */
  
  /* Copy current position in the encoded buffer */

  char *buffer_mark = enc_buffer;
  
  /* Decode according to input epi type */

  switch (epi_type_class(epi_type))
    {
      case EPI_C_TYPE_ENUM:
        {
	  EPI_TYPE *assoc_type = epi_type_enum_subtypes(epi_type);
	
	  if (INTAT(enc_buffer,0) == QUERY)
	    QUERY_REPR(dec_buffer);
	  else
	    {
	      strcat(dec_buffer, 
		    (epi_type_enum_tags(epi_type)[(INTAT(enc_buffer,0) - 1)]));

	      if (epi_type_class(assoc_type[(INTAT(enc_buffer, 0) - 1)]) 
		  != EPI_C_TYPE_NULL)
		{
		  strcat(dec_buffer, "&");
		  buffer_mark += QUERYSIZE;
		  decode_input(dec_buffer, 
			       buffer_mark, 
			       assoc_type[(INTAT(enc_buffer, 0) - 1)],
			       input_size
			       );
		}
	      else
		buffer_mark += QUERYSIZE;
	    }
	  
	  break;
	}
	
      case EPI_C_TYPE_INT:
	{  
	  EPI_STRING int_tag = epi_type_int_tag(epi_type);
	    
	  if (INTAT(enc_buffer,0) == QUERY)
	    QUERY_REPR(dec_buffer);
	  else
	    {
	      char *int_repr = calloc((strlen(int_tag) + 20), sizeof(char));

	      sprintf(int_repr, "%s/%d",
		      epi_type_int_tag(epi_type),
		      INTAT(enc_buffer,1)
		      );

	      strcat(dec_buffer, int_repr);
	      cfree(int_repr);
	    }
	    
	  buffer_mark += 2 * INTSIZE;

	  break;
	}	


      case EPI_C_TYPE_CHAR:
	{
	  if (INTAT(enc_buffer,0) == QUERY)
	    QUERY_REPR(dec_buffer);
	  else
	    {
	      char *char_repr = calloc(5, sizeof(char));
	       
	      sprintf(char_repr, "%s'%c",
		      epi_type_char_tag(epi_type),
		      (epi_type_char_repr(epi_type))[(INTAT(enc_buffer,0) - 1)]
		      );
	      
	      strcat(dec_buffer, char_repr);
	      cfree(char_repr);
	    }
	  
	  buffer_mark += CHARSIZE;

	  break;
	}	

      case EPI_C_TYPE_STRING:
	{
	  if (INTAT(enc_buffer,0) == QUERY)
	    QUERY_REPR(dec_buffer);
	  else
	    {
	      EPI_TYPE char_type   = epi_type_string_subtype(epi_type);
	      EPI_STRING char_repr = epi_type_char_repr(char_type);
	      
	      unsigned repr_len  = strlen(epi_type_char_repr(char_type));
	      unsigned str_len   = epi_type_string_length(epi_type);
	      
	      buffer_mark += QUERYSIZE;

	      strcat (dec_buffer, epi_type_char_tag(char_type));
	      strcat(dec_buffer, "\"");
	      
	      if (repr_len > 2)
		{
		  /* String packed as bytes */
		  
		  char *string_buffer; /* holds the decoded string chars */
		  
		  string_buffer = (char *) 
		    calloc ((str_len + 1), sizeof(char));

		  for (i=0; i < str_len; i++,buffer_mark++)
		    string_buffer[i] = char_repr[(*buffer_mark) - 1];
		  
		  string_buffer[str_len] = '\0';
		  
		  strcat (dec_buffer, string_buffer);
		  
		  /* Bump buffer along if not all space is used */

		  buffer_mark += input_size - (str_len + 4);
		}
	      else
		{
		  /* String packed as bits */

		  for (i=0; i < (input_size - 4); i++)
		    {
		      for (j=0; j < (sizeof(char) * 8); j++)
			if ((buffer_mark[i] << j) & 0x80)
			  strncat(dec_buffer, &char_repr[1], 1);
			else
			  strncat(dec_buffer, &char_repr[0], 1);
		    }
		  
		  /* bump buffer along if not all space is used */

		  buffer_mark += input_size - ((((str_len + 31)/32) * 4) + 4);
		}
	       
	      strcat(dec_buffer, "\"");

	    }
	  
	  break;
	}	    

      case EPI_C_TYPE_STRUCT:
      case EPI_C_TYPE_ROW:
      case EPI_C_TYPE_FNTYPE:
      case EPI_C_TYPE_INVALID:
	  
      default : break;

    } /* switch(epi_type_class(epi_type)) */


}  /* decode_input */


	  
 /*************************************************************************/
 /*                                                                       */
 /*                           SIGNAL_SIZE                                 */
 /*           Delivers the size in bytes of a given EPI_TYPE.             */
 /*                                                                       */
 /*                                                                       */      


int signal_size (epi_type)
  EPI_TYPE epi_type;
{
  int struct_size = 0;    /* Remember signal sizes in structured signals */
  int i;		  /* Loop index */
  
  switch (epi_type_class(epi_type))
    {
      case EPI_C_TYPE_CHAR : return (4);
      
      case EPI_C_TYPE_INT  : return (8);
      
      case EPI_C_TYPE_ENUM : 
	{
	  /* Need to return largest associated type size */

	  int largest_signal = 0;  /* Size of largest associated type so far */
	  int current_signal;      /* Size of this associated type */
	  
	  EPI_TYPE *subtype = epi_type_enum_subtypes(epi_type);
	  
	  for (i=0; i < epi_type_enum_elems(epi_type); i++)
	    {
	      current_signal = signal_size(subtype[i]);
	      
	      if (current_signal > largest_signal)
		largest_signal = current_signal;
	    }
	  
	  return (4 + largest_signal);
	}
      
      case EPI_C_TYPE_STRING :
	{
	  int byte_packed = 
	   (strlen(epi_type_char_repr(epi_type_string_subtype(epi_type))) > 2);
	 
	  if (byte_packed)
	    return (4 + epi_type_string_length(epi_type));
	  else
	    return (4 + ((epi_type_string_length(epi_type) +7) / 8));
	}
      
      case EPI_C_TYPE_STRUCT :
	{
	  for (i=0; i < epi_type_struct_elems(epi_type); i++)
	    struct_size += signal_size(epi_type_struct_subtypes(epi_type)[i]);
	  
	  return (struct_size);
	}
      
      case EPI_C_TYPE_ROW :
	
        return (epi_type_row_elems(epi_type) * 
		signal_size(epi_type_row_subtype(epi_type))
		);
	  
      case EPI_C_TYPE_NULL :
	
      case EPI_C_TYPE_INVALID :
	  
      default : return (0);
  
    }  /* switch */

}  /* signal_size */





		       
 /**************************************************************************/
 /*                                                                        */
 /*                              TYPE_OK                                   */
 /* Checks that the user's encoded output buffer has correct contents for  */
 /* the output type expected.                                              */
 /* Checking is NOT exhaustive since only range and order checks can be    */
 /* sensibly carried out. The routine therefore provides a "sanity" check. */ 
 /* If for any reason an error is found, the routine will return 0. Checks */
 /* Checking will be expensive in execution time, hence there is a method  */ 
 /* available to users to disable this type checking.                      */
		    
int type_ok (epi_type, buffer)
  EPI_TYPE epi_type;
  char   **buffer;
{
  int i;   /* Loop index */
  
  switch (epi_type_class(epi_type))
    {
      case EPI_C_TYPE_INVALID: 

        return (0);   /*** Defensive ***/
      
      case EPI_C_TYPE_STRUCT:
      {
	for (i=0; i < epi_type_struct_elems(epi_type); i++)
	  if (!type_ok((epi_type_struct_subtypes(epi_type))[i], buffer))
	    return (0);

	return (1);
      }
      
      case EPI_C_TYPE_ROW:
      {
	EPI_TYPE row_subtype = epi_type_row_subtype(epi_type);
	
	for (i=0; i < epi_type_row_elems(epi_type); i++)
	  if (!type_ok(row_subtype, buffer))
	    return(0);
	
	return (1);
      }
      
      case EPI_C_TYPE_FNTYPE:
      {
	/*** Defensive ***/  /* FNTYPEs should be flattened in outputs */

	return (0);
      }
      
      case EPI_C_TYPE_INT:
      {
	if (INTVALUE(buffer) == QUERY)
	  {
	    *buffer += (QUERYSIZE + INTSIZE);
	    return (1);
	  }
	else
	  {
	    *buffer += INTSIZE;

	    /* Now check the bounds of the integer */
	
	    if ((INTVALUE(buffer) < epi_type_int_lwb(epi_type)) ||
		(INTVALUE(buffer) > epi_type_int_upb(epi_type))  )
	      {
		return (0);
	      }
	    else
	      {
		*buffer += INTSIZE;
		return (1);
	      }
	  }
      }
      
      case EPI_C_TYPE_CHAR:
      {
	/* Check character enumeration value */
	/* against maximum allowed.          */
	
	if (CHARVALUE(buffer) <= strlen (epi_type_char_repr(epi_type)))
	  {
	    *buffer += CHARSIZE;
	    return (1);
	  }
	else
	  {
	    *buffer += CHARSIZE;
	    return (0);
	  }
      }
      
      case EPI_C_TYPE_NULL: 
      
        /*** Defensive ***/

        return (1);
      

      case EPI_C_TYPE_ENUM:
      {
	/* Find maximum number of allowed enumeration values */

	unsigned no_enums = epi_type_enum_elems(epi_type);
	
	EPI_TYPE *enum_subtypes;

	if (ENUMVALUE(buffer) == QUERY)
	  {
	    *buffer += signal_size(epi_type);
	    return (1);
	  }
	else
	  {
	    /* Remember which alternative in the enumeration we have */

	    int enum_alt = ENUMVALUE(buffer);
	    
	    if (enum_alt <= no_enums)
	      {
		/* Get any associated types in this enumeration */

		enum_subtypes = epi_type_enum_subtypes(epi_type);
	    
		if (epi_type_class(enum_subtypes[enum_alt - 1]) ==
		    EPI_C_TYPE_NULL)
		  {
		    /* No associated type for this enumeration so   */
		    /* bump buffer along by largest assoc type size */

		    *buffer += signal_size(epi_type);
		    
		    return (1);
		  }
		else
		  {
		    *buffer += ENUMSIZE;

		    if (!type_ok(enum_subtypes[enum_alt -1], buffer))
		      return (0);
		    		
		    return (1);
		  }
		
	      }
	    else
	      {
		return (0);
	      }
	  }
      }
    

      case EPI_C_TYPE_STRING:
      {
	/* Find allowed number of char enumeration values */

        unsigned no_chars  = strlen(epi_type_char_repr
		             (epi_type_string_subtype(epi_type)));

	/* Find the declared ELLA string length */

	unsigned stringlen = epi_type_string_length(epi_type);

	/* Decide whether string is bit or byte packed and set */
	/* strlen accordingly                                  */

	int strlen;
	int byte_packed = (no_chars > 2);

	if (byte_packed)
	  strlen = (((stringlen + 3)/4) * 4);
	else
	  strlen = (((stringlen + 31) / 32) * 4);
    

	if (INTVALUE(buffer) == QUERY)
	  {
	    *buffer += (INTSIZE + strlen);
	    return (1);
	  }
	else
	  {
	    *buffer += INTSIZE;
	    
	    if (byte_packed)
	      {
		/* String packed as bytes, so calculate simulator */
		/* string size in size-units and convert to bytes */

		for (i=0; i < stringlen; i++, (*buffer)++)
		  if (**buffer > no_chars)
		    return (0);

		/* bump buffer along if not all bytes allocated in */
		/* the simulator are used to hold this byte string */
            
		*buffer += (strlen - stringlen);
		return (1);
	      }
	    else
	      {
		/* String packed as bits, so calculate string size */
		/* in simulator - rounded to nearest size unit and */
		/* bump buffer along by this amount in bytes.      */
		
		*buffer += strlen;
		return (1);
	      }
	  }
      }      

      default :     /*** Defensive ***/
	return (0);
  
    }  /* switch (epi_type_class) */

}  /* type_ok */


			   



#endif  /* DATA_TOOLKIT_C */
