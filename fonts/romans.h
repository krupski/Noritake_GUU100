///////////////////////////////////////////////////////////////////////////////
//
//  VECTOR Font "ROMANS.H" for the Noritake GU128X64E-U100 VFD display
//  Copyright (c) 2012, 2017 Roger A. Krupski <rakrupski@verizon.net>
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

#ifndef ROMANS_VECTOR_H
#define ROMANS_VECTOR_H

static const uint8_t c00[] PROGMEM = {
	16, // width
};

static const uint8_t c01[] PROGMEM = {
	5, 18,  5,  4,
	4, 24,  5, 23,
	5, 25,  4, 24,
	6, 24,  5, 25,
	5, 23,  6, 24,
	10, // width
};

static const uint8_t c02[] PROGMEM = {
	4, 11,  4,  4,
	12, 11, 12,  4,
	16, // width
};

static const uint8_t c03[] PROGMEM = {
	4, 32, 11,  0,
	10, 32, 17,  0,
	18, 13,  4, 13,
	17, 19,  3, 19,
	21, // width
};

static const uint8_t c04[] PROGMEM = {
	8, 29,  8,  0,
	12, 29, 12,  0,
	15,  5, 17,  7,
	12,  4, 15,  5,
	8,  4, 12,  4,
	5,  5,  8,  4,
	3,  7,  5,  5,
	3,  9,  3,  7,
	4, 11,  3,  9,
	5, 12,  4, 11,
	7, 13,  5, 12,
	13, 15,  7, 13,
	15, 16, 13, 15,
	16, 17, 15, 16,
	17, 19, 16, 17,
	17, 22, 17, 19,
	15, 24, 17, 22,
	12, 25, 15, 24,
	8, 25, 12, 25,
	5, 24,  8, 25,
	3, 22,  5, 24,
	20, // width
};

static const uint8_t c05[] PROGMEM = {
	3, 25, 21,  4,
	10,  6,  8,  4,
	10,  8, 10,  6,
	9, 10, 10,  8,
	7, 11,  9, 10,
	5, 11,  7, 11,
	3,  9,  5, 11,
	3,  7,  3,  9,
	4,  5,  3,  7,
	6,  4,  4,  5,
	8,  4,  6,  4,
	10,  5,  8,  4,
	13,  6, 10,  5,
	16,  6, 13,  6,
	19,  5, 16,  6,
	21,  4, 19,  5,
	15, 19, 17, 18,
	14, 21, 15, 19,
	14, 23, 14, 21,
	16, 25, 14, 23,
	18, 25, 16, 25,
	20, 24, 18, 25,
	21, 22, 20, 24,
	21, 20, 21, 22,
	19, 18, 21, 20,
	17, 18, 19, 18,
	24, // width
};

static const uint8_t c06[] PROGMEM = {
	23, 12, 23, 13,
	22, 11, 23, 12,
	21, 11, 22, 11,
	20, 12, 21, 11,
	19, 14, 20, 12,
	17, 19, 19, 14,
	15, 22, 17, 19,
	13, 24, 15, 22,
	11, 25, 13, 24,
	7, 25, 11, 25,
	5, 24,  7, 25,
	4, 23,  5, 24,
	3, 21,  4, 23,
	3, 19,  3, 21,
	4, 17,  3, 19,
	5, 16,  4, 17,
	12, 12,  5, 16,
	13, 11, 12, 12,
	14,  9, 13, 11,
	14,  7, 14,  9,
	13,  5, 14,  7,
	11,  4, 13,  5,
	9,  5, 11,  4,
	8,  7,  9,  5,
	8,  9,  8,  7,
	9, 12,  8,  9,
	11, 15,  9, 12,
	16, 22, 11, 15,
	18, 24, 16, 22,
	20, 25, 18, 24,
	22, 25, 20, 25,
	23, 24, 22, 25,
	23, 23, 23, 24,
	26, // width
};

static const uint8_t c07[] PROGMEM = {
	4,  5,  5,  6,
	5,  4,  4,  5,
	6,  5,  5,  4,
	6,  7,  6,  5,
	5,  9,  6,  7,
	4, 10,  5,  9,
	10, // width
};

static const uint8_t c08[] PROGMEM = {
	9,  2, 11,  0,
	7,  5,  9,  2,
	5,  9,  7,  5,
	4, 14,  5,  9,
	4, 18,  4, 14,
	5, 23,  4, 18,
	7, 27,  5, 23,
	9, 30,  7, 27,
	11, 32,  9, 30,
	14, // width
};

static const uint8_t c09[] PROGMEM = {
	5,  2,  3,  0,
	7,  5,  5,  2,
	9,  9,  7,  5,
	10, 14,  9,  9,
	10, 18, 10, 14,
	9, 23, 10, 18,
	7, 27,  9, 23,
	5, 30,  7, 27,
	3, 32,  5, 30,
	14, // width
};

static const uint8_t c10[] PROGMEM = {
	8, 16,  8,  4,
	13, 13,  3,  7,
	3, 13, 13,  7,
	16, // width
};

static const uint8_t c11[] PROGMEM = {
	13, 25, 13,  7,
	22, 16,  4, 16,
	26, // width
};

static const uint8_t c12[] PROGMEM = {
	5, 25,  6, 24,
	4, 24,  5, 25,
	5, 23,  4, 24,
	6, 24,  5, 23,
	6, 26,  6, 24,
	5, 28,  6, 26,
	4, 29,  5, 28,
	10, // width
};

