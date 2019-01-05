cmake_minimum_required(VERSION 3.13)
project(person_id C)

set(CMAKE_C_STANDARD 99)

add_executable(person_id main.c person_id.c person_id.h)