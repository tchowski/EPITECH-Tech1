/*
** EPITECH PROJECT, 2018
** free.c
** File description:
** free
*/

#include <stdlib.h>
#include "my.h"

void	free_tabs(char **str)
{
	int i = -1;

	if (str[0] != 0 && str != 0)
		while (str[++i] != 0)
			free(str[i]);
	free(str);
}