static const uint8_t c13[] PROGMEM = {
	22, 16,  4, 16,
	26, // width
};

static const uint8_t c14[] PROGMEM = {
	4, 24,  5, 23,
	5, 25,  4, 24,
	6, 24,  5, 25,
	5, 23,  6, 24,
	10, // width
};

static const uint8_t c15[] PROGMEM = {
	2, 32, 20,  0,
	22, // width
};

static const uint8_t c16[] PROGMEM = {
	6,  5,  9,  4,
	4,  8,  6,  5,
	3, 13,  4,  8,
	3, 16,  3, 13,
	4, 21,  3, 16,
	6, 24,  4, 21,
	9, 25,  6, 24,
	11, 25,  9, 25,
	14, 24, 11, 25,
	16, 21, 14, 24,
	17, 16, 16, 21,
	17, 13, 17, 16,
	16,  8, 17, 13,
	14,  5, 16,  8,
	11,  4, 14,  5,
	9,  4, 11,  4,
	20, // width
};

static const uint8_t c17[] PROGMEM = {
	8,  7,  6,  8,
	11,  4,  8,  7,
	11, 25, 11,  4,
	20, // width
};

static const uint8_t c18[] PROGMEM = {
	4,  8,  4,  9,
	5,  6,  4,  8,
	6,  5,  5,  6,
	8,  4,  6,  5,
	12,  4,  8,  4,
	14,  5, 12,  4,
	15,  6, 14,  5,
	16,  8, 15,  6,
	16, 10, 16,  8,
	15, 12, 16, 10,
	13, 15, 15, 12,
	3, 25, 13, 15,
	17, 25,  3, 25,
	20, // width
};

static const uint8_t c19[] PROGMEM = {
	16,  4,  5,  4,
	10, 12, 16,  4,
	13, 12, 10, 12,
	15, 13, 13, 12,
	16, 14, 15, 13,
	17, 17, 16, 14,
	17, 19, 17, 17,
	16, 22, 17, 19,
	14, 24, 16, 22,
	11, 25, 14, 24,
	8, 25, 11, 25,
	5, 24,  8, 25,
	4, 23,  5, 24,
	3, 21,  4, 23,
	20, // width
};

static const uint8_t c20[] PROGMEM = {
	3, 18, 13,  4,
	18, 18,  3, 18,
	13, 25, 13,  4,
	20, // width
};

static const uint8_t c21[] PROGMEM = {
	5,  4, 15,  4,
	4, 13,  5,  4,
	5, 12,  4, 13,
	8, 11,  5, 12,
	11, 11,  8, 11,
	14, 12, 11, 11,
	16, 14, 14, 12,
	17, 17, 16, 14,
	17, 19, 17, 17,
	16, 22, 17, 19,
	14, 24, 16, 22,
	11, 25, 14, 24,
	8, 25, 11, 25,
	5, 24,  8, 25,
	4, 23,  5, 24,
	3, 21,  4, 23,
	20, // width
};

static const uint8_t c22[] PROGMEM = {
	15,  5, 16,  7,
	12,  4, 15,  5,
	10,  4, 12,  4,
	7,  5, 10,  4,
	5,  8,  7,  5,
	4, 13,  5,  8,
	4, 18,  4, 13,
	5, 22,  4, 18,
	7, 24,  5, 22,
	10, 25,  7, 24,
	11, 25, 10, 25,
	14, 24, 11, 25,
	16, 22, 14, 24,
	17, 19, 16, 22,
	17, 18, 17, 19,
	16, 15, 17, 18,
	14, 13, 16, 15,
	11, 12, 14, 13,
	10, 12, 11, 12,
	7, 13, 10, 12,
	5, 15,  7, 13,
	4, 18,  5, 15,
	20, // width
};

static const uint8_t c23[] PROGMEM = {
	7, 25, 17,  4,
	17,  4,  3,  4,
	20, // width
};

static const uint8_t c24[] PROGMEM = {
	5,  5,  8,  4,
	4,  7,  5,  5,
	4,  9,  4,  7,
	5, 11,  4,  9,
	7, 12,  5, 11,
	11, 13,  7, 12,
	14, 14, 11, 13,
	16, 16, 14, 14,
	17, 18, 16, 16,
	17, 21, 17, 18,
	16, 23, 17, 21,
	15, 24, 16, 23,
	12, 25, 15, 24,
	8, 25, 12, 25,
	5, 24,  8, 25,
	4, 23,  5, 24,
	3, 21,  4, 23,
	3, 18,  3, 21,
	4, 16,  3, 18,
	6, 14,  4, 16,
	9, 13,  6, 14,
	13, 12,  9, 13,
	15, 11, 13, 12,
	16,  9, 15, 11,
	16,  7, 16,  9,
	15,  5, 16,  7,
	12,  4, 15,  5,
	8,  4, 12,  4,
	20, // width
};

static const uint8_t c25[] PROGMEM = {
	15, 14, 16, 11,
	13, 16, 15, 14,
	10, 17, 13, 16,
	9, 17, 10, 17,
	6, 16,  9, 17,
	4, 14,  6, 16,
	3, 11,  4, 14,
	3, 10,  3, 11,
	4,  7,  3, 10,
	6,  5,  4,  7,
	9,  4,  6,  5,
	10,  4,  9,  4,
	13,  5, 10,  4,
	15,  7, 13,  5,
	16, 11, 15,  7,
	16, 16, 16, 11,
	15, 21, 16, 16,
	13, 24, 15, 21,
	10, 25, 13, 24,
	8, 25, 10, 25,
	5, 24,  8, 25,
	4, 22,  5, 24,
	20, // width
};

