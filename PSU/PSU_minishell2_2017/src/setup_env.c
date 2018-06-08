/*
** EPITECH PROJECT, 2018
** setup_env.c
** File description:
** setup_env
*/

#include "my.h"

char **setup_envv(char **my_env, char *my_env1, char *my_env2, int i)
{
	my_env[i] = malloc(sizeof(char *) * (my_strlen(my_env1) + 1));
	my_env[i] = my_strcpy(my_env[i], my_env1);
	my_env[i] = my_strcat(my_env[i], my_env2);
	return (my_env);
}

void setup_unsetenv(char **my_env, char *my_env1, int i)
{
	my_env[i] = malloc(sizeof(char*) * my_strlen(my_env1) + 1);
	my_env[i] = NULL;
}
