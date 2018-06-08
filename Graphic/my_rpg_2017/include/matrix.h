/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** my_rpg
*/

#ifndef MATRIX_H_
#define MATRIX_H_

#include <SFML/Graphics.h>

typedef struct
{
	unsigned int x;
	unsigned int y;
	int *content;
} matrix;

matrix *matrix_create(unsigned int x, unsigned int y, void (*fillF)(matrix *mat));

void matrix_destruct(matrix *mat);

void matrix_fill(matrix *mat, int value);

int matrix_get(matrix *mat, int x, int y);

void matrix_set(matrix *mat, int x, int y, int value);

sfVector3f mult_point_matrix(sfVector3f in, matrix *mat);

#endif
