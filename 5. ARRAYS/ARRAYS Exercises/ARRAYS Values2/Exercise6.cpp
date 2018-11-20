#include <stdlib.h>
#include <stdio.h>
#include "Exercise1.h"
#include "Exercise_2.h"
#include "Exercise3.h"
#include "Exercise4.h"


void inputArray6(int array[], int size)
{
	int i = array[0];

	printf("Insert ten numbers (only 0 or 1): ");

	for (int i = 0; i < 10; i++)
	{
		int a;
		scanf_s("%d", &a);

		array[i] = a;
	}

	printf("Input: ");

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}

	printf("Output: ");

	int zeros = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0)
		{
			zeros++;
		}	
	}
	
	for (int i = 0; i < size; i++)
	{
		if (i < zeros)
		{
			array[i] = 1;
		}

		else
		{
			array[i] = 0;
		}
	}
}

void printArray(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void exercise6(int array[10])
{
	inputArray6(array, 10);
	printArray(array, 10);
}

	
