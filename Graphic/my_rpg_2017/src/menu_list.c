#include "menu.h"

const void (*load_functions[2])(s_menu *menu, void *level_ptr) = {
	&load_pause,
	&load_inventory
};

const void (*update_functions[2])(s_menu *menu, s_update_info *update_info) = {
	&update_pause,
	&update_inventory
};