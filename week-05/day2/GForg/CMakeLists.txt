cmake_minimum_required(VERSION 3.12)
project(GForg)

set(CMAKE_CXX_STANDARD 14)

add_executable(GForg main.cpp person.cpp person.h student.cpp student.h mentor.cpp mentor.h sponsor.cpp sponsor.h cohort.cpp cohort.h)