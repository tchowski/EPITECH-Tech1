#include <stdlib.h>
#include "sfml_functions.h"
#include "menu.h"
#include "level.h"

void equip_ring(s_menu *menu, item *it)
{
	if (((equiped_items_display*)menu->equiped_items.element[0])->equiped_items->ring_1 == NULL) {
		((equiped_items_display*)menu->equiped_items.element[0])->equiped_items->ring_1 = it;
	}
	else {
		((equiped_items_display*)menu->equiped_items.element[0])->equiped_items->ring_2 = it;
	}
}

void equip_item(s_menu *menu, item *it)
{
	if (it == NULL) {
		return;
	}
	inventory_remove_item(((inventory_list*)menu->inv_list.element[0])->inventory, it, sfFalse);
	switch (it->type) {
		case 1:
		((equiped_items_display*)menu->equiped_items.element[0])->equiped_items->weapon = it;
		break;
		case 2:
		((equiped_items_display*)menu->equiped_items.element[0])->equiped_items->helmet = it;
		break;
		case 3:
		((equiped_items_display*)menu->equiped_items.element[0])->equiped_items->chest = it;
		break;
		case 4:
		((equiped_items_display*)menu->equiped_items.element[0])->equiped_items->legs = it;
		break;
		case 5:
		equip_ring(menu, it);
		break;
	}
}

void update_inventory(s_menu *menu, s_update_info *update_info)
{
	for (int i = 0; i < menu->inv_list.n; i++) {
		inventory_list_update(menu->inv_list.element[i], update_info);
		inventory_list_str_update(menu->inv_list.element[i]);
	}
	for (int i = 0; i < menu->equiped_items.n; i++) {
		equiped_items_str_update(menu->equiped_items.element[i]);
	}
	equip_item(menu, inventory_list_get_item(menu->inv_list.element[0], update_info));
	equiped_items_unequip(menu->equiped_items.element[0], ((inventory_list*)menu->inv_list.element[0])->inventory, update_info);
}

void update_pause(s_menu *menu, s_update_info *update_info)
{

}