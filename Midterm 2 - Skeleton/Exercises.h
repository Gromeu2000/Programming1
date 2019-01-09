/* ----------------------------------------------------------------------- */
/*                          Gerard Romeu Vidal                             */
/* ----------------------------------------------------------------------- */

#ifndef EXERCISES_H
#define EXERCISES_H

#include <stdio.h>
#include <string.h>

typedef unsigned char byte;


// -- EXERCISE 1 --
int minPlusMax(int* vec, unsigned int sizeVec)
{
	// TO DO: Insert your code here

	int maximum = vec[0];
	int minimum = vec[0];

	for (int i = 1; i < sizeVec; i++) {

		if (vec[i] < minimum) {

			minimum = vec[i];
		}

		if (vec[i] > maximum) {

			maximum = vec[i];
		}

	}

	return minimum + maximum;
}

// -- EXERCISE 2 --

// TO DO: Declare the new data type pixel here

struct pixel {

	char b;
	char g;
	char r;
};


int compareTiles(struct pixel tile1[8][8], struct pixel tile2[8][8])
{
	// TO DO: Insert your code here
	
	for (int i = 0; i < 8; i++) {

		for (int j = 0; j < 8; j++) {

			if (tile1[i][j].b != tile2[i][j].b || tile1[i][j].g != tile2[i][j].g || tile1[i][j].r != tile2[i][j].r) {

				return 0;
			}
		}
	}
	
	return 1;
}



// -- EXERCISE 3 --
int countWordInFile(char* filename, char* word)
{
	// TO DO: Insert your code here	

	int count = 0;

	FILE *file = fopen(filename, "r");

	if (filename != NULL) {

		char words[999];

		while (feof(file) == 0) {

			fscanf(file, "%s", &words);

			if (strcmp(word, words) == 0) {

				count++;
			}
		}

		fclose(file);
	}

	return count;
}


#endif