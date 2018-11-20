#include <stdio.h>
#include <stdlib.h>

int isPrime(int number)
{
	int i;

	for (i = 2; i <= number - 1; i++)
	{

		if (number % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int index = 0;
	int currentNumber = 2;

	int number[20];

	while (index < 20)
	{
		if (isPrime(currentNumber) == 1)
		{
			number[index] = currentNumber;
			index++;
		}

		currentNumber++;
	}

	printf("%d", number[20]);
	system("pause");
	return 0;
}