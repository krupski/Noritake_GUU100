///////////////////////////////////////////////////////////////////////////////
//
//  Font "IBM_8X8.H" for the Noritake GU128X64E-U100 VFD display
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

#ifndef IBM_8X8_H
#define IBM_8X8_H

#define ibm_8x8 (pgm_get_far_address(_ibm_8x8))

static const uint8_t _ibm_8x8[] PROGMEM = {

	0x08, // width (base + 0)
	0x08, // height (base + 1)
	0x00, // horizontal gap (base + 2)
	0x00, // vertical gap (base + 3)
	0x00, // first char (base + 4)
	0xFF, // last char (base + 5)
	0x08, // bytes per char (base + 6)

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7E, 0x81, 0x95, 0xB1, 0xB1, 0x95, 0x81, 0x7E,
	0x7E, 0xFF, 0xEB, 0xCF, 0xCF, 0xEB, 0xFF, 0x7E,
	0x0E, 0x1F, 0x3F, 0x7E, 0x3F, 0x1F, 0x0E, 0x00,
	0x08, 0x1C, 0x3E, 0x7F, 0x3E, 0x1C, 0x08, 0x00,
	0x18, 0xBA, 0xFF, 0xFF, 0xFF, 0xBA, 0x18, 0x00,
	0x10, 0xB8, 0xFC, 0xFF, 0xFC, 0xB8, 0x10, 0x00,
	0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, 0x00,
	0xFF, 0xFF, 0xE7, 0xC3, 0xC3, 0xE7, 0xFF, 0xFF,
	0x00, 0x3C, 0x66, 0x42, 0x42, 0x66, 0x3C, 0x00,
	0xFF, 0xC3, 0x99, 0xBD, 0xBD, 0x99, 0xC3, 0xFF,
	0x70, 0xF8, 0x88, 0x88, 0xFD, 0x7F, 0x07, 0x0F,
	0x00, 0x4E, 0x5F, 0xF1, 0xF1, 0x5F, 0x4E, 0x00,
	0xC0, 0xE0, 0xFF, 0x7F, 0x05, 0x05, 0x07, 0x07,
	0xC0, 0xFF, 0x7F, 0x05, 0x05, 0x65, 0x7F, 0x3F,
	0x99, 0x5A, 0x3C, 0xE7, 0xE7, 0x3C, 0x5A, 0x99,
	0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00,
	0x08, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x00,
	0x00, 0x24, 0x66, 0xFF, 0xFF, 0x66, 0x24, 0x00,
	0x00, 0x5F, 0x5F, 0x00, 0x00, 0x5F, 0x5F, 0x00,
	0x06, 0x0F, 0x09, 0x7F, 0x7F, 0x01, 0x7F, 0x7F,
	0x40, 0xDA, 0xBF, 0xA5, 0xFD, 0x59, 0x03, 0x02,
	0x00, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x00,
	0x80, 0x94, 0xB6, 0xFF, 0xFF, 0xB6, 0x94, 0x80,
	0x00, 0x04, 0x06, 0x7F, 0x7F, 0x06, 0x04, 0x00,
	0x00, 0x10, 0x30, 0x7F, 0x7F, 0x30, 0x10, 0x00,
	0x08, 0x08, 0x08, 0x2A, 0x3E, 0x1C, 0x08, 0x00,
	0x08, 0x1C, 0x3E, 0x2A, 0x08, 0x08, 0x08, 0x00,
	0x3C, 0x3C, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00,
	0x08, 0x1C, 0x3E, 0x08, 0x08, 0x3E, 0x1C, 0x08,
	0x30, 0x38, 0x3C, 0x3E, 0x3E, 0x3C, 0x38, 0x30,
	0x06, 0x0E, 0x1E, 0x3E, 0x3E, 0x1E, 0x0E, 0x06,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x06, 0x5F, 0x5F, 0x06, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x00,
	0x14, 0x7F, 0x7F, 0x14, 0x7F, 0x7F, 0x14, 0x00,
	0x24, 0x2E, 0x6B, 0x6B, 0x3A, 0x12, 0x00, 0x00,
	0x46, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x62, 0x00,
	0x30, 0x7A, 0x4F, 0x5D, 0x37, 0x7A, 0x48, 0x00,
	0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1C, 0x3E, 0x63, 0x41, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x63, 0x3E, 0x1C, 0x00, 0x00, 0x00,
	0x08, 0x2A, 0x3E, 0x1C, 0x1C, 0x3E, 0x2A, 0x08,
	0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x00, 0x00,
	0x00, 0x80, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00,
	0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00,
	0x3E, 0x7F, 0x71, 0x59, 0x4D, 0x7F, 0x3E, 0x00,
	0x40, 0x42, 0x7F, 0x7F, 0x40, 0x40, 0x00, 0x00,
	0x62, 0x73, 0x59, 0x49, 0x6F, 0x66, 0x00, 0x00,
	0x22, 0x63, 0x49, 0x49, 0x7F, 0x36, 0x00, 0x00,
	0x18, 0x1C, 0x16, 0x53, 0x7F, 0x7F, 0x50, 0x00,
	0x27, 0x67, 0x45, 0x45, 0x7D, 0x39, 0x00, 0x00,
	0x3C, 0x7E, 0x4B, 0x49, 0x79, 0x30, 0x00, 0x00,
	0x03, 0x03, 0x71, 0x79, 0x0F, 0x07, 0x00, 0x00,
	0x36, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00, 0x00,
	0x06, 0x4F, 0x49, 0x69, 0x3F, 0x1E, 0x00, 0x00,
	0x00, 0x00, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x80, 0xE6, 0x66, 0x00, 0x00, 0x00, 0x00,
	0x08, 0x1C, 0x36, 0x63, 0x41, 0x00, 0x00, 0x00,
	0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00,
	0x00, 0x41, 0x63, 0x36, 0x1C, 0x08, 0x00, 0x00,
	0x02, 0x03, 0x51, 0x59, 0x0F, 0x06, 0x00, 0x00,
	0x3E, 0x7F, 0x41, 0x5D, 0x5D, 0x1F, 0x1E, 0x00,
	0x7C, 0x7E, 0x13, 0x13, 0x7E, 0x7C, 0x00, 0x00,
	0x41, 0x7F, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00,
	0x1C, 0x3E, 0x63, 0x41, 0x41, 0x63, 0x22, 0x00,
	0x41, 0x7F, 0x7F, 0x41, 0x63, 0x3E, 0x1C, 0x00,
	0x41, 0x7F, 0x7F, 0x49, 0x5D, 0x41, 0x63, 0x00,
	0x41, 0x7F, 0x7F, 0x49, 0x1D, 0x01, 0x03, 0x00,
	0x1C, 0x3E, 0x63, 0x41, 0x51, 0x73, 0x72, 0x00,
	0x7F, 0x7F, 0x08, 0x08, 0x7F, 0x7F, 0x00, 0x00,
	0x00, 0x41, 0x7F, 0x7F, 0x41, 0x00, 0x00, 0x00,
	0x30, 0x70, 0x40, 0x41, 0x7F, 0x3F, 0x01, 0x00,
	0x41, 0x7F, 0x7F, 0x08, 0x1C, 0x77, 0x63, 0x00,
	0x41, 0x7F, 0x7F, 0x41, 0x40, 0x60, 0x70, 0x00,
	0x7F, 0x7F, 0x0E, 0x1C, 0x0E, 0x7F, 0x7F, 0x00,
	0x7F, 0x7F, 0x06, 0x0C, 0x18, 0x7F, 0x7F, 0x00,
	0x1C, 0x3E, 0x63, 0x41, 0x63, 0x3E, 0x1C, 0x00,
	0x41, 0x7F, 0x7F, 0x49, 0x09, 0x0F, 0x06, 0x00,
	0x1E, 0x3F, 0x21, 0x71, 0x7F, 0x5E, 0x00, 0x00,
	0x41, 0x7F, 0x7F, 0x09, 0x19, 0x7F, 0x66, 0x00,
	0x26, 0x6F, 0x4D, 0x59, 0x73, 0x32, 0x00, 0x00,
	0x03, 0x41, 0x7F, 0x7F, 0x41, 0x03, 0x00, 0x00,
	0x7F, 0x7F, 0x40, 0x40, 0x7F, 0x7F, 0x00, 0x00,
	0x1F, 0x3F, 0x60, 0x60, 0x3F, 0x1F, 0x00, 0x00,
	0x7F, 0x7F, 0x30, 0x18, 0x30, 0x7F, 0x7F, 0x00,
	0x43, 0x67, 0x3C, 0x18, 0x3C, 0x67, 0x43, 0x00,
	0x07, 0x4F, 0x78, 0x78, 0x4F, 0x07, 0x00, 0x00,
	0x47, 0x63, 0x71, 0x59, 0x4D, 0x67, 0x73, 0x00,
	0x00, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00, 0x00,
	0x01, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00,
	0x00, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00, 0x00,
	0x08, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x08, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x00, 0x00, 0x03, 0x07, 0x04, 0x00, 0x00, 0x00,
	0x20, 0x74, 0x54, 0x54, 0x3C, 0x78, 0x40, 0x00,
	0x41, 0x7F, 0x3F, 0x48, 0x48, 0x78, 0x30, 0x00,
	0x38, 0x7C, 0x44, 0x44, 0x6C, 0x28, 0x00, 0x00,
	0x30, 0x78, 0x48, 0x49, 0x3F, 0x7F, 0x40, 0x00,
	0x38, 0x7C, 0x54, 0x54, 0x5C, 0x18, 0x00, 0x00,
	0x48, 0x7E, 0x7F, 0x49, 0x03, 0x02, 0x00, 0x00,
	0x98, 0xBC, 0xA4, 0xA4, 0xF8, 0x7C, 0x04, 0x00,
	0x41, 0x7F, 0x7F, 0x08, 0x04, 0x7C, 0x78, 0x00,
	0x00, 0x44, 0x7D, 0x7D, 0x40, 0x00, 0x00, 0x00,
	0x60, 0xE0, 0x80, 0x80, 0xFD, 0x7D, 0x00, 0x00,
	0x41, 0x7F, 0x7F, 0x10, 0x38, 0x6C, 0x44, 0x00,
	0x00, 0x41, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00,
	0x7C, 0x7C, 0x18, 0x38, 0x1C, 0x7C, 0x78, 0x00,
	0x7C, 0x7C, 0x04, 0x04, 0x7C, 0x78, 0x00, 0x00,
	0x38, 0x7C, 0x44, 0x44, 0x7C, 0x38, 0x00, 0x00,
	0x84, 0xFC, 0xF8, 0xA4, 0x24, 0x3C, 0x18, 0x00,
	0x18, 0x3C, 0x24, 0xA4, 0xF8, 0xFC, 0x84, 0x00,
	0x44, 0x7C, 0x78, 0x4C, 0x04, 0x1C, 0x18, 0x00,
	0x48, 0x5C, 0x54, 0x54, 0x74, 0x24, 0x00, 0x00,
	0x00, 0x04, 0x3E, 0x7F, 0x44, 0x24, 0x00, 0x00,
	0x3C, 0x7C, 0x40, 0x40, 0x3C, 0x7C, 0x40, 0x00,
	0x1C, 0x3C, 0x60, 0x60, 0x3C, 0x1C, 0x00, 0x00,
	0x3C, 0x7C, 0x70, 0x38, 0x70, 0x7C, 0x3C, 0x00,
	0x44, 0x6C, 0x38, 0x10, 0x38, 0x6C, 0x44, 0x00,
	0x9C, 0xBC, 0xA0, 0xA0, 0xFC, 0x7C, 0x00, 0x00,
	0x4C, 0x64, 0x74, 0x5C, 0x4C, 0x64, 0x00, 0x00,
	0x08, 0x08, 0x3E, 0x77, 0x41, 0x41, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x77, 0x77, 0x00, 0x00, 0x00,
	0x41, 0x41, 0x77, 0x3E, 0x08, 0x08, 0x00, 0x00,
	0x02, 0x03, 0x01, 0x03, 0x02, 0x03, 0x01, 0x00,
	0x70, 0x78, 0x4C, 0x46, 0x4C, 0x78, 0x70, 0x00,
	0x0E, 0x9F, 0x91, 0xB1, 0xFB, 0x4A, 0x00, 0x00,
	0x3A, 0x7A, 0x40, 0x40, 0x7A, 0x7A, 0x40, 0x00,
	0x38, 0x7C, 0x54, 0x55, 0x5D, 0x19, 0x00, 0x00,
	0x02, 0x23, 0x75, 0x55, 0x55, 0x7D, 0x7B, 0x42,
	0x21, 0x75, 0x54, 0x54, 0x7D, 0x79, 0x40, 0x00,
	0x21, 0x75, 0x55, 0x54, 0x7C, 0x78, 0x40, 0x00,
	0x20, 0x74, 0x57, 0x57, 0x7C, 0x78, 0x40, 0x00,
	0x18, 0x3C, 0xA4, 0xA4, 0xE4, 0x40, 0x00, 0x00,
	0x02, 0x3B, 0x7D, 0x55, 0x55, 0x5D, 0x1B, 0x02,
	0x39, 0x7D, 0x54, 0x54, 0x5D, 0x19, 0x00, 0x00,
	0x39, 0x7D, 0x55, 0x54, 0x5C, 0x18, 0x00, 0x00,
	0x01, 0x45, 0x7C, 0x7C, 0x41, 0x01, 0x00, 0x00,
	0x02, 0x03, 0x45, 0x7D, 0x7D, 0x43, 0x02, 0x00,
	0x01, 0x45, 0x7D, 0x7C, 0x40, 0x00, 0x00, 0x00,
	0x79, 0x7D, 0x16, 0x12, 0x16, 0x7D, 0x79, 0x00,
	0x70, 0x78, 0x2B, 0x2B, 0x78, 0x70, 0x00, 0x00,
	0x44, 0x7C, 0x7C, 0x55, 0x55, 0x45, 0x00, 0x00,
	0x20, 0x74, 0x54, 0x54, 0x7C, 0x7C, 0x54, 0x54,
	0x7C, 0x7E, 0x0B, 0x09, 0x7F, 0x7F, 0x49, 0x00,
	0x32, 0x7B, 0x49, 0x49, 0x7B, 0x32, 0x00, 0x00,
	0x32, 0x7A, 0x48, 0x48, 0x7A, 0x32, 0x00, 0x00,
	0x32, 0x7A, 0x4A, 0x48, 0x78, 0x30, 0x00, 0x00,
	0x3A, 0x7B, 0x41, 0x41, 0x7B, 0x7A, 0x40, 0x00,
	0x3A, 0x7A, 0x42, 0x40, 0x78, 0x78, 0x40, 0x00,
	0x9A, 0xBA, 0xA0, 0xA0, 0xFA, 0x7A, 0x00, 0x00,
	0x01, 0x19, 0x3C, 0x66, 0x66, 0x3C, 0x19, 0x01,
	0x3D, 0x7D, 0x40, 0x40, 0x7D, 0x3D, 0x00, 0x00,
	0x18, 0x3C, 0x24, 0xE7, 0xE7, 0x24, 0x24, 0x00,
	0x68, 0x7E, 0x7F, 0x49, 0x43, 0x66, 0x20, 0x00,
	0x2B, 0x2F, 0xFC, 0xFC, 0x2F, 0x2B, 0x00, 0x00,
	0xFF, 0xFF, 0x09, 0x09, 0x2F, 0xF6, 0xF8, 0xA0,
	0x40, 0xC0, 0x88, 0xFE, 0x7F, 0x09, 0x03, 0x02,
	0x20, 0x74, 0x54, 0x55, 0x7D, 0x79, 0x40, 0x00,
	0x00, 0x44, 0x7D, 0x7D, 0x41, 0x00, 0x00, 0x00,
	0x30, 0x78, 0x48, 0x4A, 0x7A, 0x32, 0x00, 0x00,
	0x38, 0x78, 0x40, 0x42, 0x7A, 0x7A, 0x40, 0x00,
	0x7A, 0x7A, 0x0A, 0x0A, 0x7A, 0x70, 0x00, 0x00,
	0x7D, 0x7D, 0x19, 0x31, 0x7D, 0x7D, 0x00, 0x00,
	0x00, 0x26, 0x2F, 0x29, 0x2F, 0x2F, 0x28, 0x00,
	0x00, 0x26, 0x2F, 0x29, 0x2F, 0x26, 0x00, 0x00,
	0x30, 0x78, 0x4D, 0x45, 0x60, 0x20, 0x00, 0x00,
	0x38, 0x38, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x08, 0x08, 0x08, 0x08, 0x38, 0x38, 0x00, 0x00,
	0x4F, 0x6F, 0x30, 0x18, 0xCC, 0xEE, 0xBB, 0x91,
	0x4F, 0x6F, 0x30, 0x18, 0x6C, 0x76, 0xFB, 0xF9,
	0x00, 0x00, 0x00, 0x7B, 0x7B, 0x00, 0x00, 0x00,
	0x08, 0x1C, 0x36, 0x22, 0x08, 0x1C, 0x36, 0x22,
	0x22, 0x36, 0x1C, 0x08, 0x22, 0x36, 0x1C, 0x08,
	0xAA, 0x00, 0x55, 0x00, 0xAA, 0x00, 0x55, 0x00,
	0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55,
	0xDD, 0xFF, 0xAA, 0x77, 0xDD, 0xAA, 0xFF, 0x77,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x10, 0x10, 0x10, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x14, 0x14, 0x14, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x10, 0x10, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0x10, 0x10, 0xF0, 0xF0, 0x10, 0xF0, 0xF0, 0x00,
	0x14, 0x14, 0x14, 0xFC, 0xFC, 0x00, 0x00, 0x00,
	0x14, 0x14, 0xF7, 0xF7, 0x00, 0xFF, 0xFF, 0x00,
	0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
	0x14, 0x14, 0xF4, 0xF4, 0x04, 0xFC, 0xFC, 0x00,
	0x14, 0x14, 0x17, 0x17, 0x10, 0x1F, 0x1F, 0x00,
	0x10, 0x10, 0x1F, 0x1F, 0x10, 0x1F, 0x1F, 0x00,
	0x14, 0x14, 0x14, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x10, 0x10, 0x10, 0xF0, 0xF0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0xF0, 0xF0, 0x10, 0x10, 0x10,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0xFF, 0xFF, 0x10, 0x10, 0x10,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x14, 0x14, 0x14,
	0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x10,
	0x00, 0x00, 0x1F, 0x1F, 0x10, 0x17, 0x17, 0x14,
	0x00, 0x00, 0xFC, 0xFC, 0x04, 0xF4, 0xF4, 0x14,
	0x14, 0x14, 0x17, 0x17, 0x10, 0x17, 0x17, 0x14,
	0x14, 0x14, 0xF4, 0xF4, 0x04, 0xF4, 0xF4, 0x14,
	0x00, 0x00, 0xFF, 0xFF, 0x00, 0xF7, 0xF7, 0x14,
	0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
	0x14, 0x14, 0xF7, 0xF7, 0x00, 0xF7, 0xF7, 0x14,
	0x14, 0x14, 0x14, 0x17, 0x17, 0x14, 0x14, 0x14,
	0x10, 0x10, 0x1F, 0x1F, 0x10, 0x1F, 0x1F, 0x10,
	0x14, 0x14, 0x14, 0xF4, 0xF4, 0x14, 0x14, 0x14,
	0x10, 0x10, 0xF0, 0xF0, 0x10, 0xF0, 0xF0, 0x10,
	0x00, 0x00, 0x1F, 0x1F, 0x10, 0x1F, 0x1F, 0x10,
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x14, 0x14, 0x14,
	0x00, 0x00, 0x00, 0xFC, 0xFC, 0x14, 0x14, 0x14,
	0x00, 0x00, 0xF0, 0xF0, 0x10, 0xF0, 0xF0, 0x10,
	0x10, 0x10, 0xFF, 0xFF, 0x10, 0xFF, 0xFF, 0x10,
	0x14, 0x14, 0x14, 0xFF, 0xFF, 0x14, 0x14, 0x14,
	0x10, 0x10, 0x10, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xF0, 0xF0, 0x10, 0x10, 0x10,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
	0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
	0x38, 0x7C, 0x44, 0x6C, 0x38, 0x6C, 0x44, 0x00,
	0xFC, 0xFE, 0x2A, 0x2A, 0x3E, 0x14, 0x00, 0x00,
	0x7E, 0x7E, 0x02, 0x02, 0x06, 0x06, 0x00, 0x00,
	0x02, 0x7E, 0x7E, 0x02, 0x7E, 0x7E, 0x02, 0x00,
	0x63, 0x77, 0x5D, 0x49, 0x63, 0x63, 0x00, 0x00,
	0x38, 0x7C, 0x44, 0x7C, 0x3C, 0x04, 0x04, 0x00,
	0x80, 0xFE, 0x7E, 0x20, 0x20, 0x3E, 0x1E, 0x00,
	0x04, 0x06, 0x02, 0x7E, 0x7C, 0x06, 0x02, 0x00,
	0x99, 0xBD, 0xE7, 0xE7, 0xBD, 0x99, 0x00, 0x00,
	0x1C, 0x3E, 0x6B, 0x49, 0x6B, 0x3E, 0x1C, 0x00,
	0x4C, 0x7E, 0x73, 0x01, 0x73, 0x7E, 0x4C, 0x00,
	0x30, 0x78, 0x4A, 0x4F, 0x7D, 0x39, 0x00, 0x00,
	0x18, 0x3C, 0x24, 0x3C, 0x3C, 0x24, 0x3C, 0x18,
	0x98, 0xFC, 0x64, 0x3C, 0x3E, 0x27, 0x3D, 0x18,
	0x1C, 0x3E, 0x6B, 0x49, 0x49, 0x00, 0x00, 0x00,
	0x7E, 0x7F, 0x01, 0x01, 0x7F, 0x7E, 0x00, 0x00,
	0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x00, 0x00,
	0x44, 0x44, 0x5F, 0x5F, 0x44, 0x44, 0x00, 0x00,
	0x40, 0x51, 0x5B, 0x4E, 0x44, 0x40, 0x00, 0x00,
	0x40, 0x44, 0x4E, 0x5B, 0x51, 0x40, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFE, 0xFF, 0x01, 0x07, 0x06,
	0x60, 0xE0, 0x80, 0xFF, 0x7F, 0x00, 0x00, 0x00,
	0x08, 0x08, 0x6B, 0x6B, 0x08, 0x08, 0x00, 0x00,
	0x24, 0x36, 0x12, 0x36, 0x24, 0x36, 0x12, 0x00,
	0x00, 0x06, 0x0F, 0x09, 0x0F, 0x06, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00,
	0x10, 0x30, 0x70, 0xC0, 0xFF, 0xFF, 0x01, 0x01,
	0x00, 0x1F, 0x1F, 0x01, 0x1F, 0x1E, 0x00, 0x00,
	0x00, 0x19, 0x1D, 0x17, 0x12, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00,
	0x08, 0x00, 0x40, 0x60, 0x74, 0x5C, 0x48, 0x00,
};

#endif

