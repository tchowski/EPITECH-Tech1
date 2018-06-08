/*
** EPITECH PROJECT, 2018
** my_setenv.c
** File description:
** my_setenv
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

char	*my_env_strcat(char **argv)
{
	char *my_env;

	my_env = malloc(sizeof(char) * my_strlen(argv[1]));
	my_env = my_strcat(argv[1], "=");
	return (my_env);
}

char	**my_setenv(char **my_env, char *my_env1, char *my_env2)
{
	int i = 0;

	while (my_env[i] != 0) {
		if (my_strncmp(my_env[i], my_env1, my_strlen(my_env1)) == 0) {
			return (setup_envv(my_env, my_env1, my_env2, i));
		}
		i++;
	}
	my_env[i] = malloc(sizeof(char *) * (my_strlen(my_env1) + 1));
	my_env[i] = my_strcpy(my_env[i], my_env1);
	my_env[i] = my_strcat(my_env[i], my_env2);
	return (my_env);
}

char	**my_setenv_two(char **my_env, char *my_env1)
{
	int i = 0;

	while (my_env[i] != 0) {
		if (my_strncmp(my_env[i], my_env1, my_strlen(my_env1)) == 0)
			return (my_env);
		i++;
	}
	my_env[i] = malloc(sizeof(char *) * (my_strlen(my_env1) + 1));
	my_env[i] = my_strcpy(my_env[i], my_env1);
	return (my_env);
}

int	config_set_two(char **argv, char **my_env)
{
	my_setenv_two(my_env, my_env_strcat(argv));
	value = 0;
	return (1);
}

int	config_set(char **argv, char **my_env)
{
	char *argv2;

	argv2 = malloc(sizeof(char) * my_strlen(argv[2]));
	argv2 = my_strcpy(argv2, argv[2]);
	my_setenv(my_env, my_env_strcat(argv), argv2);
	value = 0;
	return (1);
}
