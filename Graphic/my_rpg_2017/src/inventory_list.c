#include <stdlib.h>
#include "inventory_list.h"
#include "sfml_functions.h"
#include "defines.h"

static void init_lines(inventory_list *new, sfFloatRect pos)
{
	new->font = sfFont_createFromFile("./rc/arial.ttf");
	new->lines = malloc(sizeof(sfText*) * INV_LIST_LINES);
	for (int i = 0; i < INV_LIST_LINES; i++) {
		new->lines[i] = sfText_create();
		sfText_setCharacterSize(new->lines[i], 30);
		sfText_setPosition(new->lines[i], sfVector2f_create(
			pos.left + 5, pos.top + 5 + (35 * i)));
		sfText_setFont(new->lines[i], new->font);
	}
}

inventory_list *inventory_list_create(s_inventory *inventory, sfFloatRect pos)
{
	inventory_list *new = malloc(sizeof(inventory_list));

	if (new == NULL) {
		return NULL;
	}
	new->pos = pos;
	new->inventory = inventory;
	new->background = sfRectangleShape_create();
	sfRectangleShape_setSize(new->background,
		sfVector2f_create(pos.width, pos.height));
	sfRectangleShape_setPosition(new->background,
		sfVector2f_create(pos.left, pos.top));
	sfRectangleShape_setFillColor(new->background,
		sfColor_fromRGBA(120, 120, 120, 100));
	init_lines(new, pos);
	new->list_pos = 0;
	new->button_up = s_button_create(sfFloatRect_create(pos.left + pos.width - 150, pos.top + 50, 100, 100), -1, NULL, NULL);
	new->button_down = s_button_create(sfFloatRect_create(pos.left + pos.width - 150, pos.top + 200, 100, 100), 1, NULL, NULL);
	new->button_up->function = &inventory_list_button_function;
	new->button_down->function = &inventory_list_button_function;
	inventory_list_str_update(new);
	return new;
}

void inventory_list_destroy(inventory_list *inv_list)
{
	for (int i = 0; i < INV_LIST_LINES; i++) {
		sfText_destroy(inv_list->lines[i]);
	}
	free(inv_list->lines);
	sfFont_destroy(inv_list->font);
	sfRectangleShape_destroy(inv_list->background);
	free(inv_list);
}

void inventory_list_button_function(void *this, void *struct_ptr, void *possible_value)
{
	inventory_list *inv_list = (inventory_list*) struct_ptr;
	inv_list->list_pos += ((s_button*) this)->button_value;
	if (inv_list->list_pos < 0)
		inv_list->list_pos = 0;
}