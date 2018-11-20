#include <stdio.h>
#include <stdlib.h>
#include "math_functions.h"

void exercise1()
{
	float base;
	float height;
	printf("Please insert a base: ");
	scanf_s("%f", &base, sizeof(base));
	printf("Please insert a height: ");
	scanf_s("%f", &height, sizeof(height));

	printf("Your final area is %.3f\n", area(base, height));
}