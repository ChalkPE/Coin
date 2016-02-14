cmake_minimum_required(VERSION 3.4)
project(Coin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES w08/p2040.cpp)
add_executable(Coin ${SOURCE_FILES})