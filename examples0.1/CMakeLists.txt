cmake_minimum_required(VERSION 3.3)
project(examples0_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(examples0_1 ${SOURCE_FILES})