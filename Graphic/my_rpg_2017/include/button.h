#ifndef BUTTON_H_
#define BUTTON_H_

#include <SFML/Graphics.h>
#include "keyboard.h"

typedef struct
{
	sfRectangleShape *shape;
	sfFloatRect hitbox;
	sfTexture *texture;
	int button_value;
	void (*function)(void *this, void *struct_ptr, void *possible_value);
} s_button;

s_button *s_button_create(sfFloatRect button_pos, int button_value, sfTexture *texture, sfIntRect *text_rect);

void s_button_destroy(s_button *button);

void s_button_update(s_button *button, s_keyboard *input, void *struct_ptr, void *possible_value);

#endif