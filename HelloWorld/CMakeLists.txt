cmake_minimum_required(VERSION 3.22.1)

project(HelloWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++11")
set(source_dir "${PROJECT_SOURCE_DIR}/scr/")

file(GLOB source_files "${source_dir}/*.cpp")

add_executable(HelloWorld ${source_files})

