/* ----------------------------------------------------------------------- */
/*                         Gerard Romeu Vidal                              */
/* ----------------------------------------------------------------------- */

#ifndef EX1_H
#define EX1_H

// TO DO: Define the types byte and ushort here
typedef unsigned char byte;
typedef unsigned short ushort;

int isContained(byte b, ushort u)
{
	// TO DO: Insert the code of the function here
	short mask = 0x00FF;
	for (int i = 0; i < 8; i++) {

		if ((u & mask) == b) {

			return 1;
		}

		else {

			u = (u >> 1);
		}
	}

	if (u == b) {

		return 1;
	}

	else {

		return 0;
	}
	
}


#endif