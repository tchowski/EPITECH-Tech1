/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** gnl
*/

#include <stdlib.h>
#include "my.h"
#include <unistd.h>
#include <stdio.h>

char *gnl(int fd)
{
	int	k = 0;
	char	*map = malloc(sizeof(char) * 100);
	static char	buff[READ_SIZE];

	while (read(fd, buff, READ_SIZE) > 0) {
		if (buff[0] == '\n' || buff[0] == '\0') {
			return (map);
		}
		map[k] = buff[0];
		k++;
	}
	if (k == 0)
		return (NULL);
	map[k] = '\0';
	return (map);
}
