#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"
#include "Ex2.h"
#include "Ex3.h"
#include "Ex4.h"



void MaxMin(int array[], int size) {

	int maximum = array[0];
	int minimum = array[0];

	for (int i = 1; i < size; i++) {

		if (array[i] < minimum) {

			minimum = array[i];
		}

		if (array[i] > maximum) {

			maximum = array[i];
		}
	}

	printf("Your maximum value is %d\n", maximum);
	printf("Your minimum value is %d\n", minimum);
}

void exercise5(int array[]) {

	askArray(array, 5);
	MaxMin(array, 5);
}