#include<stdio.h>
#include<stdlib.h>

int ask()
{
	int number1;
	printf("Please insert a number: ");
	scanf_s("%d", &number1, sizeof(number1));
	return number1;
	
}

int triple(int num)
{
	return 3 * num;
}

int main()
{
	int num = ask();

	int number1 = triple(num);

	printf("The triple of %d is %d\n", num, number1);

	system("pause");
	return 0;
}