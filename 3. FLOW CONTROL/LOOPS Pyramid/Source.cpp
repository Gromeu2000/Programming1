#include <stdlib.h>
#include <stdio.h> 

int main()
{
	int n;
	int row;
	int col;
	printf("Please insert your number of rows ");
	scanf_s("%d", &n, sizeof(n));

	for (row = 1; row <= n; row++)
	{
		for (col = 1; col <= row; col++)
		{
		printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
