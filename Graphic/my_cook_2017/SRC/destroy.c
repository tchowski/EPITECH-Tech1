/*
** EPITECH PROJECT, 2018
** destroy.c
** File description:
** destroy
*/

#include "../my_screen.h"

void destroy(void)
{
	sfRenderWindow_destroy(window);
        sfTexture_destroy(back);
        sfTexture_destroy(pain_haut);
        sfTexture_destroy(fromage);
        sfTexture_destroy(salade);
        sfTexture_destroy(steak);
        sfTexture_destroy(tomate);
        sfSprite_destroy(back_p);
        sfSprite_destroy(pain_haut_p);
        sfSprite_destroy(pain_bas_p);
        sfSprite_destroy(fromage_p);
        sfSprite_destroy(tomate_p);
        sfSprite_destroy(salade_p);
        sfSprite_destroy(steak_p);
        sfSound_destroy(sound);
        sfSoundBuffer_destroy(soundbuffer);
        //sfClock_destroy(back_clock);
}

