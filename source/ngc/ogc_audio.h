/****************************************************************************
 *  ogc_audio.c
 *
 *  Genesis Plus GX audio support
 *
 *  code by Softdev (2006), Eke-Eke (2007,2008)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 ***************************************************************************/

#ifndef _GC_AUDIO_H_
#define _GC_AUDIO_H_

extern u8 soundbuffer[16][3840];
extern int mixbuffer;

extern void ogc_audio__init(void);
extern void ogc_audio__reset(void);
extern void ogc_audio__stop(void);
extern void ogc_audio__update(void);

#endif
