cmake_minimum_required(VERSION 3.4.1)

PROJECT(apue)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

add_library(log STATIC 
    log/error.c
    log/syslog.c)

target_include_directories(log PUBLIC include)

add_subdirectory(signaldemo)
add_subdirectory(test)