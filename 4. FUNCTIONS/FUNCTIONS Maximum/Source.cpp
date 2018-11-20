#include <stdio.h>
#include <stdlib.h>

int maximum(int a, int b)
{
	if (a < b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int main() 
{
	int a = 67;
	int b = -45;
	printf("The maximum value between %d and %d is %d\n", a, b, maximum(a, b));
	system("pause");
	return 0;
}