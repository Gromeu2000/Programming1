#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("Please insert a number ");
	scanf_s("%d", &n, sizeof(n));

	int min;
	int result = 0;
	for (min = 1; min <= n; min++)
	{

		result += min;
	}

	printf_s("The result is: %d\n", result);

	system("pause");
	return 0;
}