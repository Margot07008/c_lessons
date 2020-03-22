#include "../includes/header.h"

my_struct global_struct = {PTHREAD_MUTEX_INITIALIZER,0,0, 0 , 0, -1,-1,-1, NULL};


int main(int argc, char **argv) {
    char *p = NULL;

	global_struct.size = strtol(argv[1], &p, 10);
	create_matrix();

	for (int i=0; i < 2*global_struct.size - 1; i++) {
		printf("%d", global_struct.arr_d[i]);
		if (i< 2*global_struct.size - 2) printf(",");
	}

	free_all();
	return 0;
}




