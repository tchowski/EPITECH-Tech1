#ifndef CONDITION_STRUCT_H_
#define CONDITION_STRUCT_H_

#include <SFML/Graphics.h>

typedef struct
{
	int x;
	int y;
} x_y_direction;

x_y_direction* x_y_direction_list();

typedef struct
{
	int id;
	int collision_type;
} tile_collision_status;

typedef struct
{
	int nb_of_tiles_with_collisions;
	tile_collision_status *tile;
} collisions_with_tiles;

collisions_with_tiles get_tiles_collisions_list();

int get_collision_type_by_id(int id);

sfBool collision_by_tile_id(int id);

#endif