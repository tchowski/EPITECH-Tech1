/*
** EPITECH PROJECT, 2018
** connect4
** File description:
** change the structure of wheight and height
*/

#include "connect4.h"

static bool	is_num(const char *arg)
{
	if (arg == NULL)
		return (false);
	for (int i = 0; arg[i] != '\0'; i++)
		if (arg[i] < '0' || arg[i] > '9')
			return (false);
	return (true);
}

int	change_weight(game_t *game, const char *arg)
{
	int	tmp;

	if (is_num(arg) == false) {
		write (2, "Argument w must take a number\n", 30);
		return (EXIT_ERROR);
	}
	tmp = atoi(arg);
	if (tmp < 0 || tmp > 80) {
		write (2, "Argument w need to be between 0 and 80\n", 39);
		return (EXIT_ERROR);
	}
	game->weight = tmp;
	return (EXIT_SUCCES);
}

int	change_height(game_t *game, const char *arg)
{
	int	tmp;

	if (is_num(arg) == false) {
		write (2, "Argument h must take a number\n", 30);
		return (EXIT_ERROR);
	}
	tmp = atoi(arg);
	if (tmp < 0 || tmp > 16) {
		write (2, "Argument h need to be between 0 and 16\n", 39);
		return (EXIT_ERROR);
	}
	game->height = tmp;
	return (EXIT_SUCCES);
}
