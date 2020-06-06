cmake_minimum_required(VERSION 3.17.3)

project(fio VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib/${CMAKE_BUILD_TYPE})

add_library(${PROJECT_NAME} STATIC
    FileIoHandler.cpp
    ${CMAKE_SOURCE_DIR}/include/FileIoHandler.hpp
)

target_include_directories(${PROJECT_NAME} 
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_11)