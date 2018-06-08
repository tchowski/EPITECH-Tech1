/*
** EPITECH PROJECT, 2018
** my_malloc_double_tabs.c
** File description:
** my_malloc
*/

#include "my.h"

int **my_malloc_double_tab(int lines, int cols)
{
	int **tab = malloc(sizeof(int *) * lines);
	int i = 0;

	while (i != lines) {
		tab[i] = malloc(sizeof(int) * cols);
		i++;
	}
	return (tab);
}

int **bsq_tab_int(bsq *bsq_t, int j, int k)
{
	if (bsq_t->tab[j][k] == 0)
		bsq_t->tab[j][k] = 'o';
	else
		bsq_t->tab[j][k] = '.';
	return (bsq_t->tab);
}

void into_tab(bsq *bsq_t, map_i *map_t)
{
	int j = 0;
	int k = 0;

	while (j < bsq_t->lines) {
		while (k < bsq_t->cols) {
			bsq_tab_int(bsq_t, j, k);
			map_t->tab_char[j][k] = bsq_t->tab[j][k];
			k++;
		}
		k = 0;
		j++;
	}
}

char **put_x(map_i *map_t, var *var_t)
{
	int i = 0;
	int j = 0;

	for (i = var_t->x; i > var_t->x - var_t->value; i--) {
		for (j = var_t->y; j > var_t->y - var_t->value; j--) {
			map_t->tab_char[i][j] = 'x';
		}
	}
	return (map_t->tab_char);
}

void display_path(map_i *map_t, bsq *bsq_t, var *var_t)
{
	int i = 0;

	map_t->tab_char = put_x(map_t, var_t);
	while (i < bsq_t->lines) {
		my_putstr(map_t->tab_char[i]);
		my_putchar('\n');
		i++;
	}
}
