project(quantity)

cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB_RECURSE all_files 
src/*.cpp
src/*.cc
src/*.c
test/*.cpp
test/*.cc
test/*.c)

add_executable(quantity-test ${all_files})

target_link_libraries(quantity-test magellan l0-infra)
