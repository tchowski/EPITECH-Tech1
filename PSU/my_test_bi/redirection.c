/*
** EPITECH PROJECT, 2018
** redirection.c
** File description:
** redirection
*/

#include "my.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

int	exec_redirection_cat(char **array)
{
	char *buffer = malloc(sizeof(char) * 100);;
	int fd;
	int s;

	fd = open(array[2], O_RDONLY);
	if (fd == -1)
		perror("mysh");
	s = read(fd, buffer, 100);
	if (s == -1)
		perror("mysh");
	my_putstr(buffer);

	return (1);
}

int	is_redirection_cat(char *array)
{
	int i = -1;

	while (array[++i] != '\0') {
		if (array[i] == '<')
			return (0);
	}
	return (1);
}

int	is_redirection_echo(char *array)
{
	int i = -1;

	while (array[++i] != '\0')
		if (array[i] == '>')
			return (1);
	return (0);
}

int	is_redirection_EOF(char *array)
{
	int i = -1;

	while (array[++i] != '\0')
		if (array[i] == '<' && array[i + 1] == '<')
			return (1);
	return (0);
}
