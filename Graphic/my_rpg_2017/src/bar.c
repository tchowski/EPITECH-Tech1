#include <stdlib.h>
#include "bar.h"
#include "sfml_functions.h"

bar *bar_create(sfFloatRect rect, sfBool direction, sfColor front, sfColor back)
{
	bar *new = malloc(sizeof(bar));
	new->rect = rect;
	new->back = sfRectangleShape_create();
	new->front = sfRectangleShape_create();
	new->direction = direction;
	sfRectangleShape_setFillColor(new->front, front);
	sfRectangleShape_setFillColor(new->back, back);
	sfRectangleShape_setPosition(new->front, sfVector2f_create(rect.left, rect.top));
	sfRectangleShape_setSize(new->front, sfVector2f_create(rect.width, rect.height));
	sfRectangleShape_setPosition(new->back, sfVector2f_create(rect.left, rect.top));
	sfRectangleShape_setSize(new->back, sfVector2f_create(rect.width, rect.height));
	
	return new;
}

void bar_destroy(bar *br)
{
	sfRectangleShape_destroy(br->back);
	sfRectangleShape_destroy(br->front);
	free(br);
}

void bar_update(bar *br, float percent)
{
	if (br->direction == BAR_DIR_W) {
		if (percent < 0.f)
			percent = 0;
		else if (percent > 1.f)
			percent = 1.f;
		sfRectangleShape_setSize(br->front,
		sfVector2f_create(br->rect.width * percent, br->rect.height));
	}
	else {
		if (percent < 0.f)
			percent = 0;
		else if (percent > 1.f)
			percent = 1.f;
		sfRectangleShape_setSize(br->front, 
		sfVector2f_create(br->rect.width, br->rect.height * percent));
		sfRectangleShape_setPosition(br->front, 
		sfVector2f_create(br->rect.left, br->rect.top + (br->rect.height * (1 - percent))));
	}
}

void bar_render(sfRenderWindow *window, bar *br)
{
	sfRenderWindow_drawRectangleShape(window, br->back, NULL);
	sfRenderWindow_drawRectangleShape(window, br->front, NULL);
}