static const uint8_t c26[] PROGMEM = {
	4, 12,  5, 11,
	5, 13,  4, 12,
	6, 12,  5, 13,
	5, 11,  6, 12,
	4, 24,  5, 23,
	5, 25,  4, 24,
	6, 24,  5, 25,
	5, 23,  6, 24,
	10, // width
};

static const uint8_t c27[] PROGMEM = {
	4, 12,  5, 11,
	5, 13,  4, 12,
	6, 12,  5, 13,
	5, 11,  6, 12,
	5, 25,  6, 24,
	4, 24,  5, 25,
	5, 23,  4, 24,
	6, 24,  5, 23,
	6, 26,  6, 24,
	5, 28,  6, 26,
	4, 29,  5, 28,
	10, // width
};

static const uint8_t c28[] PROGMEM = {
	4, 16, 20,  7,
	20, 25,  4, 16,
	24, // width
};

static const uint8_t c29[] PROGMEM = {
	22, 13,  4, 13,
	22, 19,  4, 19,
	26, // width
};

static const uint8_t c30[] PROGMEM = {
	20, 16,  4,  7,
	4, 25, 20, 16,
	24, // width
};

static const uint8_t c31[] PROGMEM = {
	3,  8,  3,  9,
	4,  6,  3,  8,
	5,  5,  4,  6,
	7,  4,  5,  5,
	11,  4,  7,  4,
	13,  5, 11,  4,
	14,  6, 13,  5,
	15,  8, 14,  6,
	15, 10, 15,  8,
	14, 12, 15, 10,
	13, 13, 14, 12,
	9, 15, 13, 13,
	9, 18,  9, 15,
	8, 24,  9, 23,
	9, 25,  8, 24,
	10, 24,  9, 25,
	9, 23, 10, 24,
	18, // width
};

static const uint8_t c32[] PROGMEM = {
	17, 10, 18, 12,
	15,  9, 17, 10,
	12,  9, 15,  9,
	10, 10, 12,  9,
	9, 11, 10, 10,
	8, 14,  9, 11,
	8, 17,  8, 14,
	9, 19,  8, 17,
	11, 20,  9, 19,
	14, 20, 11, 20,
	16, 19, 14, 20,
	17, 17, 16, 19,
	10, 11, 12,  9,
	9, 14, 10, 11,
	9, 17,  9, 14,
	10, 19,  9, 17,
	11, 20, 10, 19,
	17, 17, 18,  9,
	17, 19, 17, 17,
	19, 20, 17, 19,
	21, 20, 19, 20,
	23, 18, 21, 20,
	24, 15, 23, 18,
	24, 13, 24, 15,
	23, 10, 24, 13,
	22,  8, 23, 10,
	20,  6, 22,  8,
	18,  5, 20,  6,
	15,  4, 18,  5,
	12,  4, 15,  4,
	9,  5, 12,  4,
	7,  6,  9,  5,
	5,  8,  7,  6,
	4, 10,  5,  8,
	3, 13,  4, 10,
	3, 16,  3, 13,
	4, 19,  3, 16,
	5, 21,  4, 19,
	7, 23,  5, 21,
	9, 24,  7, 23,
	12, 25,  9, 24,
	15, 25, 12, 25,
	18, 24, 15, 25,
	20, 23, 18, 24,
	21, 22, 20, 23,
	18, 17, 19,  9,
	18, 19, 18, 17,
	19, 20, 18, 19,
	27, // width
};

static const uint8_t c33[] PROGMEM = {
	1, 25,  9,  4,
	17, 25,  9,  4,
	14, 18,  4, 18,
	18, // width
};

static const uint8_t c34[] PROGMEM = {
	4, 25,  4,  4,
	13,  4,  4,  4,
	16,  5, 13,  4,
	17,  6, 16,  5,
	18,  8, 17,  6,
	18, 10, 18,  8,
	17, 12, 18, 10,
	16, 13, 17, 12,
	13, 14, 16, 13,
	13, 14,  4, 14,
	16, 15, 13, 14,
	17, 16, 16, 15,
	18, 18, 17, 16,
	18, 21, 18, 18,
	17, 23, 18, 21,
	16, 24, 17, 23,
	13, 25, 16, 24,
	4, 25, 13, 25,
	21, // width
};

static const uint8_t c35[] PROGMEM = {
	17,  7, 18,  9,
	15,  5, 17,  7,
	13,  4, 15,  5,
	9,  4, 13,  4,
	7,  5,  9,  4,
	5,  7,  7,  5,
	4,  9,  5,  7,
	3, 12,  4,  9,
	3, 17,  3, 12,
	4, 20,  3, 17,
	5, 22,  4, 20,
	7, 24,  5, 22,
	9, 25,  7, 24,
	13, 25,  9, 25,
	15, 24, 13, 25,
	17, 22, 15, 24,
	18, 20, 17, 22,
	21, // width
};

