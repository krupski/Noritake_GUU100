///////////////////////////////////////////////////////////////////////////////
//
//  Noritake GU128X64E-U100 VFD Display Driver Library for Arduino
//  Copyright (c) 2012, 2020 Roger A. Krupski <rakrupski@verizon.net>
//
//  Last update: 03 April 2020
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

#include "Noritake_GUU100.h"

// init driver variables, setup display and load font
// font passed as a 16 bit pointer to PROGMEM
void Noritake_GUU100::init (const void *fontPtr, int hofs, int vofs)
{
	init ((uint32_t)(fontPtr), hofs, vofs);
}

// init driver variables, setup display and load font
// font passed as a 24 bit address via pgm_get_far_address()
// hofs = optional extra horizontal space between chars (x axis)
// vofs = optional extra vertical space between chars (y axis)
void Noritake_GUU100::init (uint32_t fontPtr, int hofs, int vofs)
{
	_initPort(); // initialize the I/O port (set in config.h)
	_displayWidth = VFD_WIDTH; // init display...
	_displayHeight = VFD_HEIGHT; // ... dimensions
	_clrFont(); // zero out font data

	// if font specified in init() then set it
	if (fontPtr) {
		setFont (fontPtr, hofs, vofs);
	}

	setInvert (0); // display invert yes/no
	setDisplay (1); // turn display on
	setBrightness (100); // default brightness and cathode on
	clearScreen(); // clear screen
	setScroll (0); // zero scroll
	setCursor (0, 0); // zero cursor
}

// turn display on or off (filament stays on)
void Noritake_GUU100::setDisplay (uint8_t on)
{
	_cur_x = 0; // turn on left side
	_writeCmd (SETDISP | (on ? 1 : 0));
	_cur_x = 64; // turn on right side
	_writeCmd (SETDISP | (on ? 1 : 0));
}

// set the display brightness to one of 8 levels:
// note: zero percent turns off the VFD filament to save power
uint8_t Noritake_GUU100::setBrightness (uint8_t percent)
{
	// brightness calculation multiplies all numbers
	// by 10 so that we can do fractional math (i.e.
	// 125 is really 12.5)
	int i = 1000; // 100 * 10
	percent = (percent > 100) ? 100 : percent;
	_displayBright = 7;

	while ((i -= 125) && _displayBright) {
		if ((percent * 10) > (i + 5)) { // 0.5 rounding
			_displayBright--;
		}
	}

	// brightness 0 turns off the filament
	_writeCmd (FUNC_SET); // function set
	_writeCmd (percent ? (_displayBright | SETBRITE | CATHODE) : ((_displayBright | SETBRITE) & ~CATHODE));
	return _displayBright;
}

// set vertical offset position (both soft info and hardware registers)
void Noritake_GUU100::setScroll (int z)
{
	_cur_z = (z % _displayHeight);
	_cur_x = 0; // set left side
	_writeCmd (SETLINE | _cur_z);
	_cur_x = 64; // set right side
	_writeCmd (SETLINE | _cur_z);
}

// get scroll (vertical roll) offset
void Noritake_GUU100::getScroll (int &z)
{
	z = _cur_z;
}

// set cursor position to a (possibly fractional) column and line
void Noritake_GUU100::setLine (double x, double y)
{
	setCursor ((x * _next_x), (y * _next_y));
}

// get cursor position as a (possibly fractional) column and line
void Noritake_GUU100::getLine (double &x, double &y)
{
	x = (double)(_cur_x / _next_x);
	y = (double)(_cur_y / _next_y);
}

// set cursor position (both soft info and hardware registers)
void Noritake_GUU100::setCursor (int x, int y)
{
	if (_clampXY (x, y)) {
		_cur_x = x; // update x and y...
		_cur_y = y; // ...cursor position
		_writeCmd (SETADDR | x); // set...
		_writeCmd (SETPAGE | (y / 8) % 8); //...display
	}
}

// get current cursor X,Y coordinates
void Noritake_GUU100::getCursor (int &x, int &y)
{
	x = _cur_x;
	y = _cur_y;
}

