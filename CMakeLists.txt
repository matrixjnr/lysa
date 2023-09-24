cmake_minimum_required(VERSION 3.26)
project(lysa C)

set(CMAKE_C_STANDARD 11)

add_executable(lysa main.c
        include/lysa_include.h)
