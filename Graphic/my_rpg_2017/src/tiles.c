#include <stdlib.h>
#include "tiles.h"
#include "defines.h"
#include "sfml_functions.h"

static void add_quad(tiles *new, matrix *dat, sfVector2i mat_pos, sfVector2f top_left)
{
	sfVertex vertex;
	int tile = matrix_get(dat, mat_pos.x, mat_pos.y);
	vertex.color = sfWhite;
	vertex.position.x = (mat_pos.x * TILE_SIZE) + top_left.x;
	vertex.position.y = (mat_pos.y * TILE_SIZE) + top_left.y;
	vertex.texCoords.x = tile * 200;
	vertex.texCoords.y = 0;
	sfVertexArray_append(new->vertrices, vertex);
	vertex.position.x += TILE_SIZE;
	vertex.texCoords.x += 200;
	sfVertexArray_append(new->vertrices, vertex);
	vertex.position.y += TILE_SIZE;
	vertex.texCoords.y += 200;
	sfVertexArray_append(new->vertrices, vertex);
	vertex.position.x -= TILE_SIZE;
	vertex.texCoords.x -= 200;
	sfVertexArray_append(new->vertrices, vertex);
}

static void init_vertex_array(tiles *new, matrix *dat, sfVector2f top_left)
{
	for (int i = 0; i < dat->x; i++) {
		for (int j = 0; j < dat->y; j++) {
			add_quad(new, dat, sfVector2i_create(i, j), top_left);
		}
	}
}

tiles *tiles_create(matrix* dat, sfTexture *texture)
{
	tiles *new = malloc(sizeof(tiles));
	new->vertrices = sfVertexArray_create();
	sfVertexArray_setPrimitiveType(new->vertrices, sfQuads);
	new->texture = texture;
	init_vertex_array(new, dat, sfVector2f_create(0, 0));

	return new;
}

void tiles_update(tiles *tile, matrix* dat, sfVector2f top_left)
{
	sfVertexArray_clear(tile->vertrices);
	init_vertex_array(tile, dat, top_left);
}

void tiles_render(sfRenderWindow *window, tiles *map)
{
	sfRenderStates states;
	states.texture = map->texture;
	states.blendMode = sfBlendAlpha;
	states.shader = NULL;
	states.transform = sfTransform_Identity;
	sfRenderWindow_drawVertexArray(window, map->vertrices, &states);
}