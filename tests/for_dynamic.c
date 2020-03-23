//
// Created by margot on 22.03.2020.
//
#include "../includes/header.h"


my_struct global_struct;

int test_fot_dynamic()
{

    global_struct.size = 5;
    int template[9] = {21,38,51,60,65,44,27,14,5};
    create_matrix_multy_test(0);
    if(!is_equal(global_struct.arr_d, template, global_struct.size))
        return (0);
    free_all ();


    global_struct.size = 10;
    int template1[19] = {91,173,246,310,365,411,448,476,495,505,414,332,259,195,140,94,57,29,10};
    create_matrix_multy_test(0);
    if (!is_equal(global_struct.arr_d, template1, global_struct.size))
        return (0);
    free_all ();

    global_struct.size = 5;
    int template2[9] = {0,0,0,0,0,0,0,0};
    create_matrix_multy_test(1);
    if (!is_equal(global_struct.arr_d, template2, global_struct.size))
        return (0);
    free_all ();

    global_struct.size = 10;
    int template3[19] = {-90,-171,-243,-306,-360,-405,-441,-468,-486,-495,-405,-324,-252,-189,-135,-90,-54,-27,-9};
    create_matrix_multy_test(2);
    if(!is_equal(global_struct.arr_d, template3, global_struct.size))
        return 0;
    free_all ();

    global_struct.size = 1;
    int template4[1] = {0};
    create_matrix_multy_test(1);
    if (!is_equal(global_struct.arr_d, template4, global_struct.size))
        return (0);
    free_all ();

    return(1);
}

void create_matrix_multy_test(int generation)
{
    int size = global_struct.size;
    pthread_mutex_unlock(&global_struct.mutex);
    global_struct.arr_d = NULL;
    global_struct.matrix = NULL;
    global_struct.start_i = 0;
    global_struct.end_i = 0;
    global_struct.start_j = 0;
    global_struct.end_j = 0;
    global_struct.index_start = -1;
    global_struct.index_end = -1;

    global_struct.matrix = dynamic_array_alloc(size);
    filling_matrix_for_test(&global_struct.matrix, size, generation);
//	dynamic_array_print(matrix, size);
    count_diagonal_sum();
    dynamic_array_free(&global_struct.matrix, size);
}