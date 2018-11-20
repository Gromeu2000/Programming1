#include <stdio.h>
#include <stdlib.h>
#define PI 3,14159265358979323846

int main()
{
	float n;
	printf("Insert a radius: ");
	scanf_s("%f", &n, sizeof(n));

	printf("Your final area is %f\n", PI *(n *n));

	system("pause");
	return 0;
}