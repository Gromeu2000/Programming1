#include <stdlib.h>
#include <stdio.h>
#include "Exercise1.h"
#include "Exercise_2.h"
#include "Exercise3.h"
#include "Exercise4.h"
#include "Exercise6.h"

void exercise7()
{
	int array[9][9] = {};

	int numBombs = 0;
	while (numBombs < 10)
	{
		int x = rand() % 10;
		int y = rand() % 10;

		if (array[x][y] == 0)
		{
			array[x][y] = 1;
			numBombs++;
		}
	}

	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%i", array[i][j]);

		}

		printf("\n");
	}
}
