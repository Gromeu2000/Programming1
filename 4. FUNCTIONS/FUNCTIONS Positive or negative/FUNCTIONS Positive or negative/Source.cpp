#include <stdio.h>
#include <stdlib.h>

void positive( int number)
{
	printf("0\n", number);
}

void negative(int number)
{
	printf("1\n", number);
}

void zero(int number)
{
	printf("0\n", number);
}

int main()
{
	int number;
	printf("Please insert a number: ");
	scanf_s("%d", &number);
	if (number < 0)
	{
		negative(number);
	}
	if (number > 0)
	{
		positive(number);
	}
	else if (number == 0)
	{
		zero(number);
	}
	system("pause");
	return 0;
}