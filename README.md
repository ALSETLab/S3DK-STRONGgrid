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
