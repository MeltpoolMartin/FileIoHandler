cmake_minimum_required(VERSION 3.17.3)

project(testfio LANGUAGES CXX)

add_executable(testfio
    testFileIoHandler.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        fio
        ${CONAN_LIBS}
)

# add_test(
#     NAME
#         unit
#     WORKING_DIRECTORY 
#         ${CMAKE_BINARY_DIR}/bin
#     COMMAND 
#         ${PROJECT_NAME}
#   )