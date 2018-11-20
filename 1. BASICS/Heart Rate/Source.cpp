
#include <stdio.h> 
#include <stdlib.h> 


int main()
{
	float a;
	printf("Type the age of the cyclist");
	scanf_s("%f", &a, sizeof(a));
	printf("The heart rate demanded is: %0.2f\n", (220.0 - a) / 10.0);
	system("pause");
	return 0;
}