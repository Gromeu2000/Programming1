#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include "Functions.h"

void ex3() {

	FILE *file = fopen("file_ex3.txt", "a");
	char sentence[100];

	if (file != nullptr) {

		printf("Please write something: ");
		scanf_s("%s", sentence, sizeof(sentence));

		fprintf(file, "%s\n", sentence);

		if (sentence == "end") {

			fclose(file);
		}
	}
}