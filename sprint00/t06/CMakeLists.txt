cmake_minimum_required(VERSION 3.18.2)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")
project(t06 LANGUAGES CXX)
set(SOURCE_EXE main.cpp)
set(mainfile meadSong)
set(extrafile meadSong.cpp)
add_compile_options(
      -std=c++17
      -Werror
      -Wall
      -Wextra
      -Wpedantic
)
add_executable(${mainfile} ${SOURCE_EXE} ${extrafile})