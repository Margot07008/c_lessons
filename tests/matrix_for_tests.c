//
// Created by margot on 22.03.2020.
//

#include "../includes/header.h"

extern my_struct global_struct;

void filling_matrix_for_test(int ***A, int N, int generetion)
{
    if (generetion == 0)
    {
        int x = 1;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                (*A)[i][j] = x;
                x += 1;
            }
        }
    }
    else if (generetion == 1)
    {
        int x = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                (*A)[i][j] = x;
            }
        }
    }
    else if (generetion == 2)
    {
        int x = 0;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                (*A)[i][j] = x;
                x -= 1;
            }
        }
    }
}


int *create_matrix_singl_test(int size, int **d_sum, int generation)
{
    int **matrix = dynamic_array_alloc(size);
    filling_matrix_for_test(&matrix, size, generation);
//	dynamic_array_print(matrix, size);
    count_diagonal_sum_singl(matrix, size, &(*d_sum), 0);
    dynamic_array_free(&matrix, size);
    return (*d_sum);
}

void create_matrix_multy_test(int generation)
{
    int size = global_struct.size;

    global_struct.matrix = dynamic_array_alloc(size);
    filling_matrix_for_test(&global_struct.matrix, size, generation);
//	dynamic_array_print(matrix, size);
    count_diagonal_sum();
    dynamic_array_free(&global_struct.matrix, size);
}