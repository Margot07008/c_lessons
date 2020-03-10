cmake_minimum_required(VERSION 3.9)
project(test C)

set(CMAKE_C_STANDARD 99)

add_executable(test ../src/main_test.c ../src/functions.c ../includes/ft_rome.h)