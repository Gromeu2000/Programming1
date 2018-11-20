#include <stdio.h>
#include <stdlib.h>

int main()
{
	float number_1;
	
	printf("Insert your first number please: ");
	scanf_s("%f", &number_1, sizeof(number_1));

	float number_2;

	printf("Thanks, now insert your second number: ");
	scanf_s("%f", &number_2, sizeof(number_2));

	printf("The sum is %f\n", number_1 + number_2);
	printf("The substraction is %f\n", number_1 - number_2);
	printf("The product is %f\n", number_1  *number_2);
	printf("The division is %f\n", number_1 /number_2);

	system("pause");
	return 0;
}