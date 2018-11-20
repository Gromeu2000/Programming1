#include <stdio.h>
#include <stdlib.h>
#include "Exercise_2.h"

void exercise_2()
{
	int absolut_number;
	printf("Please insert a number: ");
	scanf_s("%d", &absolut_number, sizeof(absolut_number));

	if (absolut_number < 0)
	{
		int negative = (-1 * absolut_number);
		printf("%d\n", negative);
	}
	else
	{
		printf("%d\n", absolut_number);
	}

	
}