#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int array[] = { 19, 18, 17, 16, 15, 14, 13, 12, 11, 10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", array[i]);
	}

	system("pause");
	return 0;
}