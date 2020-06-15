cmake_minimum_required(VERSION 3.16.3)

project(FileIoHandler
    VERSION 0.1
    LANGUAGES CXX
)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    CONAN_BASIC_SETUP()
endif()

add_subdirectory(src)

option(PACKAGE_TESTS "Build unit tests" ON)
if(PACKAGE_TESTS)
    message("Build unit tests")
    enable_testing()
    include(GoogleTest)
    add_subdirectory(tests)
endif()