#include "gui_cd_area.h"
#include "sfml_functions.h"
#include "defines.h"

s_cd_area cd_area_init()
{
	s_cd_area new;
	new.background = sfRectangleShape_create();
	sfRectangleShape_setPosition(new.background, sfVector2f_create(GUI_CD_AREA_BACKGROUND_L, GUI_CD_AREA_BACKGROUND_T));
	sfRectangleShape_setSize(new.background, sfVector2f_create(GUI_CD_AREA_BACKGROUND_W, GUI_CD_AREA_BACKGROUND_H));
	sfRectangleShape_setFillColor(new.background, sfColor_fromRGB(120, 120, 120));

	for (int i = 0; i < 4; i++) {
		new.spells[i].base_rect = sfRectangleShape_create();
		sfRectangleShape_setPosition(new.spells[i].base_rect, 
		sfVector2f_create(GUI_CD_AREA_BACKGROUND_L + GUI_CD_SPELL_SPACE + (GUI_CD_SPELL_SPACE + GUI_CD_SPELL_RECT_SIZE) * i,
		GUI_CD_AREA_BACKGROUND_T + (GUI_CD_AREA_BACKGROUND_H - GUI_CD_SPELL_RECT_SIZE) / 2));
		sfRectangleShape_setSize(new.spells[i].base_rect,
		sfVector2f_create(GUI_CD_SPELL_RECT_SIZE, GUI_CD_SPELL_RECT_SIZE));
	}

	return new;
}

void cd_area_destroy(s_cd_area *cd_area)
{
	sfRectangleShape_destroy(cd_area->background);
}

void cd_area_render(sfRenderWindow *window, s_cd_area *cd_area)
{
	sfRenderWindow_drawRectangleShape(window, cd_area->background, NULL);
	for (int i = 0; i < 4; i++) {
		sfRenderWindow_drawRectangleShape(window, cd_area->spells[i].base_rect, NULL);
	}
}