cmake_minimum_required(VERSION 3.27)
project(gpa_calculator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(gpa_calculator
        calculate.cpp
        calculate.h
        main.cpp)
