# $Id: Makefile,v 33.2 1994/12/14 14:31:42 snell Exp $

#                         Crown Copyright, (c) 1994
#
#                 Defence Research Agency ( Electronics Division ),
#                              RSRE Malvern,
#            St Andrews Road, Malvern, Worcestershire, WR14 3PS, UK
#
#   All rights are reserved.  This software is supplied on the understanding
#   that it shall not be reproduced in any form nor disclosed to third parties
#   without the prior written consent of the Director, DRA(ED).  Crown copyright
#   exists on all subsequent modifications to this file as dated below:
#
#   ------------------------- Change History ---------------------------
# 14:12:94  33.001  DJS   Porting    Install sunos/sparc specific directory. 
# 14:12:94  33.002  ELLA   Porting    Modify Makefile to for config dirs. 
# ??:??:??   ?.???  ????

objects = Ahsparc.o

liba68.a: $(objects) 
	ar r liba68.a $(objects)
	rm *.o
	ar x liba68.a Afirst.o
	ar d liba68.a Afirst.o
	ranlib liba68.a
