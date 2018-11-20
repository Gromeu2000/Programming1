#include <stdio.h>
#include <stdlib.h>

int main()
{
		int number;
		printf("Type a number: ");
		scanf_s("%u", &number);

		int sum_of_divisors = 0;

		
		for (int i = 1; i < number; ++i)
		{
			if (number % i == 0) 
			{
				sum_of_divisors += i;
			}
		}

		if (sum_of_divisors == number)
		{
			printf("%u is a perfect number.\n", number);
		}
		else
		{
			printf("%u is not a perfect number.\n", number);
		}

		system("pause");
		return 0;
	}
