/*
** EPITECH PROJECT, 2018
** display_path.c
** File description:
** display_path
*/

#include "generator.h"

void	display_path(char **str)
{
	int i;

	for (i = 0; str[i] != 0; i++) {
		my_putstr(str[i]);
		if (str[i + 1] != NULL)
			my_putchar('\n');
	}
}
