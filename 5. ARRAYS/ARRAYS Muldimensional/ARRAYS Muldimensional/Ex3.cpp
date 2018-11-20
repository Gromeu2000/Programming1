#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"
#include "Ex2.h"
#define size 2

void askArray2() {

	int A[size][size];
	int det = 0;
	printf("Pleas einsert a 2 X 2 matrix\n");

	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size; j++) {

			scanf_s("%d", &A[i][j]);
		}
	}

	det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

	printf("%d\n", det);
}
	
