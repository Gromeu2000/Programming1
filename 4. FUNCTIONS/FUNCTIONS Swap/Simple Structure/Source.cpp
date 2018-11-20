#include <stdio.h>
#include <stdlib.h>

int not_swap(int a)
{
	return a;
}
int swap(int b)
{
	return b;
}

int a;
int b;

int main()

{
	printf("Please insert a number to start: ");
	scanf_s("%d", &a, sizeof(a));

	printf("Please insert another number: ");
	scanf_s("%d", &b, sizeof(b));

	printf("Before swapping: n1 = %d, n2 = %d\n", not_swap(a), swap (b));
	printf("After swapping: n1 = %d, n2 = %d\n", swap(b), not_swap(a));

	system("pause");
	return 0;
}