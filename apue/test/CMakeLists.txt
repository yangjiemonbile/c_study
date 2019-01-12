cmake_minimum_required(VERSION 3.4.1)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(demo test.c)

link_libraries(${PROJECT_SOURCE_DIR})

target_link_libraries(demo log)