///////////////////////////////////////////////////////////////////////////////
//
//  Font "HD44780u.h" for the Noritake GU128X64E-U100 VFD display
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

#ifndef HD44780U_H
#define HD44780U_H

#define hd44780u (pgm_get_far_address(_hd44780u))

static const uint8_t _hd44780u[] PROGMEM = {

	0x06, // width (base + 0)
	0x08, // height (base + 1)
	0x00, // horizontal gap (base + 2)
	0x00, // vertical gap (base + 3)
	0x10, // first char (base + 4)
	0xFF, // last char (base + 5)
	0x06, // bytes per char (base + 6)

	// note character bitmaps 0x10 to 0x19 have been
	// added to this file. the data comes from the
	// Noritake G57131.cg character generator ROM file
	// used in the U series Noritake character VFD
	// display modules AKA the "Katakana" font.

	0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, // |     0x10
	0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, // ||    0x11
	0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, // |||   0x12
	0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, // ||||  0x13
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, // ||||| 0x14
	0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, //  |||| 0x15
	0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x00, //   ||| 0x16
	0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, //    || 0x17
	0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, //     | 0x18
	0x60, 0x70, 0x3F, 0x02, 0x1C, 0x00, // Music note 0x19
	0x03, 0x33, 0x48, 0x48, 0x48, 0x00, // Deg C 0x1A
	0x03, 0x7B, 0x28, 0x28, 0x08, 0x00, // Deg F 0x1B
	0x04, 0x0C, 0x1C, 0x0C, 0x04, 0x00, // Down  0x1C
	0x00, 0x3E, 0x1C, 0x08, 0x00, 0x00, // Right 0x1D
	0x00, 0x08, 0x1C, 0x3E, 0x00, 0x00, // Left  0x1E
	0x10, 0x18, 0x1C, 0x18, 0x10, 0x00, // Up    0x1F

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // SPACE 0x20
	0x00, 0x00, 0x5F, 0x00, 0x00, 0x00, // ! 0x21
	0x00, 0x07, 0x00, 0x07, 0x00, 0x00, // " 0x22
	0x14, 0x7F, 0x14, 0x7F, 0x14, 0x00, // # 0x23
	0x24, 0x2A, 0x7F, 0x2A, 0x12, 0x00, // $ 0x24
	0x23, 0x13, 0x08, 0x64, 0x62, 0x00, // % 0x25
	0x36, 0x49, 0x55, 0x22, 0x50, 0x00, // & 0x26
	0x00, 0x05, 0x03, 0x00, 0x00, 0x00, // ' 0x27
	0x00, 0x1C, 0x22, 0x41, 0x00, 0x00, // ( 0x28
	0x00, 0x41, 0x22, 0x1C, 0x00, 0x00, // ) 0x29
	0x14, 0x08, 0x3E, 0x08, 0x14, 0x00, // * 0x2A
	0x08, 0x08, 0x3E, 0x08, 0x08, 0x00, // + 0x2B
	0x00, 0x50, 0x30, 0x00, 0x00, 0x00, // , 0x2C
	0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // - 0x2D
	0x00, 0x60, 0x60, 0x00, 0x00, 0x00, // . 0x2E
	0x20, 0x10, 0x08, 0x04, 0x02, 0x00, // / 0x2F
	0x3E, 0x51, 0x49, 0x45, 0x3E, 0x00, // 0 0x30
	0x00, 0x42, 0x7F, 0x40, 0x00, 0x00, // 1 0x31
	0x42, 0x61, 0x51, 0x49, 0x46, 0x00, // 2 0x32
	0x21, 0x41, 0x45, 0x4B, 0x31, 0x00, // 3 0x33
	0x18, 0x14, 0x12, 0x7F, 0x10, 0x00, // 4 0x34
	0x27, 0x45, 0x45, 0x45, 0x39, 0x00, // 5 0x35
	0x3C, 0x4A, 0x49, 0x49, 0x30, 0x00, // 6 0x36
	0x01, 0x71, 0x09, 0x05, 0x03, 0x00, // 7 0x37
	0x36, 0x49, 0x49, 0x49, 0x36, 0x00, // 8 0x38
	0x06, 0x49, 0x49, 0x29, 0x1E, 0x00, // 9 0x39
	0x00, 0x36, 0x36, 0x00, 0x00, 0x00, // : 0x3A
	0x00, 0x56, 0x36, 0x00, 0x00, 0x00, // ; 0x3B
	0x08, 0x14, 0x22, 0x41, 0x00, 0x00, // < 0x3C
	0x14, 0x14, 0x14, 0x14, 0x14, 0x00, // = 0x3D
	0x00, 0x41, 0x22, 0x14, 0x08, 0x00, // > 0x3E
	0x02, 0x01, 0x51, 0x09, 0x06, 0x00, // ? 0x3F
	0x32, 0x49, 0x79, 0x41, 0x3E, 0x00, // @ 0x40
	0x7E, 0x11, 0x11, 0x11, 0x7E, 0x00, // A 0x41
	0x7F, 0x49, 0x49, 0x49, 0x36, 0x00, // B 0x42
	0x3E, 0x41, 0x41, 0x41, 0x22, 0x00, // C 0x43
	0x7F, 0x41, 0x41, 0x22, 0x1C, 0x00, // D 0x44
	0x7F, 0x49, 0x49, 0x49, 0x41, 0x00, // E 0x45
	0x7F, 0x09, 0x09, 0x09, 0x01, 0x00, // F 0x46
	0x3E, 0x41, 0x41, 0x51, 0x32, 0x00, // G 0x47
	0x7F, 0x08, 0x08, 0x08, 0x7F, 0x00, // H 0x48
	0x00, 0x41, 0x7F, 0x41, 0x00, 0x00, // I 0x49
	0x20, 0x40, 0x41, 0x3F, 0x01, 0x00, // J 0x4A
	0x7F, 0x08, 0x14, 0x22, 0x41, 0x00, // K 0x4B
	0x7F, 0x40, 0x40, 0x40, 0x40, 0x00, // L 0x4C
	0x7F, 0x02, 0x0C, 0x02, 0x7F, 0x00, // M 0x4D
	0x7F, 0x04, 0x08, 0x10, 0x7F, 0x00, // N 0x4E
	0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00, // O 0x4F
	0x7F, 0x09, 0x09, 0x09, 0x06, 0x00, // P 0x50
	0x3E, 0x41, 0x51, 0x21, 0x5E, 0x00, // Q 0x51
	0x7F, 0x09, 0x19, 0x29, 0x46, 0x00, // R 0x52
	0x46, 0x49, 0x49, 0x49, 0x31, 0x00, // S 0x53
	0x01, 0x01, 0x7F, 0x01, 0x01, 0x00, // T 0x54
	0x3F, 0x40, 0x40, 0x40, 0x3F, 0x00, // U 0x55
	0x1F, 0x20, 0x40, 0x20, 0x1F, 0x00, // V 0x56
	0x3F, 0x40, 0x38, 0x40, 0x3F, 0x00, // W 0x57
	0x63, 0x14, 0x08, 0x14, 0x63, 0x00, // X 0x58
	0x07, 0x08, 0x70, 0x08, 0x07, 0x00, // Y 0x59
	0x61, 0x51, 0x49, 0x45, 0x43, 0x00, // Z 0x5A
	0x00, 0x7F, 0x41, 0x41, 0x00, 0x00, // [ 0x5B
	0x02, 0x04, 0x08, 0x10, 0x20, 0x00, // \ 0x5C
	0x00, 0x41, 0x41, 0x7F, 0x00, 0x00, // ] 0x5D
	0x04, 0x02, 0x01, 0x02, 0x04, 0x00, // ^ 0x5E
	0x40, 0x40, 0x40, 0x40, 0x40, 0x00, // _ 0x5F
	0x00, 0x01, 0x02, 0x04, 0x00, 0x00, // ` 0x60
	0x20, 0x54, 0x54, 0x54, 0x78, 0x00, // a 0x61
	0x7F, 0x48, 0x44, 0x44, 0x38, 0x00, // b 0x62
	0x38, 0x44, 0x44, 0x44, 0x20, 0x00, // c 0x63
	0x38, 0x44, 0x44, 0x48, 0x7F, 0x00, // d 0x64
	0x38, 0x54, 0x54, 0x54, 0x18, 0x00, // e 0x65
	0x08, 0x7E, 0x09, 0x01, 0x02, 0x00, // f 0x66
	0x0C, 0x52, 0x52, 0x52, 0x3E, 0x00, // g 0x67
	0x7F, 0x08, 0x04, 0x04, 0x78, 0x00, // h 0x68
	0x00, 0x44, 0x7D, 0x40, 0x00, 0x00, // i 0x69
	0x20, 0x40, 0x44, 0x3D, 0x00, 0x00, // j 0x6A
	0x00, 0x7F, 0x10, 0x28, 0x44, 0x00, // k 0x6B
	0x00, 0x41, 0x7F, 0x40, 0x00, 0x00, // l 0x6C
	0x7C, 0x04, 0x18, 0x04, 0x78, 0x00, // m 0x6D
	0x7C, 0x08, 0x04, 0x04, 0x78, 0x00, // n 0x6E
	0x38, 0x44, 0x44, 0x44, 0x38, 0x00, // o 0x6F
	0x7C, 0x14, 0x14, 0x14, 0x08, 0x00, // p 0x70
	0x08, 0x14, 0x14, 0x18, 0x7C, 0x00, // q 0x71
	0x7C, 0x08, 0x04, 0x04, 0x08, 0x00, // r 0x72
	0x48, 0x54, 0x54, 0x54, 0x20, 0x00, // s 0x73
	0x04, 0x3F, 0x44, 0x40, 0x20, 0x00, // t 0x74
	0x3C, 0x40, 0x40, 0x20, 0x7C, 0x00, // u 0x75
	0x1C, 0x20, 0x40, 0x20, 0x1C, 0x00, // v 0x76
	0x3C, 0x40, 0x30, 0x40, 0x3C, 0x00, // w 0x77
	0x44, 0x28, 0x10, 0x28, 0x44, 0x00, // x 0x78
	0x0C, 0x50, 0x50, 0x50, 0x3C, 0x00, // y 0x79
	0x44, 0x64, 0x54, 0x4C, 0x44, 0x00, // z 0x7A
	0x00, 0x08, 0x36, 0x41, 0x00, 0x00, // { 0x7B
	0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, // | 0x7C
	0x00, 0x41, 0x36, 0x08, 0x00, 0x00, // } 0x7D
	0x10, 0x08, 0x08, 0x10, 0x08, 0x00, // ~ 0x7E
	0x08, 0x1C, 0x2A, 0x08, 0x08, 0x00, //  0x7F
	0x14, 0x3E, 0x55, 0x41, 0x22, 0x00, // 0x80
	0x78, 0x15, 0x14, 0x11, 0x80, 0x00, // 0x81
	0x00, 0x50, 0x30, 0x00, 0x00, 0x00, // 0x82
	0x20, 0x48, 0x3E, 0x09, 0x02, 0x00, // 0x83
	0x60, 0x50, 0x00, 0x60, 0x50, 0x00, // 0x84
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, // 0x85
	0x00, 0x02, 0x7F, 0x02, 0x00, 0x00, // 0x86
	0x00, 0x22, 0x7F, 0x22, 0x00, 0x00, // 0x87
	0x00, 0x02, 0x01, 0x02, 0x00, 0x00, // 0x88
	0x62, 0x6A, 0x04, 0x62, 0x61, 0x00, // 0x89
	0x26, 0x4A, 0x49, 0x4A, 0x32, 0x00, // 0x8A
	0x00, 0x08, 0x14, 0x00, 0x00, 0x00, // 0x8B
	0x3E, 0x41, 0x41, 0x3E, 0x49, 0x00, // 0x8C
	0x01, 0x7F, 0x48, 0x48, 0x30, 0x00, // 0x8D
	0x61, 0x52, 0x49, 0x46, 0x43, 0x00, // 0x8E
	0x22, 0x49, 0x45, 0x49, 0x3E, 0x00, // 0x8F
	0x38, 0x44, 0x48, 0x30, 0x4C, 0x00, // 0x90
	0x00, 0x01, 0x02, 0x04, 0x00, 0x00, // 0x91
	0x00, 0x04, 0x02, 0x01, 0x00, 0x00, // 0x92
	0x01, 0x02, 0x05, 0x02, 0x04, 0x00, // 0x93
	0x04, 0x02, 0x05, 0x02, 0x01, 0x00, // 0x94
	0x00, 0x1C, 0x1C, 0x1C, 0x00, 0x00, // 0x95
	0x00, 0x08, 0x08, 0x08, 0x08, 0x00, // 0x96
	0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // 0x97
	0x01, 0x01, 0x01, 0x02, 0x01, 0x00, // 0x98
	0x79, 0x2E, 0x2B, 0x29, 0x29, 0x00, // 0x99
	0x48, 0x55, 0x55, 0x55, 0x20, 0x00, // 0x9A
	0x00, 0x44, 0x28, 0x10, 0x00, 0x00, // 0x9B
	0x38, 0x44, 0x38, 0x54, 0x58, 0x00, // 0x9C
	0x1C, 0x3E, 0x7C, 0x3E, 0x1C, 0x00, // 0x9D
	0x44, 0x65, 0x55, 0x4D, 0x44, 0x00, // 0x9E
	0x0E, 0x11, 0x60, 0x11, 0x0E, 0x00, // 0x9F
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //   unicode 0xC2A0 (@nbsp;)
	0x00, 0x00, 0x79, 0x00, 0x00, 0x00, // ¡ unicode 0xC2A1
	0x1C, 0x22, 0x7F, 0x22, 0x10, 0x00, // ¢ unicode 0xC2A2
	0x48, 0x3E, 0x49, 0x41, 0x20, 0x00, // £ unicode 0xC2A3
	0x22, 0x1C, 0x14, 0x1C, 0x22, 0x00, // ¤ unicode 0xC2A4
	0x15, 0x16, 0x7C, 0x16, 0x15, 0x00, // ¥ unicode 0xC2A5
	0x00, 0x00, 0x77, 0x00, 0x00, 0x00, // ¦ unicode 0xC2A6
	0x20, 0x4A, 0x55, 0x29, 0x02, 0x00, // § unicode 0xC2A7
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, // ¨ unicode 0xC2A8
	0x3E, 0x41, 0x5D, 0x49, 0x3E, 0x00, // © unicode 0xC2A9
	0x48, 0x55, 0x55, 0x55, 0x5E, 0x00, // ª unicode 0xC2AA
	0x10, 0x28, 0x54, 0x28, 0x44, 0x00, // « unicode 0xC2AB
	0x10, 0x10, 0x10, 0x10, 0x70, 0x00, // ¬ unicode 0xC2AC
	0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // - unicode 0xC2AD
	0x3E, 0x41, 0x65, 0x51, 0x3E, 0x00, // ® unicode 0xC2AE
	0x01, 0x01, 0x01, 0x01, 0x01, 0x00, // ¯ unicode 0xC2AF
	0x06, 0x09, 0x09, 0x06, 0x00, 0x00, // ° unicode 0xC2B0
	0x44, 0x44, 0x5F, 0x44, 0x44, 0x00, // ± unicode 0xC2B1
	0x0A, 0x09, 0x0D, 0x0A, 0x00, 0x00, // ² unicode 0xC2B2
	0x09, 0x0B, 0x0B, 0x05, 0x00, 0x00, // ³ unicode 0xC2B3
	0x00, 0x04, 0x02, 0x01, 0x00, 0x00, // ´ unicode 0xC2B4
	0x00, 0xFC, 0x40, 0x40, 0x3C, 0x00, // μ unicode 0xC2B5
	0x06, 0x09, 0x09, 0x7F, 0x7F, 0x00, // ¶ unicode 0xC2B6
	0x00, 0x18, 0x18, 0x00, 0x00, 0x00, // · unicode 0xC2B7
	0x00, 0x40, 0x58, 0x20, 0x00, 0x00, // ¸ unicode 0xC2B8
	0x0A, 0x0F, 0x08, 0x00, 0x00, 0x00, // ¹ unicode 0xC2B9
	0x00, 0x26, 0x29, 0x29, 0x26, 0x00, // º unicode 0xC2BA
	0x22, 0x14, 0x2A, 0x14, 0x08, 0x00, // » unicode 0xC2BB
	0x17, 0x08, 0x34, 0x22, 0x71, 0x00, // ¼ unicode 0xC2BC
	0x17, 0x08, 0x54, 0x6A, 0x51, 0x00, // ½ unicode 0xC2BD
	0x15, 0x0F, 0x3F, 0x22, 0x71, 0x00, // ¾ unicode 0xC2BE
	0x30, 0x48, 0x45, 0x40, 0x20, 0x00, // ¿ unicode 0xC2BF
	0x78, 0x15, 0x13, 0x14, 0x78, 0x00, // 0xC0
	0x78, 0x14, 0x13, 0x15, 0x78, 0x00, // 0xC1
	0x78, 0x15, 0x15, 0x15, 0x78, 0x00, // 0xC2
	0x79, 0x15, 0x15, 0x15, 0x79, 0x00, // 0xC3
	0x78, 0x15, 0x12, 0x15, 0x78, 0x00, // 0xC4
	0x78, 0x15, 0x17, 0x15, 0x78, 0x00, // 0xC5
	0x7C, 0x12, 0x7F, 0x49, 0x49, 0x00, // 0xC6
	0x0F, 0x11, 0x51, 0x71, 0x09, 0x00, // 0xC7
	0x7C, 0x55, 0x55, 0x54, 0x44, 0x00, // 0xC8
	0x7C, 0x54, 0x55, 0x55, 0x44, 0x00, // 0xC9
	0x7C, 0x55, 0x55, 0x55, 0x44, 0x00, // 0xCA
	0x7C, 0x55, 0x54, 0x55, 0x44, 0x00, // 0xCB
	0x00, 0x45, 0x7D, 0x44, 0x00, 0x00, // 0xCC
	0x00, 0x44, 0x7D, 0x45, 0x00, 0x00, // 0xCD
	0x00, 0x45, 0x7D, 0x45, 0x00, 0x00, // 0xCE
	0x00, 0x45, 0x7C, 0x45, 0x00, 0x00, // 0xCF
	0x08, 0x7F, 0x49, 0x41, 0x3E, 0x00, // 0xD0
	0x7D, 0x09, 0x11, 0x21, 0x7D, 0x00, // 0xD1
	0x3C, 0x43, 0x43, 0x42, 0x3C, 0x00, // 0xD2
	0x3C, 0x42, 0x43, 0x43, 0x3C, 0x00, // 0xD3
	0x38, 0x45, 0x45, 0x45, 0x38, 0x00, // 0xD4
	0x39, 0x45, 0x45, 0x45, 0x39, 0x00, // 0xD5
	0x3C, 0x43, 0x42, 0x43, 0x3C, 0x00, // 0xD6
	0x22, 0x14, 0x08, 0x14, 0x22, 0x00, // 0xD7
	0x20, 0x3E, 0x49, 0x3E, 0x02, 0x00, // 0xD8
	0x3E, 0x41, 0x41, 0x40, 0x3E, 0x00, // 0xD9
	0x3E, 0x40, 0x41, 0x41, 0x3E, 0x00, // 0xDA
	0x3C, 0x41, 0x41, 0x41, 0x3C, 0x00, // 0xDB
	0x3E, 0x41, 0x40, 0x41, 0x3E, 0x00, // 0xDC
	0x02, 0x04, 0x79, 0x05, 0x02, 0x00, // 0xDD
	0x41, 0x80, 0x12, 0x12, 0x0C, 0x00, // 0xDE
	0x40, 0x3E, 0x49, 0x49, 0x36, 0x00, // 0xDF
	0x20, 0x55, 0x55, 0x54, 0x78, 0x00, // 0xE0
	0x20, 0x54, 0x55, 0x55, 0x78, 0x00, // 0xE1
	0x20, 0x55, 0x55, 0x55, 0x78, 0x00, // 0xE2
	0x21, 0x55, 0x55, 0x55, 0x79, 0x00, // 0xE3
	0x20, 0x55, 0x54, 0x55, 0x78, 0x00, // 0xE4
	0x20, 0x55, 0x57, 0x55, 0x78, 0x00, // 0xE5
	0x32, 0x4A, 0x3C, 0x4A, 0x2C, 0x00, // 0xE6
	0x0C, 0x12, 0x52, 0x72, 0x08, 0x00, // 0xE7
	0x38, 0x55, 0x55, 0x54, 0x18, 0x00, // 0xE8
	0x38, 0x54, 0x55, 0x55, 0x18, 0x00, // 0xE9
	0x38, 0x55, 0x55, 0x55, 0x18, 0x00, // 0xEA
	0x38, 0x55, 0x54, 0x55, 0x18, 0x00, // 0xEB
	0x00, 0x49, 0x7D, 0x40, 0x00, 0x00, // 0xEC
	0x00, 0x48, 0x7D, 0x41, 0x00, 0x00, // 0xED
	0x00, 0x49, 0x7D, 0x41, 0x00, 0x00, // 0xEE
	0x00, 0x49, 0x7C, 0x41, 0x00, 0x00, // 0xEF
	0x25, 0x52, 0x55, 0x58, 0x30, 0x00, // 0xF0
	0x7D, 0x09, 0x05, 0x05, 0x79, 0x00, // 0xF1
	0x38, 0x45, 0x45, 0x44, 0x38, 0x00, // 0xF2
	0x38, 0x44, 0x45, 0x45, 0x38, 0x00, // 0xF3
	0x30, 0x4A, 0x49, 0x4A, 0x30, 0x00, // 0xF4
	0x32, 0x49, 0x49, 0x4A, 0x31, 0x00, // 0xF5
	0x38, 0x45, 0x44, 0x45, 0x38, 0x00, // 0xF6
	0x08, 0x08, 0x2A, 0x08, 0x08, 0x00, // 0xF7
	0x08, 0x54, 0x3E, 0x15, 0x08, 0x00, // 0xF8
	0x3C, 0x41, 0x41, 0x20, 0x7C, 0x00, // 0xF9
	0x3C, 0x40, 0x41, 0x21, 0x7C, 0x00, // 0xFA
	0x3C, 0x41, 0x41, 0x21, 0x7C, 0x00, // 0xFB
	0x3C, 0x41, 0x40, 0x21, 0x7C, 0x00, // 0xFC
	0x0C, 0x50, 0x52, 0x51, 0x3C, 0x00, // 0xFD
	0x7F, 0x14, 0x22, 0x1C, 0x00, 0x00, // 0xFE
	0x0C, 0x51, 0x50, 0x51, 0x3C, 0x00, // 0xFF
};

#endif // #ifndef HD44780U_H
