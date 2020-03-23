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

    global_struct.size = 100;
    int template5[199] = {01,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    create_matrix_multy_test(3);
    if (!is_equal(global_struct.arr_d, template5, global_struct.size))
        return (0);
    free_all ();

    return(1);
}

void create_matrix_multy_test(int generation)
{
    int size = global_struct.size;
    pthread_mutex_init(&global_struct.mutex, NULL);
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