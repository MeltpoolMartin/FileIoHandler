cmake_minimum_required(VERSION 3.16.3)

project(testfio LANGUAGES CXX)

add_executable(testfio
    testFileIoHandler.cpp
)

set_target_properties(${PROJECT_NAME}
  PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/test"
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        fio
        ${CONAN_LIBS}
)

gtest_discover_tests(${PROJECT_NAME})