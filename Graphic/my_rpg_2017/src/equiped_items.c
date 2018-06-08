#include "equiped_items.h"

s_equiped_items equiped_init()
{
	s_equiped_items equiped_items;

	equiped_items.chest = NULL;
	equiped_items.helmet = NULL;
	equiped_items.legs = NULL;
	equiped_items.ring_1 = NULL;
	equiped_items.ring_2 = NULL;
	equiped_items.weapon = NULL;
	return equiped_items;
}

void unequip_item(s_equiped_items *equiped_items, int place, s_inventory *inventory)
{
	item *it = ((item**)equiped_items)[place];
	((item**)equiped_items)[place] = NULL;
	inventory_add_item(inventory, it);
}