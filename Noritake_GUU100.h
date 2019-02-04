///////////////////////////////////////////////////////////////////////////////////////
//
//  Noritake GU128X64E-U100 VFD Display Driver Library for Arduino
//  Copyright (c) 2012, 2016 Roger A. Krupski <rakrupski@verizon.net>
//
//  Last update: 16 December 2016
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

class Noritake_GUU100 : public Print {
	public:
		void init (void);
		void init (const void *, uint8_t=0, uint8_t=0);
		void setDisplay (uint8_t);
		uint8_t setBrightness (uint8_t);
		void setScroll (uint8_t);
		void getScroll (uint8_t &);
		void setLine (double, double);
		void getLine (double &, double &);
		void setCursor (uint8_t, uint8_t);
		void getCursor (uint8_t &, uint8_t &);
		void pushCursor (void);
		void popCursor (void);
		void setDot (uint8_t, uint8_t, uint8_t=1);
		uint8_t getDot (uint8_t, uint8_t);
		void setInvert (uint8_t);
		uint8_t getInvert (void);
		uint8_t clearScreen (uint8_t=0);
		void drawImage (const void *, uint8_t, uint8_t, uint8_t, uint8_t);
		void drawImage (void *, uint8_t, uint8_t y, uint8_t, uint8_t);
		void drawImage (uint32_t, uint8_t, uint8_t, uint8_t, uint8_t);
		void drawPolygon (uint8_t, uint8_t, uint8_t, double, uint8_t, uint8_t);
		void drawVector (uint8_t, uint8_t, uint8_t, uint8_t, double, uint8_t);
		void drawLine (uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
		void drawRect (uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
		void fillRect (uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
		void drawRoundRect (uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
		void drawEllipse (uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
		void drawCircle (uint8_t, uint8_t, uint8_t, uint8_t);
		void fillCircle (uint8_t, uint8_t, uint8_t, uint8_t);
		void drawArc (uint8_t, uint8_t, uint8_t, double, double, uint8_t);
		void drawArc (uint8_t, uint8_t, uint8_t, uint8_t, double, double, uint8_t);
		void screenSave (void);
		void screenSave (const void *);
		void setFont (const void *, uint8_t=0, uint8_t=0);
		void setFont (uint32_t, uint8_t=0, uint8_t=0);
		void pushFont (void);
		void pushFont (const void *, uint8_t=0, uint8_t=0);
		void popFont (void);
		uint32_t getFont (void);
		uint8_t getCharWidth (void);
		uint8_t getCharHeight (void);
		uint8_t getMaxChars (void);
		uint8_t getMaxLines (void);
		void home (void);
		void home (uint8_t);
		void vt_reset (void);
		size_t vt_exec (void);
		size_t write (int);
		virtual size_t write (uint8_t);
		using Print::write;
	private:
		// utility defines
		#ifndef sizeOF
		#define sizeOF(A)(sizeof(A)/sizeof(*A))
		#endif
		// display is 128 X 64 pixels (8192 pixels, 1024 bytes)
		#define VFD_WIDTH 128
		#define VFD_HEIGHT 64
		// VFD commands (GU128X64E manual pg. 14..16)
		#define SETDISP  0b00111110 // display on/off (cathode not affected)
		#define SETADDR  0b01000000 // horizontal byte select 0..63 (X)
		#define SETPAGE  0b10111000 // vertical byte select 0..7 (Y)
		#define SETLINE  0b11000000 // display line start offset 0..63 (Z)
		#define SETBRITE 0b00100000 // set display brightness 0bx000:max, 0bx111:min
		#define CATHODE  0b00001000 // filament power on/off bit for set brightness command. LO=off, HI=on
		#define FUNC_SET 0b00100000 // function set req'd before brightness & cathode commands
		#define SPI_RCMD 0b11111100 // SPI control bits, R/W (bit3) = HI (GU128X64E manual pg. 8)
		#define SPI_WCMD 0b11111000 // SPI control bits, R/W (bit3) = LO (GU128X64E manual pg. 8)
		// Screen saver polygon defs (when text is not supplied
		#define MIN_RADIUS  8 // less than 8 it's hard to see the polygon shape
		#define MAX_RADIUS 63 // screen height
		#define MIN_SIDES   3 // obviously!
		#define MAX_SIDES   9 // more than 9 sides looks more like a circle
		// push/popFont() max slots
		#define MAX_SAVES   8 // adjust this if you like (function vs. ram use)
		// VT parser vars
		uint8_t vt_state;
		uint8_t vt_cmd;
		uint8_t vt_args;
		uint8_t vt_arg[8];
		// private variables
		int8_t _hofs;
		int8_t _vofs;
		int8_t _fontStack;
		int8_t _hofsSave[MAX_SAVES];
		int8_t _vofsSave[MAX_SAVES];
		int8_t _fontHGap;
		int8_t _fontVGap;
		uint8_t _fontWidth;
		uint8_t _fontHeight;
		uint8_t _bytesPerChar;
		uint8_t _displayBright;
		uint8_t _inv;
		uint8_t _maxChars;
		uint8_t _maxLines;
		uint8_t _cur_x;
		uint8_t _cur_y;
		uint8_t _cur_z;
		uint8_t _save_cur_x;
		uint8_t _save_cur_y;
		uint8_t _save_cur_z;
		uint8_t _next_x;
		uint8_t _next_y;
		uint8_t _displayHeight;
		uint8_t _displayWidth;
		uint8_t _firstChar;
		uint8_t _lastChar;
		uint32_t _fontData;
		uint32_t _fontStart;
		uint32_t _fontSave[MAX_SAVES];
		// private functions
		size_t _noFont (void);
		void _clrFont (void);
		void _nextAddr (void);
		size_t _carriageReturn (void);
		size_t _lineFeed (void);
		size_t _backSpace (void);
		size_t _doTabs (uint8_t);
		uint8_t _bitsBetween (uint8_t, uint8_t);
		void _writeData (uint8_t);
		uint8_t _readData (uint8_t, uint8_t);
		void _writeCmd (uint8_t);
		uint8_t _checkXY (uint8_t, uint8_t);
		uint8_t _align (uint8_t);
		uint8_t _clip (uint8_t);
		// these are in the IO config files
		inline void _initPort (void);
		inline uint8_t _spiTransfer (uint8_t=0);
		inline uint8_t _readPort (uint8_t);
		inline void _writePort (uint8_t, uint8_t);
		inline uint8_t _cu_uw_read (void);
		inline void _cu_uw_write (uint8_t);
	protected:
		// driver I/O vars
		uint8_t RS_BIT;
		uint8_t RW_BIT;
		uint8_t EN_BIT;
		uint8_t SIO_BIT;
		uint8_t CSL_BIT;
		uint8_t SCK_BIT;
		uint8_t RST_BIT;
		uint8_t CS2_BIT;
		uint8_t CS1_BIT;
		volatile uint8_t *SIO_OUT;
		volatile uint8_t *SIO_DDR;
		volatile uint8_t *SIO_PIN;
		volatile uint8_t *CSL_OUT;
		volatile uint8_t *CSL_DDR;
		volatile uint8_t *CSL_PIN;
		volatile uint8_t *SCK_OUT;
		volatile uint8_t *SCK_DDR;
		volatile uint8_t *SCK_PIN;
		volatile uint8_t *RST_OUT;
		volatile uint8_t *RST_DDR;
		volatile uint8_t *RST_PIN;
};

#include "config.h"

#endif // #ifndef NORITAKE_VFD_GUU100_H

//////// end of Noritake_GUU100.h ////////
