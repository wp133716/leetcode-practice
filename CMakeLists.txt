cmake_minimum_required(VERSION 3.15)
project(leetcode_test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE release) # release: 生成发布版本, debug: 生成调试版本, RelWithDebInfo: 生成带调试信息的发布版本, MinSizeRel: 生成最小大小的发布版本
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall") # 开启常用的编译警告（但不包含所有可能的警告）
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra") # 开启额外警告
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror") # 将所有警告视为错误
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wpedantic") # 开启严格的标准检查,遵循 ISO C++ 标准严格检查
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2") # 优化级别
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread") # 多线程支持
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native") # 优化编译器
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC") # 位置无关代码

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin) # 设置可执行文件输出目录

add_subdirectory(src/lesson01)
# add_subdirectory(src/lesson02)

add_subdirectory(src/test)
