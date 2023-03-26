# IP-retrieve-cpp
A try out cpp program (retrieve IP address) to show cpp development using clang(for myself)[^1]

## Install LLVM/Clang
### Download 
[LLVM-Release](https://github.com/llvm/llvm-project/releases)   
Download the binary for windows: LLVM-15.0.6-win64.exe
### Install
Remember to select to add to `PATH`

## Standard Library
TODO: NEED TO COMFIRM

I installed Visual Studio beforehand so library (like `<iostream>`) may come with `MSCV`

The C++ standard library is typically provided as a separate package from the compiler, and LLVM is a compiler infrastructure, not a compiler itself. In other words, LLVM(clang) does not include a C++ standard library.

## Compile/Build
We will be using [CMake](https://cmake.org/download/) for building our program and [Ninja](https://ninja-build.org/) as the build generator

Generate build files: `cmake -S . -B build -G Ninja [-DCMAKE_BUILD_TYPE=Release] [--fresh]`[^2]  
Build the program(executable): `cmake --build build [--clean-first]`[^3]

To remove build files and executable, you can just delete those directories `rm -rf build/ bin/`

*Inside `[]` is the option flag that can put in command line*  
*Use VSCode extension to skip all the command lines typing* 

## Run
`./bin/ip-retrieve.exe input.txt`


[^1]: *For easy workflow, might as well just download visual studio and build using that*
[^2]: `-DCMAKE_BUILD_TYPE=Release`: Ninja generate default build type is debug (or because is GNU like)  
      `--fresh`: is the re-generate the build files  
[^3]: `--clean-first` will clean the bin before generating the executable program
      or run with `--target clean` to just clean (only clean based on the build files)