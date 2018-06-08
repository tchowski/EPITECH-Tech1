#include "window.h"
#include <stdlib.h>

s_window *s_window_init()
{
	s_window *new = malloc(sizeof(s_window));

	if (new == NULL) {
		return NULL;
	}
	new->sf_window = sfRenderWindow_create(sfVideoMode_getDesktopMode(), "my_rpg", sfFullscreen, NULL);
	if (new->sf_window == NULL) {
		free(new);
		return NULL;
	}
	return new;
}

void s_window_destroy(s_window *win)
{
	sfRenderWindow_destroy(win->sf_window);
	free(win);
}

