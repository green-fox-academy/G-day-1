cmake_minimum_required(VERSION 3.12)
project(petrolstation)

set(CMAKE_CXX_STANDARD 14)

add_executable(petrolstation main.cpp station.cpp station.h car.cpp car.h)