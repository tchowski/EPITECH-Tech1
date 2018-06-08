/*
** EPITECH PROJECT, 2018
** player.c
** File description:
** player
*/

#include "my.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int	player_turn(char **map, int nb_line, int nb_matches_max)
{
	while (42) {
		my_putstr("Your turn:\n");
		if (player(map, nb_line, nb_matches_max) == 0) {
			return (0);
		}
		if (check_win_player(map) == 1) {
			display_path_without(map, nb_line);
			my_putstr("You lost, too bad...\n");
			return (2);
		}
		ai_turn(map, nb_matches_max, nb_line);
		if (check_win_AI(map) == 2) {
			display_path_without(map, nb_line);
			my_putstr("I lost... snif... but I'll get you next time!!\n");
			return (1);
		}
	}
}

int	player(char **map, int nb_line, int nb_matches_max)
{
	int i, k, t, c, d = 0;
	char *buffer_lines;
	char *buffer_matches;

	my_putstr("Line: ");
	if ((buffer_lines = gnl(0)) == 0)
		return (0);
	while (check_line(buffer_lines, nb_line) == 42) {
		if ((buffer_lines = gnl(0)) == 0)
			return (0);
	}
	my_putstr("Matches: ");
	if ((buffer_matches = gnl(0)) == 0)
		return (0);
	while (check_m(map, buffer_lines, buffer_matches, nb_line, nb_matches_max) == 42) {
		if ((buffer_lines = gnl(0)) == 0)
			return (0);
		while (check_line(buffer_lines, nb_line) == 42) {
			if ((buffer_lines = gnl(0)) == 0)
				return (0);
			}
		my_putstr("Matches: ");
		if ((buffer_matches = gnl(0)) == 0)
			return (0);
	}
	t = my_atoi(buffer_lines);
	t -= 1;
	k = my_atoi(buffer_matches);
	int n = t;
	int b = k;
	map = removing_matches(map, n, b);
	player_display(b, n);
	if (check_win_player(map) != 1)
		display_path(map, nb_line);
}

char	**removing_matches(char **map, int n, int b)
{
	int i = 0;

	while (map[n][i] != '\0')
		i++;
	while (b != 0) {
		while (map[n][i] != '|') {
			i--;
		}map[n][i] = ' ';
		b--;
	}
	return (map);
}

int	check_m(char ** map, char *buffer_lines, char *buffer_matches, int nb_line, int nb_matches_max)
{
	int d = 0;
	int t = 0;

	if (buffer_matches[0] < '0' || buffer_matches[0] > '9') {
		my_putstr("Error: invalid input (positive number expected)\n");
		my_putstr("Line: ");
		return (42);
	}
	if (my_atoi(buffer_matches) == 0) {
		my_putstr("Error: you have to remove at least one match\n");
		my_putstr("Line: ");
		return (42);
	}
	if (my_atoi(buffer_matches) > nb_matches_max) {
		display_str_1("Error: you cannot remove more than ");
		my_put_nbr(nb_matches_max);
		display_str_1(" matches per turn\n");
		display_str_1("Line: ");
		return (42);
	}
	t = my_atoi(buffer_lines);
	t -= 1;
	if (count_matches_ai(map, t) < my_atoi(buffer_matches)) {
		display_str_1("Error: not enough matches on this line\n");
		display_str_1("Line: ");
		return (42);
	}
	return (0);
}

int	check_line(char *buffer_lines, int nb_line)
{
	if (my_atoi(buffer_lines) > nb_line) {
		my_putstr("Error: this line is out of range\n");
		my_putstr("Line: ");
		return (42);
	}
	if (buffer_lines[0] < '0' || buffer_lines[0] > '9') {
		my_putstr("Error: invalid input (positive number expected)\n");
		my_putstr("Line: ");
		return (42);
	}
	if (my_atoi(buffer_lines) == 0) {
		my_putstr("Error: this line is out of range\n");
		my_putstr("Line: ");
		return (42);
	}
	return (0);
}
