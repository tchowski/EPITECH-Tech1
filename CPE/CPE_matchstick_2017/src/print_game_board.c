/*
** EPITECH PROJECT, 2018
** print_game_board.c
** File description:
** print_game_board
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int	print_map(int line, int nb_matches)
{
	char **map = str_to_space(print_map_side(line));

	display_path(str_to_space(print_map_side(line)), line);
	return(player_turn(map, line, nb_matches));
}
void	print_map_x(int x)
{
	int i = 0;
	int j = 2 * x;

	my_putstr("*");
	while (i++ != j)
		my_putstr("*");
	my_putchar('\n');
}

char *print_map_side(int d)
{
	int i, y, z, x;
	int n = 0;
	char *str = malloc(sizeof (char) * (d * (d*d)));

	for (x = 0; x < d; x++)
	{
	str[n++] = '*';
		for (y = 1; y< (d - x); y++)
		{
		str[n++] = ' ';
		}
			for (z = 0; z < 1 + 2 * x; z++)
			{
				str[n++] = '|';
			}
			for (y = 1; y < (d - x); y++)
				str[n++] = ' ';
				str[n++] = '*';
				str[n++] = '\n';
			}
	str[n - 1] = '\0';
	return (str);
}
