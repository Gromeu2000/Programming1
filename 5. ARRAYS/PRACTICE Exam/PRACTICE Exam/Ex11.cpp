#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"
#include "Ex2.h"
#include "Ex3.h"
#include "Ex4.h"
#include "Ex5.h"
#include "Ex6.h"
#include "Ex7.h"
#include "Ex8.h"
#include "Ex9.h"
#include "Ex10.h"

void Frequency(int array[], int size) {
	
	int freq[6];

	for (int i = 0; i < size; i++) {

		int count = 1;

		for (int j = i + 1; j < size; j++) {

			if (array[i] == array[j]){

				count++;
				freq[j] = 0;
				}
		}

		if (freq[i] != 0) {

			freq[i] = count;
		}
	}

	for (int i = 0; i < size; i++) {

		if (freq[i] != 0) {

			printf("The number %d has appeared %d times\n", array[i], freq[i]);
		}
	}
}

void exercise11(int array[]) {

	askArray(array, 5);
	Frequency(array, 5);
}