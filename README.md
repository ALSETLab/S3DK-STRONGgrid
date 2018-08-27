# Strongrid DLL

## Use our Software? Cite our this paper!
If you use our software, please cite the following paper:
Maxime Baudette, Seyed Reza Firouzi, Luigi Vanfretti,"The STRONgrid library: A modular and extensible software library for IEEE C37.118.2 compliant synchrophasor data mediation," SoftwareX, Volume 7, 2018, Pages 281-286, ISSN 2352-7110,
[https://doi.org/10.1016/j.softx.2018.08.001.](http://www.sciencedirect.com/science/article/pii/S2352711018301705)

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
The DLL Methods are documented in the [API Documentation](/docs/API_Documentation.md)

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
