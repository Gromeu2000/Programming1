#include <stdio.h>
#include <stdlib.h>

int absolute(int absolut_number)
{
	
	
		if (absolut_number < 0)
		{
			int negative = (-1 *absolut_number);
			printf("%d", negative);
		}
		else 
		{
			printf("%d", absolut_number);
		}
		
	return absolut_number;
}