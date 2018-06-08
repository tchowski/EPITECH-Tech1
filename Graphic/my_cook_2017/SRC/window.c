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
	f.y = 0.12;
                if (sfTime_asSeconds(sfClock_getElapsedTime(clock_cook)) > f.y) {
                                if (rect_cook.left == 120)
                                        rect_cook.left = 0;
                                else
                                        rect_cook.left += 40;
                                sfSprite_setTextureRect(cook_p, rect_cook);
                                sfClock_restart(clock_cook);
                }
}
