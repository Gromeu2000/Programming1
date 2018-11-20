#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"
#include "Ex2.h"
#include "Ex3.h"
#include "Ex4.h"
#include "Ex5.h"
#include "Ex6.h"

void countNegative(int array[], int size) {

	int count = 0;

	for (int i = 0; i < size; i++) {

		if (array[i] < 0) {

			count++;
		}
	}
	
	printf("The number of negatives are %d\n", count);
}

void exercise7(int array[5]) {

	askArray(array, 5);
	countNegative(array, 5);
}