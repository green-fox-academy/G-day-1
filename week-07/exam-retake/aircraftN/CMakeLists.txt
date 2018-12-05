cmake_minimum_required(VERSION 3.12)
project(aircraft)

set(CMAKE_CXX_STANDARD 14)

add_executable(aircraft main.cpp aircraft.cpp aircraft.h carrier.cpp carrier.h f16.cpp f16.h f35.cpp f35.h)