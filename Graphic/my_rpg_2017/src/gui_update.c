#include "gui.h"
#include "level.h"

void gui_update(s_gui *gui, void *lvl_ptr)
{
	s_level *level = (s_level*) lvl_ptr;

	bar_update(gui->player_health,
	(float)level->player->stats.hp/(float)level->player->stats.hp_max);
	bar_update(gui->player_stamina,
	(float)level->player->stats.stamina/(float)level->player->stats.stamina_max);
	bar_update(gui->player_magic,
	(float)level->player->stats.magic/(float)level->player->stats.magic_max);
	bar_update(gui->player_will,
	(float)level->player->stats.will/(float)level->player->stats.will_max);
}