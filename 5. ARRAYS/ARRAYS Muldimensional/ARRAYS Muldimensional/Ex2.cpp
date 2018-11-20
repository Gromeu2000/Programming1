#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

void AskArray1() {
int sum = 0;
	int A[SIZE][SIZE];

	printf("Please print a 3 X 3 matrix\n");

	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {

			scanf_s("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < SIZE; i++) {

		
		sum += A[i][i];
	}

	printf("Your main diagonal is %d\n", sum);
}