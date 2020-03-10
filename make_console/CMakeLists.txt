cmake_minimum_required(VERSION 3.9)
project(console C)

set(CMAKE_C_STANDARD 99)

add_executable(console ../src/main_console.c ../src/functions.c ../includes/ft_rome.h)