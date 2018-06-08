#ifndef INVENTORY_LIST_H_
#define INVENTORY_LIST_H_

#include <SFML/Graphics.h>
#include "inventory.h"
#include "button.h"
#include "update_info.h"

typedef struct
{
	int list_pos;
	s_inventory *inventory;
	sfText **lines;
	sfFont *font;
	sfFloatRect pos;
	sfRectangleShape *background;
	s_button *button_up;
	s_button *button_down;
} inventory_list;

inventory_list *inventory_list_create(s_inventory *inventory, sfFloatRect pos);

void inventory_list_destroy(inventory_list *inv_list);

void inventory_list_str_update(inventory_list *inv_list);

void inventory_list_update(inventory_list *inv_list, s_update_info *update_info);

void inventory_list_draw(sfRenderWindow *window, inventory_list *inv_list);

void inventory_list_button_function(void *this, void *struct_ptr, void *possible_value);

item *inventory_list_get_item(inventory_list *inv_list, s_update_info *update_info);

#endif