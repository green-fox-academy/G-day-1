cmake_minimum_required(VERSION 3.13)
project(smartphones_dynamic C)

set(CMAKE_C_STANDARD 99)

add_executable(smartphones_dynamic main.c my_class.c my_class.h)