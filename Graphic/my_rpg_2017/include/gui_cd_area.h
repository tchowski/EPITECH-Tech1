#ifndef GUI_CD_AREA_H_
#define GUI_CD_AREA_H_

#include <SFML/Graphics.h>

typedef struct
{
	sfRectangleShape *base_rect;
} s_spell_cd;

typedef struct
{
	sfRectangleShape *background;
	s_spell_cd spells[4];
} s_cd_area;

s_cd_area cd_area_init();

void cd_area_destroy(s_cd_area *cd_area);

void cd_area_render(sfRenderWindow *window, s_cd_area *cd_area);

#endif