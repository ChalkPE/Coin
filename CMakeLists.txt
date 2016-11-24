cmake_minimum_required(VERSION 3.4)
project(Coin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES sspark/2016/11/p1252.c)
add_executable(Coin ${SOURCE_FILES})

target_link_libraries(Coin m)