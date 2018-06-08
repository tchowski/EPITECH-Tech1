/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "gnl.h"
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

int	is_builtin(char *array, char **path, char **my_env)
{
	char **av;

	av = str_to_space(array);
	array = spaces(array);
	if (my_strcmp(av[0], "exit") == 0)
		return (builtin_exit());
	else if (my_strcmp(av[0], "cd") == 0)
		return (builtin_cd(av, my_env));
	else if (my_strcmp(av[0], "pwd") == 0)
		return (builtin_pwd());
	else if (my_strcmp(av[0], "env") == 0 && count_path(av) == 1)
		return (builtin_env(my_env));
	else if (my_strcmp(av[0], "setenv") == 0 && count_path(av) == 3)
		return (config_set(av, my_env));
	else if (my_strcmp(av[0], "unsetenv") == 0 && count_path(av) == 2)
		return (config_set_unsetenv(av, my_env));
	else if (my_strcmp(av[0], "setenv") == 0 && count_path(av) == 2)
		return (config_set_two(av, my_env));
	else
		return (0);
}

int	check_commands(char **my_env, char **array, char **path, char **env)
{
	int i = -1;

	my_env = update_pwd(my_env);
	while (array[++i] != 0) {
		if (is_builtin(array[i], path, my_env) == 0) {
			execute_prog_comma(array[i], path, my_env);
		}
	}
}

int main(int argc, char **argv, char **env)
{
	char *s;
	char **path;
	char **my_env;
	char **array;

	my_env = setup_env(env);
	path = path_env(env);
	while (42) {
		my_putstr("$> ");
		s = get_next_line(0);
		if (s == NULL) {
			my_putstr("exit\n");
			if (value == 0)
				return (0);
			else
				return (value);
		}
		array = str_to_comma(s);
		check_commands(my_env, array, path, env);
	}
	return (0);
}
