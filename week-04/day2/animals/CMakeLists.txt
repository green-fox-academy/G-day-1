cmake_minimum_required(VERSION 3.12)
project(animals)

set(CMAKE_CXX_STANDARD 14)

add_executable(animals main.cpp Animal.cpp Animal.h)