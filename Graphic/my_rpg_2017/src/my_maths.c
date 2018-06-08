#include <math.h>
#include "my_maths.h"

float float_square(float n)
{
	return n * n;
}

float float_abs(float v)
{
	if (v > 0.f) {
		return v;
	}
	return -v;
}

float rad(float angle)
{
	return (angle * M_PI)/180;
}

sfVector2f vec_norm(sfVector2f vec)
{
	sfVector2f vector = {
		vec.x / sqrt(float_abs(vec.x) * float_abs(vec.x) + float_abs(vec.y) * float_abs(vec.y)),
		vec.y / sqrt(float_abs(vec.x) * float_abs(vec.x) + float_abs(vec.y) * float_abs(vec.y))
	};
	return vector;
}

float distance(sfVector2f a, sfVector2f b)
{
	return sqrt(float_square(float_abs(a.x - b.x)) + float_square(float_abs(a.y - b.y)));
}
