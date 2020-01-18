///////////////////////////////////////////////////////////////////////////////////////
//
//  Noritake GU128X64E-U100 VFD Display Driver Library for Arduino
//  Copyright (c) 2012, 2019 Roger A. Krupski <rakrupski@verizon.net>
//
//  Last update: 18 December 2019
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

#ifndef NORITAKE_VFD_GUU100_H
#define NORITAKE_VFD_GUU100_H

#if ARDUINO < 100
#include <WProgram.h>
#else
#include <Arduino.h>
#endif

#include <inttypes.h>
#include "Print.h"

// fonts use no memory unless they are loaded
#include "fonts/allFonts.h"

#ifndef HAVE_SWAP
// swap (a, b);
template <class T> void swap (T &a, T &b) // function
{
	T tmp = a;
	a = b;
	b = tmp;
}
#define HAVE_SWAP
#endif

class Noritake_GUU100 : public Print {
	public:
		void init (const void * = 0, int = 0, int = 0);
		void init (uint32_t, int = 0, int = 0);
		void setDisplay (uint8_t);
		uint8_t setBrightness (uint8_t);
		void setScroll (int);
		void getScroll (int &);
		void setLine (double, double);
		void getLine (double &, double &);
		void setCursor (int, int);
		void getCursor (int &, int &);
		void pushCursor (void);
		void popCursor (void);
		void setDot (int, int, uint8_t = 1);
		uint8_t getDot (int, int);
		void setInvert (uint8_t);
		uint8_t getInvert (void);
		uint8_t clearScreen (uint8_t = 0);
		void drawImage (const void *, int, int, uint8_t, uint8_t);
		void drawImage (void *, int, int, uint8_t, uint8_t);
		void drawImage (uint32_t, int, int, uint8_t, uint8_t);
		void drawPolygon (int, int, int, double, uint8_t, uint8_t);
		void drawVector (int, int, int, int, double, uint8_t);
		void drawLine (int, int, int, int, uint8_t);
		void drawRect (int, int, int, int, uint8_t);
		void fillRect (int, int, int, int, uint8_t);
		void drawRoundRect (int, int, int, int, int, uint8_t);
		void drawEllipse (int, int, uint8_t, uint8_t, uint8_t);
		void drawCircle (int, int, int, uint8_t);
		void fillCircle (int, int, int, uint8_t);
		void drawArc (int, int, int, double, double, uint8_t);
		void drawArc (int, int, int, int, double, double, uint8_t);
		void screenSave (void);
		void screenSave (const void *);
		void setFont (const void *, int = 0, int = 0);
		void setFont (uint32_t, int = 0, int = 0);
		const char *fontName;
		uint32_t getFont (void);
		int getCharWidth (void);
		int getCharHeight (void);
		int getMaxCols (void);
		int getMaxRows (void);
		int getMaxChrs (void);
		void home (void);
		size_t write (int);
		virtual size_t write (uint8_t);
	private:
		// display is 128 X 64 pixels (8192 pixels, 1024 bytes)
		#define VFD_WIDTH 128
		#define VFD_HEIGHT 64
		// VFD commands (GU128X64E manual pg. 14..16)
		#define SETDISP 0b00111110 // display on/off (cathode not affected)
		#define SETADDR 0b01000000 // horizontal byte select 0..63 (X)
		#define SETPAGE 0b10111000 // vertical byte select 0..7 (Y)
		#define SETLINE 0b11000000 // display line start offset 0..63 (Z)
		#define SETBRITE 0b00100000 // set display brightness 0bx000:max, 0bx111:min
		#define CATHODE 0b00001000 // filament power on/off bit for set brightness command. LO=off, HI=on
		#define FUNC_SET 0b00100000 // function set req'd before brightness & cathode commands
		#define SPI_RCMD 0b11111100 // SPI control bits, R/W (bit3) = HI (GU128X64E manual pg. 8)
		#define SPI_WCMD 0b11111000 // SPI control bits, R/W (bit3) = LO (GU128X64E manual pg. 8)
		// Screen saver polygon defs (when text is not supplied
		#define MIN_RADIUS 8 // less than 8 it's hard to see the polygon shape
		#define MAX_RADIUS 63 // screen height
		#define MIN_SIDES 3 // obviously!
		#define MAX_SIDES 9 // more than 9 sides looks more like a circle
		// private variables
		int _hofs;
		int _vofs;
		int _hExtra;
		int _vExtra;
		int _fontHGap;
		int _fontVGap;
		int _fontWidth;
		int _fontHeight;
		int _bytesPerChar;
		uint8_t _displayBright;
		uint8_t _inv;
		uint8_t _maxCols;
		uint8_t _maxRows;
		uint8_t _maxChrs;
		int _cur_x;
		int _cur_y;
		int _cur_z;
		int _save_cur_x;
		int _save_cur_y;
		int _save_cur_z;
		int _next_x;
		int _next_y;
		uint8_t _displayHeight;
		uint8_t _displayWidth;
		uint8_t _firstChar;
		uint8_t _lastChar;
		uint32_t _fontData;
		uint32_t _fontStart;
		// private functions
		uint8_t _noFont (void);
		void _clrFont (void);
		void _nextAddr (void);
		void updateCursor (int, int);
		uint8_t _carriageReturn (void);
		uint8_t _lineFeed (void);
		uint8_t _backSpace (void);
		uint8_t _doTabs (int);
		uint8_t _bitsBetween (int, int);
		void _writeData (uint8_t);
		uint8_t _readData (int, int);
		void _writeCmd (uint8_t);
		uint8_t _clampXY (int, int);
		uint8_t _align (int);
		uint8_t _clip (int);
		// these are in the IO config files
		inline void _initPort (void);
		inline uint8_t _spiTransfer (uint8_t = 0);
		inline uint8_t _readPort (uint8_t);
		inline void _writePort (uint8_t, uint8_t);
		inline uint8_t _cu_uw_read (void);
		inline void _cu_uw_write (uint8_t);

	protected:
		// driver I/O bits
		uint8_t RS_BIT;
		uint8_t RW_BIT;
		uint8_t EN_BIT;
		uint8_t SIO_BIT;
		uint8_t CSL_BIT;
		uint8_t RST_BIT;
		uint8_t CS2_BIT;
		uint8_t CS1_BIT;
		uint8_t MOSI_BIT;
		uint8_t MISO_BIT;
		uint8_t SCK_BIT;
		uint8_t SS_BIT;
		// driver I/O ports
		volatile uint8_t *SIO_OUT;
		volatile uint8_t *SIO_DDR;
		volatile uint8_t *SIO_INP;
		volatile uint8_t *CSL_OUT;
		volatile uint8_t *CSL_DDR;
		volatile uint8_t *MOSI_OUT;
		volatile uint8_t *MOSI_DDR;
		volatile uint8_t *MISO_INP;
		volatile uint8_t *MISO_DDR;
		volatile uint8_t *SCK_OUT;
		volatile uint8_t *SCK_DDR;
		volatile uint8_t *SS_OUT;
		volatile uint8_t *SS_DDR;
		volatile uint8_t *RST_OUT;
		volatile uint8_t *RST_DDR;
};

#include "config.h"

#endif // #ifndef NORITAKE_VFD_GUU100_H

//////// end of Noritake_GUU100.h ////////
