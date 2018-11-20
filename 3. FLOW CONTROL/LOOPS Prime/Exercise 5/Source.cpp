#include <stdlib.h>
#include <stdio.h>

/**
 * Statement:
 * Write a program that takes a positive number 'n', and prints the
 * first n prime numbers.
 * NOTE: A number is prime if its only divisible by 1 and by itself.
 */
int main()
{
	unsigned int n;
	printf("Type a positive number: ");
	scanf_s("%u", &n);

	printf("The first %u prime numbers are:\n", n);

	unsigned int currentNumber = 2;

	unsigned int count = 0;

	while (count < n)
	{
		unsigned int numberOfDivisors = 0;
		for (unsigned int divisor = 2; divisor < currentNumber; ++divisor)
		{
			if (currentNumber % divisor == 0)
			{
				numberOfDivisors++;
				break;
			}
		}

		if (numberOfDivisors == 0)
		{
			printf("%u ", currentNumber);
			count++;
		}
		currentNumber++;
	}

	printf("\n");

	system("pause");
	return 0;
}
