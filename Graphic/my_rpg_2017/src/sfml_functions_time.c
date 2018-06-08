#include "sfml_functions.h"

sfTime sfTime_sub(sfTime a, sfTime b)
{
	sfTime c;
	c.microseconds = a.microseconds - b.microseconds;
	return c;
}

sfColor sfColor_create(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
	sfColor color;

	color.r = r;
	color.g = g;
	color.b = b;
	color.a = a;
	return color;
}