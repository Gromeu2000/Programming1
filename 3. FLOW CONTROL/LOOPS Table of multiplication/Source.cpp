#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	printf("Please insert a number ");
	scanf_s("%d", &number, sizeof(number));

	int mult;
	int result;

	for (mult = 0; mult <= 10; mult++)
	{
		int result = mult * number;
		printf("%d X %d = %d\n ", mult, number, result);
	}


	system("pause");
	return 0;
}