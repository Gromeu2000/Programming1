#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"
#include "Ex2.h"
#include "Ex3.h"
#include "Ex4.h"
#include "Ex5.h"

void SecMax(int array[], int size) {

	int maximum = array[0];
	int secMaximum = array[0];  

	for (int i = 0; i < size; i++) {

		if (array[i] > maximum) {

			secMaximum = maximum;
			maximum  = array[i];
		}
	}

	printf("Your second largest number is %d\n", secMaximum);
}

void exercise6(int array[]) {

	askArray(array, 5);
	SecMax(array, 5);
}