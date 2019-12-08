## cmake学习

1. 编译命令  
```bash
cmake ${file}  
```
2. 编译动态库  
```cmake
add_library(log SHARED  error.c syslog.c)
target_link_libraries(log)
install(TARGETS log LIBRARY DESTINATION lib)
``` 
3. 编译静态库
```cmake
add_library(log STATIC error.c syslog.c)
target_link_libraries(log)
```