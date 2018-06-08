#include <stdlib.h>
#include "sfml_functions.h"
#include "menu.h"
#include "level.h"

sfBool menu_load(s_menu *menu, int menu_id, void *level_ptr)
{
	if (menu_is_loaded(menu)) {
		menu_unload(menu);
	}
	menu->is_loaded = sfTrue;
	menu->id = menu_id;
	load_functions[menu_id](menu, level_ptr);
	return sfTrue;
}

sfBool menu_is_loaded(s_menu *menu)
{
	return menu->is_loaded;
}

sfBool menu_unload(s_menu *menu)
{
	if (!menu_is_loaded(menu))
		return sfFalse;
	for (int i = 0; i < menu->buttons.n; i++) {
		s_button_destroy(menu->buttons.element[i]);
	}
	free(menu->buttons.element);
	menu->buttons.n = 0;
	menu->is_loaded = sfFalse;
	menu->id = -1;
	return sfTrue;
}