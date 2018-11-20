#include <stdio.h>
#include <stdlib.h>
#include "Exercise1.h"
#include "Seconds_conversion.h"

void Exercise1()
{
	float hours, minutes, seconds;
	printf("Please insert a number of hours, minutes and seconds: ");
	scanf_s("%f%f%f", &hours, &minutes, &seconds, sizeof(hours, minutes, seconds));

	printf("Your number of seconds are %.2f\n", math_function(hours, minutes, seconds));
}