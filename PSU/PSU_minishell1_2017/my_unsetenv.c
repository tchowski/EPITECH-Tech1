/*
** EPITECH PROJECT, 2018
** unsetenv.c
** File description:
** unsetenv
*/

#include "my.h"
#include <stdlib.h>

char	**my_unsetenv(char **my_env, char *my_env1)
{
	int i = 0;

	while (my_env[i] != 0) {
		if (my_strncmp(my_env[i], my_env1, my_strlen(my_env1)) == 0) {
			my_env[i] = malloc(sizeof(char*) *
					my_strlen(my_env1) + 1);
			my_env[i] = NULL;
		}
		i++;
	}
	return (my_env);
}

int	config_set_unsetenv(char **array, char **my_env)
{
	char *argv1;

	argv1 = malloc(sizeof(char) * my_strlen(array[1]));
	argv1 = my_strcpy(argv1, array[1]);
	my_unsetenv(my_env, argv1);
	value = 0;
	return (1);
}
