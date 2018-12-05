#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include "Functions.h"

void ex2() {

	FILE *file = fopen("file_ex1.txt", "r");
	char letter;

	if (file != nullptr) {

		while (feof(file) == 0) {

			letter = fgetc(file);
			printf("%c", letter);

		}
	}

	fclose(file);
}

