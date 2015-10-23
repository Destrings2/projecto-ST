cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(calc)

set(SOURCES
    ast.cpp
    calc.cpp
    calculator.cpp
    parser.cpp
    scanner.cpp
    token.cpp)

add_executable(calc ${SOURCES})