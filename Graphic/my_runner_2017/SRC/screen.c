/*
** EPITECH PROJECT, 2017
** screen.c
** File description:
** screen
*/

#include "../my_screen.h"
#include <stdlib.h>
#include <stdio.h>

void print_main(void)
{
	stat();
	window = sfRenderWindow_create(video_mode, "My_runner", sfClose, NULL);
	my_sprite();
	sound_t();
	my_clock();
	my_repeat();
	sfSprite_setPosition(mario_p, pos);

	while (sfRenderWindow_isOpen(window)) {
		my_render();
		while (sfRenderWindow_pollEvent(window, &event)) {
			switch (event.type) {
			case sfEvtClosed :
			       sfRenderWindow_close(window);
			       break;
			}
		}
		my_window();
	}
	destroy();
}
