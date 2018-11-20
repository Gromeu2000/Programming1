#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	int number = 0;

	while (n < 25)
	{
		printf("%d\n", number);
		if (number == 24)
		{
			break;
		}
		n++;
		if (n % 2 != 0)
		{
		number = number + 4;
		}
		else
		{
			number = number - 2;
		}
		
		
	}
	system("pause");
	return 0;
}