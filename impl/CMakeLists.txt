cmake_minimum_required(VERSION 3.14)

add_library(file_manager STATIC 
    ${PROJECT_SOURCE_DIR}/impl/src/file.cpp
    ${PROJECT_SOURCE_DIR}/impl/src/file_manager.cpp
)
target_include_directories(file_manager PUBLIC ${PROJECT_SOURCE_DIR}/impl/inc)
