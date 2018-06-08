/*
** EPITECH PROJECT, 2018
** connect4
** File description:
** show the actual game state
*/

#include "connect4.h"

static void	show_plus_line(const int nbr)
{
	for (int i = 0; i < (nbr + 2); i++)
		printf("+");
	printf("\n");
}

void	show_game(const game_t *game)
{
	show_plus_line(game->weight);
	for (int i = 0; game->game[i] != NULL; i++)
		printf("|%s|\n", game->game[i]);
	show_plus_line(game->weight);	
}