// for user only - do not use inside driver
void Noritake_GUU100::pushCursor (void)
{
	getScroll (_save_cur_z);
	getCursor (_save_cur_x, _save_cur_y);
}

// for user only - do not use inside driver
void Noritake_GUU100::popCursor (void)
{
	setScroll (_save_cur_z);
	setCursor (_save_cur_x, _save_cur_y);
}

// set dot at X,Y on or off
void Noritake_GUU100::setDot (int x, int y, uint8_t on)
{
	if (_clampXY (x, y)) {
		on
		? _writeData (_readData (x, y) | (1 << (y % 8)))
		: _writeData (_readData (x, y) & ~ (1 << (y % 8)));
	}
}

// get state of pixel at X,Y
uint8_t Noritake_GUU100::getDot (int x, int y)
{
	return ((_readData (x, y) & (1 << y % 8)) ? 1 : 0);
}

// this makes drawing normal or inverted (negative)
void Noritake_GUU100::setInvert (uint8_t inv)
{
	_inv = (inv ? 1 : 0);
}

// this makes drawing normal or inverted (negative)
uint8_t Noritake_GUU100::getInvert (void)
{
	return (_inv ? 1 : 0);
}

// clear the screen by filling it with 0x00.
// note the fill char can be optionally specified in
// order to create special(???) effects.
uint8_t Noritake_GUU100::clearScreen (uint8_t pattern)
{
	uint8_t n = _displayWidth;
	setCursor (0, 0); // make sure cursor pos is valid

	while (n--) {
		_writeData (pattern); // 8 successssive writes...
		_writeData (pattern); // ...and an 8 bit counter...
		_writeData (pattern); // ...makes this a lot faster.
		_writeData (pattern);
		_writeData (pattern);
		_writeData (pattern);
		_writeData (pattern);
		_writeData (pattern);
	}

	setCursor (0, 0);
	return pattern;
}

void Noritake_GUU100::drawImage (const void *data, int x, int y, uint8_t width, uint8_t height)
{
	drawImage ((uint32_t)(data), x, y, width, height);
}

void Noritake_GUU100::drawImage (void *data, int x, int y, uint8_t width, uint8_t height)
{
	uint8_t mask, mix;
	int src;
	int ix, iy, y2, end;
	const uint8_t *ptr;
	ptr = (const uint8_t *)(data);
	y2 = (y + height);

	if (_clip (y) == _clip (y2)) {
		mask = _bitsBetween (y, y2);

		for (ix = 0; ix < width; ix++) {
			mix = _readData (x + ix, _clip (y));
			src = ptr[ix];
			src <<= (y % 8);
			src = (mix & ~mask) | (src & mask);
			_writeData (src);
		}

	} else {
		if (y == _clip (y)) {
			for (iy = y; iy < _clip (y2); iy += 8) {
				setCursor (x, iy);

				for (ix = 0; ix < width; ix++) {
					src = ptr[ix];
					_writeData (src);
				}

				ptr += width;
			}

			if (y2 != _clip (y2)) {
				mask = _bitsBetween (_clip (y2), y2);

				for (ix = 0; ix < width; ix++) {
					mix = _readData (x + ix, _clip (y2));
					src = ptr[ix];
					src = (mix & ~mask) | (src & mask);
					_writeData (src);
				}
			}

		} else {
			mask = _bitsBetween (y, _align (y));
			end = (width * height);

			for (ix = 0; ix < width; ix++) {
				mix = _readData ((x + ix), _clip (y));
				src = ptr[ix];
				src <<= (y % 8);
				src = (mix & ~mask) | (src & mask);
				_writeData (src);
			}

			if (_align (y) < _clip (y2)) {
				for (iy = _align (y); iy < _clip (y2); iy += 8) {
					setCursor (x, iy);

					for (ix = 0; ix < width; ix++) {
						src = ptr[ix + (ix < end) ? ptr[ix + width] << 8 : 0];
						src >>= (_align (y) - y);
						_writeData (src);
					}

					ptr += width;
				}
			}

			if (_clip (y2) != y2) {
				mask = _bitsBetween (_clip (y2), y2);

				for (ix = 0; ix < width; ix++) {
					mix = _readData (x + ix, _clip (y2));
					src = ptr[ix + (ix < end) ? ptr[ix + width] << 8 : 0];
					src >>= (_align (y) - y);
					src = (mix & ~mask) | (src & mask);
					_writeData (src);
				}
			}
		}
	}
}

