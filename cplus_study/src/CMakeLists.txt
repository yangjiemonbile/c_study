aux_source_directory(. EXECUTABLE)
foreach(FILE_NAME ${EXECUTABLE})
    string(REGEX REPLACE ".cc" "" EXECUTABLE_NAME ${FILE_NAME})
    string(REGEX REPLACE "\.\/" "" EXECUTABLE_NAME ${EXECUTABLE_NAME})
    add_executable(${EXECUTABLE_NAME} ${FILE_NAME})
    target_link_libraries(
        ${EXECUTABLE_NAME}
        PRIVATE
        GTest::GTest
        GTest::Main
    )
    gtest_discover_tests(${EXECUTABLE_NAME})
endforeach()
