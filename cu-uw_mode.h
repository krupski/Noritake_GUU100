///////////////////////////////////////////////////////////////////////////////////////
//
//  Noritake "Type 1: CU-UW series [Noritake-itron module] like format" (pg. 7)
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

#ifndef CU_UW_MODE_H
#define CU_UW_MODE_H

#if (defined (PARALLEL_MODE_H) || defined (SPI_MODE_H))
#error >>>>>> ONLY ONE MODE MAY BE DEFINED - EDIT "config.h" <<<<<<
#else

#define SIO 50 //
#define CSL 53 // these are MEGA2560 pins
#define SCK 52 // define actual pins used here
#define RST 99 //

#define SYNC ((1<<7)|(1<<6)|(1<<5)) // sync bits
#define CS1 (1<<4) // chip select 1 it
#define CS2 (1<<3) // chip select 2 bit
#define RW  (1<<2) // r/w bit (r=1, w=0)
#define RS  (1<<1) // register select bit

void Noritake_GUU100::_initPort (void)
{
	uint8_t x;

	// 100 msec delay after powerup (GU128X64E manual pg. 17)
	__builtin_avr_delay_cycles (F_CPU / (_MSEC / 100));

	x = digitalPinToPort (SIO);
	SIO_OUT = portOutputRegister (x);
	SIO_DDR = portModeRegister (x);
	SIO_INP = portInputRegister (x);

	x = digitalPinToPort (CSL);
	CSL_OUT = portOutputRegister (x);
	CSL_DDR = portModeRegister (x);

	x = digitalPinToPort (SCK);
	SCK_OUT = portOutputRegister (x);
	SCK_DDR = portModeRegister (x);

	x = digitalPinToPort (RST);
	RST_OUT = portOutputRegister (x);
	RST_DDR = portModeRegister (x);

	SIO_BIT = digitalPinToBitMask (SIO);
	CSL_BIT = digitalPinToBitMask (CSL);
	SCK_BIT = digitalPinToBitMask (SCK);
	RST_BIT = digitalPinToBitMask (RST);

	// config I/O pins
	*CSL_OUT |= CSL_BIT; // csl (stb) default high
	*SCK_OUT |= SCK_BIT; // sck default high
	*SIO_OUT |= SIO_BIT; // sio default high
	*RST_OUT |= RST_BIT; // reset default high

	// config I/O ddr's
	*CSL_DDR |= CSL_BIT; // csl (stb) output
	*SCK_DDR |= SCK_BIT; // sck output
	*SIO_DDR &= ~SIO_BIT; // sio input
	*RST_DDR |= RST_BIT; // reset output

	// assert HW reset for minimum 250 nsec (GU128X64E manual pg. 17)
	*RST_OUT &= ~RST_BIT;
	__builtin_avr_delay_cycles (F_CPU / _USEC); // 1 usec
	*RST_OUT |= RST_BIT;
}

void Noritake_GUU100::_writePort (uint8_t data, uint8_t rs)
{
	uint8_t cmd;

	cmd = (SYNC | ((_cur_x < (_displayWidth / 2)) ? CS2 : CS1) | (rs ? RS : 0));

	*CSL_OUT &= ~CSL_BIT; // assert strobe
	_cu_uw_write (cmd); // send write command
	_cu_uw_write (data); // send data
	*CSL_OUT |= CSL_BIT; // de-assert strobe
}

uint8_t Noritake_GUU100::_readPort (uint8_t rs)
{
	uint8_t cmd;
	uint8_t data;

	cmd = (SYNC | RW | ((_cur_x < (_displayWidth / 2)) ? CS2 : CS1) | (rs ? RS : 0));

	*CSL_OUT &= ~CSL_BIT; // assert strobe
	_cu_uw_write (cmd); // send read command
	data = _cu_uw_read(); // read data
	*CSL_OUT |= CSL_BIT; // de-assert strobe
	return data; // return read data
}

uint8_t Noritake_GUU100::_cu_uw_read (void)
{
	uint8_t bits = 8;
	uint8_t data;

	*SIO_DDR &= ~SIO_BIT; // set siso DDR as input

	while (bits--) { // write out bits
		*SCK_OUT &= ~SCK_BIT; // read bit on falling edge
		*SIO_INP & SIO_BIT ? data |= (1 << bits) : data &= ~(1 << bits);  // read bit
		*SCK_OUT |= SCK_BIT; // set sck high
	}

	return data;
}

void Noritake_GUU100::_cu_uw_write (uint8_t data)
{
	uint8_t bits = 8;

	*SIO_DDR |= SIO_BIT; // set siso DDR as output

	while (bits--) { // write out bits
		*SCK_OUT &= ~SCK_BIT; // set sck low
		data & (1 << bits) ? *SIO_OUT |= SIO_BIT : *SIO_OUT &= ~SIO_BIT;  // write bit
		*SCK_OUT |= SCK_BIT; // write bit on rising edge
	}
}

#endif // #if (defined(....
#endif // #ifndef CU_UW_MODE_H

// end cu-uw_mode.h
