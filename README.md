# Strongrid DLL

## Compile the DLL
The repository includes the necessary files to build a **Visual Studio** solution to generate the `StrongridDLL.dll` file.
The setup requires [**cmake**](https://cmake.org/download/) on the host computer.

### Setup
After cloning the repository, please follow these steps:

- In the repository folder, create a subfolder, where the Visual Studio solution files will be generated.
- In a *Command* prompt, change to the folder you created in the previous steps.
- Invoke **cmake** with the following command: `cmake -G "Visual Studio XX" ..` where `XX` is your visual studio version number (e.g. 15 for VS 2017).
- Open the solution file in VS, and build the solution using the *Release* mode.

The `StrongridDLL.dll` can be found in the *Release* subfolder.

#### Note:
The ".." at the end of the command points to the parent directory.
It tells cmake where to find the main build script file (CMakeLists.txt).

### Documentation
The DLL Methods are documented in the [[API Documentation|/docs/API_Documentation]]

## License Info

 Copyright (C) 2017 Luigi Vanfretti

This file is part of StrongridDLL.

StrongridDLL is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

StrongridDLL is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with StrongridDLL.  If not, see <http://www.gnu.org/licenses/>.
