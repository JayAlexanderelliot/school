cmake_minimum_required(VERSION 3.3)
project(how_old_are_you_)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(how_old_are_you_ ${SOURCE_FILES})