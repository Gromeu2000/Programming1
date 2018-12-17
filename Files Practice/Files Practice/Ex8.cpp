#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex8() {

	FILE *file = fopen("file_ex3.txt", "rb");
	FILE *file2 = fopen("file_ex8.txt", "wb");

	if (file != nullptr) {

		char text[999] = " ";
		while (feof(file) == 0) {

			fread(text, 999, 1, file);
		}

		if (file2 != nullptr) {

			fwrite(text, 999, 1, file2);
		}
		
	}

	fclose(file);
	fclose(file2);
}