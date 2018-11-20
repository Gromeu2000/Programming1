#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"

void ReverseArray(int array[], int size) {


	printf("Expected Output: ");
	
	for (int i = size; i >= 0; i--) {

		printf("%d ", array[i]);
	}
}

void exercise2(int array[5]) {

	askArray(array,5);
	ReverseArray(array, 5);
}
