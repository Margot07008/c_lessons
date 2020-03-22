//
// Created by margot on 22.03.2020.
//

#include "../includes/header.h"
my_struct global_struct;

void free_all()
{
    if (global_struct.arr_d)
        free(global_struct.arr_d);
    if (&global_struct.mutex)
        pthread_mutex_destroy(&global_struct.mutex);
}
