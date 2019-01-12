cmake_minimum_required(VERSION 3.4.1)

PROJECT(apue C)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR})

install(DIRECTORY include/ DESTINATION header
PATTERN "*.h")

option(CMAKE_VERBOSE_MAKEFILE "show gcc build commend" ON)

add_subdirectory(log)
add_subdirectory(signaldemo)

#add_subdirectory(test)