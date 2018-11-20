#include <stdio.h>
#include <stdlib.h>

int number(int value) {
	

	if ((value % 2) == 0)
	{
		return 1;
	}

	else
	{
			return 0;
	}
}

int main()
{
	int value = 128;

	if (number(value) == 1)
	{
		printf("The number %d is even\n", value);
	}
	else if (number(value) == 0)
	{
		printf("The number %d is odd\n", value);
	}

	system("pause");
	return 0;
}