static const uint8_t c36[] PROGMEM = {
	4, 25,  4,  4,
	11,  4,  4,  4,
	14,  5, 11,  4,
	16,  7, 14,  5,
	17,  9, 16,  7,
	18, 12, 17,  9,
	18, 17, 18, 12,
	17, 20, 18, 17,
	16, 22, 17, 20,
	14, 24, 16, 22,
	11, 25, 14, 24,
	4, 25, 11, 25,
	21, // width
};

static const uint8_t c37[] PROGMEM = {
	4, 25,  4,  4,
	17,  4,  4,  4,
	12, 14,  4, 14,
	17, 25,  4, 25,
	19, // width
};

static const uint8_t c38[] PROGMEM = {
	4, 25,  4,  4,
	17,  4,  4,  4,
	12, 14,  4, 14,
	18, // width
};

static const uint8_t c39[] PROGMEM = {
	17,  7, 18,  9,
	15,  5, 17,  7,
	13,  4, 15,  5,
	9,  4, 13,  4,
	7,  5,  9,  4,
	5,  7,  7,  5,
	4,  9,  5,  7,
	3, 12,  4,  9,
	3, 17,  3, 12,
	4, 20,  3, 17,
	5, 22,  4, 20,
	7, 24,  5, 22,
	9, 25,  7, 24,
	13, 25,  9, 25,
	15, 24, 13, 25,
	17, 22, 15, 24,
	18, 20, 17, 22,
	18, 17, 18, 20,
	18, 17, 13, 17,
	21, // width
};

static const uint8_t c40[] PROGMEM = {
	4, 25,  4,  4,
	18, 25, 18,  4,
	18, 14,  4, 14,
	22, // width
};

static const uint8_t c41[] PROGMEM = {
	4, 25,  4,  4,
	8, // width
};

static const uint8_t c42[] PROGMEM = {
	12, 20, 12,  4,
	11, 23, 12, 20,
	10, 24, 11, 23,
	8, 25, 10, 24,
	6, 25,  8, 25,
	4, 24,  6, 25,
	3, 23,  4, 24,
	2, 20,  3, 23,
	2, 18,  2, 20,
	16, // width
};

static const uint8_t c43[] PROGMEM = {
	4, 25,  4,  4,
	4, 18, 18,  4,
	18, 25,  9, 13,
	21, // width
};

static const uint8_t c44[] PROGMEM = {
	4, 25,  4,  4,
	16, 25,  4, 25,
	17, // width
};

static const uint8_t c45[] PROGMEM = {
	4, 25,  4,  4,
	12, 25,  4,  4,
	12, 25, 20,  4,
	20, 25, 20,  4,
	24, // width
};

static const uint8_t c46[] PROGMEM = {
	4, 25,  4,  4,
	18, 25,  4,  4,
	18, 25, 18,  4,
	22, // width
};

static const uint8_t c47[] PROGMEM = {
	7,  5,  9,  4,
	5,  7,  7,  5,
	4,  9,  5,  7,
	3, 12,  4,  9,
	3, 17,  3, 12,
	4, 20,  3, 17,
	5, 22,  4, 20,
	7, 24,  5, 22,
	9, 25,  7, 24,
	13, 25,  9, 25,
	15, 24, 13, 25,
	17, 22, 15, 24,
	18, 20, 17, 22,
	19, 17, 18, 20,
	19, 12, 19, 17,
	18,  9, 19, 12,
	17,  7, 18,  9,
	15,  5, 17,  7,
	13,  4, 15,  5,
	9,  4, 13,  4,
	22, // width
};

static const uint8_t c48[] PROGMEM = {
	4, 25,  4,  4,
	13,  4,  4,  4,
	16,  5, 13,  4,
	17,  6, 16,  5,
	18,  8, 17,  6,
	18, 11, 18,  8,
	17, 13, 18, 11,
	16, 14, 17, 13,
	13, 15, 16, 14,
	4, 15, 13, 15,
	21, // width
};

static const uint8_t c49[] PROGMEM = {
	7,  5,  9,  4,
	5,  7,  7,  5,
	4,  9,  5,  7,
	3, 12,  4,  9,
	3, 17,  3, 12,
	4, 20,  3, 17,
	5, 22,  4, 20,
	7, 24,  5, 22,
	9, 25,  7, 24,
	13, 25,  9, 25,
	15, 24, 13, 25,
	17, 22, 15, 24,
	18, 20, 17, 22,
	19, 17, 18, 20,
	19, 12, 19, 17,
	18,  9, 19, 12,
	17,  7, 18,  9,
	15,  5, 17,  7,
	13,  4, 15,  5,
	9,  4, 13,  4,
	18, 27, 12, 21,
	22, // width
};

static const uint8_t c50[] PROGMEM = {
	4, 25,  4,  4,
	13,  4,  4,  4,
	16,  5, 13,  4,
	17,  6, 16,  5,
	18,  8, 17,  6,
	18, 10, 18,  8,
	17, 12, 18, 10,
	16, 13, 17, 12,
	13, 14, 16, 13,
	4, 14, 13, 14,
	18, 25, 11, 14,
	21, // width
};

