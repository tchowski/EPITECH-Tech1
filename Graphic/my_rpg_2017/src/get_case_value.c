#include "chunk_matrix.h"
#include "defines.h"

int get_case_value(chunk_matrix *mat, int x, int y)
{
	int mat_x = 0;
	int mat_y = 0;
	chunk *tr = NULL;

	while (x >= CHUNK_SIZE) {
		mat_x++;
		x -= CHUNK_SIZE;
	}
	while (y >= CHUNK_SIZE) {
		mat_y++;
		y -= CHUNK_SIZE;
	}
	tr = chunk_matrix_get(mat, mat_x, mat_y);
	if (tr == NULL) {
		return 0;
	}
	return matrix_get(tr->level, x, y);
}