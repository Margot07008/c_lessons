//
// Created by Margot on 21.03.2020.
//
#include "../includes/header.h"



int test_for_static()
{
	int size;
	int *d_sum;

	size = 5;
	d_sum = NULL;
	int template[9] = {21,38,51,60,65,44,27,14,5};
	create_matrix_singl_test(size, &d_sum, 0);
	assert(is_equal(d_sum, template, size) == 1);
	free (d_sum);

	size = 10;
	d_sum = NULL;
	int template1[19] = {91,173,246,310,365,411,448,476,495,505,414,332,259,195,140,94,57,29,10};
	create_matrix_singl_test(size, &d_sum, 0);
	assert(is_equal(d_sum, template1, size) == 1);
	free (d_sum);

	size = 5;
	d_sum = NULL;
	int template2[9] = {0,0,0,0,0,0,0,0};
	create_matrix_singl_test(size, &d_sum, 1);
	assert(is_equal(d_sum, template2, size) == 1);
	free (d_sum);

	size = 10;
	d_sum = NULL;
	int template3[19] = {-90,-171,-243,-306,-360,-405,-441,-468,-486,-495,-405,-324,-252,-189,-135,-90,-54,-27,-9};
	create_matrix_singl_test(size, &d_sum, 2);
	assert(is_equal(d_sum, template3, size) == 1);
	free (d_sum);

	size = 1;
	d_sum = NULL;
	int template4[1] = {0};
	create_matrix_singl_test(size, &d_sum, 1);
	assert(is_equal(d_sum, template4, size) == 1);
	free (d_sum);

    size = 100;
    d_sum = NULL;
    int template5[199] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    create_matrix_singl_test(size, &d_sum, 3);
    assert(is_equal(d_sum, template5, size) == 1);
    free (d_sum);

	return (1);
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
