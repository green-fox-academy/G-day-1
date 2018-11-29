cmake_minimum_required(VERSION 3.12)
project(FleetofThings)

set(CMAKE_CXX_STANDARD 14)

add_executable(FleetofThings main.cpp fleet.cpp fleet.h thing.cpp thing.h)