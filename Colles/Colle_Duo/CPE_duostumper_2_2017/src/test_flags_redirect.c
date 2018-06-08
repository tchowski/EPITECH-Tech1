/*
** EPITECH PROJECT, 2018
** connect4
** File description:
** redirect to argument fuction
*/

#include "connect4.h"

typedef struct function
{
	char	*flag;
	int	(*fct)(game_t *game, const char *arg);
}		function_s;

static function_s function[5] =
{
	{"-w", change_weight},
	{"-h", change_height},
	{"-p1", change_ply1},
	{"-p2", change_ply2},
	{"-a", change_win},
};

static bool	test_flag(game_t *game, const char *flag, const char *arg)
{
	for (int j = 0; j < 5; j++)
		if (strcmp(flag, function[j].flag) == EXIT_SUCCES) {
			if (function[j].fct(game, arg) == EXIT_ERROR)
				return (false);
			return (true);
		}
	write (2, "Wrong flag:", 11);
	write (2, flag, strlen(flag));
	write (2, "\n", 1);
	return (false);
}

int	comp_arg(const int ac, const char **av, game_t *game)
{
	for (int i = 0; i < ac; i++) {
		if (av[i][0] == '-') {
			if ((i + 1) == ac)
				return (EXIT_ERROR);
			if (test_flag(game, av[i], av[i + 1]) == false)
				return (EXIT_ERROR);
		}
	}
	return (EXIT_SUCCES);
}
