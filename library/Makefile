# $Id: Makefile,v 33.2 1994/12/14 09:49:36 snell Exp $

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
# 07:12:94  33.001  DJS   Install in new configuration management system
# 14:12:94  33.003  DJS   Porting    Make ./library machine independant. 
# ??:??:??   ?.???  ????


objects = \
	Ah1alloc.o \
	Ahalloc.o \
	Ahcollec.o \
	Ahdebug.o \
	Ahparam.o \
	Ahpolicy.o \
	Ahstats.o \
	Ahsweep.o \
	Ahtrace.o \
	Aassign.o \
	Acoerce.o \
	Aerror.o \
	Aindex.o \
	Amath.o \
	Astrings.o \
	Afirst.o

liba68.a: $(objects) 
	ar r liba68.a $(objects)
	rm *.o
