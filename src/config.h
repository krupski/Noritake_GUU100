///////////////////////////////////////////////////////////////////////////////////////
//
//  Noritake GU128X64E-U100 VFD Display Driver Library for Arduino
//  Copyright (c) 2012, 2015 Roger A. Krupski <rakrupski@verizon.net>
//
//  Last update: 19 July 2016
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

#ifndef IO_CONFIG_FILE_H
	#define IO_CONFIG_FILE_H

	#define MSEC 1000UL
	#define USEC 1000000UL
	#define NSEC 1000000000UL

	///////////////////////////////////////////////////////////////////////////////////////
	// Include the file corresponding to the IO mode you have your GU128X64E-U100
	// display module set to. More than one mode at once MUST NOT be included.
	// NOTE: "Signal separate" mode (pg. 9) is not supported because it does not
	// provide reading the display (which many functions in this driver require).
	///////////////////////////////////////////////////////////////////////////////////////

	#include "parallel_mode.h" // Noritake "Mode 0" (Parallel mode)
	//#include "cu-uw_mode.h"    // Noritake "Mode 1" (CU-UW mode)
	//#include "spi_mode.h"      // Noritake "Mode 2" (Standard SPI Mode 3)

	///////////////////////////////////////////////////////////////////////////////////////

	#if (! (defined (PARALLEL_MODE_H) || defined (CU_UW_MODE_H) || defined (SPI_MODE_H)))
		#error >>>>>> PLEASE EDIT "config.h" AND SELECT ONE IO MODE TO USE!!! <<<<<<
	#endif

#endif // #ifndef IO_CONFIG_FILE_H

// end of config.h
