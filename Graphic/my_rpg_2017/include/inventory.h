#ifndef INVENTORY_H_
#define INVENTORY_H_

#include "item.h"

typedef struct
{
	int size;
	item **items;
} s_inventory;

s_inventory *inventory_init(int size);

s_inventory *inventory_destroy(s_inventory *inventory);

s_inventory *inventory_give_item(s_inventory *inventory, s_inventory *receiver, item *it);

item *inventory_get_item(s_inventory *inventory, int n);

sfBool inventory_add_item(s_inventory *inventory, item *item);

sfBool inventory_remove_item(s_inventory *inventory, item *item, sfBool destroy);

#endif