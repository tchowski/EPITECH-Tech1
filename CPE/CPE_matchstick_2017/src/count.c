/*
** EPITECH PROJECT, 2018
** count.c
** File description:
** count
*/

#include "my.h"
#include <unistd.h>

int	count_matches_ai(char **map, int line)
{
	int i = 0;
	int k = 0;
	int j = line;

	while (map[j][i++] != '\0')
		if (map[j][i] == '|')
			k++;
	return (k);
}

int	count_lines(char **map)
{
	int i = 0;
	int k = 0;

	while (map[i] != 0) {
		if (my_strcmp(map[i], "*") == 0)
			k++;
		i++;
	}
	return (i);
}
