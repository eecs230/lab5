cmake_minimum_required(VERSION 3.3)
project(lab5 CXX)
include(.eecs230/CMakeLists.txt)

set(SOURCE_FILES src/main.cpp src/vector2d.cpp src/vector2d.h)
add_executable(lab5 ${SOURCE_FILES})
