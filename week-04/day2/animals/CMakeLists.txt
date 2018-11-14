cmake_minimum_required(VERSION 3.12)
project(animals)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(animals
        Animal.cpp
        Animal.h
        main.cpp)
