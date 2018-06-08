/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** my_rpg
*/

#include "chunk_matrix.h"
#include <stdlib.h>
#include <stdio.h>

chunk_matrix *chunk_matrix_create(unsigned int x, unsigned int y)
{
	chunk_matrix *new = malloc(sizeof(chunk_matrix));
	if (new == NULL) {
		return new;
	}
	
	new->content = malloc(sizeof(chunk*) * x * y);
	if (new->content == NULL) {
		free(new);
		return new;
	}
	new->x = x;
	new->y = y;
	chunk_matrix_fill(new, NULL);
	return new;
}

void chunk_matrix_destruct(chunk_matrix *mat)
{
	free(mat->content);
	free(mat);
}

void chunk_matrix_fill(chunk_matrix *mat, chunk *value)
{
	for (int i = 0; i < (mat->x*mat->y); i++) {
		mat->content[i] = value;
	}
}


chunk *chunk_matrix_get(chunk_matrix *mat, int x, int y)
{
	if (x < 0 || x >= mat->x ||
		y < 0 || y >= mat->y) {
		return NULL;
	}
	return mat->content[x + (y * mat->x)];
}

void chunk_matrix_set(chunk_matrix *mat, int x, int y, chunk *value)
{
	if (!(x < 0 || x >= mat->x ||
		y < 0 || y >= mat->y)) {
		mat->content[x + (y * mat->x)] = value;
	}
}
