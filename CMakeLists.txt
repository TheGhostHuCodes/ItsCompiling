cmake_minimum_required(VERSION 3.5)
project(ItsCompiling)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(ItsCompiling main.cpp)
add_executable(value_categories value_categories.cpp)
