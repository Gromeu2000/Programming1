#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int i = 0;

	printf("Please insert a number ");
	scanf_s("%d", &n, sizeof(n));

	printf("The introduced number is %d\n", n);

	if (n > 0)
	{
		while (i <= n)
		{
			printf("%d\n", i);
			i++;
		}
		printf("\n");
	}
	else (n < 0);
	{
		while (i >= n)
		{
			printf("%d\n", i);
			i--;
		}
	}
	
	system("pause");
	return 0;
}