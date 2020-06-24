macro(deploy_test_file TARGET SOURCE_PATH DESTINATION_PATH)
    add_custom_command(TARGET ${PROJECT_NAME} 
        PRE_BUILD
        COMMAND ${CMAKE_COMMAND}
            -E copy_directory
            ${SOURCE_PATH}
            ${DESTINATION_PATH}
    )   
endmacro()
