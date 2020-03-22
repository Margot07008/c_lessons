//
// Created by Margot on 20.03.2020.
//

#ifndef DZ2_HEADER_H
#define DZ2_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <pthread.h>
#include <sys/sysinfo.h>

typedef struct g_struct{
	pthread_mutex_t	mutex;
	int start_i;
	int end_i;
	int start_j;
	int end_j;
	int index_start;
	int index_end;
	int size;
	int **matrix;
	int *arr_d;
} my_struct;


//utils

int** dynamic_array_alloc(int N);
void filling_matrix_from_k(int ***A, int N);
void filling_matrix_auto(int ***A, int N);
void dynamic_array_print(int **A, int N);
void dynamic_array_free(int ***A, int N);
int is_equal(int *arr, int* template, int size);

//multi_thread_app
void create_matrix();
void count_diagonal_sum();
void initial_struct();
void *single_thrd(void *arg);
void count_low_d(int **matrix, int start_i, int end_i, int start_index, int size);
void count_up_d(int **matrix, int start_j, int end_j, int start_index, int size);
void free_all();

//single_app
void count_diagonal_sum_singl(int **matrix, int size,int **d_sum, int d_num);
int *create_matrix_singl(int size, int **d_sum);

//tests
void test_for_static();
void test_fot_dynamic();
int *create_matrix_singl_test(int size, int **d_sum, int generation);
void filling_matrix_for_test(int ***A, int N, int generation);
void create_matrix_multy_test(int generation);


#endif //DZ2_HEADER_H
