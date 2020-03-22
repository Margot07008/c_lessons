cmake_minimum_required(VERSION 3.14)
project(dz2 C)

set(CMAKE_C_STANDARD 99)

add_executable(dz2 for_dynamic_library/creating_processes.c for_dynamic_library/create_and_count_matrix.c for_dynamic_library/initial_struct_and_process.c for_dynamic_library/multipl_app.c utils/standart_matrix_func.c includes/header.h)