cmake_minimum_required(VERSION 3.4.1)

include_directories(${PROJECT_SOURCE_DIR}/include)

message("signal src=" ${PROJECT_SOURCE_DIR})

link_libraries(${PROJECT_SOURCE_DIR})

add_executable(signaldemo sig_user.c)

target_link_libraries(signaldemo log)