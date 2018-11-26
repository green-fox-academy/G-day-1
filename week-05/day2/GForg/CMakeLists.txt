cmake_minimum_required(VERSION 3.12)
project(GForg)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GForg
        cohort.cpp
        cohort.h
        main.cpp
        mentor.cpp
        mentor.h
        person.cpp
        person.h
        sponsor.cpp
        sponsor.h
        student.cpp
        student.h)
