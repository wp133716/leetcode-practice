cmake_minimum_required(VERSION 3.15)
project(test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE release)

add_executable(${PROJECT_NAME} test_time.cpp)