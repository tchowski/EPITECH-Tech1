#ifndef MAIN_MENU_H_
#define MAIN_MENU_H_

#include <SFML/Graphics.h>
#include "keyboard.h"
#include "button.h"

typedef struct
{
	sfRenderWindow *window;
	s_keyboard *input;
	int exit_with_status;
	s_button *play_button;
	s_button *exit_button;
} s_main_menu;

s_main_menu *main_menu_init(sfRenderWindow *sf_window);

void main_menu_destory(s_main_menu *m_menu);

int main_menu_run(s_main_menu *m_menu);

#endif