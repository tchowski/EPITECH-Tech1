/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** my_rpg
*/

#include "keyboard.h"

static void update_pressed(s_keyboard *keyboard, int button, sfBool value)
{
	input *current_key;

	switch(button)
	{
		case 0:
			current_key = &keyboard->mouse_left;
		break;
		case 1:
			current_key = &keyboard->mouse_right;
		break;
	}

	if (value == 1 && current_key->status == 0) {
		current_key->pressed = 1;
	}
	else {
		current_key->pressed = 0;
	}
}

static void update_status(s_keyboard *keyboard, int button, sfBool value)
{
	switch(button)
	{
		case 0:
			keyboard->mouse_left.status = value;
		break;
		case 1:
			keyboard->mouse_right.status = value;
		break;
	}
}

void mouse_update(s_keyboard *keyboard)
{
	sfBool status = sfMouse_isButtonPressed(sfMouseLeft);
	update_pressed(keyboard, 0, status);
	update_status(keyboard, 0, status);
	status = sfMouse_isButtonPressed(sfMouseRight);
	update_pressed(keyboard, 1, status);
	update_status(keyboard, 1, status);
}