// draw an image pointed to by an absolute 24 bit address of data in PROGMEM
void Noritake_GUU100::drawImage (uint32_t data, int x, int y, uint8_t width, uint8_t height)
{
	uint8_t mask, mix;
	int src;
	int ix, iy, y2, end;
	y2 = (y + height);

	if (_clip (y) == _clip (y2)) {
		mask = _bitsBetween (y, y2);

		for (ix = 0; ix < width; ix++) {
			mix = _readData (x + ix, _clip (y));
			src = pgm_read_byte (data + ix);
			src <<= (y % 8);
			src = (mix & ~mask) | (src & mask);
			_writeData (src);
		}

	} else {
		if (y == _clip (y)) {
			for (iy = y; iy < _clip (y2); iy += 8) {
				setCursor (x, iy);

				for (ix = 0; ix < width; ix++) {
					src = pgm_read_byte (data + ix);
					_writeData (src);
				}

				data += width;
			}

			if (y2 != _clip (y2)) {
				mask = _bitsBetween (_clip (y2), y2);

				for (ix = 0; ix < width; ix++) {
					mix = _readData (x + ix, _clip (y2));
					src = pgm_read_byte (data + ix);
					src = (mix & ~mask) | (src & mask);
					_writeData (src);
				}
			}

		} else {
			mask = _bitsBetween (y, _align (y));
			end = ((width * height) + data);

			for (ix = 0; ix < width; ix++) {
				mix = _readData ((x + ix), _clip (y));
				src = pgm_read_byte (data + ix);
				src <<= (y % 8);
				src = (mix & ~mask) | (src & mask);
				_writeData (src);
			}

			if (_align (y) < _clip (y2)) {
				for (iy = _align (y); iy < _clip (y2); iy += 8) {
					setCursor (x, iy);

					for (ix = 0; ix < width; ix++) {
						src = pgm_read_byte (data + ix) + ((data + ix < end)
														   ? (pgm_read_byte (data + ix + width) << 8)
														   : 0);
						src >>= (_align (y) - y);
						_writeData (src);
					}

					data += width;
				}
			}

			if (_clip (y2) != y2) {
				mask = _bitsBetween (_clip (y2), y2);

				for (ix = 0; ix < width; ix++) {
					mix = _readData (x + ix, _clip (y2));
					src = pgm_read_byte (data + ix) + ((data + ix < end)
													   ? (pgm_read_byte (data + ix + width) << 8)
													   : 0);
					src >>= (_align (y) - y);
					src = (mix & ~mask) | (src & mask);
					_writeData (src);
				}
			}
		}
	}
}

/*** stops the "multi-line comment" compiler warning.
////////////////////////////////////////////////////////////////////////
// draw a polygon of any number of sides, rotated by any "angle"
// note angle "0" degrees is straight up (i.e. a triangle is
// drawn like this): /\
//                  /__\
// and the angle goes clockwise so that an angle of 90 degrees
// points the apex to the 3:00 o'clock position.
//
// TONS of thanks to Arduino forum user ROBTILLAART for helping
// me figure out a subtle problem and speeding up the code too!
// Reference: http://forum.arduino.cc/index.php?topic=343198
////////////////////////////////////////////////////////////////////////
***/
void Noritake_GUU100::drawPolygon (int x, int y, int radius, double angle, uint8_t sides, uint8_t on)
{
	int x1, y1, x2, y2;
	double th, inc, start;

	if (sides < 3) { // polygon must be at least 3 sides!
		return;
	}

	if (sides > 16) { // too many sides is slow and just makes a circle anyway...
		drawCircle (x, y, radius, on);
		return;
	}

	// starting angle (in radians)
	start = rad (angle - 90.0); // make 0 degrees straight up
	th = start; // first vertex is at the start (of course)
	inc = ((M_PI * 2.0) / sides); // increment (in radians) to next vertex
	x2 = ((cos (th) * radius) + x); // get first vertex
	y2 = ((sin (th) * radius) + y);

	while (sides--) {
		x1 = x2; // old vertex is...
		y1 = y2; // ...the new startpoint
		th = (sides * inc) + start; // increment to the next vertex
		x2 = (cos (th) * radius) + x; // get first vertex
		y2 = (sin (th) * radius) + y;
		drawLine (x1, y1, x2, y2, on); // draw side
	}
}

