/*
*  Mutex.cpp
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

#include "Mutex.h"

using namespace stronggriddll;

Mutex::Mutex()
{
	m_hMutex = CreateMutex(
        NULL,              // default security attributes
        FALSE,             // initially not owned
        NULL);             // unnamed mutex
}

Mutex::~Mutex()
{
	CloseHandle(m_hMutex);
}

bool Mutex::Enter( int timeoutMs )
{
	int result = WaitForSingleObject( m_hMutex, timeoutMs );
	return result == WAIT_OBJECT_0;
}

void Mutex::Exit()
{
	ReleaseMutex(m_hMutex);
}
