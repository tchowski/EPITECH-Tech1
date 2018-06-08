#ifndef GUI_H_
#define GUI_H_

#include "bar.h"
#include "gui_cd_area.h"

typedef struct
{
	s_cd_area cd_area;

	bar *player_health;
	bar *player_stamina;
	bar *player_will;
	bar *player_magic;
	bar *ennemy_health;
} s_gui;

s_gui *gui_create();

void gui_destroy(s_gui *gui);

void gui_update(s_gui *gui, void *lvl_ptr);

void gui_render(sfRenderWindow *window, s_gui *gui);

#endif