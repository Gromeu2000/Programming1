#include <stdio.h>
#include <stdlib.h>
#include "Exercise_3.h"

void exercise_3()
{
	int i, j, count;

	for (i = 997; i >= 2; i--)
	{
		count = 0;

		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			printf("%d ", i);
		}
	}
		
	printf("\n");

}