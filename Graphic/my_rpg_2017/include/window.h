#ifndef WINDOW_H_
#define WINDOW_H_

#include <SFML/Graphics.h>

typedef struct
{
	sfRenderWindow *sf_window;
} s_window;

s_window *s_window_init();

void s_window_destroy(s_window *win);

int run(s_window *win);

#endif