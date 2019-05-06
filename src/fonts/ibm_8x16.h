///////////////////////////////////////////////////////////////////////////////
//
//  Font "IBM_8X16.H" for the Noritake GU128X64E-U100 VFD display
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

#ifndef IBM_8X16_H
#define IBM_8X16_H

static const uint8_t ibm_8x16[] PROGMEM = {

	0x08, // width (base + 0)
	0x10, // height (base + 1)
	0x00, // horizontal gap (base + 2)
	0x00, // vertical gap (base + 3)
	0x00, // first char (base + 4)
	0xFF, // last char (base + 5)
	0x10, // bytes per char (base + 6)

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x00
	0xF8, 0x04, 0x94, 0x84, 0x84, 0x94, 0x04, 0xF8, 0x07, 0x08, 0x08, 0x09, 0x09, 0x08, 0x08, 0x07,
	0xF8, 0xFC, 0x6C, 0x7C, 0x7C, 0x6C, 0xFC, 0xF8, 0x07, 0x0F, 0x0F, 0x0E, 0x0E, 0x0F, 0x0F, 0x07,
	0xE0, 0xF0, 0xF0, 0xE0, 0xF0, 0xF0, 0xE0, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x07, 0x03, 0x01, 0x00,
	0x80, 0xC0, 0xE0, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00,
	0xC0, 0xC0, 0xF0, 0x38, 0x38, 0xF0, 0xC0, 0xC0, 0x01, 0x01, 0x09, 0x0E, 0x0E, 0x09, 0x01, 0x01,
	0xC0, 0xE0, 0xF0, 0xF8, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0x01, 0x09, 0x0F, 0x0F, 0x09, 0x01, 0x00,
	0x00, 0x00, 0x80, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x01, 0x00, 0x00,
	0xFF, 0xFF, 0x7F, 0x3F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xFC, 0xFE, 0xFF, 0xFF,
	0x00, 0xC0, 0x60, 0x20, 0x20, 0x60, 0xC0, 0x00, 0x00, 0x03, 0x06, 0x04, 0x04, 0x06, 0x03, 0x00,
	0xFF, 0x3F, 0x9F, 0xDF, 0xDF, 0x9F, 0x3F, 0xFF, 0xFF, 0xFC, 0xF9, 0xFB, 0xFB, 0xF9, 0xFC, 0xFF,
	0x80, 0xC0, 0x60, 0x74, 0xDC, 0x8C, 0x3C, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x0F, 0x07, 0x00, 0x00,
	0x00, 0x78, 0xFC, 0x84, 0x84, 0xFC, 0x78, 0x00, 0x00, 0x02, 0x02, 0x0F, 0x0F, 0x02, 0x02, 0x00,
	0x00, 0x00, 0xFC, 0xFC, 0x14, 0x14, 0x1C, 0x1C, 0x0C, 0x0E, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0xFC, 0x14, 0x14, 0x14, 0xFC, 0xFC, 0x1C, 0x1F, 0x0F, 0x00, 0x00, 0x0E, 0x0F, 0x07,
	0xA0, 0xA0, 0xC0, 0x78, 0x78, 0xC0, 0xA0, 0xA0, 0x02, 0x02, 0x01, 0x0F, 0x0F, 0x01, 0x02, 0x02,
	0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0x40, 0x40, 0x00, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, // 0x10
	0x40, 0x40, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x00,
	0x00, 0x10, 0x18, 0xFC, 0xFC, 0x18, 0x10, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x03, 0x01, 0x00,
	0x00, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0x0D, 0x0D, 0x00, 0x00, 0x0D, 0x0D, 0x00,
	0x38, 0x7C, 0x44, 0xFC, 0xFC, 0x04, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x0F, 0x0F,
	0xC4, 0xEE, 0x3A, 0x12, 0x32, 0xE6, 0xC4, 0x00, 0x08, 0x19, 0x13, 0x12, 0x17, 0x1D, 0x08, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x00,
	0x00, 0x10, 0x18, 0xFC, 0xFC, 0x18, 0x10, 0x00, 0x00, 0x09, 0x0B, 0x0F, 0x0F, 0x0B, 0x09, 0x00,
	0x00, 0x10, 0x18, 0xFC, 0xFC, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x0F, 0x0F, 0x06, 0x02, 0x00,
	0x80, 0x80, 0x80, 0xA0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x01, 0x00, 0x00,
	0x80, 0xC0, 0xE0, 0xA0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x01, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00,
	0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00,
	0x80, 0xC0, 0xE0, 0x80, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x01, 0x03, 0x00, 0x03, 0x01, 0x00, 0x00,
	0x00, 0x80, 0xE0, 0xF0, 0xE0, 0x80, 0x00, 0x00, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x00,
	0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x30, 0x00, 0x00, 0x00, 0x03, 0x07, 0x03, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x20
	0x00, 0x00, 0x38, 0xFC, 0xFC, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x0D, 0x00, 0x00, 0x00,
	0x00, 0x0E, 0x1E, 0x00, 0x00, 0x1E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x20, 0xF8, 0xF8, 0x20, 0xF8, 0xF8, 0x20, 0x00, 0x02, 0x0F, 0x0F, 0x02, 0x0F, 0x0F, 0x02, 0x00,
	0x38, 0x7C, 0x44, 0x47, 0x47, 0xCC, 0x98, 0x00, 0x06, 0x0C, 0x08, 0x38, 0x38, 0x0F, 0x07, 0x00,
	0x30, 0x30, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x00, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x0C, 0x0C, 0x00,
	0x80, 0xD8, 0x7C, 0xE4, 0xBC, 0xD8, 0x40, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0x00, 0x10, 0x1E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xF0, 0xF8, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0C, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x0C, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0C, 0x07, 0x03, 0x00, 0x00,
	0x80, 0xA0, 0xE0, 0xC0, 0xC0, 0xE0, 0xA0, 0x80, 0x00, 0x02, 0x03, 0x01, 0x01, 0x03, 0x02, 0x00,
	0x00, 0x80, 0x80, 0xE0, 0xE0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1E, 0x0E, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x00, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
	0xF0, 0xF8, 0x0C, 0xC4, 0x0C, 0xF8, 0xF0, 0x00, 0x03, 0x07, 0x0C, 0x08, 0x0C, 0x07, 0x03, 0x00, // 0x30
	0x00, 0x10, 0x18, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x00,
	0x08, 0x0C, 0x84, 0xC4, 0x64, 0x3C, 0x18, 0x00, 0x0E, 0x0F, 0x09, 0x08, 0x08, 0x0C, 0x0C, 0x00,
	0x08, 0x0C, 0x44, 0x44, 0x44, 0xFC, 0xB8, 0x00, 0x04, 0x0C, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xC0, 0xE0, 0xB0, 0x98, 0xFC, 0xFC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00,
	0x7C, 0x7C, 0x44, 0x44, 0x44, 0xC4, 0x84, 0x00, 0x04, 0x0C, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xF0, 0xF8, 0x4C, 0x44, 0x44, 0xC0, 0x80, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0x0C, 0x0C, 0x04, 0x84, 0xC4, 0x7C, 0x3C, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00,
	0xB8, 0xFC, 0x44, 0x44, 0x44, 0xFC, 0xB8, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0x38, 0x7C, 0x44, 0x44, 0x44, 0xFC, 0xF8, 0x00, 0x00, 0x08, 0x08, 0x08, 0x0C, 0x07, 0x03, 0x00,
	0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0E, 0x06, 0x00, 0x00, 0x00,
	0x00, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x08, 0x00,
	0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
	0x00, 0x08, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x08, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00,
	0x18, 0x1C, 0x04, 0xC4, 0xE4, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x0D, 0x00, 0x00, 0x00,
	0xF0, 0xF8, 0x08, 0xC8, 0xC8, 0xF8, 0xF0, 0x00, 0x07, 0x0F, 0x08, 0x0B, 0x0B, 0x0B, 0x01, 0x00, // 0x40
	0xE0, 0xF0, 0x98, 0x8C, 0x98, 0xF0, 0xE0, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00,
	0x04, 0xFC, 0xFC, 0x44, 0x44, 0xFC, 0xB8, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xF0, 0xF8, 0x0C, 0x04, 0x04, 0x0C, 0x18, 0x00, 0x03, 0x07, 0x0C, 0x08, 0x08, 0x0C, 0x06, 0x00,
	0x04, 0xFC, 0xFC, 0x04, 0x0C, 0xF8, 0xF0, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x0C, 0x07, 0x03, 0x00,
	0x04, 0xFC, 0xFC, 0x44, 0xE4, 0x0C, 0x1C, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x0C, 0x0E, 0x00,
	0x04, 0xFC, 0xFC, 0x44, 0xE4, 0x0C, 0x1C, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00,
	0xF0, 0xF8, 0x0C, 0x84, 0x84, 0x8C, 0x98, 0x00, 0x03, 0x07, 0x0C, 0x08, 0x08, 0x07, 0x0F, 0x00,
	0xFC, 0xFC, 0x40, 0x40, 0x40, 0xFC, 0xFC, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00,
	0x00, 0x00, 0x04, 0xFC, 0xFC, 0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0x04, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x0F, 0x07, 0x00, 0x00,
	0x04, 0xFC, 0xFC, 0xC0, 0xE0, 0x3C, 0x1C, 0x00, 0x08, 0x0F, 0x0F, 0x00, 0x01, 0x0F, 0x0E, 0x00,
	0x04, 0xFC, 0xFC, 0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x0C, 0x0E, 0x00,
	0xFC, 0xFC, 0x38, 0x70, 0x38, 0xFC, 0xFC, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00,
	0xFC, 0xFC, 0x38, 0x70, 0xE0, 0xFC, 0xFC, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00,
	0xF8, 0xFC, 0x04, 0x04, 0x04, 0xFC, 0xF8, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0x04, 0xFC, 0xFC, 0x44, 0x44, 0x7C, 0x38, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00, // 0x50
	0xF8, 0xFC, 0x04, 0x04, 0x04, 0xFC, 0xF8, 0x00, 0x07, 0x0F, 0x08, 0x0E, 0x3C, 0x3F, 0x27, 0x00,
	0x04, 0xFC, 0xFC, 0x44, 0xC4, 0xFC, 0x38, 0x00, 0x08, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, 0x00,
	0x18, 0x3C, 0x64, 0x44, 0xC4, 0x9C, 0x18, 0x00, 0x06, 0x0E, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0x00, 0x1C, 0x0C, 0xFC, 0xFC, 0x0C, 0x1C, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00,
	0xFC, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xFC, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x06, 0x03, 0x01, 0x00,
	0xFC, 0xFC, 0x00, 0xC0, 0x00, 0xFC, 0xFC, 0x00, 0x07, 0x0F, 0x0E, 0x03, 0x0E, 0x0F, 0x07, 0x00,
	0x0C, 0x3C, 0xF0, 0xE0, 0xF0, 0x3C, 0x0C, 0x00, 0x0C, 0x0F, 0x03, 0x01, 0x03, 0x0F, 0x0C, 0x00,
	0x00, 0x3C, 0x7C, 0xC0, 0xC0, 0x7C, 0x3C, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00,
	0x1C, 0x0C, 0x84, 0xC4, 0x64, 0x3C, 0x1C, 0x00, 0x0E, 0x0F, 0x09, 0x08, 0x08, 0x0C, 0x0E, 0x00,
	0x00, 0x00, 0xFC, 0xFC, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x08, 0x08, 0x00, 0x00,
	0x38, 0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x00,
	0x00, 0x00, 0x04, 0x04, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x0F, 0x00, 0x00,
	0x08, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x00, 0x00, 0x02, 0x06, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x60
	0x00, 0xA0, 0xA0, 0xA0, 0xE0, 0xC0, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0x04, 0xFC, 0xFC, 0x20, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x0F, 0x0F, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xC0, 0xE0, 0x20, 0x20, 0x20, 0x60, 0x40, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0C, 0x04, 0x00,
	0x80, 0xC0, 0x60, 0x24, 0xFC, 0xFC, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0xC0, 0xE0, 0xA0, 0xA0, 0xA0, 0xE0, 0xC0, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0C, 0x04, 0x00,
	0x00, 0x40, 0xF8, 0xFC, 0x44, 0x0C, 0x18, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00, 0x00,
	0xC0, 0xE0, 0x20, 0x20, 0xC0, 0xE0, 0x20, 0x00, 0x27, 0x6F, 0x48, 0x48, 0x7F, 0x3F, 0x00, 0x00,
	0x04, 0xFC, 0xFC, 0x40, 0x20, 0xE0, 0xC0, 0x00, 0x08, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, 0x00,
	0x00, 0x00, 0x20, 0xEC, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x20, 0xEC, 0xEC, 0x00, 0x00, 0x30, 0x70, 0x40, 0x40, 0x7F, 0x3F, 0x00,
	0x04, 0xFC, 0xFC, 0x80, 0xC0, 0x60, 0x20, 0x00, 0x08, 0x0F, 0x0F, 0x01, 0x03, 0x0E, 0x0C, 0x00,
	0x00, 0x00, 0x04, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00,
	0xE0, 0xE0, 0x60, 0xC0, 0x60, 0xE0, 0xC0, 0x00, 0x0F, 0x0F, 0x00, 0x07, 0x00, 0x0F, 0x0F, 0x00,
	0x20, 0xE0, 0xC0, 0x20, 0x20, 0xE0, 0xC0, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, 0x00,
	0xC0, 0xE0, 0x20, 0x20, 0x20, 0xE0, 0xC0, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0x20, 0xE0, 0xC0, 0x20, 0x20, 0xE0, 0xC0, 0x00, 0x40, 0x7F, 0x7F, 0x48, 0x08, 0x0F, 0x07, 0x00, // 0x70
	0xC0, 0xE0, 0x20, 0x20, 0xC0, 0xE0, 0x20, 0x00, 0x07, 0x0F, 0x08, 0x48, 0x7F, 0x7F, 0x40, 0x00,
	0x20, 0xE0, 0xC0, 0x60, 0x20, 0xE0, 0xC0, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00,
	0x40, 0xE0, 0xA0, 0x20, 0x20, 0x60, 0x40, 0x00, 0x04, 0x0C, 0x09, 0x09, 0x0B, 0x0E, 0x04, 0x00,
	0x20, 0x20, 0xF8, 0xFC, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x0C, 0x04, 0x00,
	0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x03, 0x07, 0x0C, 0x08, 0x0C, 0x07, 0x03, 0x00,
	0xE0, 0xE0, 0x00, 0x80, 0x00, 0xE0, 0xE0, 0x00, 0x07, 0x0F, 0x0C, 0x07, 0x0C, 0x0F, 0x07, 0x00,
	0x20, 0x60, 0xC0, 0x80, 0xC0, 0x60, 0x20, 0x00, 0x08, 0x0C, 0x07, 0x03, 0x07, 0x0C, 0x08, 0x00,
	0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x47, 0x4F, 0x48, 0x48, 0x68, 0x3F, 0x1F, 0x00,
	0x60, 0x60, 0x20, 0xA0, 0xE0, 0x60, 0x20, 0x00, 0x0C, 0x0E, 0x0B, 0x09, 0x08, 0x0C, 0x0C, 0x00,
	0x00, 0x40, 0x40, 0xF8, 0xBC, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x00,
	0x00, 0x00, 0x00, 0xBC, 0xBC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x04, 0xBC, 0xF8, 0x40, 0x40, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x07, 0x00, 0x00, 0x00,
	0x08, 0x0C, 0x04, 0x0C, 0x08, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0xC0, 0x60, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x07, 0x07, 0x04, 0x04, 0x04, 0x07, 0x07, 0x00,
	0xF0, 0xF8, 0x0C, 0x04, 0x04, 0x0C, 0x18, 0x00, 0x03, 0x27, 0x2C, 0x38, 0x18, 0x0C, 0x06, 0x00, // 0x80
	0xE4, 0xE4, 0x00, 0x00, 0xE4, 0xE4, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0xC0, 0xE0, 0xA8, 0xAC, 0xA6, 0xE2, 0xC0, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0C, 0x04, 0x00,
	0x00, 0xA8, 0xAC, 0xA6, 0xEC, 0xC8, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0x04, 0xA4, 0xA0, 0xA0, 0xE4, 0xC4, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0x00, 0xA2, 0xA6, 0xAC, 0xE8, 0xC0, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0x00, 0xA4, 0xAE, 0xAA, 0xEE, 0xC4, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0xC0, 0xE0, 0x20, 0x20, 0x20, 0x60, 0x40, 0x00, 0x07, 0x2F, 0x28, 0x38, 0x18, 0x0C, 0x04, 0x00,
	0xC0, 0xE8, 0xAC, 0xA6, 0xAC, 0xE8, 0xC0, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0C, 0x04, 0x00,
	0xC4, 0xE4, 0xA0, 0xA0, 0xA0, 0xE4, 0xC4, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0C, 0x04, 0x00,
	0xC0, 0xE2, 0xA6, 0xAC, 0xA8, 0xE0, 0xC0, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0C, 0x04, 0x00,
	0x00, 0x04, 0x24, 0xE0, 0xE0, 0x04, 0x04, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00,
	0x00, 0x08, 0x2C, 0xE6, 0xE6, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00,
	0x00, 0x02, 0x26, 0xEC, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00,
	0xC2, 0xE2, 0x30, 0x18, 0x30, 0xE2, 0xC2, 0x00, 0x0F, 0x0F, 0x01, 0x01, 0x01, 0x0F, 0x0F, 0x00,
	0xC0, 0xE2, 0xB7, 0x9D, 0xB7, 0xE2, 0xC0, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00,
	0x08, 0xF8, 0xF8, 0x8A, 0xCB, 0x19, 0x38, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x09, 0x0C, 0x0E, 0x00, // 0x90
	0x20, 0x20, 0xE0, 0xC0, 0x20, 0xE0, 0xC0, 0x00, 0x06, 0x0F, 0x09, 0x07, 0x0F, 0x09, 0x09, 0x00,
	0xF0, 0xF8, 0x4C, 0x44, 0xFC, 0xFC, 0x44, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, 0x08, 0x00,
	0xC0, 0xE8, 0x2C, 0x26, 0x2C, 0xE8, 0xC0, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xC4, 0xE4, 0x20, 0x20, 0x20, 0xE4, 0xC4, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xC0, 0xE2, 0x26, 0x2C, 0x28, 0xE0, 0xC0, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xE8, 0xEC, 0x06, 0x06, 0xEC, 0xE8, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0xE0, 0xE2, 0x06, 0x0C, 0xE8, 0xE0, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0xE4, 0xE4, 0x00, 0x00, 0x00, 0xE4, 0xE4, 0x00, 0x07, 0x4F, 0x48, 0x48, 0x68, 0x3F, 0x1F, 0x00,
	0xF2, 0xFA, 0x08, 0x08, 0x08, 0xFA, 0xF2, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xFA, 0xFA, 0x00, 0x00, 0x00, 0xFA, 0xFA, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xF0, 0xF8, 0x08, 0x0E, 0x0E, 0x18, 0x10, 0x00, 0x01, 0x03, 0x02, 0x0E, 0x0E, 0x03, 0x01, 0x00,
	0x20, 0xFC, 0xFE, 0x22, 0x06, 0x0C, 0x00, 0x00, 0x0C, 0x0F, 0x0F, 0x08, 0x08, 0x0C, 0x04, 0x00,
	0x00, 0x4C, 0x5C, 0xF0, 0xF0, 0x5C, 0x4C, 0x00, 0x00, 0x01, 0x01, 0x0F, 0x0F, 0x01, 0x01, 0x00,
	0xFE, 0xFE, 0x12, 0x92, 0xDE, 0xEC, 0x80, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x00,
	0x00, 0x40, 0x40, 0xFC, 0xFE, 0x42, 0x46, 0x04, 0x04, 0x0C, 0x08, 0x0F, 0x07, 0x00, 0x00, 0x00,
	0x00, 0xA8, 0xAC, 0xA6, 0xE2, 0xC0, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00, // 0xA0
	0x00, 0x00, 0x28, 0xEC, 0xE6, 0x02, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00,
	0xC0, 0xE8, 0x2C, 0x26, 0x22, 0xE0, 0xC0, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xE0, 0xE8, 0x0C, 0x06, 0xE2, 0xE0, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x07, 0x0F, 0x08, 0x00,
	0x28, 0xEC, 0xC4, 0x2C, 0x28, 0xEC, 0xC4, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, 0x00,
	0xFA, 0xFB, 0x71, 0xE3, 0xC2, 0xFB, 0xF9, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x01, 0x0F, 0x0F, 0x00,
	0x00, 0x98, 0xBC, 0xA4, 0xBC, 0xBC, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x98, 0xBC, 0xA4, 0xBC, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x80, 0xEC, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0E, 0x06, 0x00,
	0xC0, 0xC0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00,
	0x04, 0x3E, 0xBE, 0xC0, 0x60, 0x30, 0x18, 0x00, 0x06, 0x03, 0x21, 0x32, 0x3A, 0x2E, 0x24, 0x00,
	0x04, 0x3E, 0xBE, 0xC0, 0x60, 0x30, 0x18, 0x00, 0x06, 0x03, 0x09, 0x0C, 0x0E, 0x3B, 0x3F, 0x08,
	0x00, 0x00, 0x00, 0xEC, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x07, 0x00, 0x00,
	0x80, 0xC0, 0x60, 0xA0, 0xC0, 0x60, 0x20, 0x00, 0x00, 0x01, 0x03, 0x02, 0x01, 0x03, 0x02, 0x00,
	0x20, 0x60, 0xC0, 0xA0, 0x60, 0xC0, 0x80, 0x00, 0x02, 0x03, 0x01, 0x02, 0x03, 0x01, 0x00, 0x00,
	0x00, 0xAA, 0x00, 0x55, 0x00, 0xAA, 0x00, 0x55, 0x00, 0xAA, 0x00, 0x55, 0x00, 0xAA, 0x00, 0x55, // 0xB0
	0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55,
	0x55, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0xA0, 0xA0, 0xA0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x80, 0x80, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0xA0, 0xA0, 0xA0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0xA0, 0xA0, 0xBF, 0xBF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0xA0, 0xA0, 0xA0, 0xA0, 0x20, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0xA0, 0xA0, 0xBF, 0xBF, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xA0, 0xA0, 0xA0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xC0
	0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0x00, 0x00, 0xFF, 0xFF, 0x80, 0xBF, 0xBF, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xE0, 0xE0, 0x20, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0xA0, 0xA0, 0xBF, 0xBF, 0x80, 0xBF, 0xBF, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xA0, 0xA0, 0xA0, 0xA0, 0x20, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0x00, 0x00, 0xFF, 0xFF, 0x00, 0xBF, 0xBF, 0xA0, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xA0, 0xA0, 0xBF, 0xBF, 0x00, 0xBF, 0xBF, 0xA0, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0xA0, 0xA0, 0xA0, 0xBF, 0xBF, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xD0
	0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0x00, 0x00, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xE0, 0xE0, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0x80, 0x80, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0xA0, 0xA0, 0xA0, 0xFF, 0xFF, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xC0, 0xE0, 0x20, 0xE0, 0xC0, 0x60, 0x20, 0x00, 0x07, 0x0F, 0x08, 0x0F, 0x07, 0x0C, 0x08, 0x00, // 0xE0
	0xF8, 0xFC, 0x04, 0x44, 0xFC, 0xB8, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x08, 0x0F, 0x07, 0x00,
	0xFC, 0xFC, 0x04, 0x04, 0x04, 0x1C, 0x1C, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x20, 0xE0, 0xE0, 0x20, 0xE0, 0xE0, 0x20, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x0F, 0x0F, 0x00, 0x00,
	0x0C, 0x1C, 0x34, 0xE4, 0xC4, 0x0C, 0x0C, 0x00, 0x0C, 0x0E, 0x0B, 0x09, 0x08, 0x0C, 0x0C, 0x00,
	0xC0, 0xE0, 0x20, 0xE0, 0xE0, 0x20, 0x20, 0x00, 0x07, 0x0F, 0x08, 0x0F, 0x07, 0x00, 0x00, 0x00,
	0x00, 0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x40, 0x7F, 0x3F, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0x20, 0x30, 0x10, 0xF0, 0xE0, 0x30, 0x10, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00,
	0x00, 0xE4, 0xF4, 0x1C, 0x1C, 0xF4, 0xE4, 0x00, 0x00, 0x09, 0x0B, 0x0E, 0x0E, 0x0B, 0x09, 0x00,
	0xF0, 0xF8, 0x4C, 0x44, 0x4C, 0xF8, 0xF0, 0x00, 0x03, 0x07, 0x0C, 0x08, 0x0C, 0x07, 0x03, 0x00,
	0x70, 0xF8, 0x8C, 0x04, 0x8C, 0xF8, 0x70, 0x00, 0x08, 0x0F, 0x0F, 0x00, 0x0F, 0x0F, 0x08, 0x00,
	0x00, 0x80, 0xC8, 0x5C, 0x74, 0xE4, 0xC4, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x0F, 0x07, 0x00,
	0xC0, 0xE0, 0x20, 0xE0, 0xE0, 0x20, 0xE0, 0xC0, 0x01, 0x03, 0x02, 0x03, 0x03, 0x02, 0x03, 0x01,
	0xC0, 0xE0, 0x20, 0xE0, 0xE0, 0x30, 0xF8, 0xC8, 0x09, 0x0F, 0x07, 0x03, 0x02, 0x02, 0x03, 0x01,
	0x00, 0xF0, 0xF8, 0x4C, 0x44, 0x44, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0C, 0x08, 0x08, 0x00, 0x00,
	0xF0, 0xF8, 0x08, 0x08, 0x08, 0xF8, 0xF0, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00,
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, // 0xF0
	0x00, 0x40, 0x40, 0xF0, 0xF0, 0x40, 0x40, 0x00, 0x00, 0x08, 0x08, 0x09, 0x09, 0x08, 0x08, 0x00,
	0x00, 0x00, 0x08, 0x18, 0xB0, 0xE0, 0x40, 0x00, 0x00, 0x08, 0x0A, 0x0B, 0x09, 0x08, 0x08, 0x00,
	0x00, 0x40, 0xE0, 0xB0, 0x18, 0x08, 0x00, 0x00, 0x00, 0x08, 0x08, 0x09, 0x0B, 0x0A, 0x08, 0x00,
	0x00, 0x00, 0x00, 0xF8, 0xFC, 0x04, 0x1C, 0x18, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0E, 0x1E, 0x10, 0x1F, 0x0F, 0x00, 0x00, 0x00,
	0x00, 0x80, 0x80, 0xA0, 0xA0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00,
	0x40, 0x60, 0x20, 0x60, 0x40, 0x60, 0x20, 0x00, 0x02, 0x03, 0x01, 0x03, 0x02, 0x03, 0x01, 0x00,
	0x00, 0x0C, 0x1E, 0x12, 0x1E, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x00, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x03, 0x07, 0x0C, 0x0F, 0x0F, 0x00, 0x00,
	0x00, 0x02, 0x7E, 0x7C, 0x02, 0x7E, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x44, 0x66, 0x72, 0x5A, 0x4E, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 0xFF
};

#endif

