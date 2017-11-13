/*
*  Common.h
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

#include <iostream>
#include <string>

#define null 0

namespace stresstest
{
	class Exception
	{
	public:

		Exception(std::string strError) : m_error(strError) {}

		std::string ErrorMessage() { return m_error; }

	private:
		const std::string m_error;
	};

	struct PdcConfig
	{
		PdcConfig( std::string _ip, int _port, std::string _pdcid, int _version ) :
			IP(_ip), Port(_port), PdcId(_pdcid), Version(_version)
		{
		}

		std::string IP;
		int Port;
		std::string PdcId;
		int Version;
	};
}
