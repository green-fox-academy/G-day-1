cmake_minimum_required(VERSION 3.13)
project(car)

set(CMAKE_CXX_STANDARD 14)

add_executable(car
        .idea/car.iml
        .idea/encodings.xml
        .idea/misc.xml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        cmake-build-debug/car.cbp
        cmake-build-debug/car.exe
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        CMakeLists.txt
        main.c)