// draw a vector from X,Y with start and end radius and angle as specified.
// this is useful for drawing "analog" meters, gauges, etc...
// angle 0 degrees is straight up. increasing angles go clockwise
// (that is, 90 degrees points to the 3:00 o'clock position, etc.).
void Noritake_GUU100::drawVector (int x, int y, int sr, int er, double angle, uint8_t on)
{
	double th = rad (angle - 90.0);
	double s = sin (th);
	double c = cos (th);
	drawLine (
		round ((c * sr) + x),
		round ((s * sr) + y),
		round ((c * er) + x),
		round ((s * er) + y),
		on
	);
}

void Noritake_GUU100::drawLine (int x0, int y0, int x1, int y1, uint8_t on)
{
	int delta_x = 0, delta_y = 0, step_x, step_y, err, err2;
	delta_x += abs (x1 - x0);
	step_x = (x0 < x1) ? 1 : -1;
	delta_y -= (abs (y1 - y0));
	step_y = (y0 < y1) ? 1 : -1;
	err = (delta_x + delta_y);

	while (1) {
		setDot (x0, y0, on);

		if ((x0 == x1) && (y0 == y1)) {
			break;
		}

		err2 = (2 * err);

		if (err2 > delta_y) {
			err += delta_y;
			x0 += step_x;
		}

		if (err2 < delta_x) {
			err += delta_x;
			y0 += step_y;
		}
	}
}

// draw a rectangle from x1 to y1 and x2 to y2
void Noritake_GUU100::drawRect (int x1, int y1, int x2, int y2, uint8_t on)
{
	// draw a rectangle from 4 lines
	drawLine (x1, y1, x2, y1, on);
	drawLine (x2, y1, x2, y2, on);
	drawLine (x2, y2, x1, y2, on);
	drawLine (x1, y2, x1, y1, on);
}

// draw a filled rectangle with multiple lines
void Noritake_GUU100::fillRect (int x1, int y1, int x2, int y2, uint8_t on)
{
	if (x1 > x2) {
		swap (x1, x2);
	}

	if (y1 > y2) {
		swap (y1, y2);
	}

	if ((x2 - x1) < (y2 - y1)) {
		for (y1; y1 <= y2; y1++) {
			drawLine (x1, y1, x2, y1, on);
		}

	} else {
		for (x1; x1 <= x2; x1++) {
			drawLine (x1, y1, x1, y2, on);
		}
	}
}

// draw a rectangle with rounded corners of "radius" pixels
void Noritake_GUU100::drawRoundRect (int x1, int y1, int x2, int y2, int radius, uint8_t on)
{
	int x, y, tSwitch;

	if (x1 > x2) {
		swap (x1, x2);
	}

	if (y1 > y2) {
		swap (y1, y2);
	}

	x = 0;
	y = radius;
	tSwitch = 3 - (2 * radius);

	while (y > x) {
		setDot (x1 - x + radius, y1 - y + radius, on);
		setDot (x1 - y + radius, y1 - x + radius, on);
		setDot (x2 + x - radius, y1 - y + radius, on);
		setDot (x2 + y - radius, y1 - x + radius, on);
		setDot (x2 + x - radius, y2 + y - radius, on);
		setDot (x2 + y - radius, y2 + x - radius, on);
		setDot (x1 - x + radius, y2 + y - radius, on);
		setDot (x1 - y + radius, y2 + x - radius, on);

		if (tSwitch < 0) {
			tSwitch += 2 * (x);

		} else {
			tSwitch += 2 * (x - y);
			y--;
		}

		x++;
	}

	x = x2 + radius - (2 * radius);
	y = y2 + radius - (2 * radius);
	drawLine (x1 + radius, y1, x, y1, on);
	drawLine (x1 + radius, y2, x, y2, on);
	drawLine (x1, y1 + radius, x1, y, on);
	drawLine (x2, y1 + radius, x2, y, on);
}

