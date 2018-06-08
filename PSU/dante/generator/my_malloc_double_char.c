/*
** EPITECH PROJECT, 2018
** my_malloc_double_char.c
** File description:
** my_malloc
*/

#include "generator.h"

char **my_malloc_double_char(int lines, int cols)
{
	char **tab_char = NULL;
	int i = 0;

	tab_char = malloc(sizeof(char *) * (lines + 1));
	while (i != lines) {
		tab_char[i] = malloc(sizeof(char) * (cols + 1));
		i++;
	}
	tab_char[i] = NULL;
	return (tab_char);
}
