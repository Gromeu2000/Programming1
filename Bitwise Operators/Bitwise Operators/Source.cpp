#include <stdio.h>
#include <stdlib.h>

int main() {

	int number = 0;
	int pos = 0;
	int i = 0;
	printf("Please insert a number: ");
	scanf_s("%d", &number);
	printf("Please insert a position: ");
	scanf_s("%d", &pos);

#ifdef number


	if ((number & 1) == 1) {

		printf("Last bit is set\n");
	}

	else {

		printf("Last bit is not\n");
	}

#endif

#if number


	number = number >> 7;

	if ((number & 1) == 1){

		printf("Last bit is set\n");
	}
	else {

		printf("Last bit is not\n");
	}

#endif

#if pos

	

	number = (number >> pos - 1);

	if ((number & 1) == 1) {

		printf("The bit %d is set\n", pos);
	}
	else {

		printf("The bit %d is not\n", pos);
	}

#endif

#if number

	number |= 1 << pos;

	printf("%d\n", number);

#endif

#if number

	number &= (~(1 << pos));

	printf("%d\n", number);

#endif

#if number

	number ^= (1 << pos);

	printf("The new number is %d\n", number);

#endif

#if number

	int order = -1;

	for (int i = 0; i < 8; i++) {

		if ((number >> i) & 1) {

			order = i;
		}
	}

	printf("The highest bit is at %d\n", order);

#endif

#if number

	int order = 0;

	for (int i = 0; i < 8; i++) {

		if ((number >> i) & 1) {

			order = i;
			break;
		}
	}

	printf("The lowest bit is at %d\n", order);

#endif

#if number

	if (number & 1) {

		printf("The number is odd\n");
	}

	else {

		printf("The number is even\n");
	}

#endif

	system("\npause");
	return 0;
}