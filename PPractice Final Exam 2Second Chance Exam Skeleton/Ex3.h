/* ----------------------------------------------------------------------- */
/*                         Gerard Romeu Vidal                           */
/* ----------------------------------------------------------------------- */

#ifndef EX3_H
#define EX3_H

#include <stdio.h>

int countCharInFile(char* filename, char c)
{
	// TO DO: Insert the code of the function here

	FILE *file = fopen(filename, "r");

	int count = 0;
	char amount;

	if (file != NULL) {

		while (feof(file) == 0) {

			fscanf(file, "%c", &amount);

			if (amount == c) {

				count++;
			}
		}
	}

	return count;
}

#endif