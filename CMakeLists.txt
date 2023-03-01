cmake_minimum_required(VERSION 3.15)
project(leetcode_test)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)
# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/workspace)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

file(GLOB_RECURSE cpp_srcs ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(lesson1 main.cpp ${cpp_srcs})

# add_subdirectory(src/lesson1)
# add_subdirectory(src/lesson2)
