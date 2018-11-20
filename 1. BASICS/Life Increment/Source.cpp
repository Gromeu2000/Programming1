#include <stdio.h>
#include <stdlib.h>

int main()

{

float hp;

printf("type your actual hp");
scanf_s("%f",&hp, sizeof(hp));

hp = hp * 1.25;
printf("Your final hp is: %0.2f\n", hp);

system("pause");
return 0;
}