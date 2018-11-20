#include <stdio.h>
#include <stdlib.h>

float average(int num, int num2)
{
	float average = (num + num2) / 2;
	return average;
}

int main()
{
	int num;
	int num2;
	printf("Please insert two numbers: ");
	scanf_s("%d %d", &num, &num2, sizeof(num), sizeof(num2));

	printf("The average of %d and %d is %.2f\n", num, num2, average(num, num2));

	system("pause");
	return 0;
}