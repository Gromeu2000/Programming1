#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex2() {

	FILE *file = fopen("file_ex1.txt", "r");
	if (file != nullptr) {

		getc(file);

		for (int i = 0; i <= 10; i++) {

			printf("Hello world of files! %d\n", i);
		}

		fclose(file);
	}
}