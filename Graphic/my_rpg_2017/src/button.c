#include <stdlib.h>
#include "button.h"
#include "sfml_functions.h"

s_button *s_button_create(sfFloatRect button_pos, int button_value, sfTexture *texture, sfIntRect *text_rect)
{
	s_button *new = malloc(sizeof(s_button));
	new->shape = sfRectangleShape_create();
	new->hitbox = button_pos;
	new->function = NULL;
	new->button_value = button_value;
	sfRectangleShape_setFillColor(new->shape, sfWhite);
	sfRectangleShape_setPosition(new->shape,
		sfVector2f_create(button_pos.left, button_pos.top));
	sfRectangleShape_setSize(new->shape,
		sfVector2f_create(button_pos.width, button_pos.height));
	sfRectangleShape_setTexture(new->shape, texture, sfFalse);
	if (texture) {
		sfRectangleShape_setTextureRect(new->shape, *text_rect);
	}
	return new;
}

void s_button_destroy(s_button *button)
{
	sfRectangleShape_destroy(button->shape);
	free(button);
}