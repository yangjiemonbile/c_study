cmake_minimum_required(VERSION 3.4.1)

PROJECT(cplus)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "debug")
endif()

set(GTest_FOUND "/Users/yangjie/Documents/c_study/cplus_study/third_part/google_test")

find_package(GTest REQUIRED)

set(CXX_FLAGS
 -g
 # -DVALGRIND
 # -DMUDUO_STD_STRING
 #Wall
 #-Wextra
 # -m32
 #-Werror
 #-Wconversion
 #-Wno-unused-parameter
 #-Wold-style-cast
 #-Woverloaded-virtual
 #-Wpointer-arith
 #-Wshadow
 #-Wwrite-strings
 #-march=native
 # -MMD
 -std=c++11
 #-rdynamic
)
string(REPLACE ";" " " CMAKE_CXX_FLAGS "${CXX_FLAGS}")

#set(CMAKE_CXX_COMPILER "g++")
#set(CMAKE_CXX_FLAGS_DEBUG "-O0")
#set(CMAKE_CXX_FLAGS_RELEASE "-sO2 -finline-limit=1000 -DNDEBUG")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${GTEST_INCLUDE_DIR})

enable_testing()
set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(src)

