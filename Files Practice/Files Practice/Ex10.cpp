#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void ex10() {

	FILE *file = fopen("file_ex3.txt", "r");
	FILE *file2 = fopen("file_ex1.txt", "r");
	FILE *file3 = fopen("file_ex10.txt", "w");

	char str[999] = " ";
	char str2[999] = " ";

	if (file != nullptr) {

		while (feof(file) == 0 || feof(file2) == 0) {

			fread(str, 999, 1, file);
			fread(str2, 999, 1, file2);
		}

		fwrite(str, 999, 1, file3);
		fwrite(str2, 999, 1, file3);
	}

	fclose(file);
	fclose(file2);
	fclose(file3);
}
