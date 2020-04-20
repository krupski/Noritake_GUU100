///////////////////////////////////////////////////////////////////////////////////////
//
//  Noritake "Type 1: CU-UW series [Noritake-itron module] like format" (pg. 7)
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

#ifndef CU_UW_MODE_H
#define CU_UW_MODE_H

#if (defined (PARALLEL_MODE_H) || defined (SPI_MODE_H))
#error >>>>>> ONLY ONE MODE MAY BE DEFINED - EDIT "config.h" <<<<<<
#else

#define SIO 50 //
#define CSL 53 // these are MEGA2560 pins
#define SCK 52 // define actual pins used here
#define RST 99 //

inline void Noritake_GUU100::_initPort (void)
{
	uint8_t x;
	x = digitalPinToPort (SIO);
	SIO_OUT = portOutputRegister (x);
	SIO_DDR = portModeRegister (x);
	SIO_PIN = portInputRegister (x);
	x = digitalPinToPort (CSL);
	CSL_OUT = portOutputRegister (x);
	CSL_DDR = portModeRegister (x);
	CSL_PIN = portInputRegister (x);
	x = digitalPinToPort (SCK);
	SCK_OUT = portOutputRegister (x);
	SCK_DDR = portModeRegister (x);
	SCK_PIN = portInputRegister (x);
	x = digitalPinToPort (RST);
	RST_OUT = portOutputRegister (x);
	RST_DDR = portModeRegister (x);
	RST_PIN = portInputRegister (x);
	SIO_BIT = digitalPinToBitMask (SIO);
	CSL_BIT = digitalPinToBitMask (CSL);
	SCK_BIT = digitalPinToBitMask (SCK);
	RST_BIT = digitalPinToBitMask (RST);
	CS1_BIT = (1 << 4); // these are part of...
	CS2_BIT = (1 << 3); // ...the command packet
	// config I/O ddr's
	*CSL_DDR |= CSL_BIT; // csl (stb) output
	*SCK_DDR |= SCK_BIT; // sck output
	*SIO_DDR &= ~SIO_BIT; // sio input
	*RST_DDR |= RST_BIT; // reset output
	// config I/O pins
	*CSL_OUT |= CSL_BIT; // csl (stb) default high
	*SCK_OUT |= SCK_BIT; // sck default high
	*SIO_OUT |= SIO_BIT; // sio default high
	*RST_OUT |= RST_BIT; // reset default high
	// 100 msec delay after powerup (GU128X64E manual pg. 17)
	//	__builtin_avr_delay_cycles (F_CPU / (MSEC / 100));
	// assert HW reset for minimum 250 nsec (GU128X64E manual pg. 17)
	*RST_OUT &= ~RST_BIT;
	__builtin_avr_delay_cycles (F_CPU / (USEC / 5)); // 5 usec
	*RST_OUT |= RST_BIT;
}

inline void Noritake_GUU100::_writePort (uint8_t data, uint8_t rs)
{
	uint8_t cmd;
	(_cur_x < (_displayWidth / 2)) ? cmd = CS2_BIT : cmd = CS1_BIT;
	rs ? cmd |= 0xE2 : cmd |= 0xE0; // select cmd/data w/rw bit clear
	*CSL_OUT &= ~CSL_BIT; // assert strobe
	_cu_uw_write (cmd); // send write command
	_cu_uw_write (data); // send data
	*CSL_OUT |= CSL_BIT; // de-assert strobe
}

inline uint8_t Noritake_GUU100::_readPort (uint8_t rs)
{
	uint8_t cmd;
	uint8_t data;
	(_cur_x < (_displayWidth / 2)) ? cmd = CS2_BIT : cmd = CS1_BIT;
	rs ? cmd |= 0xE6 : cmd |= 0xE4; // select cmd/data w/rw bit set
	*CSL_OUT &= ~CSL_BIT; // assert strobe
	_cu_uw_write (cmd); // send read command
	data = _cu_uw_read(); // read data
	*CSL_OUT |= CSL_BIT; // de-assert strobe
	return data; // return read data
}

inline uint8_t Noritake_GUU100::_cu_uw_read (void)
{
	uint8_t bits = 8;
	uint8_t data;
	*SIO_DDR &= ~SIO_BIT; // set siso DDR as input

	while (bits--) { // write out bits
		*SCK_OUT &= ~SCK_BIT; // read bit on falling edge
		__builtin_avr_delay_cycles (F_CPU / (NSEC / 200.0));
		*SIO_PIN &SIO_BIT ? data |= (1 << bits) : data &= ~ (1 << bits);  // read bit
		*SCK_OUT |= SCK_BIT; // set sck high
	}

	return data;
}

inline void Noritake_GUU100::_cu_uw_write (uint8_t data)
{
	uint8_t bits = 8;
	*SIO_DDR |= SIO_BIT; // set siso DDR as output

	while (bits--) { // write out bits
		*SCK_OUT &= ~SCK_BIT; // set sck low
		__builtin_avr_delay_cycles (F_CPU / (NSEC / 200.0));
		data & (1 << bits) ? *SIO_OUT |= SIO_BIT : *SIO_OUT &= ~SIO_BIT;  // write bit
		*SCK_OUT |= SCK_BIT; // write bit on rising edge
	}
}

#endif // #if (defined(....
#endif // #ifndef CU_UW_MODE_H

// end cu-uw_mode.h
