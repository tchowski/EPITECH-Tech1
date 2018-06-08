#ifndef EQUIPED_ITEMS_DISPLAY_H_
#define EQUIPED_ITEMS_DISPLAY_H_

#include "equiped_items.h"
#include "update_info.h"

typedef struct
{
	s_equiped_items *equiped_items;
	sfFont *font;
	sfFloatRect pos;
	sfRectangleShape *background;
	sfText **titles;
	sfText **items;
} equiped_items_display;

equiped_items_display *equiped_items_display_create(s_equiped_items *equiped_items, sfFloatRect pos);

void equiped_items_str_update(equiped_items_display *equiped_items);

void equiped_items_unequip(equiped_items_display *equiped_items, s_inventory *inventory, s_update_info *update_info);

void equiped_items_draw(sfRenderWindow *window, equiped_items_display *equiped_items);

#endif