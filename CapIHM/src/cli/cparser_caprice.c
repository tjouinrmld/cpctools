/**
 *   $Id$
 *	 CapriceReloded an Amstrad CPC emulator
 *   Copyright (C) 2009  cpcsdk crew
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */  


#include "cparser.h"
#include "cparser_token.h"

#include "caprice_cli_routs.h";

/**
 * Quit the application
 * @todo clean before quit
 */
cparser_result_t
cparser_cmd_quit(cparser_context_t *context)
{
  return cparser_quit(context->parser);
}


/**
 * Shows registers on screen
 */
cparser_result_t
cparser_cmd_show_registers(cparser_context_t *context)
{
  caprice_cli_show_registers();
  return CPARSER_OK;
}

cparser_result_t
cparser_cmd_show_registers_crtc(cparser_context_t *context)
{
  return CPARSER_OK;
}

cparser_result_t
cparser_cmd_show_registers_ga(cparser_context_t *context)
{
  return CPARSER_OK;
}

cparser_result_t
cparser_cmd_show_registers_z80(cparser_context_t *context)
{
  return CPARSER_OK;
}

cparser_result_t
cparser_cmd_breakpoints_add_adress(cparser_context_t *context)
{
  return CPARSER_OK;
}

cparser_result_t
cparser_cmd_breakpoints_remove_adress(cparser_context_t *context)
{
  return CPARSER_OK;
}

cparser_result_t
cparser_cmd_breakpoints_list(cparser_context_t *context)
{
  return CPARSER_OK;
}

cparser_result_t
cparser_cmd_video_color_on(cparser_context_t *context)
{
  return CPARSER_OK;
}

cparser_result_t
cparser_cmd_video_color_gray(cparser_context_t *context)
{
  return CPARSER_OK;
}

cparser_result_t
cparser_cmd_video_color_green(cparser_context_t *context)
{
  return CPARSER_OK;
}

cparser_result_t
cparser_cmd_reset(cparser_context_t *context)
{
  return CPARSER_OK;
}

