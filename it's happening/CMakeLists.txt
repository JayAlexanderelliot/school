cmake_minimum_required(VERSION 3.3)
project(it_s_happening)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(it_s_happening ${SOURCE_FILES})