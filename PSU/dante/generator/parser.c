/*
** EPITECH PROJECT, 2018
** parser.c
** File description:
** parser
*/

#include "generator.h"

int	parser_check(char **map)
{
	int i = 0;

	while (map[1][i] != 0) {
		if (map[1][i] < '0' || map[1][i] > '9')
			return (84);
		i++;
	}
	i = 0;
	while (map[2][i] != 0) {
		if (map[2][i] < '0' || map[1][i] > '9')
			return (84);
		i++;
	}
}
