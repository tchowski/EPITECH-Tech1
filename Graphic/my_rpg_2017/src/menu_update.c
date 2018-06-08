#include <stdlib.h>
#include "sfml_functions.h"
#include "menu.h"

void menu_update(s_menu *menu, s_update_info *update_info)
{
	if (menu->id >= 0)
		update_functions[menu->id](menu, update_info);
}

void menu_draw(sfRenderWindow *window, s_menu *menu)
{
	sfRenderWindow_drawRectangleShape(window, menu->background, NULL);
	for (int i = 0; i < menu->buttons.n; i++) {
		sfRenderWindow_drawRectangleShape(window, ((s_button*)menu->buttons.element[i])->shape, NULL);
	}
	for (int i = 0; i < menu->inv_list.n; i++) {
		inventory_list_draw(window, menu->inv_list.element[i]);
	}
	for (int i = 0; i < menu->equiped_items.n; i++) {
		equiped_items_draw(window, menu->equiped_items.element[i]);
	}
}
