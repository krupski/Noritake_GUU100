///////////////////////////////////////////////////////////////////////////////
//
//  Font "NUMS_5X8X.H" for the Noritake GU128X64E-U100 VFD display
//  Copyright (c) 2012, 2015 Roger A. Krupski <rakrupski@verizon.net>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program. If not, see <http://www.gnu.org/licenses/>.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef NUMS_5X8X_H
#define NUMS_5X8X_H

#define nums_5x8x (pgm_get_far_address(_nums_5x8x))

static const uint8_t _nums_5x8x[] __attribute__((progmem)) = {

	0x05, // width (base + 0)
	0x08, // height (base + 1)
	0x00, // horizontal gap (base + 2)
	0x00, // vertical gap (base + 3)
	0x30, // first char (base + 4)
	0x3A, // last char (base + 5)
	0x05, // bytes per char (base + 6)

	0x3e, 0x41, 0x41, 0x3e, 0x00, // 0x30
	0x44, 0x42, 0x7f, 0x40, 0x00,
	0x62, 0x51, 0x49, 0x46, 0x00,
	0x22, 0x41, 0x49, 0x36, 0x00,
	0x0f, 0x08, 0x08, 0x7f, 0x00,
	0x27, 0x49, 0x49, 0x31, 0x00,
	0x36, 0x49, 0x49, 0x32, 0x00,
	0x41, 0x31, 0x0d, 0x03, 0x00,
	0x36, 0x49, 0x49, 0x36, 0x00,
	0x26, 0x49, 0x49, 0x36, 0x00, // 0x39
	0x00, 0x24, 0x24, 0x00, 0x00, // 0x3A
};

#endif

