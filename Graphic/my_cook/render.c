/*
** EPITECH PROJECT, 2018
** Render.c
** File description:
** Render
*/

#include "my.h"

void my_render(void)
{
	sfRenderWindow_drawSprite(window, back_p, NULL);
	sfRenderWindow_drawSprite(window, pain_haut_p, NULL);
	sfRenderWindow_drawSprite(window, pain_bas_p, NULL);
	sfRenderWindow_drawSprite(window, fromage_p, NULL);
	sfRenderWindow_drawSprite(window, tomate_p, NULL);
	sfRenderWindow_drawSprite(window, salade_p, NULL);
	sfRenderWindow_drawSprite(window, steak_p, NULL);
	//sfRenderWindow_display(window);
}
