/*
** EPITECH PROJECT, 2018
** textsprite.c
** File description:
** textesprite
*/

#include "my.h"

void my_sprite(void)
{
//	sprite_texture_lib();
	back = sfTexture_createFromFile("Sprite/back_t.png", NULL);
	pain_haut = sfTexture_createFromFile("Sprite/pain_haut.png", NULL);
	pain_bas = sfTexture_createFromFile("Sprite/pain_bas.png", NULL);
	fromage = sfTexture_createFromFile("Sprite/fromage.png", NULL);
	salade = sfTexture_createFromFile("Sprite/salade.png", NULL);
	steak = sfTexture_createFromFile("Sprite/steak.png", NULL);
	tomate = sfTexture_createFromFile("Sprite/tomate.png", NULL);

        back_p = sfSprite_create();
        pain_haut_p = sfSprite_create();
        pain_bas_p = sfSprite_create();
        fromage_p = sfSprite_create();
        tomate_p = sfSprite_create();
        salade_p = sfSprite_create();
        steak_p = sfSprite_create();

        sfSprite_setTexture(back_p, back, sfTrue);
        sfSprite_setTexture(pain_haut_p, pain_haut , sfTrue);
        sfSprite_setTexture(pain_bas_p, pain_bas , sfTrue);
        sfSprite_setTexture(fromage_p, fromage , sfTrue);
        sfSprite_setTexture(salade_p, salade , sfTrue);
        sfSprite_setTexture(steak_p, steak , sfTrue);
        sfSprite_setTexture(tomate_p, tomate , sfTrue);
}

/*void	sprite_texture_lib(void)
{
	sfTexture	*back;
	sfTexture	*pain_haut;
	sfTexture	*pain_bas;
	sfTexture	*fromage;
	sfTexture	*steak;
	sfTexture	*tomate;
	sfSprite	*back_p;
	sfSprite	*pain_haut_p;
	sfSprite	*pain_bas_p;
	sfSprite	*salade_p;
	sfSprite	*steak_p;
}*/
