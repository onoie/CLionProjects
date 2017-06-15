cmake_minimum_required(VERSION 3.7)
project(boost)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
include_directories(/usr/include/boost)
add_executable(boost ${SOURCE_FILES})