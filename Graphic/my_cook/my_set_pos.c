#include "my.h"

void	my_set_pos(void)
{
//	set_pos();
	pos_fromage.x = 630;
	pos_fromage.y = 920;
	sfSprite_setPosition(fromage_p, pos_fromage);
	pos_pain_bas.x = 1680;
	pos_pain_bas.y = 920;
	sfSprite_setPosition(pain_bas_p, pos_pain_bas);
	pos_pain_haut.x = 20;
	pos_pain_haut.y = 850;
	sfSprite_setPosition(pain_haut_p, pos_pain_haut);
	pos_salade.x = 330;
	pos_salade.y = 850;
	sfSprite_setPosition(salade_p, pos_salade);
	pos_steak.x = 780;
	pos_steak.y = 850;
	sfSprite_setPosition(steak_p, pos_steak);
	pos_tomate.x = 930;
	pos_tomate.y = 850;
	sfSprite_setPosition(tomate_p, pos_tomate);
}

void	set_pos(void)
{
	sfVector2f	pos;
	sfVector2f	pos_fromage;
	sfVector2f	pos_pain_bas;
	sfVector2f	pos_pain_haut;
	sfVector2f	pos_salde;
	sfVector2f	pos_tomate;
}

