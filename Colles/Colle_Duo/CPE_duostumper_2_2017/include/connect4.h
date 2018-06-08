/*
** EPITECH PROJECT, 2018
** connect4
** File description:
** this is where is the structure and the fuction declaration
*/

#ifndef MY
#define MY

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

static const int EXIT_SUCCES = 0;
static const int EXIT_ERROR = 84;
static const int EXIT_WIN = 85;
static const int EXIT_TIE = 86;

typedef struct game_struct
{
	char	**game;
	char	ply1;
	char	ply2;
	char	win;
	int	weight;
	int	height;
}		game_t;

int	game_play(game_t *game);
char	*get_next_line(const int fd);
void	my_puterror(const char *str);
void	show_game(const game_t *game);
char	**my_malloc(const int lines, const int cols);
int	put_coin(game_t *game, const int put, const char coin);

int	change_win(game_t *game, const char *arg);
int	change_ply1(game_t *game, const char *arg);
int	change_ply2(game_t *game, const char *arg);
int	change_height(game_t *game, const char *arg);
int	change_weight(game_t *game, const char *arg);
int	comp_arg(const int ac, const char **av, game_t *game);

#endif
