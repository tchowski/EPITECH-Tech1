/*
** EPITECH PROJECT, 2018
** check_win.c
** File description:
** check_win
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

int	check_win_player(char **map)
{
	int r = 0;
	int i = 0;
	char buffer[0];

	while (map && map[i] != 0) {
		r += count_matches(map[i]);
		i++;
	}
	if (r == 0) {
		return (1);
	}
	else
		return (-1);
}

int	count_matches(char *str)
{
	int i = 0;
	int c = 0;

	while (str[i] != '\0') {
		if (str[i] == '|')
			c++;
		i++;
	}
	return (c);
}

int	check_win_AI(char **map)
{
	int r = 0;
	int i = 0;

	while (map && map[i] != 0) {
		r += count_matches(map[i]);
		i++;
	}
	if (r == 0) {
		return (2);
	}
	else
		return (-1);
}
