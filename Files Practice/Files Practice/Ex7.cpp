#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex7() {

	int count = 0;

	FILE *file = fopen("file_ex3.txt", "r");

	if (file != nullptr) {

		while (feof(file) == 0) {

			if (fgetc(file) != -1) {

				count++;
			}
			
		}

		fclose(file);
	}

	printf("The number of characters are %d\n", count);
}



