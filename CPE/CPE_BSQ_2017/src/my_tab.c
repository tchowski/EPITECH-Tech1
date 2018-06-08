/*
** EPITECH PROJECT, 2018
** my_tab.c
** File description:
** my_tab
*/

#include "my.h"

int count_lines(char *map)
{
	int i = 0;
	int k = 0;

	while (map[k] >= '0' && map[k] <= '9') {
		i = i * 10;
		i = i + (map[k] - '0');
		k++;
	}
	return (i);
}

int my_strlen(char *map)
{
	int i = 0;

	while (map[i] != '\n') {
		i++;
	}
	return (i);
}

int count_cols(char *map)
{
	int i = 0;

	while (map[i] != '\n')
		i++;
	while (map[i + 1] != '\n')
		i++;
	i = i - my_strlen(map);
	return (i);
}

int check_backslash(char *map, int i)
{
	if (map[i] == '\n')
		i++;
	return (i);
}

int my_tab(char *map, bsq *bsq_t)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (map[i] != '\n') {
		i++;
	}
	i += 1;
	while (k < bsq_t->lines) {
		while (j < bsq_t->cols) {
			i = check_backslash(map, i);
			bsq_t->tab[k][j] = map[i] - 48;
			j++;
			i++;
		}
		j = 0;
		k++;
		i++;
	}
	return (0);
}
