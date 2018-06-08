#include <stdlib.h>
#include "sfml_functions.h"
#include "menu.h"

static struct menu_element init_element()
{
	struct menu_element new;
	new.element = NULL;
	new.n = 0;
}

s_menu *menu_init()
{
	s_menu *new = malloc(sizeof(s_menu));
	new->is_loaded = sfFalse;
	new->buttons = init_element();
	new->inv_list = init_element();
	new->equiped_items = init_element();
	new->background = sfRectangleShape_create();
	new->id = -1;
	sfRectangleShape_setPosition(new->background, sfVector2f_create(0, 0));
	sfRectangleShape_setSize(new->background, sfVector2f_create(1920, 1080));
	sfRectangleShape_setFillColor(new->background, sfColor_fromRGBA(40, 40, 40, 180));
	return new;
}