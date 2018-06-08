/*
** EPITECH PROJECT, 2018
** my_gnl.c
** File description:
** I LOVE MEMES HOLY SHIT!!!
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "my.h"

static int	buff_add(int fd, char *str)
{
	static char		buf[1];
	static int		i = 0;
	static int		s = 1;

	if (i == 0 || i >= s) {
		i = 0;
		if ((s = read(fd, buf, 1)) < 0)
			return (0);
	}
	if (s == 0)
		*str = '\0';
	else {
		if (buf[i] == '\n' || buf[i] == '\0')
			*str = '\0';
		else
			*str = buf[i];
		i = i + 1;
	}
	return (s);
}

static char	*sub(char *str, int s)
{
	int		i = 0;
	char	*res_str;

	if ((res_str = malloc(s + 2)) == NULL)
		return (NULL);
	while (i <= s) {
		res_str[i] = str[i];
		i = i + 1;
	}
	free(str);
	return (res_str);
}

char	*my_gnl(int fd)
{
	int		i = 0;
	int		s = 0;
	char	*str;

	if (fd == -1)
		return (NULL);
	else if ((str = malloc(1)) == NULL)
		return (NULL);
	else if ((s = buff_add(fd, &str[i])) == 0)
		return (NULL);
	while (str[i] != '\0') {
		str = sub(str, i);
		i = i + 1;
		s = buff_add(fd, &str[i]);
	}
	return (str);
}
