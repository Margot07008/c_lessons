//
// Created by Margot on 21.03.2020.
//

#include "../includes/header.h"

int *create_matrix_singl(int size, int **d_sum)
{
	int **matrix = dynamic_array_alloc(size);
	filling_matrix_from_k(&matrix, size);
//	dynamic_array_print(matrix, size);
	count_diagonal_sum_singl(matrix, size, &(*d_sum), 0);
	dynamic_array_free(&matrix, size);
	return (*d_sum);
}

void count_diagonal_sum_singl(int **matrix, int size,int **d_sum, int d_num)
{
	int temp_sum = size - 1;
	*d_sum = (int*)calloc(2*size - 1, sizeof(int));
	//считаем все диагональные суммы до гл диагонали
	while (temp_sum > 0)
	{
		int i = temp_sum;
		while (i < size)
		{
			int j = i - temp_sum;
			(*d_sum)[d_num] += matrix[i][j];
			i++;
		}
		temp_sum--;
		d_num++;
	}
	//считаем сумму на главное диагонали
	for (int i=0; i< size; i++)
	{
		int j = i;
		(*d_sum)[d_num] += matrix[i][j];
	}
	//считаем все диагональные суммы после гл диагонали
	d_num++;
	temp_sum = 1;
	while (temp_sum < size)
	{
		int j = temp_sum;
		while (j < size)
		{
			int i = j - temp_sum;
			(*d_sum)[d_num] += matrix[i][j];
			j++;
		}
		temp_sum++;
		d_num++;
	}
}