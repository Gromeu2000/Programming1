#include <stdlib.h>
#include <stdio.h>
#include "Exercise1.h"
#include "Exercise_2.h"
#include "Exercise3.h"

void copyArray(int array[],int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}

	int array_1[10];

	for (int i = 0; i < size; i++)
	{
		array_1[i] = array[i];
	}
}

void exercise4(int array[10])
{
	copyArray(array, 10);
}