///////////////////////////////////////////////////////////////////////////////
//
//  Font "NUMS_4X6.H" for the Noritake GU128X64E-U100 VFD display
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

#ifndef NUMS_4X6_H
#define NUMS_4X6_H

#define nums_4x6 (pgm_get_far_address(_nums_4x6))

static const uint8_t _nums_4x6[] PROGMEM = {

	0x04, // width (base + 0)
	0x06, // height (base + 1)
	0x00, // horizontal gap (base + 2)
	0x00, // vertical gap (base + 3)
	0x30, // first char (base + 4)
	0x3A, // last char (base + 5)
	0x04, // bytes per char (base + 6)

	/////////////////////////////////
	// number bits are TOP == LEFT
	// example the digit 6 (six):
	/////////////////////////////////
	// bit  7 6 5 4 3 2 1 0
	// ---  ---------------
	//      0 0 0 1 1 1 1 1 - 0x1F
	//      0 0 0 1 0 1 0 1 - 0x15
	//      0 0 0 1 1 1 0 1 - 0x1D
	//      0 0 0 0 0 0 0 0 - 0x00
	/////////////////////////////////

	0x1F, 0x11, 0x1F, 0x00, // 0x30 (0)
	0x12, 0x1F, 0x10, 0x00, // 0x31 (1)
	0x1D, 0x15, 0x17, 0x00, // 0x32 (2)
	0x11, 0x15, 0x1F, 0x00, // 0x33 (3)
	0x07, 0x04, 0x1F, 0x00, // 0x34 (4)
	0x17, 0x15, 0x1D, 0x00, // 0x35 (5)
	0x1F, 0x15, 0x1D, 0x00, // 0x36 (6)
	0x01, 0x01, 0x1F, 0x00, // 0x37 (7)
	0x1F, 0x15, 0x1F, 0x00, // 0x38 (8)
	0x17, 0x15, 0x1F, 0x00, // 0x39 (9)
	0x00, 0x8A, 0x00, 0x00, // 0x3A (:)
};

#endif
