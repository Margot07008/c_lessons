//
// Created by Margot on 20.03.2020.
//
//#include "stdio.h"
//#include "stdlib.h"

#include "../includes/header.h"
extern my_struct global_struct;

void filling_matrix_from_k(int ***A, int N)
{
	int x = 1;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			scanf("%d",&(*A)[i][j]);

		}
	}
}

void filling_matrix_auto(int ***A, int N)
{
	int x = 1;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			(*A)[i][j] = x;
//			x += 1;
		}
	}
}

int** dynamic_array_alloc(int N)
{
	int **A = (int **)malloc(N*sizeof(int *));
	if (!A)
	{
		printf("ERROR_ALLOCATE_MEMORY");
		exit(1);
	}
	for(int i = 0; i < N; i++) {
		A[i] = (int *)malloc(N*sizeof(int));
		if (!A[i])
		{
			printf("ERROR_ALLOCATE_MEMORY");
			exit(1);
		}
	}
	return A;
}

void dynamic_array_print(int **A, int N)
{
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			printf("%*d", 5, A[i][j]);
		}
		printf("\n");
	}
}

int is_equal(int *arr, int* template, int size)
{
	for (int i = 0; i < 2*size - 1; i++) {
		if (arr[i] != template[i])
			return 0;
	}
	return 1;
}

void dynamic_array_free(int ***A, int N)
{
	for(int i = 0; i < N; i++) {
		free((*A)[i]);
	}
	free(*A);
}

void free_all()
{
	if (global_struct.arr_d)
		free(global_struct.arr_d);
	if (&global_struct.mutex)
		pthread_mutex_destroy(&global_struct.mutex);
}
