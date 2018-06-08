/*
** EPITECH PROJECT, 2018
** Render.c
** File description:
** Render
*/

#include "../my_screen.h"

void my_render(void)
{
	sfRenderWindow_drawSprite(window, sky_p, NULL);
	sfRenderWindow_drawSprite(window, vege_p, NULL);
	sfRenderWindow_drawSprite(window, ground_p, NULL);
	sfRenderWindow_drawSprite(window, mario_p, NULL);
	sfRenderWindow_display(window);
}
