#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ex3() {

	FILE *file = fopen("file_ex3.txt", "w");

	if (file != nullptr) {

		char str3[999] = "";
		printf("Insert whatever: ");

		while (strcmp(str3, "end") != 0) {

			scanf_s("%s", str3, sizeof(str3));

			if (strcmp(str3, "end") != 0) {

				fprintf(file, "%s\n", str3);
			}
			
		}

		fclose(file);

	}
}