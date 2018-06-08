/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** gnl
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char *get_next_line(int fd)
{
	int	k = 0;
	char	*map = malloc(sizeof(char) * 50);
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

int	main(void)
{
	char *s = get_next_line(0);

	while (s) {
		my_putstr(s);
		my_putchar('\n');
		free(s);
		s = get_next_line(0);
	}
	return (0);
}
