#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex6() {

	int count = 0;
	char character;

	FILE *file = fopen("file_ex3.txt", "r");

	if (file != nullptr) {

		while (feof(file) == 0) {
			
			character = getc(file);

			if (character == ' ' || character == '\n') {

				count++;
			}
		}
		
		fclose(file);
	}
	
	printf("The count of words are %d\n", count);
}
