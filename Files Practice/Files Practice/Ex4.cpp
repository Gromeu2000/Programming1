#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex4() {

		struct Enemy {

			char name[16];
			float x, y;
			int health;
		};

		Enemy enemies[3] = {

			{"Harry", 3.5, 0.4, 10},
			{"Wedge", 1.0, 1.0, 5},
			{"Jesse", 10.0, 4.0, 8}
		};

	FILE *file = fopen("file_ex4.txt", "w");

	if (file != nullptr) {

		for (int i = 0; i < 3; i++) {

			fprintf(file, "%s %.2f %.2f %d\n", enemies[i].name, enemies[i].x, enemies[i].y, enemies[i].health);
		}

		fclose(file);
	}





	


}