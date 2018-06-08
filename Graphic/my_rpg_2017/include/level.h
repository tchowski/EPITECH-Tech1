#ifndef LEVEL_H_
#define LEVEL_H_

#include "character.h"
#include "tiles.h"
#include "chunk_matrix.h"
#include "rc_lib.h"
#include "gui.h"
#include "menu.h"

typedef struct
{
	character *player;
	chunk_matrix *map;
	sfView *player_view;
	sfView *hud_view;
	sfVertexArray *loaded_chunks;
	s_rc_lib *rc_lib;
	s_gui *gui;
	s_menu *game_menu;
	s_inventory *chest_inv;
	struct {
		character **characters;
	} elements;
} s_level;

s_level *level_create(s_rc_lib *rc_lib);

void level_update(s_level *level, s_update_info update_info);

void level_update_loaded_chunk_map(s_level *level);

void level_render(sfRenderWindow *window, s_level *level);

#endif