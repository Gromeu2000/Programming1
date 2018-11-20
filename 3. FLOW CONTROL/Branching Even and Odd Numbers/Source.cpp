#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
		printf("Please insert a number ");
		scanf_s("%d", &number, sizeof(number));

		
		if (number % 2 == 0)
		{
			printf("Your number is even\n");
		}

		else
		{
			printf("Your number is odd\n");
		}

	system("pause");
	return 0;
}