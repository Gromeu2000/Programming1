#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[10] = {}; 

	array[4] = 9999;
	array[5] = 9999;

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", array[i]);
	}
	system("pause");
	return 0;
}