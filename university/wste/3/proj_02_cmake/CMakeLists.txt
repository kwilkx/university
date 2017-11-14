#CMakeLists.txt

cmake_minimum_required (VERSION 2.6)

project (App)

add_executable(App main.cpp function.cpp)

add_definitions(-std=c++11)
