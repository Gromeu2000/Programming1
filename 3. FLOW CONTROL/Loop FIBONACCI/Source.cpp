#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a = 1;
	int b = 1;

	printf("%d\n%d\n", a, b);

	for (int i = 0; i < 8; ++i)
	{
		int c = a + b;

		printf("%d\n", c);

		a = b;
		b = c;
	}

		system("pause");
		return 0;
	
}