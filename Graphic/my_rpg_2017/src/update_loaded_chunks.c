#include "level.h"
#include "sfml_functions.h"

void level_update_loaded_chunk_map(s_level *level)
{
	sfVertexArray_clear(level->loaded_chunks);
	for (int i = 0; i < level->map->x; i++) {
		for (int j = 0; j < level->map->x; j++) {
			sfVertex vertex;
			if (chunk_matrix_get(level->map, i, j) == NULL) {
				vertex.color = sfRed;
			}
			else {
				vertex.color = sfGreen;
			}
			vertex.position = sfVector2f_create(i*2, j*2);
			sfVertexArray_append(level->loaded_chunks, vertex);
			vertex.position = sfVector2f_create(i*2+2, j*2);
			sfVertexArray_append(level->loaded_chunks, vertex);
			vertex.position = sfVector2f_create(i*2+2, j*2+2);
			sfVertexArray_append(level->loaded_chunks, vertex);
			vertex.position = sfVector2f_create(i*2, j*2+2);
			sfVertexArray_append(level->loaded_chunks, vertex);
		}		
	}
}