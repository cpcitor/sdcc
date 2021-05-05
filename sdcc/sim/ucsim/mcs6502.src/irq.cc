/*
 * Simulator of microcontrollers (irq.cc)
 *
 * Copyright (C) @@S@@,@@Y@@ Drotos Daniel, Talker Bt.
 * 
 * To contact author send email to drdani@mazsola.iit.uni-miskolc.hu
 *
 */

/* This file is part of microcontroller simulator: ucsim.

UCSIM is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

UCSIM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with UCSIM; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA. */

#include "globals.h"
#include "utils.h"

#include "irqcl.h"


/* NMI source */
/*
class cl_m6xxx_src *
cl_nmi::get_parent(void)
{
  class cl_mcs6502 *muc= (class cl_mcs6502 *)(application->get_uc());
  switch (pass_to)
    {
    case irq_nmi:
      return muc->src_nmi;
      break;
    case irq_irq:
      return muc->src_irq;
      break;
void
cl_m6809_irq::print_info(class cl_console_base *con)
{
  int i;
  con->dd_printf("  Handler  ISR    En  Pr Req Act Name\n");
  for (i= 0; i < uc->it_sources->count; i++)
    {
      class cl_m6809_src_base *is=
	(class cl_m6809_src_base *)(uc->it_sources->at(i));
      class cl_m6xxx_src *pa= is->get_parent();
      class cl_m6xxx_src *isp= (pa)?pa:is;
      t_addr a= uc->rom->get(isp->addr) * 256 + uc->rom->get(isp->addr+1);
      con->dd_printf("  [0x%04x] 0x%04x", AU(isp->addr), a);
      con->dd_printf(" %-3s", (is->enabled())?"en":"dis");
      con->dd_printf(" %2d", uc->priority_of(is->nuof));
      con->dd_printf(" %-3s", (is->pending())?"YES":"no");
      con->dd_printf(" %-3s", (is->active)?"act":"no");
      con->dd_printf(" %s", object_name(is));
      con->dd_printf("\n");
    }
  con->dd_printf("Active interrupt service(s):\n");
  con->dd_printf("  Pr Handler  PC       Source\n");
  for (i= 0; i < uc->it_levels->count; i++)
    {
      class it_level *il= (class it_level *)(uc->it_levels->at(i));
      if (il->level >= 0)
	{
	  con->dd_printf("  %2d", il->level);
	  con->dd_printf(" 0x%06x", AU(il->addr));
	  con->dd_printf(" 0x%06x", AU(il->PC));
	  con->dd_printf(" %s", (il->source)?(object_name(il->source)):
			 "nothing");
	  con->dd_printf("\n");
	}
    }
  //print_cfg_info(con);
}

    default:
      return NULL;
    }
  return NULL;
}
*/

/* IRQ source */
/*
bool
cl_irq::enabled(void)
{
  if (!ie_cell)
    return false;
  t_mem e= ie_cell->get();
  e&= ie_mask;
  return e == 0;
}
*/

/* IRQ handling peripheral */

cl_irq_hw::cl_irq_hw(class cl_uc *auc):
  cl_hw(auc, HW_INTERRUPT, 0, "irq")
{
  muc= (class cl_mcs6502 *)auc;
}

int
cl_irq_hw::init()
{
  class cl_var *v;

  cl_hw::init();
  uc->vars->add(v= new cl_var("NMI", cfg, m65_nmi, "NMI request/clear"));
  v->init();
  uc->vars->add(v= new cl_var("IRQ", cfg, m65_irq, "IRQ request/clear"));
  v->init();
  uc->vars->add(v= new cl_var("BRK", cfg, m65_brk, "BRK request/clear"));
  v->init();

  cfg_cell(m65_nmi_en)->set(1);
  cfg_cell(m65_brk_en)->set(1);

  return 0;
}

void
cl_irq_hw::print_info(class cl_console_base *con)
{
  int i;
  con->dd_printf("  Handler  ISR    En  Pr Req Act Name\n");
  for (i= 0; i < uc->it_sources->count; i++)
    {
      class cl_m6xxx_src *is=
	(class cl_m6xxx_src *)(uc->it_sources->at(i));
      class cl_m6xxx_src *pa= is->get_parent();
      class cl_m6xxx_src *isp= (pa)?pa:is;
      t_addr a= uc->read_addr(uc->rom, isp->addr);
      con->dd_printf("  [0x%04x] 0x%04x", AU(isp->addr), a);
      con->dd_printf(" %-3s", (is->enabled())?"en":"dis");
      con->dd_printf(" %2d", uc->priority_of(is->nuof));
      con->dd_printf(" %-3s", (is->pending())?"YES":"no");
      con->dd_printf(" %-3s", (is->active)?"act":"no");
      con->dd_printf(" %s", object_name(is));
      con->dd_printf("\n");
    }
  con->dd_printf("Active interrupt service(s):\n");
  con->dd_printf("  Pr Handler  PC       Source\n");
  for (i= 0; i < uc->it_levels->count; i++)
    {
      class it_level *il= (class it_level *)(uc->it_levels->at(i));
      if (il->level >= 0)
	{
	  con->dd_printf("  %2d", il->level);
	  con->dd_printf(" 0x%06x", AU(il->addr));
	  con->dd_printf(" 0x%06x", AU(il->PC));
	  con->dd_printf(" %s", (il->source)?(object_name(il->source)):
			 "nothing");
	  con->dd_printf("\n");
	}
    }
}


/* End of mcs6502.src/irq.cc */
