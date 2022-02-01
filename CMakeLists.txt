cmake_minimum_required(VERSION 3.20)
project(CalcolatriceC C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(CalcolatriceC
        main.c
        main.h)
