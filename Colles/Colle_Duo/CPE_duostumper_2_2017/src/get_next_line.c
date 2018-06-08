/*
** EPITECH PROJECT, 2018
** .
** File description:
** .
*/

#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

static int my_strlen(const char *str, const int choose)
{
	long int ret = 0;

	if (choose == 0)
		while (str[ret] != '\0')
			ret++;
	else for (long int nbr = 0; str[nbr] != '\0'; nbr++) {
			if (str[nbr] == '\n')
				ret++;
		}
	return (ret);
}

static char *my_strcat(const char *s1, const char *s2)
{
	int	t1 = my_strlen(s1, 0);
	int	t2 = my_strlen(s2, 0);
	int	nbr = 0;
	char	*ret;

	ret = malloc(sizeof(char) * (t1 + t2 + 1));
	if (ret == NULL)
		return (NULL);
	while (nbr < t1) {
		ret[nbr] = s1[nbr];
		nbr++;
	}
	while (nbr - t1 < t2) {
		ret[nbr] = s2[nbr - t1];
		nbr++;
	}
	ret[nbr] = '\0';
	return (ret);
}

static char *cut(const char *str, const int n_nbr)
{
	char	*ret = malloc(sizeof(char) * 1);
	char	buf[2];
	int	var = 0;
	int	nbr = 0;

	buf[1] = '\0';
	ret[0] = '\0';
	for (; str[nbr] != '\0' && var < n_nbr; nbr++)
		if (str[nbr] == '\n')
			var++;
	for (; (n_nbr == 1 ? 1 : str[nbr] != '\n')
			&& str[nbr] != '\0'; nbr++) {
		buf[0] = str[nbr];
		if ((ret = my_strcat(ret, buf)) == NULL)
			return (NULL);
	}
	return (ret);
}

char *get_next_line(const int fd)
{
	static char    *str;
	char	buf[1 + 1];
	int	tmp;

	buf[1] = '\0';
	if (str == 0) {
		if ((str = malloc(sizeof(char) * 1)) == NULL)
			return (NULL);
		str[0] = '\0';
	} else if (my_strlen(str, 1) > 0 && str[my_strlen(str, 0)] != '\n')
		str = cut(str, 1);
	while (my_strlen(str, 1) == 0) {
		tmp = read(fd, buf, 1);
		if (tmp < 1)
			return (NULL);
		if ((str = my_strcat(str, buf)) == NULL)
			return (NULL);
	}
	return (cut(str, 0));
}
