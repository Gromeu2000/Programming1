#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include "Ex1.h"

void ex2() {

	FILE *file = fopen("file_ex1.txt", "r");
	char str[100];

	if (file != nullptr) {

		while (feof(file) == 0) {

			fgets(str, 100, file);
			printf("%s", str);

		}
		
		int res = fgets(str, 100, file);
	}

	fclose(file);
}

