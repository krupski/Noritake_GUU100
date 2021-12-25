///////////////////////////////////////////////////////////////////////////////
//
//  Font "DUTCH.H" for the Noritake GU128X64E-U100 VFD display
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

#ifndef DUTCH_H
#define DUTCH_H

#define dutch (pgm_get_far_address(_dutch))

static const uint8_t _dutch[] __attribute__((progmem)) = {

	0x06, // width (base + 0)
	0x08, // height (base + 1)
	0x00, // horizontal gap (base + 2)
	0x00, // vertical gap (base + 3)
	0x20, // first char (base + 4)
	0x7F, // last char (base + 5)
	0x06, // bytes per char (base + 6)

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x06, 0x5F, 0x06, 0x00, 0x00,
	0x07, 0x03, 0x00, 0x07, 0x03, 0x00,
	0x24, 0x7E, 0x24, 0x7E, 0x24, 0x00,
	0x24, 0x2B, 0x6A, 0x12, 0x00, 0x00,
	0x63, 0x13, 0x08, 0x64, 0x63, 0x00,
	0x36, 0x49, 0x56, 0x20, 0x50, 0x00,
	0x00, 0x07, 0x03, 0x00, 0x00, 0x00,
	0x00, 0x3E, 0x41, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x3E, 0x00, 0x00, 0x00,
	0x08, 0x3E, 0x1C, 0x3E, 0x08, 0x00,
	0x08, 0x08, 0x3E, 0x08, 0x08, 0x00,
	0xE0, 0x60, 0x00, 0x00, 0x00, 0x00,
	0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x00, 0x60, 0x60, 0x00, 0x00, 0x00,
	0x20, 0x10, 0x08, 0x04, 0x02, 0x00,
	0x3E, 0x51, 0x49, 0x45, 0x3E, 0x00,
	0x00, 0x42, 0x7F, 0x40, 0x00, 0x00,
	0x62, 0x51, 0x49, 0x49, 0x46, 0x00,
	0x22, 0x49, 0x49, 0x49, 0x36, 0x00,
	0x18, 0x14, 0x12, 0x7F, 0x10, 0x00,
	0x2F, 0x49, 0x49, 0x49, 0x31, 0x00,
	0x3C, 0x4A, 0x49, 0x49, 0x30, 0x00,
	0x01, 0x71, 0x09, 0x05, 0x03, 0x00,
	0x36, 0x49, 0x49, 0x49, 0x36, 0x00,
	0x06, 0x49, 0x49, 0x29, 0x1E, 0x00,
	0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xEC, 0x6C, 0x00, 0x00, 0x00,
	0x08, 0x14, 0x22, 0x41, 0x00, 0x00,
	0x24, 0x24, 0x24, 0x24, 0x24, 0x00,
	0x00, 0x41, 0x22, 0x14, 0x08, 0x00,
	0x02, 0x01, 0x59, 0x09, 0x06, 0x00,
	0x3E, 0x41, 0x5D, 0x55, 0x1E, 0x00,
	0x7E, 0x11, 0x11, 0x11, 0x7E, 0x00,
	0x7F, 0x49, 0x49, 0x49, 0x36, 0x00,
	0x3E, 0x41, 0x41, 0x41, 0x22, 0x00,
	0x7F, 0x41, 0x41, 0x41, 0x3E, 0x00,
	0x7F, 0x49, 0x49, 0x49, 0x41, 0x00,
	0x7F, 0x09, 0x09, 0x09, 0x01, 0x00,
	0x3E, 0x41, 0x49, 0x49, 0x7A, 0x00,
	0x7F, 0x08, 0x08, 0x08, 0x7F, 0x00,
	0x00, 0x41, 0x7F, 0x41, 0x00, 0x00,
	0x30, 0x40, 0x40, 0x40, 0x3F, 0x00,
	0x7F, 0x08, 0x14, 0x22, 0x41, 0x00,
	0x7F, 0x40, 0x40, 0x40, 0x40, 0x00,
	0x7F, 0x02, 0x04, 0x02, 0x7F, 0x00,
	0x7F, 0x02, 0x04, 0x08, 0x7F, 0x00,
	0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00,
	0x7F, 0x09, 0x09, 0x09, 0x06, 0x00,
	0x3E, 0x41, 0x51, 0x21, 0x5E, 0x00,
	0x7F, 0x09, 0x09, 0x19, 0x66, 0x00,
	0x26, 0x49, 0x49, 0x49, 0x32, 0x00,
	0x01, 0x01, 0x7F, 0x01, 0x01, 0x00,
	0x3F, 0x40, 0x40, 0x40, 0x3F, 0x00,
	0x1F, 0x20, 0x40, 0x20, 0x1F, 0x00,
	0x3F, 0x40, 0x3C, 0x40, 0x3F, 0x00,
	0x63, 0x14, 0x08, 0x14, 0x63, 0x00,
	0x07, 0x08, 0x70, 0x08, 0x07, 0x00,
	0x71, 0x49, 0x45, 0x43, 0x00, 0x00,
	0x00, 0x7F, 0x41, 0x41, 0x00, 0x00,
	0x02, 0x04, 0x08, 0x10, 0x20, 0x00,
	0x00, 0x41, 0x41, 0x7F, 0x00, 0x00,
	0x04, 0x02, 0x01, 0x02, 0x04, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x00,
	0x00, 0x03, 0x07, 0x00, 0x00, 0x00,
	0x20, 0x54, 0x54, 0x54, 0x78, 0x00,
	0x7F, 0x44, 0x44, 0x44, 0x38, 0x00,
	0x38, 0x44, 0x44, 0x44, 0x28, 0x00,
	0x38, 0x44, 0x44, 0x44, 0x7F, 0x00,
	0x38, 0x54, 0x54, 0x54, 0x08, 0x00,
	0x08, 0x7E, 0x09, 0x09, 0x00, 0x00,
	0x18, 0xA4, 0xA4, 0xA4, 0x7C, 0x00,
	0x7F, 0x04, 0x04, 0x78, 0x00, 0x00,
	0x00, 0x00, 0x7D, 0x40, 0x00, 0x00,
	0x40, 0x80, 0x84, 0x7D, 0x00, 0x00,
	0x7F, 0x10, 0x28, 0x44, 0x00, 0x00,
	0x00, 0x00, 0x7F, 0x40, 0x00, 0x00,
	0x7C, 0x04, 0x18, 0x04, 0x78, 0x00,
	0x7C, 0x04, 0x04, 0x78, 0x00, 0x00,
	0x38, 0x44, 0x44, 0x44, 0x38, 0x00,
	0xFC, 0x44, 0x44, 0x44, 0x38, 0x00,
	0x38, 0x44, 0x44, 0x44, 0xFC, 0x00,
	0x44, 0x78, 0x44, 0x04, 0x08, 0x00,
	0x08, 0x54, 0x54, 0x54, 0x20, 0x00,
	0x04, 0x3E, 0x44, 0x24, 0x00, 0x00,
	0x3C, 0x40, 0x20, 0x7C, 0x00, 0x00,
	0x1C, 0x20, 0x40, 0x20, 0x1C, 0x00,
	0x3C, 0x60, 0x30, 0x60, 0x3C, 0x00,
	0x6C, 0x10, 0x10, 0x6C, 0x00, 0x00,
	0x9C, 0xA0, 0x60, 0x3C, 0x00, 0x00,
	0x64, 0x54, 0x54, 0x4C, 0x00, 0x00,
	0x08, 0x3E, 0x41, 0x41, 0x00, 0x00,
	0x00, 0x00, 0x77, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x41, 0x3E, 0x08, 0x00,
	0x02, 0x01, 0x02, 0x01, 0x00, 0x00,
	0x08, 0x1C, 0x2A, 0x08, 0x08, 0x00,
};

#endif

