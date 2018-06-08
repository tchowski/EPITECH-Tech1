/*
** EPITECH PROJECT, 2017
** cesar
** File description:
** open a file and create a new one
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

static const int EXIT_ERROR = 84;

char	*open_file(const char *av)
{
	int	file;
	struct stat	sts;
	char	*buff;

	file = open(av, O_RDONLY);
	if (file == -1)
		exit (EXIT_ERROR);
	stat(av, &sts);
	buff = (malloc(sts.st_size));
	read(file, buff, sts.st_size);
	close(file);
	return (buff);
}

int	put_int_file(const char *crypted)
{
	int	fd;
	mode_t	mode = S_IRUSR;
	int	i = -1;

	fd = creat("./crypt", mode);
	if (fd == -1)
		exit (EXIT_ERROR);
	while (crypted[++i] != '\0')
		write(fd, &crypted[i], 1);
	write(fd, "\n", 1);
	return (EXIT_SUCCESS);
}