// draw an elipse from centered at X,Y with width and height as specified
void Noritake_GUU100::drawEllipse (int x, int y, uint8_t width, uint8_t height, uint8_t on)
{
	int x1 = -width, y1 = 0; // II quadrant from bottom left to top right
	int e2 = height, dx = (1 + 2 * x1) * e2 * e2; // error increment
	int dy = x1 * x1, err = dx + dy; // error of 1 step

	do {
		setDot (x - x1, y + y1, on); // I Quadrant
		setDot (x + x1, y + y1, on); // II Quadrant
		setDot (x + x1, y - y1, on); // III Quadrant
		setDot (x - x1, y - y1, on); // IV Quadrant
		e2 = 2 * err;

		if (e2 >= dx) {
			x1++;
			err += dx += 2 * (long) height * height;
		} // x1 step

		if (e2 <= dy) {
			y1++;
			err += dy += 2 * (long) width * width;
		} // y1 step
	} while (x1 <= 0);

	while (y1++ < height) { // too early stop for flat ellipses with width=1
		setDot (x, y + y1, on); // -> finish tip of ellipse
		setDot (x, y - y1, on);
	}
}

///////////////////////////////////////////////////////////
// draw a circle centered at X,Y with a radius as specified
///////////////////////////////////////////////////////////
// Stefan Gustavson (stegu@itn.liu.se) 2003-08-20
// webstaff.itn.liu.se/~stegu/circle/circlealgorithm.pdf
///////////////////////////////////////////////////////////
void Noritake_GUU100::drawCircle (int x1, int y1, int radius, uint8_t on)
{
	int x = 0;
	int y = radius;
	int d = (5 - (4 * radius));
	int dA = 12;
	int dB = (20 - (8 * radius));

	while (x <= y) {
		setDot (x1 - x, y1 - y, on);
		setDot (x1 - x, y1 + y, on);
		setDot (x1 + x, y1 - y, on);
		setDot (x1 + x, y1 + y, on);
		setDot (x1 - y, y1 - x, on);
		setDot (x1 - y, y1 + x, on);
		setDot (x1 + y, y1 - x, on);
		setDot (x1 + y, y1 + x, on);

		if (d < 0) {
			d += dA;
			dB += 8;

		} else {
			y--;
			d += dB;
			dB += 16;
		}

		x++;
		dA += 8;
	}
}

// draw a circle, then fill it (actually we just fill in a circular area)
void Noritake_GUU100::fillCircle (int x, int y, int radius, uint8_t on)
{
	int f = 1 - radius;
	int ddF_x = 1;
	int ddF_y = -2 * radius;
	int x1;
	int y1;
	x1 = 0;
	y1 = radius;

	while (x1 < y1) {
		if (f >= 0) {
			y1--;
			ddF_y += 2;
			f += ddF_y;
		}

		x1++;
		ddF_x += 2;
		f += ddF_x;
		drawLine (x + x1, y + y1, x + x1, y - y1, on);
		drawLine (x + y1, y + x1, x + y1, y - x1, on);
		drawLine (x - x1, y + y1, x - x1, y - y1, on);
		drawLine (x - y1, y + x1, x - y1, y - x1, on);
	}

	drawLine (x, (y - radius), x, (y + radius), on); // center vertical line
}

// draw a circular arc
void Noritake_GUU100::drawArc (int org_x, int org_y, int radius, double start_angle, double end_angle, uint8_t on)
{
	drawArc (org_x, org_y, radius, radius, start_angle, end_angle, on);
}

// specify the X and Y radius for an "oval" arc
void Noritake_GUU100::drawArc (int org_x, int org_y, int x_rad, int y_rad, double start_angle, double end_angle,
							   uint8_t on)
{
	int x, y;
	double angle, th, inc;
	inc = (_displayWidth / 360.0);

	if (start_angle > end_angle) {
		swap (start_angle, end_angle);
	}

	for (angle = start_angle; angle < end_angle; angle += inc) {
		th = rad (angle - 90.0);
		x = (cos (th) * x_rad) + org_x;
		y = (sin (th) * y_rad) + org_y;
		setDot (x, y, on);
	}
}

