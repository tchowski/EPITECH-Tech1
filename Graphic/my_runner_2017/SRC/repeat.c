/*
** EPITECH PROJECT, 2018
** repeat.c
** File description:
** repeat
*/

#include "../my_screen.h"

void my_repeat(void)
{
	sfTexture_setRepeated(sky, sfTrue);
	sfTexture_setRepeated(vege, sfTrue);
	sfTexture_setRepeated(ground, sfTrue);
}
