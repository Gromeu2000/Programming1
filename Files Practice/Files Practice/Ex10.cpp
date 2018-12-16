#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void ex10() {

	char str[999] = " ";
	char str2[999] = " ";

	FILE *file1 = fopen("file_ex1.txt", "r");
	FILE *file2 = fopen("file_ex3.txt", "r");
	FILE *file3 = fopen("file_ex10.txt", "w");

	if (file1 != nullptr) {

		while (feof(file1) == 0) {

			fread(str, 999, 1, file1);
		}
	}

	if (file2 != nullptr) {

		while (feof(file2) == 0) {

			fread(str2, 999, 1, file2);
		}
	}

	fwrite(str, 999, 1, file3);
	fwrite(str2, 999, 1, file3);

	fclose(file1);
	fclose(file2);
	fclose(file3);
}
