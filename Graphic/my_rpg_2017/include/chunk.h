#ifndef CHUNK_H_
#define CHUNK_H_

#include "matrix.h"
#include "tiles.h"

typedef struct
{
	matrix *level;
	tiles *tile;
} chunk;
 
chunk *chunk_create(sfTexture *tile_texture);

void chunk_destroy(chunk *tr);

#endif