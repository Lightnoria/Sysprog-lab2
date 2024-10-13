cmake_minimum_required(VERSION 3.10)

project(calculator)

add_library(calculator STATIC calculator.cpp)

add_executable(calculator_exec main.cpp)

target_link_libraries(calculator_exec calculator)

target_include_directories(calculator PUBLIC ${CMAKE_SOURCE_DIR})
