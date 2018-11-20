#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"
#include "Ex2.h"

void sumArray(int array[5], int size) {

	printf("Expected Output: ");

	int sum = 0;
	for (int i = 0; i <= size; i++) {

		 sum += array[i];
	}

	printf("%d\n", sum);
}

void exercise3(int array[5]) {

	askArray(array, 5);
	sumArray(array, 5);
}