#include "equiped_items_display.h"

static int item_on_pos_2(equiped_items_display *equiped_items, s_update_info *update_info)
{
	for (int i = 0; i < INV_LIST_LINES; i++) {
		if (update_info->input_status->mouse_pos.y < (sfText_getPosition(equiped_items->items[i]).y + 50))
			return i;
	}
	return -1;
}

static int item_on_pos(equiped_items_display *equiped_items, s_update_info *update_info)
{
	if (update_info->input_status->mouse_pos.x > equiped_items->pos.left &&
	update_info->input_status->mouse_pos.x < (equiped_items->pos.left + equiped_items->pos.width) &&
	update_info->input_status->mouse_pos.y > equiped_items->pos.top &&
	update_info->input_status->mouse_pos.y < (equiped_items->pos.top + equiped_items->pos.height)) {
		return item_on_pos_2(equiped_items, update_info);
	}
	else {
		return -1;
	}
}

static int get_pos(equiped_items_display *equiped_items, s_update_info *update_info)
{
	if (update_info->input_status->mouse_left.pressed) {
		return item_on_pos(equiped_items, update_info);
	}
	else {
		return -1;
	}
}

void equiped_items_unequip(equiped_items_display *equiped_items, s_inventory *inventory, s_update_info *update_info)
{
	int pos = get_pos(equiped_items, update_info);
	if (pos != -1) {
		unequip_item(equiped_items->equiped_items, pos, inventory);
	}
}