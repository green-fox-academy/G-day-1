cmake_minimum_required(VERSION 3.12)
project(CounterClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(CounterClass main.cpp counter.cpp counter.h)