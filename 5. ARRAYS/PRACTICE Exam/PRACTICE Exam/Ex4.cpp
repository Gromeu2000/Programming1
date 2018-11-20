#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"
#include "Ex2.h"
#include "Ex3.h"

void NegativeArray(int array[], int size) {

	printf("Expected Output: ");
	for (int i = 0; i <= size; i++) {

		printf("%d ", - array[i]);
	}
}


void exercise4(int array[5]) {

	askArray(array, 5);
	NegativeArray(array, 5);
}