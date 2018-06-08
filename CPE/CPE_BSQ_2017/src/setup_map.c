/*
** EPITECH PROJECT, 2018
** setup_map.c
** File description:
** setup_map
*/

#include "my.h"

char *open_map(char *av)
{
	struct stat ss;
	int fd;
	char *my_map;
	int i = 0;

	fd = open(av, O_RDONLY);
	stat(av, &ss);
	my_map = malloc(sizeof(char) * ss.st_size);
	read(fd, my_map, ss.st_size);
	while (my_map[i] != '\0') {
		if (my_map[i] == 'o')
			my_map[i] = '0';
		if (my_map[i] == '.')
			my_map[i] = '1';
		i++;
	}
	return (my_map);
}

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}
