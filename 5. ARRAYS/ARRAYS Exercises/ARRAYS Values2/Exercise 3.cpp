#include <stdlib.h>
#include <stdio.h>
#include "Exercise1.h"
#include "Exercise_2.h"

void printArrayStats(int array[], int size)
{
	int maximum = array[0];
	int minimum = array[0];
	int average, sum = array[0];

	for (int i = 1; i < size; i++)
	{
		
		if (array[i] > maximum)
		{
			maximum = array[i];
		}
		if (array[i] < minimum)
		{
			minimum = array[i];
		}
		sum += array[i];
		average = sum / size;
	}

	printf("Your maximum value is %d\n", maximum);
	printf("Your minimum value is %d\n", minimum);
	printf("Your average is %d\n", average);
}

void exercise3(int array[10])
{
	printArrayStats(array, 10);
}