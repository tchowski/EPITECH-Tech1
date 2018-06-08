#include <stdlib.h>
#include "inventory_list.h"
#include "sfml_functions.h"
#include "defines.h"
#include "my.h"

static item *item_on_pos_2(inventory_list *inv_list, s_update_info *update_info)
{
	for (int i = 0; i < INV_LIST_LINES; i++) {
		if (update_info->input_status->mouse_pos.y < (sfText_getPosition(inv_list->lines[i]).y + 38))
			return inv_list->inventory->items[(i + inv_list->list_pos)];
	}
}

static item *item_on_pos(inventory_list *inv_list, s_update_info *update_info)
{
	if (update_info->input_status->mouse_pos.x > inv_list->pos.left &&
	update_info->input_status->mouse_pos.x < (inv_list->pos.left + inv_list->pos.width - 200) &&
	update_info->input_status->mouse_pos.y > inv_list->pos.top &&
	update_info->input_status->mouse_pos.y < (inv_list->pos.top + inv_list->pos.height)) {
		return item_on_pos_2(inv_list, update_info);
	}
	else {
		return NULL;
	}
}

item *inventory_list_get_item(inventory_list *inv_list, s_update_info *update_info)
{
	if (update_info->input_status->mouse_left.pressed) {
		return item_on_pos(inv_list, update_info);
	}
	else {
		return NULL;
	}
}