cmake_minimum_required(VERSION 2.8)

project(refactoring)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB SRC "src/*.cpp")
file(GLOB TEST_SRC "test/*.cpp")

include_directories("./include")
add_subdirectory (googletest)


add_executable(${PROJECT_NAME} "main.cpp" ${SRC})
##add_library(sources ${SRC})
##target_link_libraries (${PROJECT_NAME} sources)

add_executable(TEST ${TEST_SRC})
target_link_libraries (TEST sources gtest gmock gmock_main)

### pokazuje includy w projekcie
FILE(GLOB_RECURSE LibFiles "./*.hpp")
add_custom_target(headers SOURCES ${LibFiles})
