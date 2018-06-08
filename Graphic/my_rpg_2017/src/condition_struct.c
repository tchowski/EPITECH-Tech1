#include <stdlib.h>
#include "condition_struct.h"
#include "defines.h"

static x_y_direction single_x_y_direction(int x, int y)
{
	x_y_direction direction;

	direction.x = x;
	direction.y = y;

	return direction;
}

x_y_direction* x_y_direction_list()
{
	x_y_direction* directions = malloc(sizeof(x_y_direction) * CMD_MOVE_ARGS_NB);
	
	if (directions == NULL) {
		return NULL;
	}
	directions[CMD_MOVE_L] = single_x_y_direction(-1, 0);
	directions[CMD_MOVE_LT] = single_x_y_direction(-1, -1);
	directions[CMD_MOVE_T] = single_x_y_direction(0, -1);
	directions[CMD_MOVE_TR] = single_x_y_direction(1, -1);
	directions[CMD_MOVE_R] = single_x_y_direction(1, 0);
	directions[CMD_MOVE_RB] = single_x_y_direction(1, 1);
	directions[CMD_MOVE_B] = single_x_y_direction(0, 1);
	directions[CMD_MOVE_BL] = single_x_y_direction(-1, 1);

	return directions;
}

void set_coll_type_2(int i, int *value)
{
	switch (i) {
		default:
			*value = COLL_TYPE_RECT;
		break;
	}

}

void set_coll_type(int i, int *value)
{
	switch (i) {
		case 2:
			*value = COLL_TYPE_ROUND_TOP_LEFT_CORNER;
		break;
		case 3:
			*value = COLL_TYPE_ROUND_TOP_RIGHT_CORNER;
		break;
		case 4:
			*value = COLL_TYPE_ROUND_BOTTOM_LEFT_CORNER;
		break;
		case 5:
			*value = COLL_TYPE_ROUND_BOTTOM_RIGHT_CORNER;
		break;
		default:
			set_coll_type_2(i, value);
		break;
	}
}

collisions_with_tiles get_tiles_collisions_list()
{
	collisions_with_tiles new;
	new.nb_of_tiles_with_collisions = 5;
	new.tile = malloc(sizeof(tile_collision_status) * 5);
	for (int i = 1; i <= 5; i++) {
		new.tile[i-1].id = i;
		set_coll_type(i, &new.tile[i-1].collision_type);
	}

	return new;
}