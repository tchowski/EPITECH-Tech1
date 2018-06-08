/*
** EPITECH PROJECT, 2018
** file_exists.c
** File description:
** Returns 1 if the given path is valid and readable, 0 if not.
*/

#include <my.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

unsigned char	file_exists(char *path)
{
	int	fd = open(path, O_RDONLY);

	if (fd == -1)
		return (0);
	return (1);
}
