/*
 * Simulator of microcontrollers (irq.cc)
 *
 * Copyright (C) 2020,20 Drotos Daniel, Talker Bt.
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
/*@1@*/

#include "globals.h"
#include "utils.h"

#include "m6809cl.h"

#include "irqcl.h"


/* CPU interrupt handling */

class cl_m6809_src_base *
cl_m6809_src_base::get_parent(void)
{
  class cl_m6809 *muc= (class cl_m6809 *)(application->get_uc());
  switch (pass_to)
    {
    case irq_nmi:
      return muc->src_nmi;
      break;
    case irq_firq:
      return muc->src_firq;
      break;
    case irq_irq:
      return muc->src_irq;
      break;
    default:
      return NULL;
    }
  return NULL;
}

void
cl_m6809_src_base::set_pass_to(t_mem value)
{
  if (value == 'f')
    pass_to= irq_firq;
  else if (value == 'n')
    pass_to= irq_nmi;
  else
    pass_to= irq_irq;
}

bool
cl_m6809_irq_src::enabled(void)
{
  if (!ie_cell)
    return false;
  t_mem e= ie_cell->get();
  e&= ie_mask;
  return e == 0;
}

bool
cl_m6809_slave_src::enabled(void)
{
  if (!ie_cell)
    return false;
  t_mem e= ie_cell->get();
  e&= ie_mask;
  return e == ie_value;
}


/*
 * peripheral to handle CPU interrupts
 */

cl_m6809_irq::cl_m6809_irq(class cl_uc *auc):
  cl_hw(auc, HW_INTERRUPT, 0, "irq")
{
  muc= (class cl_m6809 *)auc;
}

int
cl_m6809_irq::init()
{
  class cl_var *v;

  cl_hw::init();
  uc->vars->add(v= new cl_var("NMI", cfg, cpu_nmi, "NMI request/clear"));
  v->init();
  uc->vars->add(v= new cl_var("IRQ", cfg, cpu_irq, "IRQ request/clear"));
  v->init();
  uc->vars->add(v= new cl_var("FIRQ", cfg, cpu_firq, "FIRQ request/clear"));
  v->init();

  muc->src_irq= new cl_m6809_irq_src(uc,
				     irq_irq,
				     muc->regs8->get_cell(3), flagI,
				     cfg->get_cell(cpu_irq), 1,
				     0xfff8,
				     "Interrupt request",
				     0,
				     flagE,
				     flagI,
				     irq_none);
  muc->src_irq->init();
  uc->it_sources->add(muc->src_irq);

  muc->src_firq= new cl_m6809_irq_src(uc,
				      irq_firq,
				      muc->regs8->get_cell(3), flagF,
				      cfg->get_cell(cpu_firq), 1,
				      0xfff6,
				      "Fast interrupt request",
				      0,
				      0,
				      flagI|flagF,
				      irq_none);
  muc->src_firq->init();
  uc->it_sources->add(muc->src_firq);

  muc->src_nmi= new cl_m6809_src_base(uc,
				      irq_nmi,
				      cfg->get_cell(cpu_nmi_en), 1,
				      cfg->get_cell(cpu_nmi), 1,
				      0xfffc,
				      "Non-maskable interrupt request",
				      0,
				      flagE,
				      flagI|flagF,
				      irq_none);
  muc->src_nmi->init();
  uc->it_sources->add(muc->src_nmi);
  
  return 0;
}

void
cl_m6809_irq::reset(void)
{
  cfg_set(cpu_nmi, 0);
  cfg_set(cpu_irq, 0);
  cfg_set(cpu_firq, 0);
  cfg_read(cpu_nmi_en);
  cfg_read(cpu_irq_en);
  cfg_read(cpu_firq_en);
}

const char *
cl_m6809_irq::cfg_help(t_addr addr)
{
  switch (addr)
    {
    case cpu_nmi_en	: return "NMI enable (RO)";
    case cpu_nmi	: return "NMI request/clear (RW)";
    case cpu_irq_en	: return "IRQ enable (RO)";
    case cpu_irq	: return "IRQ request/clear (RW)";
    case cpu_firq_en	: return "FIRQ enable (RO)";
    case cpu_firq	: return "FIRQ request (RW)";
    }
  return cl_hw::cfg_help(addr);
}

t_mem
cl_m6809_irq::conf_op(cl_memory_cell *cell, t_addr addr, t_mem *val)
{
  class cl_m6809 *muc= (class cl_m6809 *)uc;
  switch ((enum cpu_cfg)addr)
    {
    case cpu_nmi_en:
      cell->set(muc->en_nmi?1:0);
      break;
    case cpu_nmi:
      if (val)
	{
	  if (*val)
	    *val= 1;
	}
      break;
    case cpu_irq_en:
      cell->set((muc->reg.CC & flagI)?0:1);
      break;
    case cpu_irq:
      if (val)
	{
	  if (*val)
	    *val= 1;
	}
      break;
    case cpu_firq_en:
      cell->set((muc->reg.CC & flagF)?0:1);
      break;
    case cpu_firq:
      if (val)
	{
	  if (*val)
	    *val= 1;
	}
      break;
    case cpu_nr: break;
    }
  return cell->get();
}

void
cl_m6809_irq::print_info(class cl_console_base *con)
{
  int i;
  con->dd_printf("  Handler  ISR    En  Pr Req Act Name\n");
  for (i= 0; i < uc->it_sources->count; i++)
    {
      class cl_m6809_src_base *is=
	(class cl_m6809_src_base *)(uc->it_sources->at(i));
      class cl_m6809_src_base *pa= is->get_parent();
      class cl_m6809_src_base *isp= (pa)?pa:is;
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


/* End of m6809.src/irq.cc */
