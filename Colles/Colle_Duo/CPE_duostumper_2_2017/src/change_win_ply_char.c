/*
** EPITECH PROJECT, 2018
** connect4
** File description:
** change the char on structure of ply2 ply1 and win
*/

#include "connect4.h"

int	change_ply1(game_t *game, const char *arg)
{
	if (arg == NULL || arg[1] != '\0') {
		write (2, "Argument p1 don't take string or NULL\n", 38);
		return (EXIT_ERROR);
	}
	game->ply1 = arg[0];
	return (EXIT_SUCCES);
}

int	change_ply2(game_t *game, const char *arg)
{
	if (arg == NULL || arg[1] != '\0') {
		write (2, "Argument p2 don't take string or NULL\n", 38);
		return (EXIT_ERROR);
	}
	game->ply2 = arg[0];
	return (EXIT_SUCCES);
}

int	change_win(game_t *game, const char *arg)
{
	if (arg == NULL || arg[1] != '\0') {
		write (2, "Argument a don't take string or NULL\n", 37);
		return (EXIT_ERROR);
	}
	game->win = arg[0];
	return (EXIT_SUCCES);
}
