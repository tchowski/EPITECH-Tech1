#include "main_menu_buttons_function.h"
#include "main_menu.h"

void exit_with_status(void *this, void *menu, void *null_value)
{
	s_main_menu *m_menu = (s_main_menu*) menu;
	m_menu->exit_with_status = ((s_button*)this)->button_value;
}