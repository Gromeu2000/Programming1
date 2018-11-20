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

void deletePos(int array[], int size) {

	int position;

	printf("Please insert a position: ");
	scanf_s("%d", &position);

	for (int i = position - 1; i < size-1; i++) {

		array[i] = array[i + 1];
	}

	size--;

	for (int i = 0; i < size; i++){

	printf("%d ", array[i]);
	}
}

void exercise10(int array[]) {

	askArray(array, 5);
	deletePos(array, 6);
}