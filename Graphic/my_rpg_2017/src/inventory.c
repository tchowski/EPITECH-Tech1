#include <stdlib.h>
#include "inventory.h"

s_inventory *inventory_init(int size)
{
	s_inventory *new = malloc(sizeof(s_inventory));

	new->size = size;
	new->items = malloc(sizeof(item*) * new->size);
	for (int i = 0; i < new->size; i++) {
		new->items[i] = NULL;
	}
	for (int i = 0; i < N_ITEMS; i++) {
		inventory_add_item(new, item_create(i));
	}
	return new;
}

s_inventory *inventory_destroy(s_inventory *inventory)
{
	for (int i = 0; i < inventory->size; i++) {
		if (inventory->items[i] != NULL) {
			free(inventory->items[i]);
		}
	}
	free(inventory);
}

item *inventory_get_item(s_inventory *inventory, int n)
{
	if (n >= 0 && n < inventory->size) {
		return inventory->items[n];
	}
	else {
		return NULL;
	}
}

sfBool inventory_add_item(s_inventory *inventory, item *item)
{
	int i = 0;
	while (inventory_get_item(inventory, i) && i < inventory->size) {
		i++;
	}
	inventory->items[i] = item;
}

s_inventory *inventory_give_item(s_inventory *inventory, s_inventory *receiver, item *it)
{
	inventory_remove_item(inventory, it, sfFalse);
	inventory_add_item(receiver, it);
}