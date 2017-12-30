cmake_minimum_required(VERSION 2.8)

project(how_to_make_a_list_container)

set(CMAKE_CXX_FLAGS "-std=c++11")
add_executable(runit ${PROJECT_SOURCE_DIR}/main.cpp)
