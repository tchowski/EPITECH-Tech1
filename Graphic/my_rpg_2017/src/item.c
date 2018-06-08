#include <stdlib.h>
#include "item.h"
#include "sfml_functions.h"
#include "defines.h"

item *item_create(int id)
{
	item *new = malloc(sizeof(item));
	
	new->id = id;
	if (id < N_ITEMS) {
		new->name = item_list[id].name;
		new->type = item_list[id].type;
		new->value = item_list[id].value;
	}
	else {
		new->name = str_to_unicode("- unknown item -");
		new->type = 0;
		new->value = 0;
	}
	return new;
}

void item_destroy(item *this)
{
	free(this);
}