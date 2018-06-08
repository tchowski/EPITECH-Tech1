/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** my_rpg
*/

#ifndef KEYBOARD_H_
#define KEYBOARD_H_

#include <SFML/Graphics.h>

typedef struct
{
	sfBool status;
	sfBool pressed;
} input;

typedef struct
{
	input keys[101];
	input mouse_left;
	input mouse_right;
	sfVector2f mouse_pos;
	sfVector2f global_mouse_pos;
	sfUint32 *text_input;
} s_keyboard;


s_keyboard *keyboard_keyboard();

void keyboard_update(s_keyboard *keyboard);

void keyboard_pressed(s_keyboard *keyboard, sfKeyCode key);

void keyboard_released(s_keyboard *keyboard, sfKeyCode key);

void mouse_update(s_keyboard *keyboard);

#endif
