/*
** EPITECH PROJECT, 2018
** display_path.c
** File description:
** display_path
*/

#include "my.h"
#include <stdlib.h>

void	display_path(char **str)
{
	int i;

	for (i = 0; str[i] != 0; i++) {
		my_putstr(str[i]);
		my_putchar('\n');
	}
}

char	**path_env(char **env)
{
	int i = 0;

	while (env[i] != 0) {
		if (my_strncmp(env[i], "PATH=", 5) == 0) {
			return (str_to_array(env[i] + 5));
		}
		i++;
	}
	return (NULL);
}

char	**path_cd(char **env, char *path, int nb)
{
	int i = 0;

	while (env[i] != 0) {
		if (my_strncmp(env[i], path, nb) == 0)
			return (str_to_space(env[i] + nb));
		i++;
	}
}
