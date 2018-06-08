/*
** EPITECH PROJECT, 2018
** window.c
** File description:
** window
*/

#include "../my_screen.h"
#include <stdlib.h>

void my_window(void)
{
	f_t f;
	f.y = 0.12; f.j = 0.08; f.i = 0.04; f.k = 0.008;
                if (sfTime_asSeconds(sfClock_getElapsedTime(sprite_mario)) > f.y) {
                                if (rect_mario.left == 384)
                                        rect_mario.left = 0;
                                else
                                        rect_mario.left += 128;
                                sfSprite_setTextureRect(mario_p, rect_mario);
                                sfClock_restart(sprite_mario);
                }
                if (sfTime_asSeconds(sfClock_getElapsedTime(sprite_sky)) > f.j) {
                                rect_sky.left += 1;
                        sfSprite_setTextureRect(sky_p, rect_sky);
                        sfClock_restart(sprite_sky);
                       }
                if (sfTime_asSeconds(sfClock_getElapsedTime(sprite_vege)) > f.i) {
                        rect_vege.left += 2;
                        sfSprite_setTextureRect(vege_p, rect_vege);
                        sfClock_restart(sprite_vege);
                }
                if (sfTime_asSeconds(sfClock_getElapsedTime(sprite_ground)) > f.k) {
                        rect_ground.left += 2;
                        sfSprite_setTextureRect(ground_p, rect_ground);
                        sfClock_restart(sprite_ground);
                }
}
