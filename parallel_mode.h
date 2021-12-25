///////////////////////////////////////////////////////////////////////////////////////
//
//  Noritake "Type 0: PARALLEL [Parallel Interface] format" (pg. 10)
//  Copyright (c) 2012, 2016 Roger A. Krupski <rakrupski@verizon.net>
//
//  Last update: 15 April 2016
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

inline void Noritake_GUU100::_initPort (void)
{
	// setup bitmasks
	RS_BIT  = digitalPinToBitMask (RGSEL_PIN); // register select pin
	RW_BIT  = digitalPinToBitMask (RDWRT_PIN); // read / write pin
	EN_BIT  = digitalPinToBitMask (ENABL_PIN); // chip enable pin
	CS1_BIT = digitalPinToBitMask (CSEL1_PIN); // chip select left pin
	CS2_BIT = digitalPinToBitMask (CSEL2_PIN); // chip select right pin
	RST_BIT = digitalPinToBitMask (RESET_PIN); // reset pin
	// setup PARALLEL control pins
	CTRL_OUT &= ~ (RS_BIT | RW_BIT | EN_BIT | CS1_BIT | CS2_BIT); // all low
	CTRL_OUT |= RST_BIT; // except reset
	CTRL_DDR |= (RS_BIT | RW_BIT | EN_BIT | CS1_BIT | CS2_BIT | RST_BIT); // all outputs
	DATA_DDR = 0xFF; // parallel data port as an output
	CTRL_OUT &= ~RST_BIT;
	__builtin_avr_delay_cycles (F_CPU / (USEC / 5)); // 5 usec
	CTRL_OUT |= RST_BIT;
}

inline uint8_t Noritake_GUU100::_readPort (uint8_t rs)
{
	uint8_t data;
	DATA_DDR = 0x00; // parallel data port as an input
	// set proper cs1/2 and pulse EN (dummy read - GU128X64E manual pg. 16)
	CTRL_OUT |= (((_cur_x < (_displayWidth / 2)) ? CS1_BIT : CS2_BIT) | (rs ? RS_BIT : 0) | RW_BIT | EN_BIT);
	CTRL_OUT &= ~ (((_cur_x < (_displayWidth / 2)) ? CS2_BIT : CS1_BIT) | (rs ? 0 : RS_BIT) | EN_BIT);
	CTRL_OUT |= EN_BIT; // latch data to bus on rising edge
	// bus settle time 320 nsec (GU128X64E manual pg. 10)
	__builtin_avr_delay_cycles (F_CPU / (NSEC / 320));
	data = DATA_INP; // read a byte from VFD->AVR
	CTRL_OUT &= ~EN_BIT; // de-assert enable
	// we set the data port back to outputs so that _writePort doesn't
	// have to do it every time - writes occur about 9 times for every
	// read so it makes things run a little faster.
	DATA_DDR = 0xFF; // parallel data port as an output
	return data;
}

inline void Noritake_GUU100::_writePort (uint8_t data, uint8_t rs)
{
	CTRL_OUT = (((_cur_x & (_displayWidth / 2)) ? CS2_BIT : CS1_BIT) | (rs ? RS_BIT : 0) | RST_BIT);
	DATA_OUT = data; // write a byte from AVR->VFD
	CTRL_OUT |= EN_BIT; // assert enable
	// bus settle time 320 nsec (GU128X64E manual pg. 10)
	__builtin_avr_delay_cycles (F_CPU / (NSEC / 320));
	CTRL_OUT &= ~EN_BIT; // latch data to vfd on falling edge
}

#endif // #if (defined(....
#endif // #ifndef PARALLEL_MODE_H

// end parallel_mode.h
