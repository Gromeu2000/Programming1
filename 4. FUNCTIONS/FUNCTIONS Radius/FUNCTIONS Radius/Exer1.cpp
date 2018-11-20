#include <stdio.h>
#include <stdlib.h>
#include "Radius.h"

void function()
{
	float radius;
	printf("Please insert a radius: ");
	scanf_s("%f", &radius, sizeof(radius));

	printf("Your final area is %.2f\n", calcul_radius(radius));
}