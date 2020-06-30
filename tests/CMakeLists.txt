cmake_minimum_required(VERSION 3.16.3)

project(testfioh
    LANGUAGES 
        CXX
)

add_executable(testfioh
    ${CMAKE_CURRENT_SOURCE_DIR}/testFileIoHandler.cpp
)

set_target_properties(${PROJECT_NAME}
	PROPERTIES
		RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/test/${CMAKE_BUILD_TYPE}"
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        fioh
        CONAN_PKG::gtest
)

gtest_discover_tests(${PROJECT_NAME}
    WORKING_DIRECTORY
        $<TARGET_FILE_DIR:${PROJECT_NAME}>
)

deploy_test_file(${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/data
    $<TARGET_FILE_DIR:${PROJECT_NAME}>/data
)