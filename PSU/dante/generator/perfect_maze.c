/*
** EPITECH PROJECT, 2018
** perfect_maze.c
** File description:
** perfect_maze
*/

#include "generator.h"

void init_perfect_maze(int map_x, int map_y)
{
	int i = 0;
	int k = 0;
	int l = 0;
	int r = 0;
	char **maze;

	srand(time(NULL));
	if ((maze = malloc(sizeof(*maze) * (map_y + 1))) == NULL)
		return ;
	while (i != map_y) {
		maze[i] = malloc(sizeof(**maze) * (map_x + 1));
		while (k != map_x) {
			if (l == 0)
				maze[i][k] = 'X';
			else
				maze[i][k] = '*';
			k++;
		}
		if (l == 0) {
			r = rand() % map_x;
			maze[i][r] = '*';
			l++;
		}
		else if (i != 0)
			l--;
		maze[i][k] = '\0';
		k = 0;
		i++;
	}
	maze[0][0] = '*';
	maze[map_y - 1][map_x - 1] = '*';
	maze[i + 1] = NULL;
	display_path(maze);
}
