#include<stdio.h>
#include<stdlib.h>

void average (float num, float num2, float num3)
{
	float average = (num + num2 + num3) / 3;
	printf("The average between %.2f, %.2f and %.2f is %.2f\n", num, num2, num3, average);
}

int main()
{
	float num;
	float num2;
	float num3;
	printf("Please insert three numbers: ");
	scanf_s("%f%f%f", &num, &num2, &num3);
	average(num, num2, num3);
	system("pause");
	return 0;
}
