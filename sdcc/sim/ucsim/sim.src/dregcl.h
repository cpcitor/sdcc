/*
 * Simulator of microcontrollers (sim.src/dregcl.h)
 *
 * Copyright (C) 2020,20 Drotos Daniel, Talker Bt.
 * 
 * To contact author send email to drdani@mazsola.iit.uni-miskolc.hu
 *
 */

/*
  This file is part of microcontroller simulator: ucsim.

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
  02111-1307, USA.
*/
/*@1@*/

#ifndef DREG_HEADER
#define DREG_HEADER

#include "hwcl.h"


class cl_dreg: public cl_hw
{
 public:
  cl_dreg(class cl_uc *auc, int aid, const char *aid_string);
 public:
  //virtual void refresh_display(bool force);
  virtual void print_info(class cl_console_base *con);
};


#endif

/* End of sim.src/dregcl.h */
