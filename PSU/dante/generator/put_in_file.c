/*
** EPITECH PROJECT, 2018
** put in file
** File description:
** put the maze in a file
*/

#include "generator.h"

void put_in_file(char **str)
{
	int fd;
	int i;

	fd = creat("./maze.txt", S_IRUSR);
	if (fd == -1)
		return;
	for (i = 0; str[i]; i++) {
		write(fd, str[i], strlen(str[i]));
		write(fd, "\n", 1);
	}
	close(fd);
}
