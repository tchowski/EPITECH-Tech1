#include <stdlib.h>
#include "chunk.h"
#include "defines.h"

chunk *chunk_create(sfTexture *tile_texture)
{
	chunk *new = malloc(sizeof(chunk));
	new->level = matrix_create(CHUNK_SIZE, CHUNK_SIZE, NULL);
	new->tile = tiles_create(new->level, tile_texture);
	return new;
}

void chunk_destroy(chunk *tr)
{
	matrix_destruct(tr->level);
	free(tr);
}
