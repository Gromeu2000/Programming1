#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n;
	int rows;
	int columns;
	printf("Please insert your number of rows: ");
	scanf_s("%d", &n, sizeof(n));

	for (rows = 1; rows <= n; rows++)
	{

		for (columns = 0; columns <= n - rows; columns++)
		{
			printf(" ");
			
		}
		for (columns = 1; columns <= rows; columns++)
		{
			printf("* ");
		}

		printf("\n");
	}
		

	system("pause");
	return 0;
}