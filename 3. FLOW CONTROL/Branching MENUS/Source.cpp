#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int option;	
	printf("Type 0 to start playing\nType 1 to load a previous game you've played\nType 2 to save your game\nType 3 to open the settings menu\nType 4 to exit the game\n");
	scanf_s("%d", &option, sizeof(option));

	switch (option)
	{
	case (0):
		printf("ENJOY!!\n");
		break;

	case (1):
		printf("PRESS ENTER TO PLAY\nLAST SAVE: 25/9/2018\n");
			break;

	case (2):
		printf("PRESS ENTER TO SAVE YOUR PREVIOUS GAME\n");
		break;

	case(3):
		printf("SETTINGS MENU");
		break;

	case(4):
		printf("YOU EXIT THE GAME");
		break;

	default:

		if (option > 4)
		{
			printf("SORRY ERROR 404 WAS FOUNDED");
		}
	}
	system("pause");
	return 0;
}