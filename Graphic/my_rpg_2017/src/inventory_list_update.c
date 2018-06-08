#include <stdlib.h>
#include "inventory_list.h"
#include "sfml_functions.h"
#include "defines.h"
#include "my.h"

void inventory_list_str_update(inventory_list *inv_list)
{
	for (int i = 0; i < INV_LIST_LINES; i++) {
		if (inventory_get_item(inv_list->inventory, i +
			inv_list->list_pos) != NULL) {
			sfText_setUnicodeString(inv_list->lines[i],
			inventory_get_item(inv_list->inventory, i +
			inv_list->list_pos)->name);
		}
		else {
			sfText_setString(inv_list->lines[i], "");
		}
	}
}

void inventory_list_update(inventory_list *inv_list, s_update_info *update_info)
{
	s_button_update(inv_list->button_down, update_info->input_status, inv_list, NULL);
	s_button_update(inv_list->button_up, update_info->input_status, inv_list, NULL);
}

void inventory_list_draw(sfRenderWindow *window, inventory_list *inv_list)
{
	sfRenderWindow_drawRectangleShape(window, inv_list->background, NULL);
	sfRenderWindow_drawRectangleShape(window, inv_list->button_up->shape, NULL);
	sfRenderWindow_drawRectangleShape(window, inv_list->button_down->shape, NULL);
	for (int i = 0; i < INV_LIST_LINES; i++) {
		sfRenderWindow_drawText(window, inv_list->lines[i], NULL);
	}
}