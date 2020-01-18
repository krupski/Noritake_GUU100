///////////////////////////////////////////////////////////////////////////////////////
//
//  Noritake "Type 0: PARALLEL [Parallel Interface] format" (pg. 10)
//  Copyright (c) 2012, 2019 Roger A. Krupski <rakrupski@verizon.net>
//
//  Last update: 02 November 2019
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
///////////////////////////////////////////////////////////////////////////////////////

#ifndef PARALLEL_MODE_H
#define PARALLEL_MODE_H

#if (defined (CU_UW_MODE_H) || defined (SPI_MODE_H))
#error >>>>>> ONLY ONE MODE MAY BE DEFINED - EDIT "config.h" <<<<<<
#else

#define DATA_INP  PINA // data port is...
#define DATA_DDR  DDRA // ...PORT A
#define DATA_OUT PORTA // ...pins 22-29

#define CTRL_DDR  DDRC // control port is...
#define CTRL_OUT PORTC // ...PORT C pins 30-35

#define RGSEL_PIN 30 // register select
#define CSEL1_PIN 31 // "chip" select left side
#define RDWRT_PIN 32 // read/write pin
#define CSEL2_PIN 33 // "chip" select right side
#define ENABL_PIN 34 // chip enable pin
#define RESET_PIN 35 // reset pin connected here

void Noritake_GUU100::_initPort (void)
{
	// 100 msec delay after powerup (GU128X64E manual pg. 17)
	__builtin_avr_delay_cycles (F_CPU / (_MSEC / 100));

	// setup bitmasks
	RS_BIT  = digitalPinToBitMask (RGSEL_PIN); // register select pin
	CS1_BIT = digitalPinToBitMask (CSEL1_PIN); // chip select left pin
	RW_BIT  = digitalPinToBitMask (RDWRT_PIN); // read / write pin
	CS2_BIT = digitalPinToBitMask (CSEL2_PIN); // chip select right pin
	EN_BIT  = digitalPinToBitMask (ENABL_PIN); // chip enable pin
	RST_BIT = digitalPinToBitMask (RESET_PIN); // reset pin

	// setup PARALLEL control pins
	DATA_DDR = 0xFF; // parallel data port as an output
	CTRL_DDR |= (RS_BIT | RW_BIT | EN_BIT | CS1_BIT | CS2_BIT | RST_BIT); // all outputs
	CTRL_OUT &= (RS_BIT | RW_BIT | EN_BIT | CS1_BIT | CS2_BIT | RST_BIT); // all low
	__builtin_avr_delay_cycles (F_CPU / _USEC); // 1 usec
	CTRL_OUT |= RST_BIT; // de-assert reset
}

uint8_t Noritake_GUU100::_readPort (uint8_t rs)
{
	uint8_t data;

	DATA_DDR = 0x00;
	// clear chip selects, register select, set rw to "read", assert enable
	CTRL_OUT |= (CS2_BIT | CS1_BIT | RS_BIT | RW_BIT | EN_BIT);
	// set proper chip select, register select, de-assert enable
	// (performs the "dummy read" GU128X64E-U100 manual pg. 16)
	CTRL_OUT &= ~(((_cur_x < (_displayWidth / 2)) ? CS2_BIT : CS1_BIT) | (rs ? 0x00 : RS_BIT) | EN_BIT);
	// assert enable
	CTRL_OUT |= EN_BIT;
	// bus settle time 320 nsec minimum (GU128X64E manual pg. 10)
	__builtin_avr_delay_cycles (F_CPU / _USEC); // 1 usec
	// read data from display
	data = DATA_INP;
	// de-assert enable
	CTRL_OUT &= ~EN_BIT;
	// set data DDR to "output" (because writes occur about 9 times as
	// frequently as reads, so don't burden "_writePort" with setting DDR
	DATA_DDR = 0xFF;
	return data;
}

void Noritake_GUU100::_writePort (uint8_t data, uint8_t rs)
{
	// clear chip selects, register select
	CTRL_OUT |= (CS2_BIT | CS1_BIT | RS_BIT);
	// set proper chip select, register select, set rw to "write"
	CTRL_OUT &= ~(((_cur_x < (_displayWidth / 2)) ? CS2_BIT : CS1_BIT) | (rs ? 0x00 : RS_BIT) | RW_BIT);
	// assert enable
	CTRL_OUT |= EN_BIT;
	// write data to parallel port
	DATA_OUT = data;
	// de-assert enable
	CTRL_OUT &= ~EN_BIT;
}

#endif // #if (defined(....
#endif // #ifndef PARALLEL_MODE_H

// end parallel_mode.h
