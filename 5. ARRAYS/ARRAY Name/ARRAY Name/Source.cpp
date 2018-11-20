#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[20];

	printf("What is your name? ");
	scanf_s("%s", name, sizeof(name));

	printf("Hello %s!! How are you?\n", name);
	
	system("pause");
		return 0;
}