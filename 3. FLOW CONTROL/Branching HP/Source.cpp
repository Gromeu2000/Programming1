#include <stdio.h>
#include <stdlib.h>

int main()
{
	int health;
	

	printf("What's your actual HP mate? ");
	scanf_s("%d", &health, sizeof(health));

	if (health == 0)
	{
		printf("GAME OVER!!!!!!!!!\n TAP ENTER TO GO BACK TO THE MENU\n");
	}

	else if (health < 20)
	{
		printf("YOUR LEVEL OF HP IS LOW. QUICK USE A HEALTH POTION!\n");
	}

	else if (health < 40)
	{
		printf("YOUR LEVEL OF HP IS LOW-MEDIUM. YOU'RE OKAY... ANYWAY WATCH OUT!!\n");
	}

	else if (health < 60)
	{
		printf("YOUR LEVEL OF HP IS MEDIUM. YOU'RE FINE TO GO CAREFULLY\n");
	}

	else if (health < 80)
	{
		printf("YOUR LEVEL OF HP IS MEDIUM-HIGH. YOU CAN FIGHT!\n");
	}

	else if (health < 100)
	{
		printf("YOUR LEVEL OF HP IS HIGH: PROCEED TO FINAL BOSS!\n");
	}

	else if (health > 100)
	{
		printf("YO' ARE YOU HACKING BRO?!\n");
	}
	system("pause");
	return 0;

}