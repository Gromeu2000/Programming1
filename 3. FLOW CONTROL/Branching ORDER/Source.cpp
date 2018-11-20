#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number1;
	int number2;
	int number3;
	int aux;

	printf("Please insert your first number ");
	scanf_s("%d", &number1, sizeof(number1));

	printf("Please insert your second number ");
	scanf_s("%d", &number2, sizeof(number2));

	printf("Please insert your third number ");
	scanf_s("%d", &number3, sizeof(number3));



	if (number1 > number2)
	{
		aux = number2;
		number2 = number1;
		number1 = aux;
	}

	if (number2 > number3)
	{
		aux = number2;
		number2 = number3;
		number3 = aux;
	}

	if (number1 > number2)
	{
		aux = number1;
		number1 = number2;
		number2 = aux;
	}

	printf ("%d, %d, %d\n", number1, number2, number3);

	system("pause");
	return 0;
}