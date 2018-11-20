#include <stdlib.h>
#include <stdio.h>
#define Birth_Year  2000
#define Current_Year  2018

int main()

{

	int new_age = ((Current_Year - Birth_Year) * 365);
	
	printf("Your age in days is: %i\n", new_age);
	
	system("pause");

	return 0;

}