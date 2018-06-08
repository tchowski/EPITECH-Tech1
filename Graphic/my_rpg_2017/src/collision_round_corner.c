#include "collisions.h"
#include "sfml_functions.h"
#include "my_maths.h"

sfBool rect_circle_collision(sfFloatRect a, sfVector2f round_pos, float round_size)
{
	sfBool result = sfFalse;
	sfVector2f rect_points[4];
	rect_points[0] = sfVector2f_create(a.left, a.top);
	rect_points[1] = sfVector2f_create(a.left + a.width, a.top);
	rect_points[2] = sfVector2f_create(a.left + a.width, a.top + a.height);
	rect_points[3] = sfVector2f_create(a.left, a.top + a.height);

	for (int i = 0; i < 4; i++) {
		if (distance(rect_points[i], round_pos) < round_size) {
			result = sfTrue;
		}
	}
	return result;
}

sfBool float_round_corner_collision(sfFloatRect a, sfFloatRect b, sfVector2f round_pos, float round_size)
{
	if (float_rect_collision(a, b) && rect_circle_collision(a, round_pos, round_size)) {
		return sfTrue;
	}
	return sfFalse;
}