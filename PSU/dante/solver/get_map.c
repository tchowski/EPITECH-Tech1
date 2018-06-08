/*
** EPITECH PROJECT, 2018
** get_map
** File description:
** get the maze in a char*
*/

#include "solver.h"

char *get_map(char *av)
{
	struct stat info;
	int fd = open(av, O_RDONLY);

	stat(av, &info);
	char *map = malloc(sizeof(char) * (info.st_size + 1));

	read(fd, map, info.st_size);
	map[info.st_size] = '\0';
	return (map);
}

int get_nbline_maze(char *maze)
{
	int c = 0;
	for (int i = 0; maze[i] != '\0'; i++) {
		if (maze[i] == '\n')
			c++;
	}
	return (c);
}

int specific_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\n')
		i++;
	return (i);
}

char **str_to_strstr(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **maze = NULL;
	int nbcol = specific_strlen(str);
	int nbline = get_nbline_maze(str);

	if ((maze = malloc(sizeof(*maze) * (nbline + 1))) == NULL)
		return (0);
	while (i != nbline) {
		maze[i] = malloc(sizeof(**maze) * (nbcol + 1));
		while (str[k] != '\n') {
			maze[i][j] = str[k];
			k++;
			j++;
		}
		maze[i][j] = '\0';
		j = 0;
		k++;
		i++;
	}
	maze[i] = NULL;
	return (maze);
}
