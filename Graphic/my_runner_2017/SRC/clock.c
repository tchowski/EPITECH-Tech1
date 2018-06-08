/*
** EPITECH PROJECT, 2018
** clock.c
** File description:
** clock
*/

#include "../my_screen.h"

void my_clock(void)
{
	sprite_sky = sfClock_create();
	sprite_vege = sfClock_create();
	sprite_ground = sfClock_create();
	sprite_mario = sfClock_create();
}
