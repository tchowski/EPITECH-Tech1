#ifndef EQUIPED_ITEMS_H_
#define EQUIPED_ITEMS_H_

#include "item.h"
#include "inventory.h"

typedef struct
{
	item *weapon;
	item *helmet;
	item *chest;
	item *legs;
	item *ring_1;
	item *ring_2;
} s_equiped_items;

s_equiped_items equiped_init();

void unequip_item(s_equiped_items *equiped_items, int place, s_inventory *inventory);

#endif