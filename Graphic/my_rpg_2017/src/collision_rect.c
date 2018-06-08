#include "my_maths.h"

static void float_rect_swap(sfFloatRect *a, sfFloatRect *b)
{
	sfFloatRect c = *a;
	*a = *b;
	*b = c;
}

static sfBool check_x(sfFloatRect a, sfFloatRect b)
{
	if (a.left > b.left) {
		float_rect_swap(&a, &b);
	}
	if (a.left + a.width > b.left) {
		return sfTrue;
	}
	return sfFalse;
}

static sfBool check_y(sfFloatRect a, sfFloatRect b)
{
	if (a.top > b.top) {
		float_rect_swap(&a, &b);
	}
	if (a.top + a.height > b.top) {
		return sfTrue;
	}
	return sfFalse;
}

sfBool float_rect_collision(sfFloatRect a, sfFloatRect b)
{
	if (check_x(a, b) && check_y(a, b)) {
		return sfTrue;
	}
	return sfFalse;
}