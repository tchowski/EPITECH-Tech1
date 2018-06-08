/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** my_rpg
*/

#ifndef CHUNK_MATRIX_H_
#define CHUNK_MATRIX_H_

#include "chunk.h"
#include "rc_lib.h"

typedef struct
{
	unsigned int x;
	unsigned int y;
	chunk **content;
} chunk_matrix;

chunk_matrix *chunk_matrix_create(unsigned int x, unsigned int y);

void chunk_matrix_destruct(chunk_matrix *mat);

void chunk_matrix_fill(chunk_matrix *mat, chunk *value);

chunk *chunk_matrix_get(chunk_matrix *mat, int x, int y);

void chunk_matrix_set(chunk_matrix *mat, int x, int y, chunk *value);

void chunks_tiles_update(chunk_matrix *mat);

void chunks_render(sfRenderWindow *window, chunk_matrix *mat);

void chunks_load_at_pos(chunk_matrix *mat, int x, int y, s_rc_lib *rc_lib);

void chunks_unload_around_pos(chunk_matrix *mat, int x, int y);

int get_case_value(chunk_matrix *mat, int x, int y);

#endif
