#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int main() {

	char word1[] = "peloputa";
	char word2[] = "peloputa";

	int count = stringLength(word1);

	printf("%d\n", count);

	system("pause");
	return 0;
}