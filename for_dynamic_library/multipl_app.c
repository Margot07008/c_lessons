#include "../includes/header.h"

my_struct global_struct = {PTHREAD_MUTEX_INITIALIZER,0,0, 0 , 0, -1,-1,-1, NULL};

void free_all();

int main() {

	scanf("%d", &global_struct.size);
	create_matrix();

	for (int i=0; i < 2*global_struct.size - 1; i++) {
		printf("%d", global_struct.arr_d[i]);
		if (i< 2*global_struct.size - 2) printf(",");
	}

	free_all();
	return 0;
}

void free_all()
{
    if (global_struct.arr_d)
	    free(global_struct.arr_d);
    if (&global_struct.mutex)
	    pthread_mutex_destroy(&global_struct.mutex);
}



