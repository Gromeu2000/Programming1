#include <stdio.h>
#include <stdlib.h>

int square(int number)
{
	int squared = number * number;
	return squared;
}

int main()

{
	int number;
	printf("Please insert a number to start: ");
	scanf_s("%d", &number, sizeof(number));

	printf("The total is: %d\n",square(number));

	system("pause");
	return 0;
}