#include "level.h"

void level_render(sfRenderWindow *window, s_level *level)
{
	sfRenderWindow_setView(window, level->player_view);
	chunks_render(window, level->map);
	sfRenderWindow_drawRectangleShape(window,
	level->player->shape, NULL);
	sfRenderWindow_setView(window, level->hud_view);
	gui_render(window, level->gui);
	if (menu_is_loaded(level->game_menu)) {
		menu_draw(window, level->game_menu);
	}
}