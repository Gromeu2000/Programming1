#include <stdio.h>
#include <stdlib.h>

int main() {

	/*LEAST DIGIT
	int number;
	printf("Please insert a number: ");
	scanf_s("%d", &number);

	if ((number & 1) == 1) {

		printf("\n%d is set(1)\n", number);
	}

	else {

		printf("%d is not(0)\n", number);
	}*/

	/*MSB
	int number;
	printf("please insert a number: ");
	scanf_s("%d", &number);

	int msb = 1 << 256;
	if ((number & msb) == 1){

		printf("\n%d is set(1)\n", number);
}
	else {

		printf("\n%d is not(0)\n", number);
	}*/

	/*NTH
	int number;
	int pos;
	int i = 0;
	int nth;

	printf("Please insert a number: ");
	scanf_s("%d", &number);
	printf("Now, insert a position: ");
	scanf_s("%d", &pos);

	nth = ((number >> pos) & 1);

	printf("%d in %d is %d\n", number, pos, nth);*/

	/*NTH(Clear)
	int number;
	int FinalNumber;
	int pos = 0;

	printf("Please insert a number: ");
	scanf_s("%d", &number);
	printf("Insert a bit to eliminate: ");
	scanf_s("%d", &pos);

	FinalNumber = (number & (~ (1 << pos));

	printf("%d\n", FinalNumber);*/

	/*Toggle NTH
	int number, pos, finalNum;

	printf("Please insert a number: ");
	scanf_s("%d", &number);
	printf("Insert a bit to toggle: ");
	scanf_s("%d", &pos);

	finalNum = (number ^ (1 << pos));

	printf("The number now is %d\n", finalNum);*/

	/*Set lowest bit
	int number, pos;

	printf("Please insert a number: ");
	scanf_s("%d", &number);

	for (int i = 0; i <= 256; i++) {

		if ((number >> i) & 1 == 1) {

			printf("Highest bit is at %d\n", i);
			break;
		}
	}*/

	/*Thrilling zeros
	int number, count = 0;

	printf("Please insert a number: ");
	scanf_s("%d", &number);

	for (int i = 0; i <= 256; i++) {

		if ((number >> i) & 1) {

			break;
		}

		count++;
	}

	printf("Number of zeros: %d\n", count);*/

	/*Leading Zeros
	int count = -1;
	int i, number = 0;
	printf("Please insert a number: ");
	scanf_s("%d", &number);

	for (i = 0; i <= 256; i++) {

		if ((number << i) & 256) {

			break;
		}

		count++;
	}

	printf("Number of leading zeros are %d\n", count);
	*/

	/*Flip
	int i, number = 0;
	int newNumber = 0;
	printf("Please insert a number: ");
	scanf_s("%d", &number);

	newNumber = ~number;

	printf("%d\n", newNumber);*/

	

	system("\npause");
	return 0;
}