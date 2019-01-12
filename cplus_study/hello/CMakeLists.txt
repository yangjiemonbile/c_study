cmake_minimum_required(VERSION 3.4.1)

#include_directories(${PROJECT_SOURCE_DIR}/include)

message("project dir = " ${PROJECT_SOURCE_DIR})

add_executable(hello hello.cpp)

target_link_libraries(hello)