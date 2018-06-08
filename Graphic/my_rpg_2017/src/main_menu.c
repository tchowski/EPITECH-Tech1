#include <stdlib.h>
#include "main_menu.h"
#include "sfml_functions.h"
#include "main_menu_buttons_function.h"

s_main_menu *main_menu_init(sfRenderWindow *sf_window)
{
	s_main_menu *new = malloc(sizeof(s_main_menu));
	if (new == NULL) {
		return NULL;
	}
	new->window = sf_window;
	new->input = keyboard_keyboard();
	new->exit_with_status = -1;
	new->play_button = s_button_create(sfFloatRect_create(20.f, 300.f, 400.f, 70.f), 1, NULL, NULL);
	new->exit_button = s_button_create(sfFloatRect_create(20.f, 400.f, 400.f, 70.f), 0, NULL, NULL);
	new->play_button->function = &exit_with_status;
	new->exit_button->function = &exit_with_status;
	return new;
}

void main_menu_destory(s_main_menu *m_menu)
{
	free(m_menu);
}