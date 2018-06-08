#include <stdlib.h>
#include "gui.h"
#include "sfml_functions.h"
#include "defines.h"

s_gui *gui_create()
{
	s_gui *new = malloc(sizeof(s_gui));
	new->cd_area = cd_area_init();
	new->player_health = bar_create(sfFloatRect_create(GUI_PLAYER_HEALTH_L, GUI_PLAYER_HEALTH_T, GUI_PLAYER_HEALTH_W, GUI_PLAYER_HEALTH_H), BAR_DIR_W, sfRed, sfColor_fromRGB(60, 20, 20));
	new->player_magic = bar_create(sfFloatRect_create(GUI_PLAYER_MAGIC_L, GUI_PLAYER_MAGIC_T, GUI_PLAYER_MAGIC_W, GUI_PLAYER_MAGIC_H), BAR_DIR_H, sfBlue, sfColor_fromRGB(20, 20, 60));
	new->player_stamina = bar_create(sfFloatRect_create(GUI_PLAYER_STAMINA_L, GUI_PLAYER_STAMINA_T, GUI_PLAYER_STAMINA_W, GUI_PLAYER_STAMINA_H), BAR_DIR_H, sfGreen, sfColor_fromRGB(20, 60, 20));
	new->player_will = bar_create(sfFloatRect_create(GUI_PLAYER_WILL_L, GUI_PLAYER_WILL_T, GUI_PLAYER_WILL_W, GUI_PLAYER_WILL_H), BAR_DIR_W, sfGreen, sfColor_fromRGB(20, 60, 20));
	
	new->ennemy_health = bar_create(sfFloatRect_create(GUI_ENNEMY_HEALTH_L, GUI_ENNEMY_HEALTH_T, GUI_ENNEMY_HEALTH_W, GUI_ENNEMY_HEALTH_H), BAR_DIR_W, sfRed, sfColor_fromRGB(60, 20, 20));
	
	return new;
}

void gui_destroy(s_gui *gui)
{
	free(gui);
}

void gui_render(sfRenderWindow *window, s_gui *gui)
{
	bar_render(window, gui->player_health);
	bar_render(window, gui->player_stamina);
	bar_render(window, gui->player_magic);
	bar_render(window, gui->player_will);
	bar_render(window, gui->ennemy_health);
	cd_area_render(window, &gui->cd_area);
}