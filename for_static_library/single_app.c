#include "../includes/header.h"


int main(int argc, char **argv) {

    char *p = NULL;

    int size = (int)strtol(argv[1], &p, 10);
	int *d_sum = NULL;

	create_matrix_singl(size, &d_sum);

	for (int i=0; i < 2*size - 1; i++) {
		printf("%d", d_sum[i]);
		if (i< 2*size - 2) printf(",");
	}

	free(d_sum);
	return 0;
}
