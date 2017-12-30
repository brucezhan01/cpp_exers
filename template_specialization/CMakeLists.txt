cmake_minimum_required(VERSION 2.8)

project(test_template_specialization)

set(CMAKE_CXX_FLAGS "-std=c++11")
add_executable(runit ${PROJECT_SOURCE_DIR}/main.cpp)
