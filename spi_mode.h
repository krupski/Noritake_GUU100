///////////////////////////////////////////////////////////////////////////////////////
//
//  Noritake "Type 2: SPI [Serial Peripheral Interface] format" (pg. 8)
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

#ifndef SPI_MODE_H
#define SPI_MODE_H

#if (defined (PARALLEL_MODE_H) || defined (CU_UW_MODE_H))
#error >>>>>> ONLY ONE MODE MAY BE DEFINED - EDIT "config.h" <<<<<<
#else

#define CTRL_DDR DDRF  // control port DDR (PORT F)
#define CTRL_OUT PORTF // control port OUTPUT (pins A0-A2)
#define SPI_MODE 3     // using SPI mode 3
#define RESET_PIN A0 // reset pin connected here
#define CSEL2_PIN A1 // "chip" select right side
#define CSEL1_PIN A2 // "chip" select left side

#define BITBANG 0 // 0=use hardware SPI, 1=use SPI bitbang (sloooooow)

// default mode = 0
static void _set_spi_mode (uint8_t mode)
{
	// set spi mode
	switch (mode) {
		default:
		case 0: { // CPOL=0, CPHA=0, SCK IDLE STATE=LOW
			SPCR &= ~((1 << SPE) | (1 << MSTR) | (1 << CPOL) | (1 << CPHA));
			SPCR |=  ((1 << SPE) | (1 << MSTR));
			break;
		}
		case 1: { // CPOL=0, CPHA=1, SCK IDLE STATE=LOW
			SPCR &= ~((1 << SPE) | (1 << MSTR) | (1 << CPOL) | (1 << CPHA));
			SPCR |=  ((1 << SPE) | (1 << MSTR) | (1 << CPHA));
			break;
		}
		case 2: { // CPOL=1, CPHA=0, SCK IDLE STATE=HIGH
			SPCR &= ~((1 << SPE) | (1 << MSTR) | (1 << CPOL) | (1 << CPHA));
			SPCR |=  ((1 << SPE) | (1 << MSTR) | (1 << CPOL));
			break;
		}
		case 3: { // CPOL=1, CPHA=1, SCK IDLE STATE=HIGH
			SPCR &= ~((1 << SPE) | (1 << MSTR) | (1 << CPOL) | (1 << CPHA));
			SPCR |=  ((1 << SPE) | (1 << MSTR) | (1 << CPOL) | (1 << CPHA));
			break;
		}
	}
}

static void _set_spi_rate (uint8_t rate)
{
	// spi_freq = F_CPU / rate
	switch (rate) {
		case 2: {
			SPCR &= ~((1 << SPR1) | (1 << SPR0));
			SPSR |= (1 << SPI2X);
			break;
		}
		case 4: {
			SPCR &= ~((1 << SPR1) | (1 << SPR0));
			SPSR &= ~(1 << SPI2X);
			break;
		}
		case 8: {
			SPCR &= ~((1 << SPR1) | (1 << SPR0));
			SPCR |= (1 << SPR0);
			SPSR |= (1 << SPI2X);
			break;
		}
		case 16: {
			SPCR &= ~((1 << SPR1) | (1 << SPR0));
			SPCR |= (1 << SPR0);
			SPSR &= ~(1 << SPI2X);
			break;
		}
		case 32: {
			SPCR &= ~((1 << SPR1) | (1 << SPR0));
			SPCR |= (1 << SPR1);
			SPSR |= (1 << SPI2X);
			break;
		}
		case 64: {
			SPCR &= ~((1 << SPR1) | (1 << SPR0));
			SPCR |= (1 << SPR1);
			SPSR &= ~(1 << SPI2X);
			break;
		}
		default:
		case 128: {
			SPCR &= ~((1 << SPR1) | (1 << SPR0));
			SPCR |= ((1 << SPR1) | (1 << SPR0));
			SPSR &= ~(1 << SPI2X);
			break;
		}
	}
}

