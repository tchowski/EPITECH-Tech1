#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include "defines.h"
#include "chunk_matrix.h"
#include "sfml_functions.h"

char *get_path(int x, int y);

void load_chunk(chunk_matrix *map, int x, int y)
{
	char *path = get_path(x, y);
	int file = open(path, O_RDONLY);
	read(file, chunk_matrix_get(map, x, y)->level->content,
		CHUNK_SIZE * CHUNK_SIZE * sizeof(int));
	close(file);
}

void chunks_load_at_pos(chunk_matrix *mat, int x, int y, s_rc_lib *rc_lib)
{
	for (int i = x - 1; i <= x + 1; i++) {
		for (int j = y - 1; j <= y + 1; j++) {
			if (chunk_matrix_get(mat, i, j) == NULL && i >= 0 &&
			i < mat->x && j >= 0 && j < mat->y) {
				chunk_matrix_set(mat, i, j, chunk_create(rc_lib->tile));
				load_chunk(mat, i, j);
			}
		}
	}

	chunks_tiles_update(mat);
}

static void unload_this_chunk(chunk_matrix *mat, sfVector2i p_pos, sfVector2i chunk_case)
{
	if (chunk_matrix_get(mat, chunk_case.x, chunk_case.y) != NULL && !(chunk_case.x > (p_pos.x - 4) && chunk_case.x < (p_pos.x + 4) &&
	chunk_case.y > (p_pos.y - 4) && chunk_case.y < (p_pos.y + 4))) {
		chunk_destroy(chunk_matrix_get(mat, chunk_case.x, chunk_case.y));
		chunk_matrix_set(mat, chunk_case.x, chunk_case.y, NULL);
	}

}

void chunks_unload_around_pos(chunk_matrix *mat, int x, int y)
{
	for (int i = 0; i < mat->x; i++) {
		for (int j = 0; j < mat->y; j++) {
			unload_this_chunk(mat, sfVector2i_create(x, y), sfVector2i_create(i, j));
		}
	}
}