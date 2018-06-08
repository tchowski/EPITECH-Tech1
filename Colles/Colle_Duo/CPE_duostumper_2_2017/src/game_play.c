/*
** EPITECH PROJECT, 2018
** connect4
** File description:
** the main game loop
*/

#include "connect4.h"

static int	show_message(const game_t *game, const int ply_turn)
{
	int	tmp;
	char	*buffer;

	write (1, "Player ", 7);
	if (ply_turn == 0)
		write (1, &game->ply1, 1);
	else
		write (1, &game->ply2, 1);
	write (1, " where do you want to play: ", 28);
	buffer = get_next_line(0);
	if (buffer == NULL)
		return (EXIT_ERROR);
	tmp = atoi(buffer);
	free (buffer);
	return (tmp);
}

static bool	test_end_game(const int tmp, const int ply_turn,
		const game_t *game)
{
	if (tmp == EXIT_WIN) {
		printf ("Congrats, player %c won!\n",
			(ply_turn == 0 ? game->ply1 : game->ply2));
		return (true);
	}
	if (tmp == EXIT_TIE) {
		printf ("It’s a tie, nobody wins.\n");
		return (true);
	}
	return (false);
}

int	game_play(game_t *game)
{
	int	ply_turn = 0;
	int	tmp;
	bool	end_game = false;

	while (end_game != true) {
		tmp = show_message(game, ply_turn);
		if (tmp == EXIT_ERROR)
			return (EXIT_SUCCES);
		if (tmp >= 1 && tmp <= game->weight) {
			tmp = put_coin(game, tmp,
			(ply_turn == 0 ? game->ply1 : game->ply2));
			if (tmp != EXIT_ERROR) {
				show_game(game);
				ply_turn = (ply_turn + 1) % 2;
			}
		}
		end_game = test_end_game(tmp, ((ply_turn + 1) % 2), game);
	}
	return (EXIT_SUCCES);
}
