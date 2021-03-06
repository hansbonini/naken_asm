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

#ifndef _TABLE_POWERPC_H
#define _TABLE_POWERPC_H

#include "common/assembler.h"

enum
{
  OP_NONE,
  OP_RD_RA_RB,
  OP_RS_RA_RB,
  OP_RA_RS_RB,
  OP_RA_RS_SH,
  OP_RD_RA,
  OP_RA_RS,
  OP_RD,
  OP_RD_RA_SIMM,
  OP_RD_SIMM,
  OP_RA_RS_UIMM,
  OP_BRANCH,
  OP_JUMP,
  OP_BRANCH_COND_BD,
  OP_JUMP_COND_BD,
  OP_BRANCH_COND,
  OP_BRANCH_COND_ALIAS,
  OP_CMP,
  OP_CMPI,
  OP_CRB_CRB_CRB,
  OP_RD_OFFSET_RA,
  OP_RS_OFFSET_RA,
  OP_RD_RA_NB,
  OP_RS_RA_NB,
  OP_CRD_CRS,
  OP_CRD,
  OP_RD_SPR,
  OP_SPR_RS,
  OP_RD_TBR,
  OP_CRM_RS,
  OP_RA_RS_SH_MB_ME,
};

#define FLAG_NONE 0
#define FLAG_DOT 1
#define FLAG_REQUIRE_DOT 3

struct _table_powerpc
{
  char *instr;
  uint32_t opcode;
  uint32_t mask;
  uint8_t type;
  uint8_t flags;
  uint8_t cycles;
  uint8_t cycles_max;
};

struct _powerpc_spr
{
  char *name;
  int value;
};

extern struct _table_powerpc table_powerpc[];
extern struct _powerpc_spr powerpc_spr[];

#endif


