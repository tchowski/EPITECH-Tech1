#include <stdlib.h>
#include "my_maths.h"
#include "condition_struct.h"
#include "collisions.h"
#include "defines.h"
#include "sfml_functions.h"

sfBool collision_by_tile_id(int id)
{
	collisions_with_tiles tiles_collision = get_tiles_collisions_list();

	for (int i = 0; i < tiles_collision.nb_of_tiles_with_collisions; i++) {
		if (id == tiles_collision.tile[i].id) {
			free(tiles_collision.tile);
			return sfTrue;
		}
	}
	free(tiles_collision.tile);
	return sfFalse;
}

int get_collision_type_by_id(int id)
{
	collisions_with_tiles tiles_collision = get_tiles_collisions_list();

	for (int i = 0; i < tiles_collision.nb_of_tiles_with_collisions; i++) {
		if (id == tiles_collision.tile[i].id) {
			free(tiles_collision.tile);
			return tiles_collision.tile[i].collision_type;
		}
	}
	free(tiles_collision.tile);
	return -1;
}

sfBool other_collisions(sfFloatRect character, sfFloatRect tile_rect, int tile_id, int collision_type)
{
	if (collision_type == COLL_TYPE_ROUND_BOTTOM_LEFT_CORNER) {
		return float_round_corner_collision(character, tile_rect, 
		sfVector2f_create(tile_rect.left + tile_rect.width,
		tile_rect.top), tile_rect.height);
	}
	if (collision_type == COLL_TYPE_ROUND_BOTTOM_RIGHT_CORNER) {
		return float_round_corner_collision(character, tile_rect, 
		sfVector2f_create(tile_rect.left,
		tile_rect.top), tile_rect.height);
	}

}

sfBool collision(sfFloatRect character, sfFloatRect tile_rect, int tile_id)
{
	int collision_type = get_collision_type_by_id(tile_id);

	if (collision_type == COLL_TYPE_RECT) {
		return float_rect_collision(character, tile_rect);
	}
	if (collision_type == COLL_TYPE_ROUND_TOP_LEFT_CORNER) {
		return float_round_corner_collision(character, tile_rect, 
		sfVector2f_create(tile_rect.left + tile_rect.width,
		tile_rect.top + tile_rect.height), tile_rect.height);
	}
	if (collision_type == COLL_TYPE_ROUND_TOP_RIGHT_CORNER) {
		return float_round_corner_collision(character, tile_rect, 
		sfVector2f_create(tile_rect.left,
		tile_rect.top + tile_rect.height), tile_rect.height);
	}
	return other_collisions(character, tile_rect, tile_id, collision_type);
	
	return sfFalse;
}