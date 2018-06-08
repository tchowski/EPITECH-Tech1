#include <stdlib.h>
#include "sfml_functions.h"
#include "menu.h"
#include "level.h"

void load_inventory(s_menu *menu, void *level_ptr)
{
	menu->buttons.n = 0;
	menu->buttons.element = malloc(sizeof(s_button*) * menu->buttons.n);
	menu->inv_list.n = 1;
	menu->inv_list.element = malloc(sizeof(inventory_list*) * menu->inv_list.n);
	menu->inv_list.element[0] = inventory_list_create(((s_level*)level_ptr)->player->inventory, sfFloatRect_create(1010, 200, 900, 610));
	menu->equiped_items.n = 1;
	menu->equiped_items.element = malloc(sizeof(inventory_list*) * menu->inv_list.n);
	menu->equiped_items.element[0] = equiped_items_display_create(&(((s_level*)level_ptr)->player->equiped_items), sfFloatRect_create(10, 200, 900, 300));
}

void load_pause(s_menu *menu, void *level_ptr)
{
	menu->buttons.n = 0;
	menu->buttons.element = malloc(sizeof(s_button*) * menu->buttons.n);
	menu->inv_list.n = 0;
	menu->inv_list.element = malloc(sizeof(inventory_list*) * menu->inv_list.n);
	menu->equiped_items.n = 0;
	menu->equiped_items.element = malloc(sizeof(inventory_list*) * menu->inv_list.n);
}