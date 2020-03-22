#include "../includes/header.h"

int main() {

	int size = 0;

	scanf("%d", &size);
	int *d_sum = NULL;

	create_matrix_singl(size, &d_sum);

	for (int i=0; i < 2*size - 1; i++) {
		printf("%d", d_sum[i]);
		if (i< 2*size - 2) printf(",");
	}

	free(d_sum);
	return 0;
}
