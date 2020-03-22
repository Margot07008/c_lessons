cmake_minimum_required(VERSION 3.14)
project(dz_2 C)

set(CMAKE_C_STANDARD 99)

#add_executable(dz2 for_dynamic_library/creating_processes.c for_dynamic_library/create_and_count_matrix.c for_dynamic_library/initial_struct_and_process.c for_dynamic_library/multipl_app.c utils/standart_matrix_func.c includes/header.h)
add_executable(dz_2 tests/for_dynamic.c tests/for_static.c tests/matrix_for_tests.c tests/test_main.c includes/header.h utils/standart_matrix_func.c for_static_library/create_and_count_d.c for_dynamic_library/creating_processes.c for_dynamic_library/create_and_count_matrix.c for_dynamic_library/initial_struct_and_process.c )