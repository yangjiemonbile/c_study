cmake_minimum_required(VERSION 3.4.1)


add_executable(signaldemo sig_user.c)
target_link_libraries(signaldemo log)