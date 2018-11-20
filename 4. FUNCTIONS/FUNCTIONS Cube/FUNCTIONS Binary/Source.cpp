#include <stdio.h>
#include <stdlib.h>

int function(int number)
{   
	int cube =  number * number * number;
	return cube;
}

int main()
{
	int number = 9;
	printf("The cube is %d\n", function(number));
	system("pause");
	return 0;
}