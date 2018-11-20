#include <stdio.h>
#include <stdlib.h>
#include "Seconds_conversion.h"

void exercise_1()
{
	int hours, minutes, seconds;
	printf("Please insert a number of hours, minutes and seconds: ");
	scanf_s("%d%d%d", &hours, &minutes, &seconds, sizeof(hours, minutes, seconds));

	printf("Your number of seconds are %d\n", math_function1(hours, minutes, seconds));
}