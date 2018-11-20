#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"
#include "Ex2.h"
#include "Ex3.h"
#include "Ex4.h"
#include "Ex5.h"
#include "Ex6.h"
#include "Ex7.h"

void EvenOdd(int array[], int size) {

	int countEven = 0;
	int countOdd = 0;

	for (int i = 0 - 1; i < size; i++) {

		if (array[i] % 2 == 0) {

			countEven++;
		}

		if (array[i] % 2 != 0) {

			countOdd++;
		}	
	}

	printf("Your number of even numbers is %d\n", countEven);
	printf("Your number of odd numbers is %d\n", countOdd);
}

void exercise8(int array[5]) {

	askArray(array, 5);
	EvenOdd(array, 5);
}