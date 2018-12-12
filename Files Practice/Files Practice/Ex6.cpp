#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex6() {

	int count = 0;
	char word;
	FILE *file = fopen("file_ex3.txt", "r");

	if (file != nullptr) {

		while (feof(file) == 0) {

			word = fgetc(file);
			if (word == ' ' || word =='\n') {

				count++;
			}
		}

		fclose(file);
	}

	printf("The number of words are %d\n", count);
}