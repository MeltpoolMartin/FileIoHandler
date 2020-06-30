cmake_minimum_required(VERSION 3.16.3)

project(fioh
    LANGUAGES
        CXX
)

add_library(${PROJECT_NAME} STATIC
    FileIoHandler.cpp
    ${CMAKE_SOURCE_DIR}/include/FileIoHandler.hpp
)

set_target_properties(${PROJECT_NAME}
	PROPERTIES
		LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/lib/${CMAKE_BUILD_TYPE}"
		ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/lib/${CMAKE_BUILD_TYPE}"
)

target_include_directories(${PROJECT_NAME} 
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)