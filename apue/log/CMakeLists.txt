cmake_minimum_required(VERSION 3.4.1)

add_library(log SHARED 
    error.c
    syslog.c)

#target_include_directories(log PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(log)

install(TARGETS log LIBRARY DESTINATION lib)
