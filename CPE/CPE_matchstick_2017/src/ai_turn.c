/*
** EPITECH PROJECT, 2018
** ai_turn.c
** File description:
** ai_turn
*/

#include "my.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int	ai_turn(char **map, int nb_matches_max, int nb_line)
{
	int i = 0;
	int k = ai_gene_matches(map, nb_matches_max);
	int j = ai_gene_lines(map);
	int n = j + 1;
	int t = k;

	display_str_1("AI's turn...\n");
	while (map[j][i] != '\0')
		i++;
	while (k-- != 0) {
		while (map[j][i] != '|') {
			--i;
		}
		map[j][i] = ' ';
	}
	display_ai_turn(t, n);
	if (check_win_AI(map) != 2)
		display_path(map, nb_line);
}

void	display_ai_turn(int t, int n)
{
	my_putstr("AI removed ");
	my_put_nbr(t);
	my_putstr(" match(es) from line ");
	my_put_nbr(n);
	my_putchar('\n');
}

int	ai_gene_lines(char **map)
{
	int i = count_lines(map);
	int ra = 0;

	srand(time(NULL));
	ra = rand() % (i + 1 - 1);
	while (count_matches_ai(map, ra) == 0)
		ra = rand() % (i + 1 - 1);
	return (ra);
}

int	ai_gene_matches(char **map, int nb_matches_max)
{
	int i = count_matches_ai(map, ai_gene_lines(map));
	int ra = 0;

	srand(time(NULL));
	ra = rand() % (i + 1 - 1);
	ra += 1;
	if (ra > nb_matches_max)
		ra = 1;
	return (ra);
}
