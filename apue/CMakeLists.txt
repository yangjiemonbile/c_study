cmake_minimum_required(VERSION 3.4.1)

PROJECT(apue C)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

#install(DIRECTORY include/ DESTINATION header PATTERN "*.h")

set(CMAKE_VERBOSE_MAKEFILE ON)

find_library(zlib z "/usr/lib")
message("lib find=" ${zlib})

add_subdirectory(log)
add_subdirectory(src)

#add_subdirectory(test)
