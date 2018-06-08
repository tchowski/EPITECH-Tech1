/*
** EPITECH PROJECT, 2018
** connect4
** File description:
** the main and default struct and the basic error handling
*/

#include "connect4.h"

static int	error_handling(const game_t *game)
{
	if (game->ply1 == game->ply2) {
		my_puterror("Both players cannot have the same avatar\n");
		return (EXIT_ERROR);
	}
	if (game->ply1 == game->win || game->ply2 == game->win) {
		my_puterror("You cannot have the same avatar that the avatar's win\n");
		return (EXIT_ERROR);
	}
	if ((game->weight * game->weight) < 20) {
		my_puterror("You have to got more than 20 slots into you map\n");
		return (EXIT_ERROR);
	}
	return (EXIT_SUCCES);
}

static void	init_struct(game_t *game)
{
	game->weight = 7;
	game->height = 6;
	game->ply1 = 'X';
	game->ply2 = 'O';
	game->win = '#';
}

int main(const int ac, const char **av)
{
	game_t	game;

	init_struct(&game);
	if (comp_arg(ac, av, &game) == EXIT_ERROR)
		return (EXIT_ERROR);
	if (error_handling(&game) == EXIT_ERROR)
		return (EXIT_ERROR);
	game.game = malloc(sizeof(char *) * (game.height + 1));
	if (game.game == NULL)
		return (EXIT_ERROR);
	for (int i = 0; i < game.height; i++) {
		game.game[i] = malloc(sizeof(char) * (game.weight + 1));
		if (game.game[i] == NULL)
			return (EXIT_ERROR);
		memset(game.game[i], '.', game.weight);
		game.game[i][game.weight] = '\0';
	}
	game_play(&game);
	for (int i = 0; game.game[i] != NULL; i++)
		free(game.game[i]);
	free(game.game);
	return (EXIT_SUCCES);
}
