cmake_minimum_required(VERSION 3.9)
project(dz_2 C CXX)
set(CMAKE_C_STANDARD 99)

SET(SRC_FILES_STATIC
        for_static_library/create_and_count_d.c
        for_static_library/single_app.c
        utils/standart_matrix_func.c
        )

SET(SRC_FILES_DYNAMIC
        for_dynamic_library/creating_processes.c
        for_dynamic_library/create_and_count_matrix.c
        for_dynamic_library/initial_struct_and_process.c
        for_dynamic_library/multipl_app.c

        utils/standart_matrix_func.c
        utils/free_f.c
        )

SET(SRC_FILES_TESTS
        tests/for_dynamic.c
        tests/for_static.c
        tests/matrix_for_tests.c
        tests/test_main.c

        utils/standart_matrix_func.c
        utils/free_f.c

        for_static_library/create_and_count_d.c
        for_dynamic_library/creating_processes.c
        for_dynamic_library/create_and_count_matrix.c
        for_dynamic_library/initial_struct_and_process.c
        )

find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

include_directories(includes)

add_library(static STATIC ${SRC_FILES_STATIC})
add_library(dynamic SHARED ${SRC_FILES_DYNAMIC})

add_executable(single_thread for_static_library/single_app.c)
add_executable(multi_thread for_dynamic_library/multipl_app.c)
add_executable(gtest_test ${SRC_FILES_TESTS})

target_link_libraries(single_thread static)
target_link_libraries(multi_thread dynamic Threads::Threads)
target_link_libraries(gtest_test gtest dynamic pthread static)


# tests/for_dynamic.c tests/for_static.c tests/matrix_for_tests.c tests/test_main.c utils/standart_matrix_func.c for_static_library/create_and_count_d.c for_dynamic_library/creating_processes.c for_dynamic_library/create_and_count_matrix.c for_dynamic_library/initial_struct_and_process.c utils/free_f.c

# for_dynamic_library/creating_processes.c for_dynamic_library/create_and_count_matrix.c for_dynamic_library/initial_struct_and_process.c for_dynamic_library/multipl_app.c utils/standart_matrix_func.c utils/free_f.c

# for_static_library/create_and_count_d.c for_static_library/single_app.c utils/standart_matrix_func.c