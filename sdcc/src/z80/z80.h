/** @file z80/z80.h
    Common definitions between the z80 and gbz80 parts.
*/
#include "common.h"
#include "ralloc.h"
#include "gen.h"
#include "peep.h"
#include "support.h"

typedef enum
  {
    SUB_Z80,
    SUB_GBZ80
  }
Z80_SUB_PORT;

typedef struct
  {
    Z80_SUB_PORT sub;
    int calleeSavesBC;
    int port_mode;
    int port_back;
    int reserveIY;
    int dump_graphs;
    int optralloc_remat;
    int oldralloc;
    int salloc;
  }
Z80_OPTS;

extern Z80_OPTS z80_opts;

#define IS_GB  (z80_opts.sub == SUB_GBZ80)
#define IS_Z80 (z80_opts.sub == SUB_Z80)
#define IY_RESERVED (z80_opts.reserveIY)

#define OPTRALLOC_REMAT (z80_opts.optralloc_remat)
#define OPTRALLOC_EXACT_COST IS_Z80 // Todo: Implement exact cost for gbz80.
#define OPTRALLOC_HL IS_Z80
#define OPTRALLOC_A 1
#define OPTRALLOC_IY !IY_RESERVED

#define SALLOC_TD (z80_opts.salloc == 1)
#define SALLOC_CH (z80_opts.salloc == 2)

enum
  {
    ACCUSE_A = 1,
    ACCUSE_SCRATCH,
    ACCUSE_IY
  };
