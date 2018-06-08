#ifndef TILES_H_
#define TILES_H_

#include "matrix.h"

typedef struct
{
	sfVertexArray *vertrices;
	sfTexture *texture;
} tiles;

tiles *tiles_create(matrix* dat, sfTexture *texture);

void tiles_render(sfRenderWindow *window, tiles *map);

void tiles_update(tiles *tile, matrix* dat, sfVector2f top_left);

#endif