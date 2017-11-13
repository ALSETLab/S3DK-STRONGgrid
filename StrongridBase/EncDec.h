/*
*  EncDec.h
*
*  Copyright (C) 2016 SmarTS Lab
*
*  This file is part of StrongridDLL.
*
*  StrongridDLL is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  StrongridDLL is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with StrongridDLL.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#pragma once
#include <stdint.h>
#include "common.h"

namespace strongridbase
{
	class EncDec
	{
	public:
		static int32_t get_S32( char* data, int* offset );
		static int16_t get_S16( char* data, int* offset );
		static int8_t get_S8( char* data, int* offset );
		static uint32_t get_U32( char* data, int* offset );
		static uint16_t get_U16( char* data, int* offset );
		static uint8_t get_U8( char* data, int* offset );
		static float get_Single( char* data, int* offset );
		static double get_Double( char* data, int* offset );
		static std::string get_String( char* data, int strLen, int* offset );

		static void put_S32( char* data, int32_t val, int* offset );
		static void put_S16( char* data, int16_t val, int* offset );
		static void put_S8( char* data, int8_t val, int* offset );
		static void put_U32( char* data, uint32_t val, int* offset );
		static void put_U16( char* data, uint16_t val, int* offset );
		static void put_U8( char* data, uint8_t val, int* offset );
		static void put_Single( char* data, float val, int* offset );
		static void put_Double( char* data, double val, int* offset );
		static void put_String( char* data, std::string val, int maxLength, int* offset );

		// Convert between network byte order and host network order
		static int32_t ToNetByteOrder( int32_t val );
		static int32_t ToHostByteOrder( int32_t val );
		static int16_t ToNetByteOrder( int16_t val );
		static int16_t ToHostByteOrder( int16_t val );
		static uint32_t ToNetByteOrder( uint32_t val );
		static uint32_t ToHostByteOrder( uint32_t val );
		static uint16_t ToNetByteOrder( uint16_t val );
		static uint16_t ToHostByteOrder( uint16_t val );
		static float ToNetByteOrder( float val );
		static float ToHostByteOrder( float val );
	};
}