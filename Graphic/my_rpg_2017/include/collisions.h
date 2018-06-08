#ifndef COLLISIONS_H_
#define COLLISIONS_H_

#include <SFML/Graphics.h>

sfBool collision(sfFloatRect character, sfFloatRect tile_rect, int tile_id);

sfBool float_rect_collision(sfFloatRect a, sfFloatRect b);

sfBool float_round_corner_collision(sfFloatRect a, sfFloatRect b, sfVector2f round_pos, float round_size);

#endif