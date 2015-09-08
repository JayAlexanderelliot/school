cmake_minimum_required(VERSION 3.3)
project(type_it_as_you_see_it)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(type_it_as_you_see_it ${SOURCE_FILES})