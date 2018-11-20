#include <stdio.h>
#include <stdlib.h>

/*truct Vec2 {

		float x;
		float y;
	};

int areVec2Equals(Vec2 vec1, Vec2 vec2) {

	if (vec1.x == vec2.x && vec1.y == vec2.y) {

		return 1;
	}

	else {

		return 0;
	}
}

int  main() {

	Vec2 variable1 = { 1, 3 };
	Vec2 variable2 = { 1, 3 };

	areVec2Equals(variable1, variable2);


	if (areVec2Equals(variable1, variable2) == 1) {

		printf("The vectors are equal\n");
	}
	else {

		printf("The vectors aren't equal\n");
	}
	system("pause");
	return 0;
}*/

struct PlayerInfo {

	char Name[16];
	int Birth;
	int Score;
};

int arePlayerInfoEquals(PlayerInfo variable1, PlayerInfo variable2) {

	int i = 0;

	while (variable1.Name[i] != '\0' || variable2.Name[i] != '\0') {

		if (variable1.Name[i] != variable2.Name[i]) {

			return 0;
		}

		i++;
	}

	if (variable1.Score == variable2.Score && variable1.Birth == variable2.Birth) {

		return 1;
	}

	else {

		return 0;
	}
}

int main() {


	PlayerInfo Player1;
	PlayerInfo Player2;

	
	printf("Please insert your name: ");
	scanf_s("%s", Player1.Name, sizeof(Player1.Name));

	printf("Please insert your birth year: ");
	scanf_s("%d", &Player1.Birth);

	printf("Please insert yor highscore: ");
	scanf_s("%d", &Player1.Birth);

	printf("Please insert your name: ");
	scanf_s("%s", Player2.Name, sizeof(Player2.Name));

	printf("Please insert your birth year: ");
	scanf_s("%d", &Player2.Birth);

	printf("Please insert yor highscore: ");
	scanf_s("%d", &Player2.Birth);
	

	if (arePlayerInfoEquals(Player1, Player2) == 1) {

		printf("The players are the same\n");
	}

	else {

		printf("The players are different\n");
	}

	system("pause");
	return 0;
}
