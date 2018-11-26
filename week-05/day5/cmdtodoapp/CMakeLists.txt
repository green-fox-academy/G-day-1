cmake_minimum_required(VERSION 3.12)
project(cmdtodoapp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cmdtodoapp main.cpp)

set(GCC_COVERAGE_COMPILE_FLAGS "-static-libgcc -static-libstdc++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )