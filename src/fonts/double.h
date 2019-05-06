#ifndef DUB_H
#define DUB_H

static const uint8_t dub[] PROGMEM = {

	0x0C, // width (base + 0)
	0x10, // height (base + 1)
	0x00, // horizontal gap (base + 2)
	0x00, // vertical gap (base + 3)
	0x00, // first char (base + 4)
	0xFF, // last char (base + 5)
	0x0C, // bytes per char (base + 6)

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3E, 0x3E, 0x45, 0x45, 0x51, 0x51, 0x45, 0x45, 0x3E, 0x3E,
	0x00, 0x00, 0x3E, 0x3E, 0x6B, 0x6B, 0x6F, 0x6F, 0x6B, 0x6B, 0x3E, 0x3E,
	0x00, 0x00, 0x1C, 0x1C, 0x3E, 0x3E, 0x7C, 0x7C, 0x3E, 0x3E, 0x1C, 0x1C,
	0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x38, 0x38, 0x1C, 0x1C, 0x00, 0x00,
	0x00, 0x00, 0x30, 0x30, 0x36, 0x36, 0x7F, 0x7F, 0x36, 0x36, 0x30, 0x30,
	0x00, 0x00, 0x18, 0x18, 0x5C, 0x5C, 0x7E, 0x7E, 0x5C, 0x5C, 0x18, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00,
	0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x3C, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x3C, 0x00, 0x00,
	0xFF, 0xFF, 0xC3, 0xC3, 0xDB, 0xDB, 0xDB, 0xDB, 0xC3, 0xC3, 0xFF, 0xFF,
	0x00, 0x00, 0x30, 0x30, 0x48, 0x48, 0x4A, 0x4A, 0x36, 0x36, 0x0E, 0x0E,
	0x00, 0x00, 0x06, 0x06, 0x29, 0x29, 0x79, 0x79, 0x29, 0x29, 0x06, 0x06,
	0x00, 0x00, 0x60, 0x60, 0x70, 0x70, 0x3F, 0x3F, 0x02, 0x02, 0x04, 0x04,
	0x00, 0x00, 0x60, 0x60, 0x7E, 0x7E, 0x0A, 0x0A, 0x35, 0x35, 0x3F, 0x3F,
	0x00, 0x00, 0x2A, 0x2A, 0x1C, 0x1C, 0x36, 0x36, 0x1C, 0x1C, 0x2A, 0x2A,
	0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08,
	0x00, 0x00, 0x08, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x7F, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x14, 0x36, 0x36, 0x7F, 0x7F, 0x36, 0x36, 0x14, 0x14,
	0x00, 0x00, 0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00,
	0x00, 0x00, 0x06, 0x06, 0x09, 0x09, 0x7F, 0x7F, 0x01, 0x01, 0x7F, 0x7F,
	0x00, 0x00, 0x22, 0x22, 0x4D, 0x4D, 0x55, 0x55, 0x59, 0x59, 0x22, 0x22,
	0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x14, 0xB6, 0xB6, 0xFF, 0xFF, 0xB6, 0xB6, 0x14, 0x14,
	0x00, 0x00, 0x04, 0x04, 0x06, 0x06, 0x7F, 0x7F, 0x06, 0x06, 0x04, 0x04,
	0x00, 0x00, 0x10, 0x10, 0x30, 0x30, 0x7F, 0x7F, 0x30, 0x30, 0x10, 0x10,
	0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08,
	0x00, 0x00, 0x08, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x08, 0x08, 0x08, 0x08,
	0x00, 0x00, 0x78, 0x78, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x00, 0x00, 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08,
	0x00, 0x00, 0x30, 0x30, 0x3C, 0x3C, 0x3F, 0x3F, 0x3C, 0x3C, 0x30, 0x30,
	0x00, 0x00, 0x03, 0x03, 0x0F, 0x0F, 0x3F, 0x3F, 0x0F, 0x0F, 0x03, 0x03,
	0x00, 0x00, 0x3E, 0x3E, 0x41, 0x41, 0x5D, 0x5D, 0x55, 0x55, 0x1E, 0x1E,
	0x00, 0x00, 0x7E, 0x7E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x7E, 0x7E,
	0x00, 0x00, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x36, 0x36,
	0x00, 0x00, 0x3E, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x22, 0x22,
	0x00, 0x00, 0x7F, 0x7F, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3E, 0x3E,
	0x00, 0x00, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x41, 0x41,
	0x00, 0x00, 0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x01, 0x01,
	0x00, 0x00, 0x3E, 0x3E, 0x41, 0x41, 0x49, 0x49, 0x49, 0x49, 0x7A, 0x7A,
	0x00, 0x00, 0x7F, 0x7F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x7F, 0x7F,
	0x00, 0x00, 0x00, 0x00, 0x41, 0x41, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00,
	0x00, 0x00, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, 0x3F,
	0x00, 0x00, 0x7F, 0x7F, 0x08, 0x08, 0x14, 0x14, 0x22, 0x22, 0x41, 0x41,
	0x00, 0x00, 0x7F, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x00, 0x00, 0x7F, 0x7F, 0x02, 0x02, 0x04, 0x04, 0x02, 0x02, 0x7F, 0x7F,
	0x00, 0x00, 0x7F, 0x7F, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x7F, 0x7F,
	0x00, 0x00, 0x3E, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3E, 0x3E,
	0x00, 0x00, 0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x06, 0x06,
	0x00, 0x00, 0x3E, 0x3E, 0x41, 0x41, 0x51, 0x51, 0x21, 0x21, 0x5E, 0x5E,
	0x00, 0x00, 0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x19, 0x19, 0x66, 0x66,
	0x00, 0x00, 0x26, 0x26, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x32, 0x32,
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, 0x01, 0x01,
	0x00, 0x00, 0x3F, 0x3F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, 0x3F,
	0x00, 0x00, 0x1F, 0x1F, 0x20, 0x20, 0x40, 0x40, 0x20, 0x20, 0x1F, 0x1F,
	0x00, 0x00, 0x3F, 0x3F, 0x40, 0x40, 0x3C, 0x3C, 0x40, 0x40, 0x3F, 0x3F,
	0x00, 0x00, 0x63, 0x63, 0x14, 0x14, 0x08, 0x08, 0x14, 0x14, 0x63, 0x63,
	0x00, 0x00, 0x07, 0x07, 0x08, 0x08, 0x70, 0x70, 0x08, 0x08, 0x07, 0x07,
	0x00, 0x00, 0x71, 0x71, 0x49, 0x49, 0x45, 0x45, 0x43, 0x43, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x41, 0x41, 0x41, 0x41, 0x00, 0x00,
	0x00, 0x00, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20,
	0x00, 0x00, 0x00, 0x00, 0x41, 0x41, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x00, 0x00, 0x1E, 0x1E, 0xA1, 0xA1, 0xE1, 0xE1, 0x21, 0x21, 0x12, 0x12,
	0x00, 0x00, 0x3D, 0x3D, 0x40, 0x40, 0x20, 0x20, 0x7D, 0x7D, 0x00, 0x00,
	0x00, 0x00, 0x38, 0x38, 0x54, 0x54, 0x54, 0x54, 0x55, 0x55, 0x09, 0x09,
	0x00, 0x00, 0x20, 0x20, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x78, 0x78,
	0x00, 0x00, 0x20, 0x20, 0x55, 0x55, 0x54, 0x54, 0x55, 0x55, 0x78, 0x78,
	0x00, 0x00, 0x20, 0x20, 0x55, 0x55, 0x55, 0x55, 0x54, 0x54, 0x78, 0x78,
	0x00, 0x00, 0x20, 0x20, 0x57, 0x57, 0x55, 0x55, 0x57, 0x57, 0x78, 0x78,
	0x00, 0x00, 0x1C, 0x1C, 0xA2, 0xA2, 0xE2, 0xE2, 0x22, 0x22, 0x14, 0x14,
	0x00, 0x00, 0x38, 0x38, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x08, 0x08,
	0x00, 0x00, 0x38, 0x38, 0x55, 0x55, 0x54, 0x54, 0x55, 0x55, 0x08, 0x08,
	0x00, 0x00, 0x38, 0x38, 0x55, 0x55, 0x55, 0x55, 0x54, 0x54, 0x08, 0x08,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x7C, 0x7C, 0x41, 0x41, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x79, 0x79, 0x42, 0x42, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x7C, 0x7C, 0x40, 0x40, 0x00, 0x00,
	0x00, 0x00, 0x70, 0x70, 0x29, 0x29, 0x24, 0x24, 0x29, 0x29, 0x70, 0x70,
	0x00, 0x00, 0x78, 0x78, 0x2F, 0x2F, 0x25, 0x25, 0x2F, 0x2F, 0x78, 0x78,
	0x00, 0x00, 0x7C, 0x7C, 0x54, 0x54, 0x54, 0x54, 0x55, 0x55, 0x45, 0x45,
	0x00, 0x00, 0x34, 0x34, 0x54, 0x54, 0x7C, 0x7C, 0x54, 0x54, 0x58, 0x58,
	0x00, 0x00, 0x7E, 0x7E, 0x09, 0x09, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49,
	0x00, 0x00, 0x38, 0x38, 0x45, 0x45, 0x45, 0x45, 0x39, 0x39, 0x00, 0x00,
	0x00, 0x00, 0x38, 0x38, 0x45, 0x45, 0x44, 0x44, 0x39, 0x39, 0x00, 0x00,
	0x00, 0x00, 0x39, 0x39, 0x45, 0x45, 0x44, 0x44, 0x38, 0x38, 0x00, 0x00,
	0x00, 0x00, 0x3C, 0x3C, 0x41, 0x41, 0x21, 0x21, 0x7D, 0x7D, 0x00, 0x00,
	0x00, 0x00, 0x3D, 0x3D, 0x41, 0x41, 0x20, 0x20, 0x7C, 0x7C, 0x00, 0x00,
	0x00, 0x00, 0x9C, 0x9C, 0xA1, 0xA1, 0x60, 0x60, 0x3D, 0x3D, 0x00, 0x00,
	0x00, 0x00, 0x3D, 0x3D, 0x42, 0x42, 0x42, 0x42, 0x3D, 0x3D, 0x00, 0x00,
	0x00, 0x00, 0x3C, 0x3C, 0x41, 0x41, 0x40, 0x40, 0x3D, 0x3D, 0x00, 0x00,
	0x00, 0x00, 0x18, 0x18, 0x24, 0x24, 0x66, 0x66, 0x24, 0x24, 0x00, 0x00,
	0x00, 0x00, 0x48, 0x48, 0x3E, 0x3E, 0x49, 0x49, 0x49, 0x49, 0x62, 0x62,
	0x00, 0x00, 0x29, 0x29, 0x2A, 0x2A, 0x7C, 0x7C, 0x2A, 0x2A, 0x29, 0x29,
	0x00, 0x00, 0x7F, 0x7F, 0x09, 0x09, 0x16, 0x16, 0x78, 0x78, 0x10, 0x10,
	0x00, 0x00, 0x40, 0x40, 0x88, 0x88, 0x7E, 0x7E, 0x09, 0x09, 0x02, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0A, 0x0A, 0x0A, 0x0A,
	0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08,
	0x00, 0x00, 0x0F, 0x0F, 0x08, 0x08, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A,
	0x00, 0x00, 0xFE, 0xFE, 0x02, 0x02, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0B, 0x0B, 0x08, 0x08, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0xFA, 0xFA, 0x02, 0x02, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A,
	0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFB, 0xFB, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0xFB, 0xFB, 0x00, 0x00, 0xFB, 0xFB, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A,
	0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A,
	0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08,
	0x00, 0x00, 0x0F, 0x0F, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
	0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0,
	0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
	0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
	0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
	0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x3E, 0x3E, 0x45, 0x45, 0x51, 0x51, 0x45, 0x45, 0x3E, 0x3E, 0x00,
	0x00, 0x3E, 0x3E, 0x6B, 0x6B, 0x6F, 0x6F, 0x6B, 0x6B, 0x3E, 0x3E, 0x00,
	0x00, 0x1C, 0x1C, 0x3E, 0x3E, 0x7C, 0x7C, 0x3E, 0x3E, 0x1C, 0x1C, 0x00,
	0x00, 0x00, 0x00, 0x1C, 0x1C, 0x38, 0x38, 0x1C, 0x1C, 0x00, 0x00, 0x00,
	0x00, 0x30, 0x30, 0x36, 0x36, 0x7F, 0x7F, 0x36, 0x36, 0x30, 0x30, 0x00,
	0x00, 0x18, 0x18, 0x5C, 0x5C, 0x7E, 0x7E, 0x5C, 0x5C, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
	0x00, 0x3C, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x3C, 0x00, 0x00, 0xFF,
	0xFF, 0xC3, 0xC3, 0xDB, 0xDB, 0xDB, 0xDB, 0xC3, 0xC3, 0xFF, 0xFF, 0x00,
	0x00, 0x30, 0x30, 0x48, 0x48, 0x4A, 0x4A, 0x36, 0x36, 0x0E, 0x0E, 0x00,
	0x00, 0x06, 0x06, 0x29, 0x29, 0x79, 0x79, 0x29, 0x29, 0x06, 0x06, 0x00,
	0x00, 0x60, 0x60, 0x70, 0x70, 0x3F, 0x3F, 0x02, 0x02, 0x04, 0x04, 0x00,
	0x00, 0x60, 0x60, 0x7E, 0x7E, 0x0A, 0x0A, 0x35, 0x35, 0x3F, 0x3F, 0x00,
	0x00, 0x2A, 0x2A, 0x1C, 0x1C, 0x36, 0x36, 0x1C, 0x1C, 0x2A, 0x2A, 0x00,
	0x00, 0x00, 0x00, 0x7F, 0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00,
	0x00, 0x08, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x7F, 0x00, 0x00, 0x00,
	0x00, 0x14, 0x14, 0x36, 0x36, 0x7F, 0x7F, 0x36, 0x36, 0x14, 0x14, 0x00,
	0x00, 0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00, 0x00,
	0x00, 0x06, 0x06, 0x09, 0x09, 0x7F, 0x7F, 0x01, 0x01, 0x7F, 0x7F, 0x00,
	0x00, 0x22, 0x22, 0x4D, 0x4D, 0x55, 0x55, 0x59, 0x59, 0x22, 0x22, 0x00,
	0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00,
	0x00, 0x14, 0x14, 0xB6, 0xB6, 0xFF, 0xFF, 0xB6, 0xB6, 0x14, 0x14, 0x00,
	0x00, 0x04, 0x04, 0x06, 0x06, 0x7F, 0x7F, 0x06, 0x06, 0x04, 0x04, 0x00,
	0x00, 0x10, 0x10, 0x30, 0x30, 0x7F, 0x7F, 0x30, 0x30, 0x10, 0x10, 0x00,
	0x00, 0x08, 0x08, 0x08, 0x08, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00,
	0x00, 0x08, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x08, 0x08, 0x08, 0x08, 0x00,
	0x00, 0x78, 0x78, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00,
	0x00, 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x00,
	0x00, 0x30, 0x30, 0x3C, 0x3C, 0x3F, 0x3F, 0x3C, 0x3C, 0x30, 0x30, 0x00,
	0x00, 0x03, 0x03, 0x0F, 0x0F, 0x3F, 0x3F, 0x0F, 0x0F, 0x03, 0x03,
	0x00, 0x3E, 0x3E, 0x41, 0x41, 0x5D, 0x5D, 0x55, 0x55, 0x1E, 0x1E, 0x00,
	0x00, 0x7E, 0x7E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x7E, 0x7E, 0x00,
	0x00, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x36, 0x36, 0x00,
	0x00, 0x3E, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x22, 0x22, 0x00,
	0x00, 0x7F, 0x7F, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3E, 0x3E, 0x00,
	0x00, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x41, 0x41, 0x00,
	0x00, 0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x01, 0x01, 0x00,
	0x00, 0x3E, 0x3E, 0x41, 0x41, 0x49, 0x49, 0x49, 0x49, 0x7A, 0x7A, 0x00,
	0x00, 0x7F, 0x7F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x7F, 0x7F, 0x00,
	0x00, 0x00, 0x00, 0x41, 0x41, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00, 0x00,
	0x00, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, 0x3F, 0x00,
	0x00, 0x7F, 0x7F, 0x08, 0x08, 0x14, 0x14, 0x22, 0x22, 0x41, 0x41, 0x00,
	0x00, 0x7F, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00,
	0x00, 0x7F, 0x7F, 0x02, 0x02, 0x04, 0x04, 0x02, 0x02, 0x7F, 0x7F, 0x00,
	0x00, 0x7F, 0x7F, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x7F, 0x7F, 0x00,
	0x00, 0x3E, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3E, 0x3E, 0x00,
	0x00, 0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x06, 0x06, 0x00,
	0x00, 0x3E, 0x3E, 0x41, 0x41, 0x51, 0x51, 0x21, 0x21, 0x5E, 0x5E, 0x00,
	0x00, 0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x19, 0x19, 0x66, 0x66, 0x00,
	0x00, 0x26, 0x26, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x32, 0x32, 0x00,
	0x00, 0x01, 0x01, 0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, 0x01, 0x01, 0x00,
	0x00, 0x3F, 0x3F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, 0x3F, 0x00,
	0x00, 0x1F, 0x1F, 0x20, 0x20, 0x40, 0x40, 0x20, 0x20, 0x1F, 0x1F, 0x00,
	0x00, 0x3F, 0x3F, 0x40, 0x40, 0x3C, 0x3C, 0x40, 0x40, 0x3F, 0x3F, 0x00,
	0x00, 0x63, 0x63, 0x14, 0x14, 0x08, 0x08, 0x14, 0x14, 0x63, 0x63, 0x00,
	0x00, 0x07, 0x07, 0x08, 0x08, 0x70, 0x70, 0x08, 0x08, 0x07, 0x07, 0x00,
	0x00, 0x71, 0x71, 0x49, 0x49, 0x45, 0x45, 0x43, 0x43, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x7F, 0x7F, 0x41, 0x41, 0x41, 0x41, 0x00, 0x00, 0x00,
	0x00, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x00,
	0x00, 0x00, 0x00, 0x41, 0x41, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x00, 0x1E, 0x1E, 0xA1, 0xA1, 0xE1, 0xE1, 0x21, 0x21, 0x12, 0x12, 0x00,
	0x00, 0x3D, 0x3D, 0x40, 0x40, 0x20, 0x20, 0x7D, 0x7D, 0x00, 0x00, 0x00,
	0x00, 0x38, 0x38, 0x54, 0x54, 0x54, 0x54, 0x55, 0x55, 0x09, 0x09, 0x00,
	0x00, 0x20, 0x20, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x78, 0x78, 0x00,
	0x00, 0x20, 0x20, 0x55, 0x55, 0x54, 0x54, 0x55, 0x55, 0x78, 0x78, 0x00,
	0x00, 0x20, 0x20, 0x55, 0x55, 0x55, 0x55, 0x54, 0x54, 0x78, 0x78, 0x00,
	0x00, 0x20, 0x20, 0x57, 0x57, 0x55, 0x55, 0x57, 0x57, 0x78, 0x78, 0x00,
	0x00, 0x1C, 0x1C, 0xA2, 0xA2, 0xE2, 0xE2, 0x22, 0x22, 0x14, 0x14, 0x00,
	0x00, 0x38, 0x38, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x08, 0x08, 0x00,
	0x00, 0x38, 0x38, 0x55, 0x55, 0x54, 0x54, 0x55, 0x55, 0x08, 0x08, 0x00,
	0x00, 0x38, 0x38, 0x55, 0x55, 0x55, 0x55, 0x54, 0x54, 0x08, 0x08, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x01, 0x7C, 0x7C, 0x41, 0x41, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x02, 0x79, 0x79, 0x42, 0x42, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x01, 0x7C, 0x7C, 0x40, 0x40, 0x00, 0x00, 0x00,
	0x00, 0x70, 0x70, 0x29, 0x29, 0x24, 0x24, 0x29, 0x29, 0x70, 0x70, 0x00,
	0x00, 0x78, 0x78, 0x2F, 0x2F, 0x25, 0x25, 0x2F, 0x2F, 0x78, 0x78, 0x00,
	0x00, 0x7C, 0x7C, 0x54, 0x54, 0x54, 0x54, 0x55, 0x55, 0x45, 0x45, 0x00,
	0x00, 0x34, 0x34, 0x54, 0x54, 0x7C, 0x7C, 0x54, 0x54, 0x58, 0x58, 0x00,
	0x00, 0x7E, 0x7E, 0x09, 0x09, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x00,
	0x00, 0x38, 0x38, 0x45, 0x45, 0x45, 0x45, 0x39, 0x39, 0x00, 0x00, 0x00,
	0x00, 0x38, 0x38, 0x45, 0x45, 0x44, 0x44, 0x39, 0x39, 0x00, 0x00, 0x00,
	0x00, 0x39, 0x39, 0x45, 0x45, 0x44, 0x44, 0x38, 0x38, 0x00, 0x00, 0x00,
	0x00, 0x3C, 0x3C, 0x41, 0x41, 0x21, 0x21, 0x7D, 0x7D, 0x00, 0x00, 0x00,
	0x00, 0x3D, 0x3D, 0x41, 0x41, 0x20, 0x20, 0x7C, 0x7C, 0x00, 0x00, 0x00,
	0x00, 0x9C, 0x9C, 0xA1, 0xA1, 0x60, 0x60, 0x3D, 0x3D, 0x00, 0x00, 0x00,
	0x00, 0x3D, 0x3D, 0x42, 0x42, 0x42, 0x42, 0x3D, 0x3D, 0x00, 0x00, 0x00,
	0x00, 0x3C, 0x3C, 0x41, 0x41, 0x40, 0x40, 0x3D, 0x3D, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x24, 0x24, 0x66, 0x66, 0x24, 0x24, 0x00, 0x00, 0x00,
	0x00, 0x48, 0x48, 0x3E, 0x3E, 0x49, 0x49, 0x49, 0x49, 0x62, 0x62, 0x00,
	0x00, 0x29, 0x29, 0x2A, 0x2A, 0x7C, 0x7C, 0x2A, 0x2A, 0x29, 0x29, 0x00,
	0x00, 0x7F, 0x7F, 0x09, 0x09, 0x16, 0x16, 0x78, 0x78, 0x10, 0x10, 0x00,
	0x00, 0x40, 0x40, 0x88, 0x88, 0x7E, 0x7E, 0x09, 0x09, 0x02, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0A, 0x0A, 0x0A, 0x0A, 0x00,
	0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x00,
	0x00, 0x0F, 0x0F, 0x08, 0x08, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x00,
	0x00, 0xFE, 0xFE, 0x02, 0x02, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0B, 0x0B, 0x08, 0x08, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0xFA, 0xFA, 0x02, 0x02, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A, 0x00,
	0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFB, 0xFB, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0xFB, 0xFB, 0x00, 0x00, 0xFB, 0xFB, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x08,
	0x08, 0x0F, 0x0F, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A, 0x08,
	0x08, 0xF8, 0xF8, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x00,
	0x00, 0x0F, 0x0F, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0,
	0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0,
	0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0,
	0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF8,
	0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xFC,
	0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFE,
	0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3E, 0x3E, 0x45, 0x45, 0x51, 0x51, 0x45, 0x45, 0x3E, 0x3E, 0x00, 0x00,
	0x3E, 0x3E, 0x6B, 0x6B, 0x6F, 0x6F, 0x6B, 0x6B, 0x3E, 0x3E, 0x00, 0x00,
	0x1C, 0x1C, 0x3E, 0x3E, 0x7C, 0x7C, 0x3E, 0x3E, 0x1C, 0x1C, 0x00, 0x00,
	0x00, 0x00, 0x1C, 0x1C, 0x38, 0x38, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00,
	0x30, 0x30, 0x36, 0x36, 0x7F, 0x7F, 0x36, 0x36, 0x30, 0x30, 0x00, 0x00,
	0x18, 0x18, 0x5C, 0x5C, 0x7E, 0x7E, 0x5C, 0x5C, 0x18, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
	0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
	0x3C, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x3C, 0x00, 0x00, 0xFF, 0xFF,
	0xC3, 0xC3, 0xDB, 0xDB, 0xDB, 0xDB, 0xC3, 0xC3, 0xFF, 0xFF, 0x00, 0x00,
	0x30, 0x30, 0x48, 0x48, 0x4A, 0x4A, 0x36, 0x36, 0x0E, 0x0E, 0x00, 0x00,
	0x06, 0x06, 0x29, 0x29, 0x79, 0x79, 0x29, 0x29, 0x06, 0x06, 0x00, 0x00,
	0x60, 0x60, 0x70, 0x70, 0x3F, 0x3F, 0x02, 0x02, 0x04, 0x04, 0x00, 0x00,
	0x60, 0x60, 0x7E, 0x7E, 0x0A, 0x0A, 0x35, 0x35, 0x3F, 0x3F, 0x00, 0x00,
	0x2A, 0x2A, 0x1C, 0x1C, 0x36, 0x36, 0x1C, 0x1C, 0x2A, 0x2A, 0x00, 0x00,
	0x00, 0x00, 0x7F, 0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00, 0x00,
	0x08, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00,
	0x14, 0x14, 0x36, 0x36, 0x7F, 0x7F, 0x36, 0x36, 0x14, 0x14, 0x00, 0x00,
	0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00, 0x00, 0x00,
	0x06, 0x06, 0x09, 0x09, 0x7F, 0x7F, 0x01, 0x01, 0x7F, 0x7F, 0x00, 0x00,
	0x22, 0x22, 0x4D, 0x4D, 0x55, 0x55, 0x59, 0x59, 0x22, 0x22, 0x00, 0x00,
	0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00,
	0x14, 0x14, 0xB6, 0xB6, 0xFF, 0xFF, 0xB6, 0xB6, 0x14, 0x14, 0x00, 0x00,
	0x04, 0x04, 0x06, 0x06, 0x7F, 0x7F, 0x06, 0x06, 0x04, 0x04, 0x00, 0x00,
	0x10, 0x10, 0x30, 0x30, 0x7F, 0x7F, 0x30, 0x30, 0x10, 0x10, 0x00, 0x00,
	0x08, 0x08, 0x08, 0x08, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00, 0x00,
	0x08, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x78, 0x78, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00,
	0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x00, 0x00,
	0x30, 0x30, 0x3C, 0x3C, 0x3F, 0x3F, 0x3C, 0x3C, 0x30, 0x30, 0x00, 0x00,
	0x03, 0x03, 0x0F, 0x0F, 0x3F, 0x3F, 0x0F, 0x0F, 0x03, 0x03,
	0x3E, 0x3E, 0x41, 0x41, 0x5D, 0x5D, 0x55, 0x55, 0x1E, 0x1E, 0x00, 0x00,
	0x7E, 0x7E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x7E, 0x7E, 0x00, 0x00,
	0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x36, 0x36, 0x00, 0x00,
	0x3E, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x22, 0x22, 0x00, 0x00,
	0x7F, 0x7F, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3E, 0x3E, 0x00, 0x00,
	0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x41, 0x41, 0x00, 0x00,
	0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x01, 0x01, 0x00, 0x00,
	0x3E, 0x3E, 0x41, 0x41, 0x49, 0x49, 0x49, 0x49, 0x7A, 0x7A, 0x00, 0x00,
	0x7F, 0x7F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x7F, 0x7F, 0x00, 0x00,
	0x00, 0x00, 0x41, 0x41, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00,
	0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, 0x3F, 0x00, 0x00,
	0x7F, 0x7F, 0x08, 0x08, 0x14, 0x14, 0x22, 0x22, 0x41, 0x41, 0x00, 0x00,
	0x7F, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00,
	0x7F, 0x7F, 0x02, 0x02, 0x04, 0x04, 0x02, 0x02, 0x7F, 0x7F, 0x00, 0x00,
	0x7F, 0x7F, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x7F, 0x7F, 0x00, 0x00,
	0x3E, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3E, 0x3E, 0x00, 0x00,
	0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x06, 0x06, 0x00, 0x00,
	0x3E, 0x3E, 0x41, 0x41, 0x51, 0x51, 0x21, 0x21, 0x5E, 0x5E, 0x00, 0x00,
	0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x19, 0x19, 0x66, 0x66, 0x00, 0x00,
	0x26, 0x26, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x32, 0x32, 0x00, 0x00,
	0x01, 0x01, 0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
	0x3F, 0x3F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, 0x3F, 0x00, 0x00,
	0x1F, 0x1F, 0x20, 0x20, 0x40, 0x40, 0x20, 0x20, 0x1F, 0x1F, 0x00, 0x00,
	0x3F, 0x3F, 0x40, 0x40, 0x3C, 0x3C, 0x40, 0x40, 0x3F, 0x3F, 0x00, 0x00,
	0x63, 0x63, 0x14, 0x14, 0x08, 0x08, 0x14, 0x14, 0x63, 0x63, 0x00, 0x00,
	0x07, 0x07, 0x08, 0x08, 0x70, 0x70, 0x08, 0x08, 0x07, 0x07, 0x00, 0x00,
	0x71, 0x71, 0x49, 0x49, 0x45, 0x45, 0x43, 0x43, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7F, 0x7F, 0x41, 0x41, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x00, 0x00,
	0x00, 0x00, 0x41, 0x41, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00,
	0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x1E, 0x1E, 0xA1, 0xA1, 0xE1, 0xE1, 0x21, 0x21, 0x12, 0x12, 0x00, 0x00,
	0x3D, 0x3D, 0x40, 0x40, 0x20, 0x20, 0x7D, 0x7D, 0x00, 0x00, 0x00, 0x00,
	0x38, 0x38, 0x54, 0x54, 0x54, 0x54, 0x55, 0x55, 0x09, 0x09, 0x00, 0x00,
	0x20, 0x20, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x78, 0x78, 0x00, 0x00,
	0x20, 0x20, 0x55, 0x55, 0x54, 0x54, 0x55, 0x55, 0x78, 0x78, 0x00, 0x00,
	0x20, 0x20, 0x55, 0x55, 0x55, 0x55, 0x54, 0x54, 0x78, 0x78, 0x00, 0x00,
	0x20, 0x20, 0x57, 0x57, 0x55, 0x55, 0x57, 0x57, 0x78, 0x78, 0x00, 0x00,
	0x1C, 0x1C, 0xA2, 0xA2, 0xE2, 0xE2, 0x22, 0x22, 0x14, 0x14, 0x00, 0x00,
	0x38, 0x38, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x08, 0x08, 0x00, 0x00,
	0x38, 0x38, 0x55, 0x55, 0x54, 0x54, 0x55, 0x55, 0x08, 0x08, 0x00, 0x00,
	0x38, 0x38, 0x55, 0x55, 0x55, 0x55, 0x54, 0x54, 0x08, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x01, 0x7C, 0x7C, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x02, 0x02, 0x79, 0x79, 0x42, 0x42, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x01, 0x7C, 0x7C, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00,
	0x70, 0x70, 0x29, 0x29, 0x24, 0x24, 0x29, 0x29, 0x70, 0x70, 0x00, 0x00,
	0x78, 0x78, 0x2F, 0x2F, 0x25, 0x25, 0x2F, 0x2F, 0x78, 0x78, 0x00, 0x00,
	0x7C, 0x7C, 0x54, 0x54, 0x54, 0x54, 0x55, 0x55, 0x45, 0x45, 0x00, 0x00,
	0x34, 0x34, 0x54, 0x54, 0x7C, 0x7C, 0x54, 0x54, 0x58, 0x58, 0x00, 0x00,
	0x7E, 0x7E, 0x09, 0x09, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x00, 0x00,
	0x38, 0x38, 0x45, 0x45, 0x45, 0x45, 0x39, 0x39, 0x00, 0x00, 0x00, 0x00,
	0x38, 0x38, 0x45, 0x45, 0x44, 0x44, 0x39, 0x39, 0x00, 0x00, 0x00, 0x00,
	0x39, 0x39, 0x45, 0x45, 0x44, 0x44, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00,
	0x3C, 0x3C, 0x41, 0x41, 0x21, 0x21, 0x7D, 0x7D, 0x00, 0x00, 0x00, 0x00,
	0x3D, 0x3D, 0x41, 0x41, 0x20, 0x20, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00,
	0x9C, 0x9C, 0xA1, 0xA1, 0x60, 0x60, 0x3D, 0x3D, 0x00, 0x00, 0x00, 0x00,
	0x3D, 0x3D, 0x42, 0x42, 0x42, 0x42, 0x3D, 0x3D, 0x00, 0x00, 0x00, 0x00,
	0x3C, 0x3C, 0x41, 0x41, 0x40, 0x40, 0x3D, 0x3D, 0x00, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x24, 0x24, 0x66, 0x66, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00,
	0x48, 0x48, 0x3E, 0x3E, 0x49, 0x49, 0x49, 0x49, 0x62, 0x62, 0x00, 0x00,
	0x29, 0x29, 0x2A, 0x2A, 0x7C, 0x7C, 0x2A, 0x2A, 0x29, 0x29, 0x00, 0x00,
	0x7F, 0x7F, 0x09, 0x09, 0x16, 0x16, 0x78, 0x78, 0x10, 0x10, 0x00, 0x00,
	0x40, 0x40, 0x88, 0x88, 0x7E, 0x7E, 0x09, 0x09, 0x02, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00,
	0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x0F, 0x0F, 0x08, 0x08, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00,
	0xFE, 0xFE, 0x02, 0x02, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0B, 0x0B, 0x08, 0x08, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0xFA, 0xFA, 0x02, 0x02, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00,
	0xFF, 0xFF, 0x00, 0x00, 0xFB, 0xFB, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0xFB, 0xFB, 0x00, 0x00, 0xFB, 0xFB, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x08, 0x08,
	0x0F, 0x0F, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A, 0x08, 0x08,
	0xF8, 0xF8, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x0F, 0x0F, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xC0,
	0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xE0,
	0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF0,
	0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF8, 0xF8,
	0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xFC, 0xFC,
	0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE,
	0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
	0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E,
	0x3E, 0x45, 0x45, 0x51, 0x51, 0x45, 0x45, 0x3E, 0x3E, 0x00, 0x00, 0x3E,
	0x3E, 0x6B, 0x6B, 0x6F, 0x6F, 0x6B, 0x6B, 0x3E, 0x3E, 0x00, 0x00, 0x1C,
	0x1C, 0x3E, 0x3E, 0x7C, 0x7C, 0x3E, 0x3E, 0x1C, 0x1C, 0x00, 0x00, 0x00,
	0x00, 0x1C, 0x1C, 0x38, 0x38, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x30,
	0x30, 0x36, 0x36, 0x7F, 0x7F, 0x36, 0x36, 0x30, 0x30, 0x00, 0x00, 0x18,
	0x18, 0x5C, 0x5C, 0x7E, 0x7E, 0x5C, 0x5C, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
	0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x3C,
	0x3C, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x3C, 0x00, 0x00, 0xFF, 0xFF, 0xC3,
	0xC3, 0xDB, 0xDB, 0xDB, 0xDB, 0xC3, 0xC3, 0xFF, 0xFF, 0x00, 0x00, 0x30,
	0x30, 0x48, 0x48, 0x4A, 0x4A, 0x36, 0x36, 0x0E, 0x0E, 0x00, 0x00, 0x06,
	0x06, 0x29, 0x29, 0x79, 0x79, 0x29, 0x29, 0x06, 0x06, 0x00, 0x00, 0x60,
	0x60, 0x70, 0x70, 0x3F, 0x3F, 0x02, 0x02, 0x04, 0x04, 0x00, 0x00, 0x60,
	0x60, 0x7E, 0x7E, 0x0A, 0x0A, 0x35, 0x35, 0x3F, 0x3F, 0x00, 0x00, 0x2A,
	0x2A, 0x1C, 0x1C, 0x36, 0x36, 0x1C, 0x1C, 0x2A, 0x2A, 0x00, 0x00, 0x00,
	0x00, 0x7F, 0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00, 0x00, 0x08,
	0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x14,
	0x14, 0x36, 0x36, 0x7F, 0x7F, 0x36, 0x36, 0x14, 0x14, 0x00, 0x00, 0x00,
	0x00, 0x5F, 0x5F, 0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x06,
	0x06, 0x09, 0x09, 0x7F, 0x7F, 0x01, 0x01, 0x7F, 0x7F, 0x00, 0x00, 0x22,
	0x22, 0x4D, 0x4D, 0x55, 0x55, 0x59, 0x59, 0x22, 0x22, 0x00, 0x00, 0x60,
	0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x14,
	0x14, 0xB6, 0xB6, 0xFF, 0xFF, 0xB6, 0xB6, 0x14, 0x14, 0x00, 0x00, 0x04,
	0x04, 0x06, 0x06, 0x7F, 0x7F, 0x06, 0x06, 0x04, 0x04, 0x00, 0x00, 0x10,
	0x10, 0x30, 0x30, 0x7F, 0x7F, 0x30, 0x30, 0x10, 0x10, 0x00, 0x00, 0x08,
	0x08, 0x08, 0x08, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00, 0x00, 0x08,
	0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x78,
	0x78, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x08,
	0x08, 0x3E, 0x3E, 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x00, 0x00, 0x30,
	0x30, 0x3C, 0x3C, 0x3F, 0x3F, 0x3C, 0x3C, 0x30, 0x30, 0x00, 0x00, 0x03,
	0x03, 0x0F, 0x0F, 0x3F, 0x3F, 0x0F, 0x0F, 0x03, 0x03,
	0x3E, 0x41, 0x41, 0x5D, 0x5D, 0x55, 0x55, 0x1E, 0x1E, 0x00, 0x00, 0x7E,
	0x7E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x7E, 0x7E, 0x00, 0x00, 0x7F,
	0x7F, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x36, 0x36, 0x00, 0x00, 0x3E,
	0x3E, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x22, 0x22, 0x00, 0x00, 0x7F,
	0x7F, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3E, 0x3E, 0x00, 0x00, 0x7F,
	0x7F, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x41, 0x41, 0x00, 0x00, 0x7F,
	0x7F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x01, 0x01, 0x00, 0x00, 0x3E,
	0x3E, 0x41, 0x41, 0x49, 0x49, 0x49, 0x49, 0x7A, 0x7A, 0x00, 0x00, 0x7F,
	0x7F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x7F, 0x7F, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x41, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00, 0x30,
	0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, 0x3F, 0x00, 0x00, 0x7F,
	0x7F, 0x08, 0x08, 0x14, 0x14, 0x22, 0x22, 0x41, 0x41, 0x00, 0x00, 0x7F,
	0x7F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x7F,
	0x7F, 0x02, 0x02, 0x04, 0x04, 0x02, 0x02, 0x7F, 0x7F, 0x00, 0x00, 0x7F,
	0x7F, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x7F, 0x7F, 0x00, 0x00, 0x3E,
	0x3E, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3E, 0x3E, 0x00, 0x00, 0x7F,
	0x7F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x06, 0x06, 0x00, 0x00, 0x3E,
	0x3E, 0x41, 0x41, 0x51, 0x51, 0x21, 0x21, 0x5E, 0x5E, 0x00, 0x00, 0x7F,
	0x7F, 0x09, 0x09, 0x09, 0x09, 0x19, 0x19, 0x66, 0x66, 0x00, 0x00, 0x26,
	0x26, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x32, 0x32, 0x00, 0x00, 0x01,
	0x01, 0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x3F,
	0x3F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, 0x3F, 0x00, 0x00, 0x1F,
	0x1F, 0x20, 0x20, 0x40, 0x40, 0x20, 0x20, 0x1F, 0x1F, 0x00, 0x00, 0x3F,
	0x3F, 0x40, 0x40, 0x3C, 0x3C, 0x40, 0x40, 0x3F, 0x3F, 0x00, 0x00, 0x63,
	0x63, 0x14, 0x14, 0x08, 0x08, 0x14, 0x14, 0x63, 0x63, 0x00, 0x00, 0x07,
	0x07, 0x08, 0x08, 0x70, 0x70, 0x08, 0x08, 0x07, 0x07, 0x00, 0x00, 0x71,
	0x71, 0x49, 0x49, 0x45, 0x45, 0x43, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x7F, 0x7F, 0x41, 0x41, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00, 0x02,
	0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x00, 0x00, 0x00,
	0x00, 0x41, 0x41, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x04,
	0x04, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x1E, 0xA1, 0xA1, 0xE1, 0xE1, 0x21, 0x21, 0x12, 0x12, 0x00, 0x00, 0x3D,
	0x3D, 0x40, 0x40, 0x20, 0x20, 0x7D, 0x7D, 0x00, 0x00, 0x00, 0x00, 0x38,
	0x38, 0x54, 0x54, 0x54, 0x54, 0x55, 0x55, 0x09, 0x09, 0x00, 0x00, 0x20,
	0x20, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x78, 0x78, 0x00, 0x00, 0x20,
	0x20, 0x55, 0x55, 0x54, 0x54, 0x55, 0x55, 0x78, 0x78, 0x00, 0x00, 0x20,
	0x20, 0x55, 0x55, 0x55, 0x55, 0x54, 0x54, 0x78, 0x78, 0x00, 0x00, 0x20,
	0x20, 0x57, 0x57, 0x55, 0x55, 0x57, 0x57, 0x78, 0x78, 0x00, 0x00, 0x1C,
	0x1C, 0xA2, 0xA2, 0xE2, 0xE2, 0x22, 0x22, 0x14, 0x14, 0x00, 0x00, 0x38,
	0x38, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x08, 0x08, 0x00, 0x00, 0x38,
	0x38, 0x55, 0x55, 0x54, 0x54, 0x55, 0x55, 0x08, 0x08, 0x00, 0x00, 0x38,
	0x38, 0x55, 0x55, 0x55, 0x55, 0x54, 0x54, 0x08, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x01, 0x7C, 0x7C, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x02, 0x02, 0x79, 0x79, 0x42, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x01, 0x7C, 0x7C, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x70,
	0x70, 0x29, 0x29, 0x24, 0x24, 0x29, 0x29, 0x70, 0x70, 0x00, 0x00, 0x78,
	0x78, 0x2F, 0x2F, 0x25, 0x25, 0x2F, 0x2F, 0x78, 0x78, 0x00, 0x00, 0x7C,
	0x7C, 0x54, 0x54, 0x54, 0x54, 0x55, 0x55, 0x45, 0x45, 0x00, 0x00, 0x34,
	0x34, 0x54, 0x54, 0x7C, 0x7C, 0x54, 0x54, 0x58, 0x58, 0x00, 0x00, 0x7E,
	0x7E, 0x09, 0x09, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x00, 0x00, 0x38,
	0x38, 0x45, 0x45, 0x45, 0x45, 0x39, 0x39, 0x00, 0x00, 0x00, 0x00, 0x38,
	0x38, 0x45, 0x45, 0x44, 0x44, 0x39, 0x39, 0x00, 0x00, 0x00, 0x00, 0x39,
	0x39, 0x45, 0x45, 0x44, 0x44, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x3C,
	0x3C, 0x41, 0x41, 0x21, 0x21, 0x7D, 0x7D, 0x00, 0x00, 0x00, 0x00, 0x3D,
	0x3D, 0x41, 0x41, 0x20, 0x20, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x9C,
	0x9C, 0xA1, 0xA1, 0x60, 0x60, 0x3D, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x3D,
	0x3D, 0x42, 0x42, 0x42, 0x42, 0x3D, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x3C,
	0x3C, 0x41, 0x41, 0x40, 0x40, 0x3D, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x18, 0x24, 0x24, 0x66, 0x66, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x48,
	0x48, 0x3E, 0x3E, 0x49, 0x49, 0x49, 0x49, 0x62, 0x62, 0x00, 0x00, 0x29,
	0x29, 0x2A, 0x2A, 0x7C, 0x7C, 0x2A, 0x2A, 0x29, 0x29, 0x00, 0x00, 0x7F,
	0x7F, 0x09, 0x09, 0x16, 0x16, 0x78, 0x78, 0x10, 0x10, 0x00, 0x00, 0x40,
	0x40, 0x88, 0x88, 0x7E, 0x7E, 0x09, 0x09, 0x02, 0x02,
	0x00, 0x00, 0x00, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0xFF,
	0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x0F,
	0x0F, 0x08, 0x08, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0xFE,
	0xFE, 0x02, 0x02, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0B,
	0x0B, 0x08, 0x08, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0xFA,
	0xFA, 0x02, 0x02, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0xFF,
	0xFF, 0x00, 0x00, 0xFB, 0xFB, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0xFB,
	0xFB, 0x00, 0x00, 0xFB, 0xFB, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x08, 0x08, 0x0F,
	0x0F, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0xFA, 0xFA, 0x0A, 0x0A, 0x0A, 0x0A, 0x08, 0x08, 0xF8,
	0xF8, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x0F,
	0x0F, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0xC0,
	0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0,
	0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0,
	0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8,
	0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xFC, 0xFC, 0xFC,
	0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE,
	0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
	0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
};

#endif // #ifndef DUB_H
