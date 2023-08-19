cmake_minimum_required(VERSION 3.14)

add_library(resource_manager STATIC 
    ${PROJECT_SOURCE_DIR}/impl/src/resource.cpp
    ${PROJECT_SOURCE_DIR}/impl/src/resource_manager.cpp
)
target_include_directories(resource_manager PUBLIC ${PROJECT_SOURCE_DIR}/impl/inc)
