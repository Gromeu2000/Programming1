#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void ex5() {

	struct Enemy {

		char name[16];
		float x, y;
		int health;
	};

	Enemy enemies[3];

	FILE *file = fopen("file_ex4.txt", "r");

	if (file != nullptr) {

		for (int i = 0; i < 3; i++) {

			fscanf(file, "%s%f%f%d", enemies[i].name, &enemies[i].x, &enemies[i].y, &enemies[i].health);
			printf("%s %.2f %.2f %d\n", enemies[i].name, enemies[i].x, enemies[i].y, enemies[i].health);
		}

		fclose(file);
		
	}
}