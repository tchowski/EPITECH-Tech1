#include <stdlib.h>
#include "game.h"
#include "sfml_functions.h"

game *game_init(sfRenderWindow *window)
{
	game *new = malloc(sizeof(game));

	if (new == NULL) {
		return NULL;
	}
	new->window = window;
	new->gui_view = sfView_createFromRect(sfFloatRect_create(0.f, 0.f, 1920.f, 1080.f));
	sfRenderWindow_setView(new->window, new->gui_view);
	new->input = keyboard_keyboard();
	new->rc_lib = s_rc_lib_init();
	new->level = level_create(new->rc_lib);
	new->debug = debug_init();
	new->console = console_init();
	new->console->debug = new->debug;
	new->console->var_debug_struct = init_debug_struct(new->console->debug);
	sfRenderWindow_setKeyRepeatEnabled(new->window, sfFalse);
	return new;
}

void game_destroy(game *gm)
{
	free(gm);
}