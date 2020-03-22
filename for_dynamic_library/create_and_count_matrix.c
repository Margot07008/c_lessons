//
// Created by Margot on 21.03.2020.
//

#include "../includes/header.h"
extern my_struct global_struct;

void create_matrix()
{
	global_struct.matrix = dynamic_array_alloc(global_struct.size);
	filling_matrix_auto(&global_struct.matrix, global_struct.size);
//	dynamic_array_print(global_struct.matrix, global_struct.size);
	count_diagonal_sum(global_struct.matrix, global_struct.size);
	dynamic_array_free(&global_struct.matrix, global_struct.size);
}

void count_low_d(int **matrix, int start_i, int end_i, int start_index, int size)
{

	while (start_i >= end_i)
	{
		int i = start_i;
		while (i < size)
		{
			int j = i - start_i;
			global_struct.arr_d[start_index] += matrix[i][j];
			i++;
		}
		start_i--;
		start_index++;
	}
}

void count_up_d(int **matrix, int start_j, int end_j, int start_index, int size)
{
	while (start_j <= end_j)
	{
		int j = start_j;
		while (j < size)
		{
			int i = j - start_j;
			global_struct.arr_d[start_index] += matrix[i][j];
			j++;
		}
		start_j++;
		start_index++;
	}
}