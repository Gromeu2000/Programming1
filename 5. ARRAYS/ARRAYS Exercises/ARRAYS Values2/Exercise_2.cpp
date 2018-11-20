#include <stdio.h>
#include <stdlib.h>
#include "Exercise1.h"

void inputArray(int array[])
{
	printf("Please insert ten numbers: ");

	for (int i = 0; i < 10; i++)
	{
		int a;
		scanf_s("%d", &a);

		array[i] = a;
	}
}

void exercise2(int array[10])
{
	inputArray(array);
	exercise1(array, 10);
}