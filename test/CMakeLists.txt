cmake_minimum_required(VERSION 3.14)

project(test_project)

# get googletest
include(FetchContent)
# declare googletest FetchContent
FetchContent_Declare(googletest
    GIT_REPOSITORY https://github.com/google/googletest
    GIT_TAG release-1.11.0)

# get properties
FetchContent_GetProperties(googletest)
#googletest_POPULATED
#googletest_SOURCE_DIR
#googletest_BUILD_DIR
if(NOT googletest_POPULATED)
    # fetch (download) 
    FetchContent_Populate(googletest)
    set(googletest_BUILD_DIR ${CMAKE_BINARY_DIR}/binary)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR})
endif()

# add_executable/add_library for my app or library
add_executable(test_runner 
    resource_manager_test.cpp
    resource_test.cpp
    main.cpp
)

# target_link_libraries to link my app/library to gtest
target_link_libraries(test_runner PRIVATE gtest_main gmock_main resource_manager)
