#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n;
	int rows;
	int columns;
	printf("Please insert a number of rows: ");
	scanf_s("%d", &n, sizeof(n));

	int num = 1;

	for (rows = 1; rows <= n; rows++)
	{
		for (columns = 0; columns < n - rows; columns++)
		{
			printf(" ");
		}
		for (columns = 1; columns <= rows; columns++)
		{
			printf("%d ", num);
			num++;

			if (num == 10)
			{
				num = 0;
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}