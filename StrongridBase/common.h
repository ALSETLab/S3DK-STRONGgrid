/*
*  common.h
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
#include <time.h>
#include <string>
#include <stdint.h>

namespace strongridbase
{
	class Exception
	{
	public:
		Exception(const std::string error)
		{
			m_error = error;
		}

		std::string ExceptionMessage()
		{
			return m_error;
		}

	private:
		std::string m_error;
	};

	
	class SocketException : public Exception
	{
	public:
		SocketException(const std::string error) : Exception(error)
		{
		}
	};

	class SocketTimeout : public SocketException
	{
	public:
		SocketTimeout(const std::string error) : SocketException(error)
		{
		}
	};

	class TimeConversionHelper
	{
	public:
		static tm SecondsSinceEpochToDateTime(uint64_t SecondsSinceEpoch);
		static uint32_t GetSocByDateTime(const tm* tm);
	};
}