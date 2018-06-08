/*
** EPITECH PROJECT, 2018
** textsprite.c
** File description:
** textesprite
*/

#include "../my_screen.h"

void my_sprite(void)
{
	sky = sfTexture_createFromFile("Sprite/Sky.png", NULL);
        vege = sfTexture_createFromFile("Sprite/Vege.png", NULL);
        ground = sfTexture_createFromFile("Sprite/Ground.png", NULL);
        mario = sfTexture_createFromFile("Sprite/marioo.png", NULL);
        mario_p = sfSprite_create();
        ground_p = sfSprite_create();
        sky_p = sfSprite_create();
        vege_p = sfSprite_create();
        sfSprite_setTexture(sky_p, sky, sfTrue);
        sfSprite_setTexture(vege_p, vege, sfTrue);
        sfSprite_setTexture(ground_p, ground, sfTrue);
        sfSprite_setTexture(mario_p, mario, sfTrue);
}
