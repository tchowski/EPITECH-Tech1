/*
** EPITECH PROJECT, 2018
** Render.c
** File description:
** Render
*/

#include "../my_screen.h"

void my_render(void)
{
	sfRenderWindow_drawSprite(window, back_p, NULL);
	sfRenderWindow_drawSprite(window, annanas_p, NULL);
	sfRenderWindow_drawSprite(window, bacon_p, NULL);
	sfRenderWindow_drawSprite(window, avocat_p, NULL);
	sfRenderWindow_drawSprite(window, pain_haut_p, NULL);
	sfRenderWindow_drawSprite(window, pain_bas_p, NULL);
	sfRenderWindow_drawSprite(window, fromage_p, NULL);
	sfRenderWindow_drawSprite(window, poulet_p, NULL);
	sfRenderWindow_drawSprite(window, oeuf_p, NULL);
	sfRenderWindow_drawSprite(window, ketchup_p, NULL);
	sfRenderWindow_drawSprite(window, menthe_p, NULL);
	sfRenderWindow_drawSprite(window, champignon_p, NULL);
	sfRenderWindow_drawSprite(window, moutarde_p, NULL);
	sfRenderWindow_drawSprite(window, olive_b_p, NULL);
	sfRenderWindow_drawSprite(window, ognion_p, NULL);
	sfRenderWindow_drawSprite(window, ognion_b_p, NULL);
	sfRenderWindow_drawSprite(window, tomate_p, NULL);
	sfRenderWindow_drawSprite(window, salade_p, NULL);
	sfRenderWindow_drawSprite(window, salami_p, NULL);
	sfRenderWindow_drawSprite(window, saumon_p, NULL);
	sfRenderWindow_drawSprite(window, steak_p, NULL);
	sfRenderWindow_drawSprite(window, cook_p, NULL);
	sfRenderWindow_display(window);
}
