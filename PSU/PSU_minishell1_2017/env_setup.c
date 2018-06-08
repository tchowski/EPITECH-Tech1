/*
** EPITECH PROJECT, 2018
** env_setup.c
** File description:
** env_setup
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	count_path(char **env)
{
	int i = 0;

	while (env[i] != 0)
		i++;
	return (i);
}

char	**setup_env(char **env)
{
	int i = 0;
	char **my_env;

	my_env = malloc(sizeof(char *) * (count_path(env) + 2));
	for (i = 0; env[i] != 0; i++) {
		my_env[i] = malloc(sizeof(char **) * my_strlen(env[i] + 1));
		my_env[i] = my_strcpy(my_env[i], env[i]);
	}
	return (my_env);
}

int	builtin_env(char **env)
{
	display_path(env);
	value = 0;
	return (1);
}

char	**update_oldpwd(char **my_env)
{
	int i = 0;
	char buffer[_SC_UCHAR_MAX];
	char oldpwd[] = "OLDPWD=";
	char *new;

	new = malloc(sizeof(char) * my_strlen(getcwd(buffer, _SC_UCHAR_MAX)));
	new = my_strcat(oldpwd, getcwd(buffer, _SC_UCHAR_MAX));
	while (my_env[i] != 0) {
		if (my_strncmp("OLDPWD=", my_env[i], 7) == 0) {
			my_env[i] = malloc(sizeof(char) * my_strlen(new));
			my_env[i] = my_strcpy(my_env[i], new);
			return (my_env);
		}
		i++;
	}
}

char	**update_pwd(char **my_env)
{
	int i = 0;
	char buffer[_SC_UCHAR_MAX];
	char pwd[] = "PWD=";
	char *new;

	new = malloc(sizeof(char) * my_strlen(getcwd(buffer, _SC_UCHAR_MAX)));
	new = my_strcat(pwd, getcwd(buffer, _SC_UCHAR_MAX));
	while (my_env[i] != 0) {
		if (my_strncmp("PWD=", my_env[i], 4) == 0) {
			my_env[i] = malloc(sizeof(char) * my_strlen(new));
			my_env[i] = my_strcpy(my_env[i], new);
			return (my_env);
		}
		i++;
	}
}