// screen saver draws random polygons
void Noritake_GUU100::screenSave (void)
{
	int x, y, angle;
	int radius, tworad, sides;
	radius = (MIN_RADIUS + (rand() % (MAX_RADIUS - MIN_RADIUS)));
	tworad = (radius * 2);
	x = (radius + (rand() % ((_displayWidth - 1) - tworad)));
	y = (radius + (rand() % ((_displayHeight - 1) - tworad)));
	sides = (MIN_SIDES + (rand() % (1 + (MAX_SIDES - MIN_SIDES))));
	angle = (rand() % 360);
	setInvert (0); // insure normal pixel polarity
	setBrightness (100); // max brightness
	setDisplay (1); // display on
	clearScreen(); // clear screen drawing polygon
	drawPolygon (x, y, radius, angle, sides, 1);
}

// screensaver prints text at random locations
void Noritake_GUU100::screenSave (const void *str)
{
	int s, x, y, x_max, y_max;
	setInvert (0); // insure normal pixel polarity
	setBrightness (100); // max brightness
	setDisplay (1); // display on
	clearScreen(); // clear screen before message
	s = strlen ((const char *)(str));
	x_max = ((_displayWidth - 1) - (s * _next_x));
	y_max = ((_displayHeight - 1) - _next_y);
	x = (rand() % x_max);
	y = (rand() % y_max);
	setCursor (x, y); // set cursor
	print ((const char *)(str)); // print default or user string
}

// set the font to use for generating text (PROGMEM pointer)
void Noritake_GUU100::setFont (const void *fontPtr, int hofs, int vofs)
{
	setFont ((uint32_t)(fontPtr), hofs, vofs);
}

// accept a 32 bit (actually 24 bit) PROGMEM font address
void Noritake_GUU100::setFont (uint32_t fontPtr, int hofs, int vofs)
{
	_clrFont(); // invalidate old font

	if (fontPtr) {
		_fontData = _fontStart = fontPtr;
		_fontWidth = pgm_read_byte (_fontData++);
		_fontHeight = pgm_read_byte (_fontData++);
		_fontHGap = pgm_read_byte (_fontData++);
		_fontVGap = pgm_read_byte (_fontData++);
		_firstChar = pgm_read_byte (_fontData++);
		_lastChar = pgm_read_byte (_fontData++);
		_bytesPerChar = pgm_read_byte (_fontData++);
		// now '_fontData' points to the first byte of
		// the first character image in progmem (i.e.
		// 7 bytes past the header).
		_hofs = hofs;
		_vofs = vofs;
		_hExtra = (_fontHGap + _hofs);
		_vExtra = (_fontVGap + _vofs);
		_next_x = (_fontWidth + _hExtra);
		_next_y = (_fontHeight + _vExtra);
		_maxCols = ((_displayWidth - 1) / _next_x);
		_maxRows = (_displayHeight / _next_y);
		_maxChrs = (_maxCols * _maxRows);
		fontName = (const char *)(_fontData + (((_lastChar - _firstChar) + 1) * _bytesPerChar));
	}
}

// get address of loaded font (useful for saving what was previously
// loaded, then loading a new one, then restoring the original one).
uint32_t Noritake_GUU100::getFont (void)
{
	return _fontStart;
}

int Noritake_GUU100::getCharWidth (void)
{
	return _next_x;
}

int Noritake_GUU100::getCharHeight (void)
{
	return _next_y;
}

int Noritake_GUU100::getMaxCols (void)
{
	return _maxCols;
}

int Noritake_GUU100::getMaxRows (void)
{
	return _maxRows;
}

int Noritake_GUU100::getMaxChars (void)
{
	return _maxChrs;
}

// set cursor home)
void Noritake_GUU100::home (void)
{
	setCursor (0, 0);
}

