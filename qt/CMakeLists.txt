
cmake_minimum_required(VERSION 3.7)
project(qt)

set(CMAKE_PREFIX_PATH "/home/onoie/Qt/5.9/gcc_64/")#
set(CMAKE_CXX_STANDARD 14)#
set(CMAKE_INCLUDE_CURRENT_DIR ON)#
set(CMAKE_AUTOMOC ON)#
set(CMAKE_AUTOUIC ON)#

find_package( Qt5Core REQUIRED )#
find_package( Qt5Widgets REQUIRED )#
find_package( Qt5Gui REQUIRED )#

set(SOURCE_FILES main.cpp)
#qt5_generate_moc(main.cpp main.moc)#

add_executable(qt ${SOURCE_FILES})
#add_executable(qt main.cpp main.moc)#

target_link_libraries(qt Qt5::Widgets Qt5::Core Qt5::Gui)#
