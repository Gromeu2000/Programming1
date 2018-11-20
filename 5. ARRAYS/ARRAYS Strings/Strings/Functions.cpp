#include <stdio.h>
#include <stdlib.h>

int stringLength(char word[]) {

	int length = 0;

	while (word[length] != '\0') {

		length++;
	}

	return length;
}
