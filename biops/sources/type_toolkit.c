/* $Id: type_toolkit.c,v 34.2 1995/03/29 13:04:17 ella Exp $ */


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
                                  system old version was 2.3 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef TYPE_TOOLKIT_C

static char rcsid[] = "$Id: type_toolkit.c,v 34.2 1995/03/29 13:04:17 ella Exp $";

#define TYPE_TOOLKIT_C

/* Include files for private Alien Code functions and macros */

#include "toolkit_internal.h"


/*

       *******  THIS MODULE IS PART OF THE ALIEN CODE TOOLKIT  *******

   Type_toolkit.c defines the toolkit routines that return type and size
   information about input and output signals.
     
   These routines are defined in Section 4 of E.N0045.50.13 - The Alien
   Code Toolkit Specification.

   Some parts of the code are only expected to be executed in exceptional
   circumstances such as simulator data corruption - these are commented
   as *** Defensive ***.

                                                          MHC  7-Nov-1989
*/


/*******                TOOLKIT ROUTINES BEGIN HERE                    *******/



/****************************************************************************/
/*                                                                          */
/*                          ACI_INPUT_TYPE                                  */
/*     Returns the type of the nth input of the ELLA function instanced     */


ACI_TYPE aci_input_type (i,n)
ACI_EVAL_INST i;
unsigned n;
{
  register unsigned *instance;
  A68_EPI_TYPE a68_epi_input_type;
  
  instance = (unsigned *) (global_pointer + i);

  /* now check that the input requested is in range */

  if ((n > table_input_size(instance)) || (n == 0))
    {
      return (ACI_TYPE)0;
    }
  else 
    {
      int temp;   /* For VMS Algol 68 pass by reference */
      a68_epi_input_type = (*get_epi_input_type) (A68TEMPVAL(table_symtable_index(instance),temp),
			     A68VAL(n));

      if (a68_epi_input_type->ident == EPI_O_NULL_TYPE)
	return (ACI_TYPE)0;     /*** Defensive ***/
      else
	return (ACI_TYPE)make_type (a68_epi_input_type);
      
    }

}




/****************************************************************************/
/*                                                                          */
/*                           ACI_INPUT_SIZE                                 */
/*    Returns the size of the nth input of the ELLA function instanced     */


unsigned aci_input_size (i,n)
ACI_EVAL_INST i;
unsigned n;
{
  register unsigned *instance;
  
  instance = (unsigned *) (global_pointer + i);

  /* now check that the input requested is in range */

  if ((n > table_input_size(instance)) || (n == 0))
    {
      return 0;
    }
  else 
    {
      int temp;   /* For VMS Algol 68 pass by reference */
      return (*get_input_size) (A68TEMPVAL(table_symtable_index(instance),temp),
				A68VAL(n) );
    }

}




/****************************************************************************/
/*                                                                          */
/*                         ACI_OUTPUT_TYPE                                  */
/*    Returns the epi type of the output of the ELLA function instanced    */


ACI_TYPE aci_output_type (i)
ACI_EVAL_INST i;
{
  A68_EPI_TYPE a68_epi_output_type;
  register unsigned *instance;
  int temp;   /* For VMS Algol 68 pass by reference */
  
  instance = (unsigned *) (global_pointer + i);

  a68_epi_output_type =
    (*get_epi_output_type) (A68TEMPVAL(table_symtable_index(instance),temp));

  if (a68_epi_output_type->ident == EPI_O_NULL_TYPE) 
    return (ACI_TYPE)0;   /*** Defensive ***/
  else
    return (ACI_TYPE)make_type (a68_epi_output_type);

}






/****************************************************************************/
/*                                                                          */
/*                          ACI_OUTPUT_SIZE                                 */
/*      Returns the size of the output of the ELLA function instanced       */


unsigned aci_output_size (i)
ACI_EVAL_INST i;
{
  register unsigned *instance;
  int temp;   /* For VMS Algol 68 pass by reference */

  instance = (unsigned *) (global_pointer + i);

  return (*get_output_size) (A68TEMPVAL(table_symtable_index(instance),temp));

}





/****************************************************************************/
/*                                                                          */
/*                           ACI_DECODE_TYPE                                */
/*         Converts an aci type into the corresponding epi type             */


ACI_TYPE aci_decode_type (aci_type)
ACI_TYPE_HANDLE aci_type;
{
  A68_EPI_TYPE a68_epi_type;
  
  a68_epi_type =
    (*aci_to_epi_type) (A68VAL(aci_type));
  
  if (a68_epi_type->ident == EPI_O_NULL_TYPE)
    return (ACI_TYPE)0;
  else
    return (ACI_TYPE)make_type(a68_epi_type);
}

/****************************************************************************/
/*                                                                          */
/*                           ACI_FREE_TYPE                                  */
/*            Free the storage occupied by an ACI_TYPE                      */

void aci_free_type(type)
ACI_TYPE type;
{
  epi_free_type(type);
}

/****************************************************************************/
/*                                                                          */
/*                           ACI_SAME_TYPE                                  */
/*                      Compare two ACI_TYPEs                               */

int aci_same_type(type1,type2)
ACI_TYPE type1, type2;
{
  return epi_same_type(type1,type2);
}

#endif  /* TYPE_TOOLKIT_C */
