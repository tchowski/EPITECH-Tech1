#ifndef GAME_H_
#define GAME_H_

#include <SFML/Graphics.h>
#include "keyboard.h"
#include "level.h"
#include "rc_lib.h"
#include "debug.h"
#include "console.h"

typedef struct
{
	sfRenderWindow *window;
	sfView *gui_view;
	s_keyboard *input;
	s_level *level;
	s_rc_lib *rc_lib;
	s_debug *debug;
	s_console *console;
} game;

game *game_init(sfRenderWindow *window);

void game_destroy(game *gm);

void game_render(game *gm);

int game_run(game *gm);

#endif