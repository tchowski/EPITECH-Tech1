#include "inventory.h"

static void remove_it(s_inventory *inventory, int i, sfBool destroy)
{
	if (destroy) {
		item_destroy(inventory->items[i]);
	}
	for (i; i < inventory->size - 1; i++) {
		inventory->items[i] = inventory->items[i + 1];
	}
	inventory->items[i] = NULL;
}

sfBool inventory_remove_item(s_inventory *inventory, item *item, sfBool destroy)
{
	for (int i = 0; i < inventory->size; i++) {
		if (inventory->items[i] == item) {
			remove_it(inventory, i, destroy);
			return sfTrue;
		}
	}
	return sfFalse;
}