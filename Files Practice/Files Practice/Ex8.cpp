#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex8() {

	char str1[999] = " ";

	FILE *file = fopen("file_ex3.txt", "rb");
	FILE *file2 = fopen("file_ex8.txt", "wb");

	if (file != nullptr) {

		while (feof(file) == 0) {

			fread(str1, 999, 1, file);
		}

		fwrite(str1, 999, 1, file2);
	}

	fclose(file);
	fclose(file2);
}