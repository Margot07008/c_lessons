cmake_minimum_required(VERSION 3.9)
project(test_c C)

set(CMAKE_C_STANDARD 99)

add_executable(test_c ../src/main_test.c ../src/functions.c ../includes/ft_rome.h)