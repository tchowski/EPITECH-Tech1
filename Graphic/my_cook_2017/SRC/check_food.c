/*
** EPITECH PROJECT, 2018
** check_food.c
** File description:
** check_food
*/

#include "../my_screen.h"
#include <stdio.h>
#include <stdlib.h>

void check_food()
{
	static int score = 0;
	int command = rand() % 2;

	if (command == 1) {
		score = check_hamburger(score);
	}
	if (command == 2) {
		score = check_cheesburger(score);
	}
}

int check_hamburger(int score)
{
	spawn.x = 800;
	spawn.y = 700;

	if (sfSprite_getPosition(pain_bas_p).y == spawn.y
	&& sfSprite_getPosition(salade_p).y == spawn.y - 20
	&& sfSprite_getPosition(tomate_p).y == spawn.y - 40
	&& sfSprite_getPosition(ketchup_p).y == spawn.y - 60
	&& sfSprite_getPosition(steak_p).y == spawn.y - 80
	&& sfSprite_getPosition(pain_haut_p).y == spawn.y - 100) {
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
	&& sfSprite_getPosition(ketchup_p).y == spawn.y - 40
	&& sfSprite_getPosition(steak_p).y == spawn.y - 60
	&& sfSprite_getPosition(fromage_p).y == spawn.y - 80
	&& sfSprite_getPosition(pain_haut_p).y == spawn.y - 100) {
		score++;
	}
	return (score);
}
