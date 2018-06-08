/*
** EPITECH PROJECT, 2018
** error_pathfile.c
** File description:
** error_pathfile
*/

#include "my.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int	error_pathfile(int read_map, int fd, char *map)
{
	if (fd = open(map, O_RDONLY) == -1) {
		my_putstr("Error... Opening map\n");
		return(84);
	}
	if (read_map == -1) {
		my_putstr("Error... Reading map\n");
		return(84);
	}
}

int	check_map(char *file)
{
	int fd;
	int read_map;
	char *buffer = malloc(sizeof(char) * 60);
	char **my_map;
	int i = 0;

	fd = open(file, O_RDONLY);
	read_map = read(fd, buffer, 64);
	error_pathfile(read_map, fd, file);
	if (my_strlen(buffer) != 32) {
		my_putstr("Map out of size\n");
		return(84);
	}
	while (buffer[i] != 0) {
		if (buffer[i] != ':' && buffer[i] != '\n') {
			if (buffer[i] < '1' || buffer[i] > '9')
				if (buffer[i] < 65 || buffer[i] > 72) {
					my_putstr("You should stick beetween A and H\n");
					return(84);
					 }
		}
		i++;
	}
	return(0);
}
