///////////////////////////////////////////////////////////////////////////////
//
//  Font "FONT_5X8.H" for the Noritake GU128X64E-U100 VFD display
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

#ifndef FONT_5X8_H
#define FONT_5X8_H

#define font_5x8 (pgm_get_far_address(_font_5x8))

static const uint8_t _font_5x8[] __attribute__((progmem)) = {

	0x06, // width (base + 0)
	0x08, // height (base + 1)
	0x00, // horizontal gap (base + 2)
	0x00, // vertical gap (base + 3)
	0x20, // first char (base + 4)
	0x7f, // last char (base + 5)
	0x08, // bytes per char (base + 6)

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
	0x14, 0x7f, 0x14, 0x7f, 0x14, 0x00, 0x00, 0x00,
	0x24, 0x2a, 0x7f, 0x2a, 0x12, 0x00, 0x00, 0x00,
	0x23, 0x13, 0x08, 0x64, 0x62, 0x00, 0x00, 0x00,
	0x36, 0x49, 0x55, 0x22, 0x50, 0x00, 0x00, 0x00,
	0x00, 0x05, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1c, 0x22, 0x41, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x22, 0x1c, 0x00, 0x00, 0x00, 0x00,
	0x14, 0x08, 0x3e, 0x08, 0x14, 0x00, 0x00, 0x00,
	0x08, 0x08, 0x3e, 0x08, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x50, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x20, 0x10, 0x08, 0x04, 0x02, 0x00, 0x00, 0x00,
	0x3e, 0x51, 0x49, 0x45, 0x3e, 0x00, 0x00, 0x00,
	0x00, 0x42, 0x7f, 0x40, 0x00, 0x00, 0x00, 0x00,
	0x42, 0x61, 0x51, 0x49, 0x46, 0x00, 0x00, 0x00,
	0x21, 0x41, 0x45, 0x4b, 0x31, 0x00, 0x00, 0x00,
	0x18, 0x14, 0x12, 0x7f, 0x10, 0x00, 0x00, 0x00,
	0x27, 0x45, 0x45, 0x45, 0x39, 0x00, 0x00, 0x00,
	0x3c, 0x4a, 0x49, 0x49, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x71, 0x09, 0x05, 0x03, 0x00, 0x00, 0x00,
	0x36, 0x49, 0x49, 0x49, 0x36, 0x00, 0x00, 0x00,
	0x06, 0x49, 0x49, 0x29, 0x1e, 0x00, 0x00, 0x00,
	0x00, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x56, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x08, 0x14, 0x22, 0x41, 0x00, 0x00, 0x00, 0x00,
	0x14, 0x14, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x22, 0x14, 0x08, 0x00, 0x00, 0x00,
	0x02, 0x01, 0x51, 0x09, 0x06, 0x00, 0x00, 0x00,
	0x32, 0x49, 0x79, 0x41, 0x3e, 0x00, 0x00, 0x00,
	0x7e, 0x11, 0x11, 0x11, 0x7e, 0x00, 0x00, 0x00,
	0x7f, 0x49, 0x49, 0x49, 0x36, 0x00, 0x00, 0x00,
	0x3e, 0x41, 0x41, 0x41, 0x22, 0x00, 0x00, 0x00,
	0x7f, 0x41, 0x41, 0x22, 0x1c, 0x00, 0x00, 0x00,
	0x7f, 0x49, 0x49, 0x49, 0x41, 0x00, 0x00, 0x00,
	0x7f, 0x09, 0x09, 0x09, 0x01, 0x00, 0x00, 0x00,
	0x3e, 0x41, 0x49, 0x49, 0x7a, 0x00, 0x00, 0x00,
	0x7f, 0x08, 0x08, 0x08, 0x7f, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x7f, 0x41, 0x00, 0x00, 0x00, 0x00,
	0x20, 0x40, 0x41, 0x3f, 0x01, 0x00, 0x00, 0x00,
	0x7f, 0x08, 0x14, 0x22, 0x41, 0x00, 0x00, 0x00,
	0x7f, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00,
	0x7f, 0x02, 0x0c, 0x02, 0x7f, 0x00, 0x00, 0x00,
	0x7f, 0x04, 0x08, 0x10, 0x7f, 0x00, 0x00, 0x00,
	0x3e, 0x41, 0x41, 0x41, 0x3e, 0x00, 0x00, 0x00,
	0x7f, 0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00,
	0x3e, 0x41, 0x51, 0x21, 0x5e, 0x00, 0x00, 0x00,
	0x7f, 0x09, 0x19, 0x29, 0x46, 0x00, 0x00, 0x00,
	0x46, 0x49, 0x49, 0x49, 0x31, 0x00, 0x00, 0x00,
	0x01, 0x01, 0x7f, 0x01, 0x01, 0x00, 0x00, 0x00,
	0x3f, 0x40, 0x40, 0x40, 0x3f, 0x00, 0x00, 0x00,
	0x1f, 0x20, 0x40, 0x20, 0x1f, 0x00, 0x00, 0x00,
	0x3f, 0x40, 0x38, 0x40, 0x3f, 0x00, 0x00, 0x00,
	0x63, 0x14, 0x08, 0x14, 0x63, 0x00, 0x00, 0x00,
	0x07, 0x08, 0x70, 0x08, 0x07, 0x00, 0x00, 0x00,
	0x61, 0x51, 0x49, 0x45, 0x43, 0x00, 0x00, 0x00,
	0x00, 0x7f, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x04, 0x08, 0x10, 0x20, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x41, 0x7f, 0x00, 0x00, 0x00, 0x00,
	0x04, 0x02, 0x01, 0x02, 0x04, 0x00, 0x00, 0x00,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00,
	0x01, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x20, 0x54, 0x54, 0x54, 0x78, 0x00, 0x00, 0x00,
	0x7f, 0x48, 0x48, 0x48, 0x30, 0x00, 0x00, 0x00,
	0x38, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00,
	0x30, 0x48, 0x48, 0x48, 0x7f, 0x00, 0x00, 0x00,
	0x38, 0x54, 0x54, 0x54, 0x58, 0x00, 0x00, 0x00,
	0x08, 0x08, 0x7e, 0x09, 0x0a, 0x00, 0x00, 0x00,
	0x48, 0x54, 0x54, 0x54, 0x3c, 0x00, 0x00, 0x00,
	0x7f, 0x08, 0x08, 0x08, 0x70, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x20, 0x40, 0x40, 0x3d, 0x00, 0x00, 0x00, 0x00,
	0x7f, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x7f, 0x40, 0x00, 0x00, 0x00, 0x00,
	0x7c, 0x04, 0x38, 0x04, 0x7c, 0x00, 0x00, 0x00,
	0x7c, 0x08, 0x04, 0x04, 0x78, 0x00, 0x00, 0x00,
	0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00,
	0x7c, 0x14, 0x14, 0x14, 0x08, 0x00, 0x00, 0x00,
	0x08, 0x14, 0x14, 0x14, 0x7c, 0x00, 0x00, 0x00,
	0x7c, 0x08, 0x04, 0x04, 0x08, 0x00, 0x00, 0x00,
	0x48, 0x54, 0x54, 0x54, 0x24, 0x00, 0x00, 0x00,
	0x04, 0x04, 0x3f, 0x44, 0x24, 0x00, 0x00, 0x00,
	0x3c, 0x40, 0x40, 0x40, 0x3c, 0x00, 0x00, 0x00,
	0x1c, 0x20, 0x40, 0x20, 0x1c, 0x00, 0x00, 0x00,
	0x3c, 0x40, 0x30, 0x40, 0x3c, 0x00, 0x00, 0x00,
	0x44, 0x28, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00,
	0x04, 0x48, 0x30, 0x08, 0x04, 0x00, 0x00, 0x00,
	0x44, 0x64, 0x54, 0x4c, 0x44, 0x00, 0x00, 0x00,
	0x08, 0x36, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x41, 0x36, 0x08, 0x00, 0x00, 0x00,
	0x04, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#endif

