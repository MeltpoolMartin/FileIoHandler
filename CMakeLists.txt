cmake_minimum_required(VERSION 3.16.3)

project(FileIoHandler
    VERSION 0.1
    LANGUAGES CXX
)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo_multi.cmake)
    message("conanbuildinfo_multi.cmake file found")
    include(${CMAKE_BINARY_DIR}/conanbuildinfo_multi.cmake)
    #'NO_OUTPUT_DIRS' = Do not adjust the build output directories
    CONAN_BASIC_SETUP(
        TARGETS
    )
elseif(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    message("conanbuildinfo.cmake file found")
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    #'NO_OUTPUT_DIRS' = Do not adjust the build output directories
    CONAN_BASIC_SETUP(
        TARGETS
    )
else()
    message("No conanbuildinfo.cmake file found")
endif()

add_subdirectory(src)

option(PACKAGE_TESTS "Build unit tests" ON)
if(PACKAGE_TESTS)
    message("Build unit tests")
    enable_testing()
    include(GoogleTest)
    add_subdirectory(tests)
endif()