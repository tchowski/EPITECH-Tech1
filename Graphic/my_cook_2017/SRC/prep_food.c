/*
** EPITECH PROJECT, 2018
** prep_food.c
** File description:
** prep_food
*/

#include "../my_screen.h"
#include <stdlib.h>
#include <stdio.h>

void prep_food(void)
{
	static int bol = 0;

	if (bol != 6) {
		bol = prep_ananas(bol);
		bol = prep_bacon(bol);
		bol = prep_avocat(bol);
		bol = prep_champi(bol);
		bol = prep_oeuf(bol);
		bol = prep_ognion(bol);
		bol = prep_menthe(bol);
		bol = prep_ketchup(bol);
		bol = prep_moutarde(bol);
		bol = prep_ognion_rings(bol);
		bol = prep_fromage(bol);
		bol = prep_pain_bas(bol);
		bol = prep_pain_haut(bol);
		bol = prep_poulet(bol);
		bol = prep_salade(bol);
		bol = prep_salami(bol);
		bol = prep_saumon(bol);
		bol = prep_steak(bol);
		bol = prep_tomate(bol);
	}
	else {
		check_food();
		my_set_pos();
		bol = 0;
	}
}

int prep_ananas(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(annanas_p).x != spawn.x) {
		if ((mouse_button.x >= pos_annanas.x)
		&& (mouse_button.x <= pos_annanas.x + 113)
		&& (mouse_button.y >= pos_annanas.y)
		&& (mouse_button.y <= pos_annanas.y + 39)) {
			sfSprite_setPosition(annanas_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_bacon(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(bacon_p).x != spawn.x) {
		if ((mouse_button.x >= pos_bacon.x)
		&& (mouse_button.x <= pos_bacon.x + 113)
		&& (mouse_button.y >= pos_bacon.y)
		&& (mouse_button.y <= pos_bacon.y + 39)) {
			sfSprite_setPosition(bacon_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_avocat(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(avocat_p).x != spawn.x){
		if ((mouse_button.x >= pos_avocat.x)
		&& (mouse_button.x <= pos_avocat.x + 113)
		&& (mouse_button.y >= pos_avocat.y)
		&& (mouse_button.y <= pos_avocat.y + 39)) {
			sfSprite_setPosition(avocat_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_champi(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(champignon_p).x != spawn.x){
		if ((mouse_button.x >= pos_champi.x)
		&& (mouse_button.x <= pos_champi.x + 113)
		&& (mouse_button.y >= pos_champi.y)
		&& (mouse_button.y <= pos_champi.y + 39)) {
			sfSprite_setPosition(champignon_p,spawn);
			bol++;
		}
	}
	return (bol);
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

int prep_ketchup(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(ketchup_p).x != spawn.x){
		if ((mouse_button.x >= pos_ketchup.x)
		&& (mouse_button.x <= pos_ketchup.x + 113)
		&& (mouse_button.y >= pos_ketchup.y)
		&& (mouse_button.y <= pos_ketchup.y + 39)) {
			sfSprite_setPosition(ketchup_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_menthe(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(menthe_p).x != spawn.x){
		if ((mouse_button.x >= pos_menthe.x)
		&& (mouse_button.x <= pos_menthe.x + 113)
		&& (mouse_button.y >= pos_menthe.y)
		&& (mouse_button.y <= pos_menthe.y + 39)) {
			sfSprite_setPosition(menthe_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_moutarde(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(moutarde_p).x != spawn.x){
		if ((mouse_button.x >= pos_moutarde.x)
		&& (mouse_button.x <= pos_moutarde.x + 113)
		&& (mouse_button.y >= pos_moutarde.y)
		&& (mouse_button.y <= pos_moutarde.y + 39)) {
			sfSprite_setPosition(moutarde_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_oeuf(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(oeuf_p).x != spawn.x){
		if ((mouse_button.x >= pos_oeuf.x)
		&& (mouse_button.x <= pos_oeuf.x + 113)
		&& (mouse_button.y >= pos_oeuf.y)
		&& (mouse_button.y <= pos_oeuf.y + 39)) {
			sfSprite_setPosition(oeuf_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_ognion(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(ognion_b_p).x != spawn.x) {
		if ((mouse_button.x >= pos_ognion_b.x)
		&& (mouse_button.x <= pos_ognion_b.x + 113)
		&& (mouse_button.y >= pos_ognion_b.y)
		&& (mouse_button.y <= pos_ognion_b.y + 39)) {
			sfSprite_setPosition(ognion_b_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_ognion_rings(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(ognion_p).x != spawn.x){
		if ((mouse_button.x >= pos_ognion.x)
		&& (mouse_button.x <= pos_ognion.x + 113)
		&& (mouse_button.y >= pos_ognion.y)
		&& (mouse_button.y <= pos_ognion.y + 39)) {
			sfSprite_setPosition(ognion_p,spawn);
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

int prep_poulet(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(poulet_p).x != spawn.x) {
		if ((mouse_button.x >= pos_poulet.x)
		&& (mouse_button.x <= pos_poulet.x + 113)
		&& (mouse_button.y >= pos_poulet.y)
		&& (mouse_button.y <= pos_poulet.y + 39)) {
			sfSprite_setPosition(poulet_p,spawn);
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

int prep_salami(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(salami_p).x != spawn.x) {
		if ((mouse_button.x >= pos_salami.x)
		&& (mouse_button.x <= pos_salami.x + 113)
		&& (mouse_button.y >= pos_salami.y)
		&& (mouse_button.y <= pos_salami.y + 39)) {
			sfSprite_setPosition(salami_p,spawn);
			bol++;
		}
	}
	return (bol);
}

int prep_saumon(int bol)
{
	spawn.x = 800;
	spawn.y = 700 - (bol * 20);
	mouse_button.x = sfMouse_getPositionRenderWindow(window).x;
	mouse_button.y = sfMouse_getPositionRenderWindow(window).y;
	if (event.type == sfEvtMouseButtonPressed
	&& sfSprite_getPosition(saumon_p).x != spawn.x) {
		if ((mouse_button.x >= pos_saumon.x)
		&& (mouse_button.x <= pos_saumon.x + 113)
		&& (mouse_button.y >= pos_saumon.y)
		&& (mouse_button.y <= pos_saumon.y + 39)) {
			sfSprite_setPosition(saumon_p,spawn);
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
