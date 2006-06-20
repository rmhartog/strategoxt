/**
 * SRTS -- The Stratego Run-Time System
 * 
 * Copyright (c) 1998-2003 Eelco Visser <visser@acm.org>
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 */
#ifndef SRTS_STRATEGO_CHOICE_H
#define SRTS_STRATEGO_CHOICE_H

#include <stdlib.h>
#include <setjmp.h>

/**
 * Implementation interface
 */
void SRTSChoice_init(long *bp);
jmp_buf* SRTSChoice_pushhook(void);

void PopChoice(void);

/**
 * Push of a local choice.
 */
#define PushChoice() (setjmp(*SRTSChoice_pushhook()))

#endif