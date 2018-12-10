cmake_minimum_required(VERSION 3.12)
project(poker)

set(CMAKE_CXX_STANDARD 14)

add_executable(poker_run main.cpp)

include_directories(tdd_lib)
add_subdirectory(tdd_lib)
add_subdirectory(tdd_test)

target_link_libraries(poker_run poker)