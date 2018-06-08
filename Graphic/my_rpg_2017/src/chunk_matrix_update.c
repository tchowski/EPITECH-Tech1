#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "chunk_matrix.h"
#include "sfml_functions.h"
#include "defines.h"

char *get_path(int x, int y);

void update_chunk(chunk *tr, sfVector2i mat_pos)
{
	if (tr != NULL) {
	tiles_update(tr->tile, tr->level, 
		sfVector2f_create(mat_pos.x * (CHUNK_SIZE * TILE_SIZE),
			mat_pos.y * (CHUNK_SIZE * TILE_SIZE)));
	}
}

void chunks_tiles_update(chunk_matrix *mat)
{
	for (int i = 0; i < mat->x; i++) {
		for (int j = 0; j < mat->y; j++) {
			update_chunk(chunk_matrix_get(mat, i, j), sfVector2i_create(i, j));
		}
	}
}

void chunks_render(sfRenderWindow *window, chunk_matrix *mat)
{
	for (int i = 0; i < mat->x; i++) {
		for (int j = 0; j < mat->y; j++) {
			chunk *tr = chunk_matrix_get(mat, i, j);
			if (tr != NULL) {
				tiles_render(window, tr->tile);
			}
		}
	}
}