//
// Created by Margot on 21.03.2020.
//
#include "../includes/header.h"


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


int *create_matrix_singl_test(int size, int **d_sum, int generetion)
{
	int **matrix = dynamic_array_alloc(size);
	filling_matrix_for_test(&matrix, size, generetion);
//	dynamic_array_print(matrix, size);
	count_diagonal_sum_singl(matrix, size, &(*d_sum), 0);
	dynamic_array_free(&matrix, size);
	return (*d_sum);
}


void test_for_static()
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

	printf("ok!");
}