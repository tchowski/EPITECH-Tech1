/*
** EPITECH PROJECT, 2018
** calc.c
** File description:
** calc
*/

#include "my.h"

int setting_struct(int **tab, int x, int y, pa_s pa_t)
{
	if (tab[x][y] == 0)
		return (0);
	else if (pa_t.upper <= pa_t.on_left && pa_t.upper <= pa_t.u_l)
		return (pa_t.upper);
	else if (pa_t.on_left <= pa_t.upper && pa_t.on_left <= pa_t.u_l)
		return (pa_t.on_left);
	else if (pa_t.u_l <= pa_t.upper && pa_t.u_l <= pa_t.on_left)
		return (pa_t.u_l);
	return (0);
}

void init_struct(int **tab, pa_s *pa_t, int x, int y)
{
	pa_t->upper = tab[x][y - 1];
	pa_t->on_left = tab[x - 1][y];
	pa_t->u_l = tab[x - 1][y - 1];
}

int calc(bsq *bsq_t, pa_s *pa_t)
{
	int j = 1;
	int k = 1;
	int i = 0;

	while (j < bsq_t->lines) {
		while (k < bsq_t->cols) {
			init_struct(bsq_t->tab, pa_t, j, k);
			i = setting_struct(bsq_t->tab, j, k, *pa_t);
			bsq_t->tab[j][k] += i;
			k++;
		}
		k = 0;
		j++;
	}
	return (0);
}

void setup_value(var *var_t, int j, int k, int tmp)
{
	if (tmp > var_t->value)
		var_t->x = j;
	else
		var_t->x = var_t->x;
	if (tmp > var_t->value)
		var_t->y = k;
	else
		var_t->y = var_t->y;
	if (tmp > var_t->value)
		var_t->value = tmp;
	else
		var_t->value = var_t->value;
}

void calc_bsq(bsq *bsq_t, var *var_t)
{
	int j = 0;
	int k = 0;
	int tmp = 0;

	while (j < bsq_t->lines) {
		while (k < bsq_t->cols) {
			if (bsq_t->tab[j][k] > var_t->value)
				tmp = bsq_t->tab[j][k];
			setup_value(var_t, j, k, tmp);
			k++;
		}
		k = 0;
		j++;
	}
}
