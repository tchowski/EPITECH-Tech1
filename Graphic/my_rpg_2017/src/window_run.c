#include "window.h"
#include "main_menu.h"
#include "game.h"

static sfBool cycle(sfBool exit, s_window *win) {
	s_main_menu *m_menu = main_menu_init(win->sf_window);
	if (m_menu == NULL) {
		return -1;
	}
	if (main_menu_run(m_menu) == 1) {
		game *gm = game_init(win->sf_window);
		if (game_run(gm) == -1) {
			exit = -1;
		}
		else {
			exit = 0;
		}
	}
	else {
		exit = 0;
	}
	return exit;
}

int run(s_window *win)
{
	int exit = 1;
	while (exit == 1) {
		exit = cycle(exit, win);
	}
	s_window_destroy(win);

	return 0;
}