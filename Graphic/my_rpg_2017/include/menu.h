#ifndef GAME_MENU_H_
#define GAME_MENU_H_

#include <SFML/Graphics.h>
#include "button.h"
#include "inventory_list.h"
#include "equiped_items_display.h"

struct menu_element
{
	int n;
	void **element;
};

typedef struct
{
	sfBool is_loaded;
	struct menu_element buttons;
	struct menu_element inv_list;
	struct menu_element equiped_items;
	struct menu_element skill_tree;
	sfRectangleShape *background;
	int id;
} s_menu;

extern const void (*load_functions[2])(s_menu *menu, void *level_ptr);
extern const void (*update_functions[2])(s_menu *menu, s_update_info *update_info);

s_menu *menu_init();

sfBool menu_load(s_menu *menu, int menu_id, void *level_ptr);

sfBool menu_unload(s_menu *menu);

sfBool menu_is_loaded(s_menu *menu);

void menu_update(s_menu *menu, s_update_info *update_info);

void menu_draw(sfRenderWindow *window, s_menu *menu);

void load_inventory(s_menu *menu, void *level_ptr);
void load_pause(s_menu *menu, void *level_ptr);

void update_inventory(s_menu *menu, s_update_info *update_info);
void update_pause(s_menu *menu, s_update_info *update_info);

#endif