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
#include "Ex11.h"

void unique(int array[], int size) {

	int unique[6];
	int count = 1;

	for (int i = 0; i < size; i++) {

		for (int j = i + 1; j < size; j++) {

			if (array[i] == array[j]) {

				count++;
				unique[j] = 0;
			}
		}

		if (unique[i] != 0) {

			unique[i] = count;
		}
	}

	for (int i = 0; i < size; i++) {

		if (unique[i] == 1) {

			printf("\n%d ", array[i]);
		}
	}
}

void exercise12(int array[5]) {

	askArray(array, 5);
	unique(array, 6);
}