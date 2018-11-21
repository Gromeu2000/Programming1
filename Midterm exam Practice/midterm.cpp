/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#include "SimpleUnitTest.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned char byte;

void testExercises();


/* -- EXERCISE 1 -- */
void swapArrays(int array1[], int array2[])
{
	// TO DO: Insert the code of Ex 1 here
	
	for (int i = 0; i < 5; i++) {

		int store = array1[i];
		array1[i] = array2[i];
		array2[i] = store;
	}

	
	
}

/* -- EXERCISE 2 -- */
int sumMultiples(int minimum, int maximum)
{
	int sum = 0;
	// TO DO: Insert the code of Ex 2 here
	for (int i = minimum; i <= maximum; i++) {

		if (i % 5 == 0 && i % 2 != 0 && i % 3 != 0) {

			sum += i;
		}
	}
		return sum;
}


/* -- EXERCISE 3 -- */
int isPalindrome(char str[])
{
	int count = 0;
	// TO DO: Insert the code of Ex 3 here
	while (str[count] != '\0') {

		count++;
	}

	int i = 0;
	int j = 0;

	for (int i = 0; i <= count; i++) {

		if (str[i] != str[count - i - 1]) {

			return 0;

		}

		else {
			
		}

	}

	return 1;
}


/* -- EXERCISE 4 -- */
int getNumEmptyPotions(byte potions)
{
	int countzero = 0;
	// TO DO: Insert the code of Ex 4 here
	for (int i = 0; i < 8; i++) {

		if ((potions & 1 << i) == 0) {

			countzero++;
		}
	}
	return countzero;
}



int main()
{
	/* -- Auto evaluation -- */
	/* Uncomment the line below if you want to evaluate your code */
	testExercises();

	system("pause");
	return 0;
}










/* ----------------------------------------------------------------------- */
/*                     DO NOT TOUCH THE CODE BELOW                         */
/* ----------------------------------------------------------------------- */

void testExercises()
{
	int array1[] = { 1, 2, 3, 4, 5 };
	int array2[] = { 6, 7, 8, 9, 10 };

	swapArrays(array1, array2);

	TEST("Test Ex 1: swapArrays", array1[0] == 6 && array1[1] == 7 && array1[2] == 8 && array1[3]==9 && array1[4]==10 &&
								  array2[0] == 1 && array2[1] == 2 && array2[2] == 3 && array2[3] == 4 && array2[4] == 5);

	TEST("Test Ex 2: sumMultiples", sumMultiples(10, 60) == 115 && 
									sumMultiples(0,10) == 5 && 
									sumMultiples(74, 76) == 0 && 
									sumMultiples(-10, 10) == 0 && 
									sumMultiples(0, 5) == 5 &&
									sumMultiples(5, 95) == 365 &&
									sumMultiples(-95, -5) == -365);

	TEST("Test Ex 3: isPalindrome", isPalindrome("a") == 1 &&
									isPalindrome("ab") == 0 && 
									isPalindrome("abba") == 1 && 
									isPalindrome("anna") == 1 && 
									isPalindrome("hello") == 0 &&
									isPalindrome("world") == 0 && 
									isPalindrome("zipiz") == 1 && 
									isPalindrome("zippiz") == 1 && 
									isPalindrome("zippz") == 0);
	
	TEST("Test Ex 4: getNumEmptyPotions", getNumEmptyPotions(0) == 8 &&
										  getNumEmptyPotions(8) == 7 &&
										  getNumEmptyPotions(7) == 5 &&
										  getNumEmptyPotions(255) == 0 && 
										  getNumEmptyPotions(166) == 4 && 
										  getNumEmptyPotions(93) == 3);
	PRINT_TEST_REPORT();
}