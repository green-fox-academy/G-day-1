cmake_minimum_required(VERSION 3.13)
project(digimon C)

set(CMAKE_C_STANDARD 99)

add_executable(digimon main.c digimon.c digimon.h)