void Noritake_GUU100::_initPort (void)
{
	// 100 msec delay after powerup (GU128X64E manual pg. 17)
	__builtin_avr_delay_cycles (F_CPU / (_MSEC / 100)); // 100 msec

	uint8_t x;

	x = digitalPinToPort (MOSI);
	MOSI_OUT = portOutputRegister (x);
	MOSI_DDR = portModeRegister   (x);

	x = digitalPinToPort (MISO);
	MISO_INP = portInputRegister  (x);
	MISO_DDR = portModeRegister   (x);

	x = digitalPinToPort (SCK);
	SCK_OUT  = portOutputRegister (x);
	SCK_DDR  = portModeRegister   (x);

	x = digitalPinToPort (SS);
	SS_OUT   = portOutputRegister (x);
	SS_DDR   = portModeRegister   (x);

	MOSI_BIT = digitalPinToBitMask (MOSI); // SPI MOSI bit
	MISO_BIT = digitalPinToBitMask (MISO); // SPI MISO bit
	SCK_BIT  = digitalPinToBitMask (SCK); // SPI SCK bit
	SS_BIT   = digitalPinToBitMask (SS); // SPI SS bit

	RST_BIT  = digitalPinToBitMask (RESET_PIN); // reset
	CS2_BIT  = digitalPinToBitMask (CSEL2_PIN); // chip sel right
	CS1_BIT  = digitalPinToBitMask (CSEL1_PIN); // chip sel left

	// setup VFD SPI mode control pins
	CTRL_OUT |= (RST_BIT | CS1_BIT | CS2_BIT);
	CTRL_DDR |= (RST_BIT | CS1_BIT | CS2_BIT);

	// set SPI pins
	*MOSI_DDR |= MOSI_BIT; // output
	*SCK_DDR  |= SCK_BIT; // output
	*SS_DDR   |= SS_BIT; // output
	*MISO_DDR &= ~MISO_BIT; // input

#if (BITBANG == 0)
	// VFD uses SPI mode 3
	_set_spi_mode (3);
	// SPI F_CPU/2 is flakey above 16 MHz, so we use F_CPU/4.
#if (F_CPU > 16000000UL)
	_set_spi_rate (4);
#else
	_set_spi_rate (2);
#endif // #if (F_CPU > 16000000UL)
#endif // if (BITBANG == 0)

	// assert HW reset for minimum 250 nsec (GU128X64E manual pg. 17)
	CTRL_OUT &= ~RST_BIT;
	__builtin_avr_delay_cycles (F_CPU / _USEC); // 1 usec
	CTRL_OUT |= RST_BIT;
}

#if (BITBANG == 0)
uint8_t Noritake_GUU100::_spiTransfer (uint8_t data)
{
	SPDR = data; // write to SPI data register
	while (! (SPSR & (1 << SPIF))); // wait for all of it to be shifted
	return SPDR; // return read data
}
#endif

#if (BITBANG != 0)
uint8_t Noritake_GUU100::_spiTransfer (uint8_t data)
{
	uint8_t bits = 8;
	while (bits--) {
		*SCK_OUT &= ~SCK_BIT; // sck low
		data & (1 << bits) ? *MOSI_OUT |= MOSI_BIT : *MOSI_OUT &= ~MOSI_BIT; // send bit
		*SCK_OUT |= SCK_BIT; // sck high
		*MISO_INP & MISO_BIT ? data |= (1 << bits) : data &= ~(1 << bits); // receive bit
	}
	return data;
}
#endif

uint8_t Noritake_GUU100::_readPort (uint8_t rs)
{
	uint8_t data;
	CTRL_OUT &= (_cur_x < (_displayWidth / 2)) ? ~CS1_BIT : ~CS2_BIT; // assert active low CS1 or CS2
	_spiTransfer (SPI_RCMD | (rs << 1)); // send read command w/register select
	data = _spiTransfer(); // read data
	CTRL_OUT |= (CS1_BIT | CS2_BIT); // de-assert both CS pins
	return data;
}

void Noritake_GUU100::_writePort (uint8_t data, uint8_t rs)
{
	CTRL_OUT &= (_cur_x < (_displayWidth / 2)) ? ~CS1_BIT : ~CS2_BIT; // assert active low CS1 or CS2
	_spiTransfer (SPI_WCMD | (rs << 1)); // send write command w/register select
	_spiTransfer (data); // send data
	CTRL_OUT |= (CS1_BIT | CS2_BIT); // de-assert both CS pins
}

#endif // #if (defined(....
#endif // #ifndef SPI_MODE_H

// end spi_mode.h
