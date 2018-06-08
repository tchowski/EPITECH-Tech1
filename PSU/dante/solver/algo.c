/*
** EPITECH PROJECT, 2018
** algo
** File description:
** algo of the dante
*/

#include "solver.h"

char **on_your_way(char **maze)
{
	pos_t *pos = NULL;

	if (!pos)
		pos = init_pos();
	move_down(maze, pos);
	maze[pos->i][pos->j] = 'o';
	return (maze);
}

void move_down(char **maze, pos_t *pos)
{
	while (maze[pos->i + 1][pos->j] == '*') {
		maze[pos->i][pos->j] = 'o';
		pos->i++;
		if (pos->i == 14 && pos->j == 14)
			break;
	}
	if (maze[pos->i][pos->j + 1] == 'X' && maze[pos->i][pos->j - 1] == 'X') {
		while (maze[pos->i][pos->j + 1] != '*' || maze[pos->i][pos->j - 1] != '*') {
			maze[pos->i][pos->j] = 'o';
			pos->i--;
		}
	}
	if (maze[pos->i][pos->j + 1] == '*') {
		while (maze[pos->i][pos->j + 1] == '*' && maze[pos->i + 1][pos->j] != '*') {
			maze[pos->i][pos->j] = 'o';
			pos->j++;
		}
		move_down(maze, pos);
	}
	if (maze[pos->i][pos->j - 1] != 'X' && maze[pos->i][pos->j + 1] != '*') {
		while (maze[pos->i][pos->j - 1] != 'X' && maze[pos->i + 1][pos->j] != '*') {
			maze[pos->i][pos->j] = 'o';
			pos->j--;
		}
		move_down(maze, pos);
	}
}
