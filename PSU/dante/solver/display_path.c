/*
** EPITECH PROJECT, 2018
** display_path.c
** File description:
** display_path
*/

#include "solver.h"

void display_path(char **str)
{
	int i;

	for (i = 0; str[i] != 0; i++) {
		write(1, str[i], strlen(str[i]));
		write(1, "\n", 1);
	}
}
