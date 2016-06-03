cmake_minimum_required(VERSION 3.4)
project(Coin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES sspark/2016/05/p1076.cpp)
add_executable(Coin ${SOURCE_FILES})