cmake_minimum_required(VERSION 3.10)
project(ip-retrieve)

set(CMAKE_CXX_STANDARD 11)

# set(CMAKE_C_COMPILER "C:/Program Files/LLVM/bin/clang.exe")
# set(CMAKE_CXX_COMPILER "C:/Program Files/LLVM/bin/clang++.exe")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_executable(ip-retrieve ip-retrieve.cpp)