#include <stdlib.h>
#include "level.h"
#include "my.h"
#include "sfml_functions.h"

char *get_path(int x, int y);

s_level *level_create(s_rc_lib *rc_lib)
{
	s_level *new = malloc(sizeof(s_level));

	new->player = character_create();
	new->map = chunk_matrix_create(20, 20);
	new->player_view = sfView_create();
	new->rc_lib = rc_lib;
	new->hud_view = sfView_createFromRect(sfFloatRect_create(0, 0, 1920, 1080));
	new->loaded_chunks = sfVertexArray_create();
	new->gui = gui_create();
	sfVertexArray_setPrimitiveType(new->loaded_chunks, sfQuads);
	new->game_menu = menu_init();
	new->chest_inv = inventory_init(30);
	return new;
}