static const uint8_t c51[] PROGMEM = {
	15,  5, 17,  7,
	12,  4, 15,  5,
	8,  4, 12,  4,
	5,  5,  8,  4,
	3,  7,  5,  5,
	3,  9,  3,  7,
	4, 11,  3,  9,
	5, 12,  4, 11,
	7, 13,  5, 12,
	13, 15,  7, 13,
	15, 16, 13, 15,
	16, 17, 15, 16,
	17, 19, 16, 17,
	17, 22, 17, 19,
	15, 24, 17, 22,
	12, 25, 15, 24,
	8, 25, 12, 25,
	5, 24,  8, 25,
	3, 22,  5, 24,
	20, // width
};

static const uint8_t c52[] PROGMEM = {
	8, 25,  8,  4,
	15,  4,  1,  4,
	16, // width
};

static const uint8_t c53[] PROGMEM = {
	4, 19,  4,  4,
	5, 22,  4, 19,
	7, 24,  5, 22,
	10, 25,  7, 24,
	12, 25, 10, 25,
	15, 24, 12, 25,
	17, 22, 15, 24,
	18, 19, 17, 22,
	18,  4, 18, 19,
	22, // width
};

static const uint8_t c54[] PROGMEM = {
	9, 25,  1,  4,
	9, 25, 17,  4,
	18, // width
};

static const uint8_t c55[] PROGMEM = {
	7, 25,  2,  4,
	7, 25, 12,  4,
	17, 25, 12,  4,
	17, 25, 22,  4,
	24, // width
};

static const uint8_t c56[] PROGMEM = {
	17, 25,  3,  4,
	3, 25, 17,  4,
	20, // width
};

static const uint8_t c57[] PROGMEM = {
	9, 14,  1,  4,
	9, 25,  9, 14,
	9, 14, 17,  4,
	18, // width
};

static const uint8_t c58[] PROGMEM = {
	3, 25, 17,  4,
	17,  4,  3,  4,
	17, 25,  3, 25,
	20, // width
};

static const uint8_t c59[] PROGMEM = {
	4, 32,  4,  0,
	5, 32,  5,  0,
	11,  0,  4,  0,
	11, 32,  4, 32,
	14, // width
};

static const uint8_t c60[] PROGMEM = {
	14, 28,  0,  4,
	14, // width
};

static const uint8_t c61[] PROGMEM = {
	9, 32,  9,  0,
	10, 32, 10,  0,
	10,  0,  3,  0,
	10, 32,  3, 32,
	14, // width
};

static const uint8_t c62[] PROGMEM = {
	8,  7,  6, 10,
	10, 10,  8,  7,
	8,  8,  3, 13,
	13, 13,  8,  8,
	8, 25,  8,  8,
	16, // width
};

static const uint8_t c63[] PROGMEM = {
	16, 27,  0, 27,
	16, // width
};

static const uint8_t c64[] PROGMEM = {
	5,  5,  6,  4,
	4,  7,  5,  5,
	4,  9,  4,  7,
	5, 10,  4,  9,
	6,  9,  5, 10,
	5,  8,  6,  9,
	10, // width
};

static const uint8_t c65[] PROGMEM = {
	15, 25, 15, 11,
	13, 12, 15, 14,
	11, 11, 13, 12,
	8, 11, 11, 11,
	6, 12,  8, 11,
	4, 14,  6, 12,
	3, 17,  4, 14,
	3, 19,  3, 17,
	4, 22,  3, 19,
	6, 24,  4, 22,
	8, 25,  6, 24,
	11, 25,  8, 25,
	13, 24, 11, 25,
	15, 22, 13, 24,
	19, // width
};

static const uint8_t c66[] PROGMEM = {
	4, 25,  4,  4,
	6, 12,  4, 14,
	8, 11,  6, 12,
	11, 11,  8, 11,
	13, 12, 11, 11,
	15, 14, 13, 12,
	16, 17, 15, 14,
	16, 19, 16, 17,
	15, 22, 16, 19,
	13, 24, 15, 22,
	11, 25, 13, 24,
	8, 25, 11, 25,
	6, 24,  8, 25,
	4, 22,  6, 24,
	19, // width
};

static const uint8_t c67[] PROGMEM = {
	13, 12, 15, 14,
	11, 11, 13, 12,
	8, 11, 11, 11,
	6, 12,  8, 11,
	4, 14,  6, 12,
	3, 17,  4, 14,
	3, 19,  3, 17,
	4, 22,  3, 19,
	6, 24,  4, 22,
	8, 25,  6, 24,
	11, 25,  8, 25,
	13, 24, 11, 25,
	15, 22, 13, 24,
	18, // width
};

static const uint8_t c68[] PROGMEM = {
	15, 25, 15,  4,
	13, 12, 15, 14,
	11, 11, 13, 12,
	8, 11, 11, 11,
	6, 12,  8, 11,
	4, 14,  6, 12,
	3, 17,  4, 14,
	3, 19,  3, 17,
	4, 22,  3, 19,
	6, 24,  4, 22,
	8, 25,  6, 24,
	11, 25,  8, 25,
	13, 24, 11, 25,
	15, 22, 13, 24,
	19, // width
};

static const uint8_t c69[] PROGMEM = {
	15, 17,  3, 17,
	15, 15, 15, 17,
	14, 13, 15, 15,
	13, 12, 14, 13,
	11, 11, 13, 12,
	8, 11, 11, 11,
	6, 12,  8, 11,
	4, 14,  6, 12,
	3, 17,  4, 14,
	3, 19,  3, 17,
	4, 22,  3, 19,
	6, 24,  4, 22,
	8, 25,  6, 24,
	11, 25,  8, 25,
	13, 24, 11, 25,
	15, 22, 13, 24,
	18, // width
};

