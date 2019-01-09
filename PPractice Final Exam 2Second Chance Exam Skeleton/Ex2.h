/* ----------------------------------------------------------------------- */
/*                         Gerard Romeu Vidal                              */
/* ----------------------------------------------------------------------- */

#ifndef EX2_H
#define EX2_H



// TO DO: Declare the data type Weapon here
struct weapon {

	unsigned short id;
	unsigned short ammo;
	unsigned short damage;
};



#endif

int rowMaxAvgDamage(struct Weapon armoryCloset[4][3])
{
	// TO DO: Insert the code of the function here
	int row = 0;
	float maxAvgDmg = 0.0f;

	for (int i = 0; i < 4; i++) {

		int DamageRow = 0;

		for (int j = 0; j < 3; j++) {

			DamageRow += armoryCloset[i][j].damage;
		}

		float AvgDmgRow = DamageRow / 3.0f;

		if (i == 0 || AvgDmgRow > maxAvgDmg) {

			maxAvgDmg = AvgDmgRow;
			row = i;
		}
	}

	return row;
}

int colMinAvgAmmo(struct Weapon armoryCloset[4][3])
{
	// TO DO: Insert the code of the function here
	int column;
	float minAvgAmm = 0.0f;

	for (int j = 0; j < 3; j++) {

		int ammoCol = 0;

		for (int i = 0; i < 4; i++) {

			ammoCol += armoryCloset[i][j].ammo;
		}

		float avgAmmoCol = ammoCol / 4.0f;

		if (j == 0 || avgAmmoCol < minAvgAmm) {

			column = j;
			minAvgAmm = avgAmmoCol;
		}
	}

	return column;
}
