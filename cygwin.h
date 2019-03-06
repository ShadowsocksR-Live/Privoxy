#ifndef CYGWIN_H_INCLUDED
#define CYGWIN_H_INCLUDED
/*********************************************************************
 *
 * File        :  $Source: /cvsroot/ijbswa/current/cygwin.h,v $
 *
 * Purpose     :  The windows.h file seems to be a *tad* different, so I
 *                will bridge the gaps here.  Perhaps I should convert the
 *                latest SDK too?  Shudder, I think not.
 *
 * Copyright   :  Written by and Copyright (C) 2001 members of the
 *                Privoxy team. http://www.privoxy.org/
 *
 *                Based on the Internet Junkbuster originally written
 *                by and Copyright (C) 1997 Anonymous Coders and
 *                Junkbusters Corporation.  http://www.junkbusters.com
 *
 *                This program is free software; you can redistribute it
 *                and/or modify it under the terms of the GNU General
 *                Public License as published by the Free Software
 *                Foundation; either version 2 of the License, or (at
 *                your option) any later version.
 *
 *                This program is distributed in the hope that it will
 *                be useful, but WITHOUT ANY WARRANTY; without even the
 *                implied warranty of MERCHANTABILITY or FITNESS FOR A
 *                PARTICULAR PURPOSE.  See the GNU General Public
 *                License for more details.
 *
 *                The GNU General Public License should be included with
 *                this file.  If not, you can view it at
 *                http://www.gnu.org/copyleft/gpl.html
 *                or write to the Free Software Foundation, Inc., 59
 *                Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 *********************************************************************/

/* Conditionally include this whole file. */
#ifdef __MINGW32__

/* Hmmm, seems to be overlooked. */
#define _RICHEDIT_VER 0x0300

/*
 * Named slightly different ... but not in Cygwin v1.3.1 ...
 *
 * #define LVITEM   LV_ITEM
 * #define LVCOLUMN LV_COLUMN
 */

#endif /* def __MINGW32__ */
#endif /* ndef CYGWIN_H_INCLUDED */


/*
  Local Variables:
  tab-width: 3
  end:
*/
