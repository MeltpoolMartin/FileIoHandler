cmake_minimum_required(VERSION 3.17.3)

project(FileIoHandler
    VERSION 0.1
    LANGUAGES CXX
)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    CONAN_BASIC_SETUP()
endif()

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)