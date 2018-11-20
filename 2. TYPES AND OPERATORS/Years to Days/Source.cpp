#include <stdio.h>
#include <stdlib.h>

int main()

{
	int days;
	printf("Type a number of days: ");
	scanf_s("%d", &days, sizeof(days));

	printf("You have introduced %d days\n", days);

	int years = days / 365;
	int remainingDays = days % 365;
	printf("%d days are %d years \n", days, years);
		printf("The remainig amount of days is %d\n", remainingDays);
	system("pause");
	return 0;
}