cmake_minimum_required(VERSION 3.12)
project(elementfinder)

set(CMAKE_CXX_STANDARD 14)

add_executable(elementfinder
        .idea/codeStyles/Project.xml
        .idea/elementfinder.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/elementfinder.cbp
        cmake-build-debug/elementfinder.exe
        cmake-build-debug/Makefile
        CMakeLists.txt
        main.cpp)
