#include "my.h"
#include <stdio.h>
#include <stdlib.h>

void check_food()
{
	static int score = 0;
	int command = rand() % 2;

	if (command == 1) {
		printf("rand = %d\n", command);
		score = check_hamburger(score);
	}
	if (command == 2) {
		printf("rand = %d\n", command);
		score = check_cheesburger(score);
	}
	printf("SCORE = %d\n", score);
}

int check_hamburger(int score)
{
	spawn.x = 800;
	spawn.y = 700;

	if (sfSprite_getPosition(pain_bas_p).y == spawn.y
	&& sfSprite_getPosition(salade_p).y == spawn.y - 20
	&& sfSprite_getPosition(tomate_p).y == spawn.y - 40
	&& sfSprite_getPosition(steak_p).y == spawn.y - 80
	&& sfSprite_getPosition(pain_haut_p).y == spawn.y - 100) {
		printf("HAMBURGER\n");
		score++;
	}
	return (score);
}

int check_cheesburger(int score)
{
	spawn.x = 800;
	spawn.y = 700;

	if (sfSprite_getPosition(pain_bas_p).y == spawn.y
	&& sfSprite_getPosition(salade_p).y == spawn.y - 20
	&& sfSprite_getPosition(steak_p).y == spawn.y - 60
	&& sfSprite_getPosition(fromage_p).y == spawn.y - 80
	&& sfSprite_getPosition(pain_haut_p).y == spawn.y - 100) {
		printf("CHEESEBURGER\n");
		score++;
	}
	return (score);
}
