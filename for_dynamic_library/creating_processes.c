//
// Created by Margot on 21.03.2020.
//

#include "../includes/header.h"
extern my_struct global_struct;

void count_diagonal_sum()
{

	global_struct.arr_d =  (int*)calloc(2*global_struct.size - 1 , sizeof(int));;
	global_struct.end_i = global_struct.size;

	int opt_trds_cnt = get_nprocs() * 2 - 1;
//    int opt_trds_cnt = 1;
	pthread_t trds[opt_trds_cnt];
	while (global_struct.index_end != (2 * global_struct.size - 2))
	{
		for (int i = 0; i < opt_trds_cnt; ++i) //заполняем массив во все потоки
		{
			pthread_mutex_lock(&global_struct.mutex);
			if (global_struct.index_end == (2 * global_struct.size - 2)) {
				opt_trds_cnt = i;
				break;
			}
			initial_struct();

			pthread_create(&trds[i], NULL, single_thrd, NULL);
		}
        for (int i = 0 ; i < opt_trds_cnt; ++i)//ожидаем завершения всех потоков
            pthread_join(trds[i], NULL);
	}

}
