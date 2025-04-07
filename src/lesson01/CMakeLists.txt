cmake_minimum_required(VERSION 3.15)
project(lesson1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE release)

file(GLOB_RECURSE cpp_srcs ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(${PROJECT_NAME} main.cpp ${cpp_srcs})