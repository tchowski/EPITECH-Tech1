#include "game.h"

static void render_hud(game *gm)
{
	if (gm->debug->loaded_chunks_status == sfTrue)
		sfRenderWindow_drawVertexArray(gm->window,
		gm->level->loaded_chunks, NULL);
	console_render(gm->window, gm->console);
}

void game_render(game *gm)
{
	sfRenderWindow_clear(gm->window, sfBlack);
	level_render(gm->window, gm->level);
	render_hud(gm);
	sfRenderWindow_display(gm->window);
}