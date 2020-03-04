cmake_minimum_required(VERSION 3.14)
project(dz1 C)

set(CMAKE_C_STANDARD 99)

add_executable(dz1 src/main.c src/functions.c includes/ft_rome.h test/test_func.c)