/* ----------------------------------------------------------------------- */
/*                         Gerard Romeu Vidal                              */
/* ----------------------------------------------------------------------- */

#ifndef EX3_H
#define EX3_H

#include <stdio.h>

#define COMPILE_EX_3
#ifdef COMPILE_EX_3



void duplicate(const char* filename1, const char* filename2)
{
	// TODO: introduce the code here
	FILE *file1 = fopen(filename1, "r");
	FILE *file2 = fopen(filename2, "w");

	char str[999];

	if (file1 != nullptr) {

		while (feof(file1) == 0) {

			if (feof(file1) != EOF) {

				fread(str, 999, 1, file1);
				fwrite(str, 999, 1, file2);
			
			}
			
		}

		fclose(file2);
	}

}



#endif

#endif
