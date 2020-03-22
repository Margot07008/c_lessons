//
// Created by Margot on 21.03.2020.
//

#include "../includes/header.h"

extern my_struct global_struct;

void initial_struct()
{
	if (global_struct.index_end < global_struct.size - 1)
	{
		global_struct.start_i = global_struct.end_i - 1;
		global_struct.end_i = global_struct.start_i / 2;
		global_struct.index_start = global_struct.index_end + 1;
		global_struct.index_end = global_struct.index_start + global_struct.start_i - global_struct.end_i;
	}
	else if (global_struct.end_j + 1 < global_struct.size) {
		global_struct.end_j + 1 < global_struct.size ? (global_struct.start_j = global_struct.end_j + 1) : (global_struct.start_j = global_struct.size - 1);
		2*global_struct.start_j < global_struct.size ? (global_struct.end_j = 2*global_struct.start_j) : (global_struct.end_j = global_struct.size - 1);
		global_struct.index_start = global_struct.index_end + 1;
		global_struct.index_end = global_struct.index_start + global_struct.end_j - global_struct.start_j;
	}
}

void *single_thrd(void *arg)
{
	int start_i = -1;
	int end_i = -1;
	int start_j = -1;
	int end_j = -1;
	if (global_struct.index_end <= global_struct.size){
		start_i = global_struct.start_i;
		end_i = global_struct.end_i;
		start_j = 1;
		end_j = -1;
	}
	else
	{
		start_i = 0;
		end_i = 1;
		start_j = global_struct.start_j;
		end_j = global_struct.end_j;
//		printf("%d ", end_j);
	}
	int size = global_struct.size;
	int **matrix = global_struct.matrix;
	int start_index = global_struct.index_start;
	int end_index = global_struct.index_end;
	pthread_mutex_unlock(&global_struct.mutex);
	if (end_index < global_struct.size) {
		count_low_d(matrix, start_i, end_i, start_index, size);
	}
	else {
		count_up_d(matrix, start_j, end_j, start_index, size);
	}
	return NULL;
}