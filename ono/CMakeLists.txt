cmake_minimum_required(VERSION 3.7)
project(ono)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/slib.h src/slib.cpp)
add_executable(ono ${SOURCE_FILES})
install(TARGETS ono DESTINATION bin)