// write any character on the screen from a loaded font.
// the cursor is automatically updated to the next character
// cell based on the width and height of that character.
size_t Noritake_GUU100::write (uint8_t c)
{
	_tmp_x = _cur_x; // get a working copy of cursor pos.
	_tmp_y = _cur_y;

	if (! _fontData) {
		return _noFont();  // give warning message
	}

	switch (c) {
		// backup one space, erase last char
		case BS: {
			return _backSpace();
		}

		// tabs are 4 spaces (maybe useful for lining stuff up?)
		case TAB: {
			return _doTabs (4);
		}

		// drop down to the next line (column position remains
		// unchanged). For newline you need CR and LF
		case LF: {
			return _lineFeed();
		}

		// erase the screen (fill with spaces)
		case FF: {
			return clearScreen();
		}

		// set the cursor to the lefthand most position
		// (line position remains unchanged)
		case CR: {
			return _carriageReturn();
		}

		// use a filled rectangle for a space if the font
		// does not have a bitmap for the space character
		// (for example, numbers only fonts)
		case SPC: {
			if (_firstChar > SPC) {
				fillRect (_tmp_x, _tmp_y, _tmp_x + _next_x - 1, _tmp_y + _next_y - 1, 0);
				_updateCursor (_tmp_x, _tmp_y);
				return 1;

			} else {
				break;
			}
		}

		// anything else is a printable ascii character
		default: {
			break;
		}
	}

	// check this AFTER so that control codes always work,
	// even if they are not in the font file.
	if ((c < _firstChar) || (c > _lastChar)) {
		return 0;
	}

	if (_hExtra) { // clear any horizontal gap space
		fillRect (_tmp_x + _next_x - _hExtra, _tmp_y, _tmp_x + _next_x - 1, _tmp_y + _next_y - 1, 0);
	}

	if (_vExtra) { // clear any vertical gap space
		fillRect (_tmp_x, _tmp_y + _next_y - _vExtra, _tmp_x + _next_x - 1, _tmp_y + _next_y - 1, 0);
	}

	// draw the image (character from font file)
	drawImage (_fontData + ((c - _firstChar) * _bytesPerChar), _tmp_x, _tmp_y, _fontWidth, _fontHeight);
	_updateCursor (_tmp_x, _tmp_y);
	return 1;
}

// this prints "NO FONT" on the VFD screen, centered left-right
// and top-bottom (if there IS no font loaded of course!)
uint8_t Noritake_GUU100::_noFont (void)
{
	int x, y, w, h;
	// from the Hitachi HD44780U LCD character rom
	static const uint8_t bitmap[] PROGMEM = {
		0x7F, 0x04, 0x08, 0x10, 0x7F, 0x00, // "N"
		0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00, // "O"
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // SPACE
		0x7F, 0x09, 0x09, 0x09, 0x01, 0x00, // "F"
		0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00, // "O"
		0x7F, 0x04, 0x08, 0x10, 0x7F, 0x00, // "N"
		0x01, 0x01, 0x7F, 0x01, 0x01, 0x00, // "T"
	};
	h = 8; // character height
	w = (sizeof (bitmap) / sizeof (*bitmap)); // how many chars (bitmap width)
	x = (((_displayWidth - 1) - w) / 2); // display center left/right
	y = (((_displayHeight - 1) - h) / 2); // display center top/bottom
	setInvert (0); // insure normal pixel polarity
	setBrightness (100); // be sure cathode is on and display is bright
	clearScreen(); // clear any crap off screen before message
	drawImage (bitmap, x, y, w, h); // draw entire message as one graphic block
	home(); // reset cursor
	return 0;
}

// initialize all font data to null
void Noritake_GUU100::_clrFont (void)
{
	fontName = (const char *)(0); // default
	_firstChar = 0;
	_lastChar = 0;
	_bytesPerChar = 0;
	_fontData = 0;
	_fontStart = 0;
	_fontHGap = 0;
	_fontVGap = 0;
	_fontHeight = 0;
	_fontWidth = 0;
	_maxCols = 0;
	_maxRows = 0;
	_maxChrs = 0;
	_next_x = 0;
	_next_y = 0;
	_hofs = 0;
	_vofs = 0;
}

