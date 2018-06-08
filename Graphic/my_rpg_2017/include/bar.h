#ifndef BAR_H_
#define BAR_H_

#include <SFML/Graphics.h>

#define BAR_DIR_W	0
#define BAR_DIR_H	1

typedef struct
{
	sfFloatRect rect;
	sfRectangleShape *front;
	sfRectangleShape *back;
	sfBool direction;
} bar;

bar *bar_create(sfFloatRect rect, sfBool direction, sfColor front, sfColor back);

void bar_destroy(bar *br);

void bar_update(bar *br, float percent);

void bar_render(sfRenderWindow *window, bar *br);

#endif