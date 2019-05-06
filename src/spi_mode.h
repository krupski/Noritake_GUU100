///////////////////////////////////////////////////////////////////////////////////////
//
//  Noritake "Type 2: SPI [Serial Peripheral Interface] format" (pg. 8)
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

#ifndef SPI_MODE_H
#define SPI_MODE_H

#if (defined (PARALLEL_MODE_H) || defined (CU_UW_MODE_H))
#error >>>>>> ONLY ONE MODE MAY BE DEFINED - EDIT "config.h" <<<<<<
#else

#define CTRL_DDR DDRF  // control port DDR (PORT F)
#define CTRL_OUT PORTF // control port OUTPUT (pins A0-A2)
#define SPI_DDR DDRB   // SPI uses...
#define SPI_OUT PORTB  // ...PORT B

#define RESET_PIN A0 // reset pin connected here
#define CSEL2_PIN A1 // "chip" select right side
#define CSEL1_PIN A2 // "chip" select left side

inline void Noritake_GUU100::_initPort (void)
{
	RST_BIT = digitalPinToBitMask (RESET_PIN); // reset
	CS2_BIT = digitalPinToBitMask (CSEL2_PIN); // chip sel right
	CS1_BIT = digitalPinToBitMask (CSEL1_PIN); // chip sel left

	// setup SPI control pins
	CTRL_OUT |= (RST_BIT | CS1_BIT | CS2_BIT);
	CTRL_DDR |= (RST_BIT | CS1_BIT | CS2_BIT);

	// setup SPI pins
	SPI_DDR |= (
		digitalPinToBitMask (MOSI) |
		digitalPinToBitMask (SCK) |
		digitalPinToBitMask (SS)
	); // MOSI, SCK & SS are outputs

	SPI_DDR &= ~digitalPinToBitMask (MISO); // MISO is input

	// SPI enable, master mode, mode 3
	SPCR = ((1 << SPE) | (1 << MSTR) | (1 << CPOL) | (1 << CPHA));

	// SPI 2X speed is flakey above 16 mhz on the VFD... try it if you want.
#if (! (F_CPU > 16000000UL))
	SPSR |= (1 << SPI2X); // double speed SPI
#endif

	// 100 msec delay after powerup (GU128X64E manual pg. 17)
	__builtin_avr_delay_cycles (F_CPU / (MSEC / 100)); // 100 msec
	// assert HW reset for minimum 250 nsec (GU128X64E manual pg. 17)
	CTRL_OUT &= ~RST_BIT;
	__builtin_avr_delay_cycles (F_CPU / USEC); // 1 usec
	CTRL_OUT |= RST_BIT;
}

inline uint8_t Noritake_GUU100::_spiTransfer (uint8_t data)
{
	SPDR = data; // write to SPI data register
	while (! (SPSR & (1 << SPIF))); // wait for all of it to be shifted
	return SPDR; // return read data
}

inline uint8_t Noritake_GUU100::_readPort (uint8_t rs)
{
	uint8_t data;
	CTRL_OUT &= (_cur_x < (_displayWidth / 2)) ? ~CS1_BIT : ~CS2_BIT; // assert active low CS1 or CS2
	_spiTransfer (SPI_RCMD | (rs << 1)); // send read command w/register select
	data = _spiTransfer(); // read data
	CTRL_OUT |= (CS1_BIT | CS2_BIT); // de-assert both CS pins
	return data;
}

inline void Noritake_GUU100::_writePort (uint8_t data, uint8_t rs)
{
	CTRL_OUT &= (_cur_x < (_displayWidth / 2)) ? ~CS1_BIT : ~CS2_BIT; // assert active low CS1 or CS2
	_spiTransfer (SPI_WCMD | (rs << 1)); // send write command w/register select
	_spiTransfer (data); // send data
	CTRL_OUT |= (CS1_BIT | CS2_BIT); // de-assert both CS pins
}

#endif // #if (defined(....
#endif // #ifndef SPI_MODE_H

// end spi_mode.h
