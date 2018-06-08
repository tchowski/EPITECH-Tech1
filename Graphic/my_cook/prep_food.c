#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>

void prep_food(void)
{
	static int bol = 0;

	if (bol != 6) {
		bol = prep_fromage(bol);
		bol = prep_pain_bas(bol);
		bol = prep_pain_haut(bol);
		bol = prep_salade(bol);
		bol = prep_steak(bol);
		bol = prep_tomate(bol);
	}
	else {
		check_food();
		my_set_pos();
		bol = 0;
	}
}

int prep_fromage(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(fromage_p).x != spawn.x){
		if ((mouse_button.x >= pos_fromage.x)
		&& (mouse_button.x <= pos_fromage.x + 113)
		&& (mouse_button.y >= pos_fromage.y)
		&& (mouse_button.y <= pos_fromage.y + 39)) {
			sfSprite_setPosition(fromage_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_pain_bas(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(pain_bas_p).x != spawn.x) {
		if ((mouse_button.x >= pos_pain_bas.x)
		&& (mouse_button.x <= pos_pain_bas.x + 113)
		&& (mouse_button.y >= pos_pain_bas.y)
		&& (mouse_button.y <= pos_pain_bas.y + 39)) {
			sfSprite_setPosition(pain_bas_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_pain_haut(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(pain_haut_p).x != spawn.x) {
		if ((mouse_button.x >= pos_pain_haut.x)
		&& (mouse_button.x <= pos_pain_haut.x + 113)
		&& (mouse_button.y >= pos_pain_haut.y)
		&& (mouse_button.y <= pos_pain_haut.y + 39)) {
			sfSprite_setPosition(pain_haut_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_salade(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(salade_p).x != spawn.x) {
		if ((mouse_button.x >= pos_salade.x)
		&& (mouse_button.x <= pos_salade.x + 113)
		&& (mouse_button.y >= pos_salade.y)
		&& (mouse_button.y <= pos_salade.y + 39)) {
			sfSprite_setPosition(salade_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_steak(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(steak_p).x != spawn.x) {
		if ((mouse_button.x >= pos_steak.x)
		&& (mouse_button.x <= pos_steak.x + 113)
		&& (mouse_button.y >= pos_steak.y)
		&& (mouse_button.y <= pos_steak.y + 39)) {
			sfSprite_setPosition(steak_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_tomate(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(tomate_p).x != spawn.x) {
		if ((mouse_button.x >= pos_tomate.x)
		&& (mouse_button.x <= pos_tomate.x + 113)
		&& (mouse_button.y >= pos_tomate.y)
		&& (mouse_button.y <= pos_tomate.y + 39)) {
			sfSprite_setPosition(tomate_p,spawn);
			bol++;
		}
	}
	return (bol);
}
