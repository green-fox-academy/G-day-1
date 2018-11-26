cmake_minimum_required(VERSION 3.12)
project(strinstr)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(strinstr
        bassguitar.cpp
        bassguitar.h
        electricguitar.cpp
        electricguitar.h
        instrument.cpp
        instrument.h
        main.cpp
        stringedinstrument.cpp
        stringedinstrument.h
        violin.cpp
        violin.h)