static const uint8_t c70[] PROGMEM = {
	8,  4, 10,  4,
	6,  5,  8,  4,
	5,  8,  6,  5,
	5, 25,  5,  8,
	9, 11,  2, 11,
	12, // width
};

static const uint8_t c71[] PROGMEM = {
	15, 27, 15, 11,
	14, 30, 15, 27,
	13, 31, 14, 30,
	11, 32, 13, 31,
	8, 32, 11, 32,
	6, 31,  8, 32,
	13, 12, 15, 14,
	11, 11, 13, 12,
	8, 11, 11, 11,
	6, 12,  8, 11,
	4, 14,  6, 12,
	3, 17,  4, 14,
	3, 19,  3, 17,
	4, 22,  3, 19,
	6, 24,  4, 22,
	8, 25,  6, 24,
	11, 25,  8, 25,
	13, 24, 11, 25,
	15, 22, 13, 24,
	19, // width
};

static const uint8_t c72[] PROGMEM = {
	4, 25,  4,  4,
	7, 12,  4, 15,
	9, 11,  7, 12,
	12, 11,  9, 11,
	14, 12, 12, 11,
	15, 15, 14, 12,
	15, 25, 15, 15,
	19, // width
};

static const uint8_t c73[] PROGMEM = {
	4,  5,  3,  4,
	5,  4,  4,  5,
	4,  3,  5,  4,
	3,  4,  4,  3,
	4, 25,  4, 11,
	8, // width
};

static const uint8_t c74[] PROGMEM = {
	6,  5,  5,  4,
	7,  4,  6,  5,
	6,  3,  7,  4,
	5,  4,  6,  3,
	6, 28,  6, 11,
	5, 31,  6, 28,
	3, 32,  5, 31,
	1, 32,  3, 32,
	10, // width
};

static const uint8_t c75[] PROGMEM = {
	4, 25,  4,  4,
	4, 21, 14, 11,
	15, 25,  8, 17,
	17, // width
};

static const uint8_t c76[] PROGMEM = {
	4, 25,  4,  4,
	8, // width
};

static const uint8_t c77[] PROGMEM = {
	4, 25,  4, 11,
	7, 12,  4, 15,
	9, 11,  7, 12,
	12, 11,  9, 11,
	14, 12, 12, 11,
	15, 15, 14, 12,
	15, 25, 15, 15,
	18, 12, 15, 15,
	20, 11, 18, 12,
	23, 11, 20, 11,
	25, 12, 23, 11,
	26, 15, 25, 12,
	26, 25, 26, 15,
	30, // width
};

static const uint8_t c78[] PROGMEM = {
	4, 25,  4, 11,
	7, 12,  4, 15,
	9, 11,  7, 12,
	12, 11,  9, 11,
	14, 12, 12, 11,
	15, 15, 14, 12,
	15, 25, 15, 15,
	19, // width
};

static const uint8_t c79[] PROGMEM = {
	6, 12,  8, 11,
	4, 14,  6, 12,
	3, 17,  4, 14,
	3, 19,  3, 17,
	4, 22,  3, 19,
	6, 24,  4, 22,
	8, 25,  6, 24,
	11, 25,  8, 25,
	13, 24, 11, 25,
	15, 22, 13, 24,
	16, 19, 15, 22,
	16, 17, 16, 19,
	15, 14, 16, 17,
	13, 12, 15, 14,
	11, 11, 13, 12,
	8, 11, 11, 11,
	19, // width
};

static const uint8_t c80[] PROGMEM = {
	4, 32,  4, 11,
	6, 12,  4, 14,
	8, 11,  6, 12,
	11, 11,  8, 11,
	13, 12, 11, 11,
	15, 14, 13, 12,
	16, 17, 15, 14,
	16, 19, 16, 17,
	15, 22, 16, 19,
	13, 24, 15, 22,
	11, 25, 13, 24,
	8, 25, 11, 25,
	6, 24,  8, 25,
	4, 22,  6, 24,
	19, // width
};

static const uint8_t c81[] PROGMEM = {
	15, 32, 15, 11,
	13, 12, 15, 14,
	11, 11, 13, 12,
	8, 11, 11, 11,
	6, 12,  8, 11,
	4, 14,  6, 12,
	3, 17,  4, 14,
	3, 19,  3, 17,
	4, 22,  3, 19,
	6, 24,  4, 22,
	8, 25,  6, 24,
	11, 25,  8, 25,
	13, 24, 11, 25,
	15, 22, 13, 24,
	19, // width
};

static const uint8_t c82[] PROGMEM = {
	4, 25,  4, 11,
	5, 14,  4, 17,
	7, 12,  5, 14,
	9, 11,  7, 12,
	12, 11,  9, 11,
	13, // width
};

static const uint8_t c83[] PROGMEM = {
	13, 12, 14, 14,
	10, 11, 13, 12,
	7, 11, 10, 11,
	4, 12,  7, 11,
	3, 14,  4, 12,
	4, 16,  3, 14,
	6, 17,  4, 16,
	11, 18,  6, 17,
	13, 19, 11, 18,
	14, 21, 13, 19,
	14, 22, 14, 21,
	13, 24, 14, 22,
	10, 25, 13, 24,
	7, 25, 10, 25,
	4, 24,  7, 25,
	3, 22,  4, 24,
	17, // width
};

