cmake_minimum_required(VERSION 3.12)
project(petrolstation)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(petrolstation
        .idea/codeStyles/Project.xml
        .idea/misc.xml
        .idea/modules.xml
        .idea/petrolstation.iml
        .idea/vcs.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/petrolstation.cbp
        car.cpp
        car.h
        CMakeLists.txt
        main.cpp
        station.cpp
        station.h)
