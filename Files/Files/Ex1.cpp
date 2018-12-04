#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 

void ex1() {

	FILE *file = fopen("file_ex1.txt", "w");

	if (file != nullptr){
	
		for (int i = 0; i <= 10; i++) {

			fprintf(file, "%s%d\n", "Hello world of files ", i);

		}
		
		fclose(file);
	}

}
