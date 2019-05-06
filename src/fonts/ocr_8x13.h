///////////////////////////////////////////////////////////////////////////////
//
//  Font "OCR_8X13.H" for the Noritake GU128X64E-U100 VFD display
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

#ifndef OCR_8X13_H
#define OCR_8X13_H

static const uint8_t ocr_8x13[] PROGMEM = {

	0x08, // width (base + 0)
	0x0D, // height (base + 1)
	0x00, // horizontal gap (base + 2)
	0x00, // vertical gap (base + 3)
	0x30, // first char (base + 4)
	0x3A, // last char (base + 5)
	0x10, // bytes per char (base + 6)

	0xFC, 0xFE, 0x06, 0x06, 0x06, 0xFE, 0xFC, 0x00,
	0x07, 0x0F, 0x0C, 0x0C, 0x0C, 0x0F, 0x07, 0x00,
	0x06, 0x06, 0xFE, 0xFE, 0x00, 0x80, 0x80, 0x00,
	0x0C, 0x0C, 0x0F, 0x0F, 0x0C, 0x0F, 0x0F, 0x00,
	0xC6, 0xE6, 0x66, 0x66, 0x66, 0x7E, 0x3C, 0x00,
	0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00,
	0x06, 0x66, 0x66, 0x66, 0x66, 0xFE, 0xFC, 0x00,
	0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0F, 0x07, 0x00,
	0xFE, 0xFE, 0x80, 0x80, 0xFC, 0xFC, 0x80, 0x00,
	0x01, 0x01, 0x01, 0x01, 0x0F, 0x0F, 0x01, 0x00,
	0x00, 0x7E, 0x7E, 0x66, 0x66, 0xE6, 0xC6, 0x00,
	0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0F, 0x07, 0x00,
	0xFC, 0xFE, 0xC6, 0xC0, 0xC0, 0xC0, 0x80, 0x00,
	0x07, 0x0F, 0x0C, 0x0C, 0x0C, 0x0F, 0x07, 0x00,
	0x0E, 0x0E, 0x86, 0xC6, 0xE6, 0x7E, 0x3E, 0x00,
	0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00,
	0xC0, 0xFC, 0xFE, 0xC6, 0xFE, 0xFC, 0xC0, 0x00,
	0x07, 0x0F, 0x0C, 0x0C, 0x0C, 0x0F, 0x07, 0x00,
	0x3C, 0x7E, 0x66, 0x66, 0x66, 0xFE, 0xFC, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0C, 0x0F, 0x07, 0x00,
	0x00, 0x00, 0x38, 0x38, 0x38, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,
};

#endif

