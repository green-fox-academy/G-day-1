cmake_minimum_required(VERSION 3.13)
project(house)

set(CMAKE_CXX_STANDARD 14)

add_executable(house
        .idea/encodings.xml
        .idea/house.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/other.xml
        .idea/vcs.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/house.cbp
        cmake-build-debug/house.exe
        cmake-build-debug/Makefile
        CMakeLists.txt
        main.c)
