#include "level.h"
#include "change.h"

void player_view_update(s_level *level)
{
	sfFloatRect new_rect;
	new_rect.left = (level->player->pos.x + (level->player->size.x / 2)) -
			(1920 / 2) * VIEW_ZOOM;
	new_rect.top = (level->player->pos.y + (level->player->size.y / 2)) -
			(1080 / 2) * VIEW_ZOOM;
	new_rect.width = 1920 * VIEW_ZOOM;
	new_rect.height = 1080 * VIEW_ZOOM;
	sfView_reset(level->player_view, new_rect);
}

static void level_game_update(s_level *level, s_update_info update_info)
{
	chunks_load_at_pos(level->map, level->player->pos.x/
		(TILE_SIZE * CHUNK_SIZE), level->player->pos.y/
		(TILE_SIZE * CHUNK_SIZE), level->rc_lib);
	chunks_unload_around_pos(level->map, level->player->pos.x/
		(TILE_SIZE * CHUNK_SIZE), level->player->pos.y/
		(TILE_SIZE * CHUNK_SIZE));
	player_update(level->player, update_info, level->map);
	player_view_update(level);
	gui_update(level->gui, level);
}

void level_update(s_level *level, s_update_info update_info)
{
	if (update_info.input_status->keys[sfKeyI].pressed) {
		if (menu_is_loaded(level->game_menu))
			menu_unload(level->game_menu);
		else
			menu_load(level->game_menu, 1, level);
	}
	if (update_info.input_status->keys[sfKeyEscape].pressed) {
		if (menu_is_loaded(level->game_menu))
			menu_unload(level->game_menu);
		else
			menu_load(level->game_menu, 0, level);
	}
	if (!menu_is_loaded(level->game_menu)) {
		level_game_update(level, update_info);
	}
	else {
		menu_update(level->game_menu, &update_info);
	}
}