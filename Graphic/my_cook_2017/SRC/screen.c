/*
** EPITECH PROJECT, 2017
** screen.c
** File description:
** screen
*/

#include "../my_screen.h"
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>
#include <stddef.h>

void print_main(void)
{
	stat();
	window = sfRenderWindow_create(video_mode, "My_cook", sfClose, NULL);
	my_sprite();
	sound_t();
	my_set_pos();
	my_clock();
	sfRectangleShape *rect;
	sfRectangleShape *rect_2;
    	sfVector2f rect_p2;
    	sfVector2f rect_p;
    	sfVector2f size_2;
    	sfVector2f size;
    	sfTexture *btn;
    	sfTexture *btn_2;
    	sfIntRect size_btn;
    	sfIntRect size_btn_2;
    	size.x = 400;
    	size.y = 100;
    	rect_p.x = 750;
    	rect_p.y = 300;
    	size_2.x = 400;
    	size_2.y = 100;
    	rect_p2.x = 750;
    	rect_p2.y = 600;
    	btn = sfTexture_createFromFile("Sprite/ab.jpg", NULL);
    	btn_2 = sfTexture_createFromFile("Sprite/az.jpg", NULL);
    	rect_2 = sfRectangleShape_create();
    	rect = sfRectangleShape_create();
    	sfRectangleShape_setTexture(rect, btn, sfTrue);
    	sfRectangleShape_setTexture(rect_2, btn_2, sfTrue);
    	sfRectangleShape_setPosition(rect, rect_p);
    	sfRectangleShape_setPosition(rect_2, rect_p2);
    	sfRectangleShape_setSize(rect, size_2);
    	sfRectangleShape_setSize(rect_2, size_2);

	while (sfRenderWindow_isOpen(window)) {
		sfRenderWindow_drawRectangleShape(window, rect, NULL);
		sfRenderWindow_drawRectangleShape(window, rect_2, NULL);
		sfRenderWindow_display(window);
		while (sfRenderWindow_pollEvent(window, &event)) {
			switch (event.type) {
			case sfEvtClosed :
			       sfRenderWindow_close(window);
			       break;
			}
		}
	if (sfMouse_isButtonPressed(sfMouseLeft)) {
                sfVector2i local = sfMouse_getPositionRenderWindow(window);
                size_btn = sfRectangleShape_getTextureRect(rect);
                size_btn_2 = sfRectangleShape_getTextureRect(rect_2);
                sfVector2f pos = sfRectangleShape_getPosition(rect);
                sfVector2f pos_2 = sfRectangleShape_getPosition(rect_2);
                	if (local.x > pos_2.x && local.x < pos_2.x + size_btn_2.width &&
			local.y < pos_2.y + size_btn_2.width && local.y > pos_2.y)
				break;
                	if (local.x > pos.x && local.x < pos.x + size_btn.width &&
			local.y < pos.y + size_btn.width && local.y > pos.y) {
				while (sfRenderWindow_isOpen(window)) {
					while (sfRenderWindow_pollEvent(window, &event)) {
						prep_food();
						switch (event.type) {
						case sfEvtClosed :
			       			sfRenderWindow_close(window);
			       			break;
						}
					}
					my_window();
                        		my_render();
					sfRenderWindow_display(window);
				}
			}
		}
	}
	destroy();
}
