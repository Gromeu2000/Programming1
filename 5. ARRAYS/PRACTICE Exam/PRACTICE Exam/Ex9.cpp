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

void ChangePos(int array[], int size) {

	int num;
	int position;

	printf("Insert a number: ");
	scanf_s("%d", &num);

	printf("Insert a position to insert your number: ");
	scanf_s("%d", &position);

	for (int i = size; i <= position; i--) {

		array[i] = array[i - 1];
		
	}
	array[position - 1] = num;
		size++;
	

	for (int i = 0; i < size; i++) {
		
		printf("%d ", array[i]);
	}
}

void exercise9(int array[5]) {

	askArray(array, 5);
	ChangePos(array, 5);

}