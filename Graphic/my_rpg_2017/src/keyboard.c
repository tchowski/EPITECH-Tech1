/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** my_rpg
*/

#include <stdlib.h>
#include "keyboard.h"

s_keyboard *keyboard_keyboard()
{
	s_keyboard *new = malloc(sizeof(s_keyboard));
	for (int i = 0; i < 101; i++) {
		new->keys[i].pressed = 0;
		new->keys[i].status = 0;
	}
	new->mouse_left.status = 0;
	new->mouse_right.status = 0;
	new->text_input = malloc(sizeof(sfUint32) * 40);
	return new;
}

void keyboard_pressed(s_keyboard *keyboard, sfKeyCode key)
{
	keyboard->keys[key].pressed = sfTrue;
	keyboard->keys[key].status = sfTrue;
}

void keyboard_released(s_keyboard *keyboard, sfKeyCode key)
{
	keyboard->keys[key].status = sfFalse;
}

void keyboard_update(s_keyboard *keyboard)
{
	for (int i = 0; i < 40; i++) {
		keyboard->text_input[i] = 0;
	}
	for (int i = 0; i < 101; i++) {
		keyboard->keys[i].pressed = sfFalse;
	}
}
