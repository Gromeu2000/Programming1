#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Header
	printf("     ");
	for (int i = 1; i <= 9; ++i)
	{
		printf("  %d", i);
	}

	// Separator
	printf("\n     ---------------------------\n");

	// Iterate over rows (from 1 to 9)
	for (int i = 1; i <= 9; ++i)
	{
		// Left column + separator
		printf(" x%d |", i);

		// Iterate over columns (from 1 to 9)
		for (int j = 1; j <= 9; ++j)
		{
			// Multiplication result
			int result = i * j;

			// Extra space for numbers < 10
			if (result < 10)
			{
				printf(" ");
			}

			// Print the result
			printf(" %d", result);
		}

		// New line after printing all columns in the row
		printf("\n");
	}

	system("pause");
	return 0;
}
