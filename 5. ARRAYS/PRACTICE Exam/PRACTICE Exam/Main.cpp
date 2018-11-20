#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"
#include "Ex2.h"
#include "Ex3.h"
#include "Ex4.h"
#include "Ex5.h"
#include "Ex6.h"
#include "Ex7.h"
#include "Ex8.h"
#include "Ex9.h"
#include "Ex10.h"
#include "Ex11.h"
#include "Ex12.h"
#include "Ex13.h"

int array1[5];

int main()
{

	int options;

	printf("1. Output Array");
	printf("\n2. Reverse Array");
	printf("\n3. Sum of Array");
	printf("\n4. Negative Values");
	printf("\n5. Max and Min");
	printf("\n6. Second Largest");
	printf("\n7. Number of Negatives");
	printf("\n8. Even or Odd");
	printf("\n9. Input number in Array");
	printf("\n10. Eliminate Position");
	printf("\n11. Frequency");
	printf("\n12. Unique");
	printf("\n13. Sum of Marixes");
	printf("\nPlease insert the number of the exercise you want to try: ");
	scanf_s("%d", &options);

	switch (options) {

	case 1: exercise1(array1); break;
	case 2: exercise2(array1); break;
	case 3: exercise3(array1); break;
	case 4: exercise4(array1); break;
	case 5: exercise5(array1); break;
	case 6: exercise6(array1); break;
	case 7: exercise7(array1); break;
	case 8: exercise8(array1); break;
	case 9: exercise9(array1); break;
	case 10: exercise10(array1); break;
	case 11: exercise11(array1); break;
	case 12: exercise12(array1); break;
	case 13: exercise13(); break;
	}

	system("\npause");
	return 0;
}