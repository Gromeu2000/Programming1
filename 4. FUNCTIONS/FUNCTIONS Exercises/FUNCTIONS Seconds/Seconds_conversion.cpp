#include <stdio.h>
#include <stdlib.h>

int math_function1(int hours, int minutes, int seconds)
{
	int hour_s = (hours * 3600);
	int minute_s = (minutes * 60);
	int second_s = seconds;
	int result = (hour_s + minute_s + second_s);

	return result;
}