/*
** EPITECH PROJECT, 2018
** put_coin.c
** File description:
** put_coin
*/

#include "connect4.h"

static int	check_weight(game_t *game, const int x, const int y, const char coin)
{
	int	tmp_y = y;
	int	res = 0;

	for (; tmp_y < game->weight && game->game[x][tmp_y] == coin; tmp_y++)
		res++;
	tmp_y = y - 1;
	for (; tmp_y >= 0 && game->game[x][tmp_y] == coin; tmp_y--)
		res++;
        if (res >= 4) {
		tmp_y++;
		res = 4;
		for (; game->game[x][tmp_y] == coin && res > 0; tmp_y++) {
			game->game[x][tmp_y] = game->win;
			res--;
		}
		return (EXIT_WIN);
	}
	return (EXIT_SUCCES);
}

static int	check_height(game_t *game, const int x, const int y, const char coin)
{
	int	tmp_x = x;
	int	res = 0;

	for (; tmp_x < game->height && game->game[tmp_x][y] == coin; tmp_x++)
		res++;
	if (res >= 4) {
		res = 4;
		tmp_x --;
		for (; res > 0; tmp_x--) {
			game->game[tmp_x][y] = game->win;
			res--;
		}
		return (EXIT_WIN);
	}
	return (EXIT_SUCCES);
}

static int	check_win(game_t *game, const int x, const int y, const char coin)
{
	int	i = 0;

	for (i = 0; i < game->weight && game->game[0][i] != '.'; i++);
	if (i == game->weight)
		return (EXIT_TIE);
	i = check_weight(game, x, y, coin);
	if (i != EXIT_SUCCES)
		return (i);
	i = check_height(game, x, y, coin);
	if (i != EXIT_SUCCES)
		return (i);
	return (EXIT_SUCCES);
}

int	put_coin(game_t *game, const int put, const char coin)
{
	int i = game->height - 1;

	while (game->game[i][put - 1] == game->ply1 || game->game[i][put - 1] == game->ply2)
		if (i-- <= 0)
			return (EXIT_ERROR);
	game->game[i][put - 1] = coin;
	return (check_win(game, i, (put - 1), coin));
}
