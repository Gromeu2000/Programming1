#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex9(){

	FILE *file = fopen("file_ex3.txt", "r");

	if (file != nullptr) {

		if (fseek(file, 0, SEEK_END) == 0) {

			long int bytes = ftell(file);
			printf("The number of bytes are %ld\n", bytes);
		}

		fclose(file);
	}
}
