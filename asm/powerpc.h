/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2010-2016 by Michael Kohn
 *
 */

#ifndef _ASM_POWERPC_H
#define _ASM_POWERPC_H

#include "common/assembler.h"

int parse_instruction_powerpc(struct _asm_context *asm_context, char *instr);

#endif


