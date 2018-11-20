#include <stdio.h>
#include <stdlib.h>

void askArray(int array[], int size)
{
	printf("Input elements of an array: ");

	for (int i = 0; i <= size; i++) {

		int number = 0;
		printf("\nElement - %d ", i);
		scanf_s("%d", &number, sizeof(number));

		array[i] = number;
	}
}

void printArray(int array[], int size) {

	printf("Expected Output: ");
	for (int i = 0; i <= size; i++) {

		printf("%d ", array[i]);
	}
}

void exercise1(int array[5]) {

	askArray(array, 5);
	printArray(array, 5);
}