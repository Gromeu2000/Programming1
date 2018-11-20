#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

void AskArray() {

	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	int C[SIZE][SIZE];

	printf("Please print a 3 X 3 matrix\n");

	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {

			scanf_s("%d", &A[i][j]);
		}
	}

	printf("Please print another 3 X 3 matrix\n");

	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {

			scanf_s("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {

			printf("%d ", A[i][j] + B[i][j]);
		}

		printf("\n");
	}
}

