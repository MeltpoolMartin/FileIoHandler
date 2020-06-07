cmake_minimum_required(VERSION 3.16.3)

project(fio VERSION 1.0.0 LANGUAGES CXX)

add_library(${PROJECT_NAME} STATIC
    FileIoHandler.cpp
    ${CMAKE_SOURCE_DIR}/include/FileIoHandler.hpp
)

target_include_directories(${PROJECT_NAME} 
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)