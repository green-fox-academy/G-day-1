cmake_minimum_required(VERSION 3.12)
project(Gardening)

set(CMAKE_CXX_STANDARD 14)

add_executable(Gardening main.cpp garden.cpp garden.h tree.cpp tree.h plant.cpp plant.h flower.cpp flower.h)