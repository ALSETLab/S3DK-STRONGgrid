/*
*  TcpClient.h
*
*  Copyright (C) 2017 Luigi Vanfretti
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
#include <string>

namespace strongridclientbase
{
	class TcpClient
	{
	public:
		TcpClient(std::string ipAddress, int port);
		 ~TcpClient();

		 int GetSocketDescriptor() const;

		 void Connect();
		 void Close();
		 int Send(const char* src, int len);
		 int Recv(char* dest, int len, int timeoutMs);

	private:
		void InitializeWindowsSocket();

	private:
		int m_sockfd;
		std::string m_ipAddr;
		int m_port;
		bool m_win32Initialized;
	};
}