static const uint8_t c84[] PROGMEM = {
	5, 21,  5,  4,
	6, 24,  5, 21,
	8, 25,  6, 24,
	10, 25,  8, 25,
	9, 11,  2, 11,
	12, // width
};

static const uint8_t c85[] PROGMEM = {
	4, 21,  4, 11,
	5, 24,  4, 21,
	7, 25,  5, 24,
	10, 25,  7, 25,
	12, 24, 10, 25,
	15, 21, 12, 24,
	15, 25, 15, 11,
	19, // width
};

static const uint8_t c86[] PROGMEM = {
	8, 25,  2, 11,
	8, 25, 14, 11,
	16, // width
};

static const uint8_t c87[] PROGMEM = {
	7, 25,  3, 11,
	7, 25, 11, 11,
	15, 25, 11, 11,
	15, 25, 19, 11,
	22, // width
};

static const uint8_t c88[] PROGMEM = {
	14, 25,  3, 11,
	3, 25, 14, 11,
	17, // width
};

static const uint8_t c89[] PROGMEM = {
	8, 25,  2, 11,
	8, 25, 14, 11,
	6, 29,  8, 25,
	4, 31,  6, 29,
	2, 32,  4, 31,
	1, 32,  2, 32,
	16, // width
};

static const uint8_t c90[] PROGMEM = {
	3, 25, 14, 11,
	14, 11,  3, 11,
	14, 25,  3, 25,
	17, // width
};

static const uint8_t c91[] PROGMEM = {
	7,  1,  9,  0,
	6,  2,  7,  1,
	5,  4,  6,  2,
	5,  6,  5,  4,
	6,  8,  5,  6,
	7,  9,  6,  8,
	8, 11,  7,  9,
	8, 13,  8, 11,
	6, 15,  8, 13,
	6,  3,  7,  1,
	6,  5,  6,  3,
	7,  7,  6,  5,
	8,  8,  7,  7,
	9, 10,  8,  8,
	9, 12,  9, 10,
	8, 14,  9, 12,
	4, 16,  8, 14,
	8, 18,  4, 16,
	9, 20,  8, 18,
	9, 22,  9, 20,
	8, 24,  9, 22,
	7, 25,  8, 24,
	6, 27,  7, 25,
	6, 29,  6, 27,
	7, 31,  6, 29,
	8, 19,  6, 17,
	8, 21,  8, 19,
	7, 23,  8, 21,
	6, 24,  7, 23,
	5, 26,  6, 24,
	5, 28,  5, 26,
	6, 30,  5, 28,
	7, 31,  6, 30,
	9, 32,  7, 31,
	14, // width
};

static const uint8_t c92[] PROGMEM = {
	4, 32,  4,  0,
	8, // width
};

static const uint8_t c93[] PROGMEM = {
	7,  1,  5,  0,
	8,  2,  7,  1,
	9,  4,  8,  2,
	9,  6,  9,  4,
	8,  8,  9,  6,
	7,  9,  8,  8,
	6, 11,  7,  9,
	6, 13,  6, 11,
	8, 15,  6, 13,
	8,  3,  7,  1,
	8,  5,  8,  3,
	7,  7,  8,  5,
	6,  8,  7,  7,
	5, 10,  6,  8,
	5, 12,  5, 10,
	6, 14,  5, 12,
	10, 16,  6, 14,
	6, 18, 10, 16,
	5, 20,  6, 18,
	5, 22,  5, 20,
	6, 24,  5, 22,
	7, 25,  6, 24,
	8, 27,  7, 25,
	8, 29,  8, 27,
	7, 31,  8, 29,
	6, 19,  8, 17,
	6, 21,  6, 19,
	7, 23,  6, 21,
	8, 24,  7, 23,
	9, 26,  8, 24,
	9, 28,  9, 26,
	8, 30,  9, 28,
	7, 31,  8, 30,
	5, 32,  7, 31,
	14, // width
};

static const uint8_t c94[] PROGMEM = {
	3, 17,  3, 19,
	4, 14,  3, 17,
	6, 13,  4, 14,
	8, 13,  6, 13,
	10, 14,  8, 13,
	14, 17, 10, 14,
	16, 18, 14, 17,
	18, 18, 16, 18,
	20, 17, 18, 18,
	21, 15, 20, 17,
	4, 15,  3, 17,
	6, 14,  4, 15,
	8, 14,  6, 14,
	10, 15,  8, 14,
	14, 18, 10, 15,
	16, 19, 14, 18,
	18, 19, 16, 19,
	20, 18, 18, 19,
	21, 15, 20, 18,
	21, 13, 21, 15,
	24, // width
};

static const uint8_t c95[] PROGMEM = {
	4,  5,  6,  4,
	3,  7,  4,  5,
	3,  9,  3,  7,
	4, 11,  3,  9,
	6, 12,  4, 11,
	8, 12,  6, 12,
	10, 11,  8, 12,
	11,  9, 10, 11,
	11,  7, 11,  9,
	10,  5, 11,  7,
	8,  4, 10,  5,
	6,  4,  8,  4,
	14, // width
};

static const uint8_t addr[] PROGMEM = {
	(const uint8_t &) *c00,
	(const uint8_t &) *c01,
	(const uint8_t &) *c02,
};

