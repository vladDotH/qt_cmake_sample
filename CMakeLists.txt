cmake_minimum_required(VERSION 3.17)
project(qt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
#set(CMAKE_PREFIX_PATH "<qt path>")

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(qt main.cpp ImageViewer.cpp ImageViewer.h)
target_link_libraries(qt Qt5::Core Qt5::Widgets Qt5::Gui)