// update cursor position info on a BYTE (hardware) level
void Noritake_GUU100::_nextAddr (void)
{
	if (_cur_x < (_displayWidth - 1)) { // if next col position won't hit the end...
		_cur_x += 1; // next X position

	} else {
		if (_cur_y < (_displayHeight - 8 - 1)) { // if can set next line...
			_cur_x = 0; // left edge
			_cur_y += 8; // next line

		} else {
			_cur_x = 0; // left edge
			_cur_y = 0; // first line
		}
	}

	setCursor (_cur_x, _cur_y);
}

// update cursor position info on a SCREEN level
void Noritake_GUU100::_updateCursor (int x, int y)
{
	if ((_cur_x + _next_x) < _displayWidth) {
		x += _next_x; // if room, move to next char space

	} else {
		if ((_cur_y + _next_y) < _displayHeight) {
			x = 0; // no room for next char, if next line...
			y += _next_y; // ...is available, then go to it

		} else {
			x = 0; // loop back from the beginning
			y = 0;
		}
	}

	setCursor (x, y);
}

// set cursor to left column (line not changed)
uint8_t Noritake_GUU100::_carriageReturn (void)
{
	setCursor (0, _cur_y); // cursor X position to 0
	return 0;
}

// set cursor to next line (column not changed)
uint8_t Noritake_GUU100::_lineFeed (void)
{
	if ((_cur_y + _next_y) < (getMaxRows() * _next_y)) {
		_cur_y += _next_y;

	} else {
		_cur_y = 0;
	}

	setCursor (_cur_x, _cur_y);
	return 0;
}

// backup one character position, erase backspaced cheracter
uint8_t Noritake_GUU100::_backSpace (void)
{
	_tmp_x = _cur_x;
	_tmp_y = _cur_y;

	if ((_tmp_x - _next_x) >= 0) {
		// backup 1 char if we can
		_tmp_x -= _next_x;

	} else {
		if ((_tmp_y - _next_y) >= 0) {
			_tmp_x = ((getMaxCols() - 1) * _next_x);
			_tmp_y -= _next_y;

		} else {
			_tmp_x = ((getMaxCols() - 1) * _next_x);
			_tmp_y = ((getMaxRows() - 1) * _next_y);
		}
	}

	setCursor (_tmp_x, _tmp_y);
	write ((uint8_t)(SPC));
	setCursor (_tmp_x, _tmp_y);
	return 0;
}

// move cursor to next tab stop (4 places = 1 "tab")
uint8_t Noritake_GUU100::_doTabs (int _tab_size)
{
	uint8_t n = 0;

	if (! (_cur_x % (_next_x * _tab_size))) {
		n += write ((uint8_t)(SPC));
	}

	while (_cur_x % (_next_x * _tab_size)) {
		n += write ((uint8_t)(SPC));
	}

	return n;
}

// align data (usually text) that crosses chip boundaries
uint8_t Noritake_GUU100::_bitsBetween (int x, int y)
{
	if ((x / 8) != (y / 8)) {
		return ~ ((1 << ((x % 8))) - 1);

	} else {
		return ~ (((1 << (x % 8))) - 1) & (((1 << (y % 8))) - 1);
	}
}

// write one byte of data to the VFD
void Noritake_GUU100::_writeData (uint8_t data)
{
	_writePort (_inv ? ~data : data, 1);
	_nextAddr();
}

// read one byte of data from the VFD
uint8_t Noritake_GUU100::_readData (int x, int y)
{
	setCursor (x, y);
	uint8_t data = (_inv ? ~_readPort (1) : _readPort (1));
	setCursor (x, y);
	return data;
}

// send data with RS set to "COMMAND" (i.e. send a VFD command)
void Noritake_GUU100::_writeCmd (uint8_t cmd)
{
	_writePort (cmd, 0);
}

// check that x and y are legal
uint8_t Noritake_GUU100::_clampXY (int x, int y)
{
	if ((x < _displayWidth) && (y < _displayHeight)) {
		return 1;
	}

	return 0;
}

// align text at "chip" boundaries
uint8_t Noritake_GUU100::_align (int x)
{
	return (((x + 7) / 8) * 8);
}

// remove bits that don't belong to this "chip"
uint8_t Noritake_GUU100::_clip (int x)
{
	return ((x / 8) * 8);
}

//////// end of Noritake_GUU100.cpp ////////
