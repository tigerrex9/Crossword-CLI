cmake_minimum_required(VERSION 3.21)
project(Crossword_CLI)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)

add_executable(Crossword_CLI
        main.cpp
        main.h)