//static const uint32_t addr[] PROGMEM = {
//	va00, va01, va02, va03, va04, va05, va06, va07, va08, va09, va10, va11, va12, va13, va14, va15,
//	va16, va17, va18, va19, va20, va21, va22, va23, va24, va25, va26, va27, va28, va29, va30, va31,
//	va32, va33, va34, va35, va36, va37, va38, va39, va40, va41, va42, va43, va44, va45, va46, va47,
//	va48, va49, va50, va51, va52, va53, va54, va55, va56, va57, va58, va59, va60, va61, va62, va63,
//	va64, va65, va66, va67, va68, va69, va70, va71, va72, va73, va74, va75, va76, va77, va78, va79,
//	va80, va81, va82, va83, va84, va85, va86, va87, va88, va89, va90, va91, va92, va93, va94, va95,
//};

#define va00 pgm_get_far_address(c00)
#define va01 pgm_get_far_address(c01)
#define va02 pgm_get_far_address(c02)
#define va03 pgm_get_far_address(c03)
#define va04 pgm_get_far_address(c04)
#define va05 pgm_get_far_address(c05)
#define va06 pgm_get_far_address(c06)
#define va07 pgm_get_far_address(c07)
#define va08 pgm_get_far_address(c08)
#define va09 pgm_get_far_address(c09)
#define va10 pgm_get_far_address(c10)
#define va11 pgm_get_far_address(c11)
#define va12 pgm_get_far_address(c12)
#define va13 pgm_get_far_address(c13)
#define va14 pgm_get_far_address(c14)
#define va15 pgm_get_far_address(c15)
#define va16 pgm_get_far_address(c16)
#define va17 pgm_get_far_address(c17)
#define va18 pgm_get_far_address(c18)
#define va19 pgm_get_far_address(c19)
#define va20 pgm_get_far_address(c20)
#define va21 pgm_get_far_address(c21)
#define va22 pgm_get_far_address(c22)
#define va23 pgm_get_far_address(c23)
#define va24 pgm_get_far_address(c24)
#define va25 pgm_get_far_address(c25)
#define va26 pgm_get_far_address(c26)
#define va27 pgm_get_far_address(c27)
#define va28 pgm_get_far_address(c28)
#define va29 pgm_get_far_address(c29)
#define va30 pgm_get_far_address(c30)
#define va31 pgm_get_far_address(c31)
#define va32 pgm_get_far_address(c32)
#define va33 pgm_get_far_address(c33)
#define va34 pgm_get_far_address(c34)
#define va35 pgm_get_far_address(c35)
#define va36 pgm_get_far_address(c36)
#define va37 pgm_get_far_address(c37)
#define va38 pgm_get_far_address(c38)
#define va39 pgm_get_far_address(c39)
#define va40 pgm_get_far_address(c40)
#define va41 pgm_get_far_address(c41)
#define va42 pgm_get_far_address(c42)
#define va43 pgm_get_far_address(c43)
#define va44 pgm_get_far_address(c44)
#define va45 pgm_get_far_address(c45)
#define va46 pgm_get_far_address(c46)
#define va47 pgm_get_far_address(c47)
#define va48 pgm_get_far_address(c48)
#define va49 pgm_get_far_address(c49)
#define va50 pgm_get_far_address(c50)
#define va51 pgm_get_far_address(c51)
#define va52 pgm_get_far_address(c52)
#define va53 pgm_get_far_address(c53)
#define va54 pgm_get_far_address(c54)
#define va55 pgm_get_far_address(c55)
#define va56 pgm_get_far_address(c56)
#define va57 pgm_get_far_address(c57)
#define va58 pgm_get_far_address(c58)
#define va59 pgm_get_far_address(c59)
#define va60 pgm_get_far_address(c60)
#define va61 pgm_get_far_address(c61)
#define va62 pgm_get_far_address(c62)
#define va63 pgm_get_far_address(c63)
#define va64 pgm_get_far_address(c64)
#define va65 pgm_get_far_address(c65)
#define va66 pgm_get_far_address(c66)
#define va67 pgm_get_far_address(c67)
#define va68 pgm_get_far_address(c68)
#define va69 pgm_get_far_address(c69)
#define va70 pgm_get_far_address(c70)
#define va71 pgm_get_far_address(c71)
#define va72 pgm_get_far_address(c72)
#define va73 pgm_get_far_address(c73)
#define va74 pgm_get_far_address(c74)
#define va75 pgm_get_far_address(c75)
#define va76 pgm_get_far_address(c76)
#define va77 pgm_get_far_address(c77)
#define va78 pgm_get_far_address(c78)
#define va79 pgm_get_far_address(c79)
#define va80 pgm_get_far_address(c80)
#define va81 pgm_get_far_address(c81)
#define va82 pgm_get_far_address(c82)
#define va83 pgm_get_far_address(c83)
#define va84 pgm_get_far_address(c84)
#define va85 pgm_get_far_address(c85)
#define va86 pgm_get_far_address(c86)
#define va87 pgm_get_far_address(c87)
#define va88 pgm_get_far_address(c88)
#define va89 pgm_get_far_address(c89)
#define va90 pgm_get_far_address(c90)
#define va91 pgm_get_far_address(c91)
#define va92 pgm_get_far_address(c92)
#define va93 pgm_get_far_address(c93)
#define va94 pgm_get_far_address(c94)
#define va95 pgm_get_far_address(c95)

#endif // #ifndef ROMANS_VECTOR_H