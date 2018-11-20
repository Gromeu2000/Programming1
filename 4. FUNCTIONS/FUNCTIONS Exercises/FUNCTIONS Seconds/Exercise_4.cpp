#include <stdio.h>
#include <stdlib.h>
#include "Exercise_4.h"

void exercise_4()
{
	char ch;
	char c;
	scanf_s("%c", &c, sizeof(c));

	printf("Enter an alphabet: ");
	scanf_s("%c", &ch, sizeof(ch));

	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' | ch == 'u' | ch == 'U')
	{
		printf("Is a vowel\n", ch);
	}
	else
	{
		printf("Is a consonant\n", ch);
	}
}

