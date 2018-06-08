/*
** EPITECH PROJECT, 2018
** comma.c
** File description:
** comma
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

char	*get_path_comma(char **path, char *cmd)
{
	char buff[_SC_UCHAR_MAX];
	char *abs_path = malloc(512);
	int i = 0;

	if (cmd[0] == '/') {
		if (access(cmd, X_OK) == 0)
			return (cmd);
	}
	if (cmd[0]) {
		add_slash(getcwd(buff, _SC_UCHAR_MAX), cmd, abs_path);
		if (access(abs_path, X_OK) == 0)
			return (abs_path);
	}
	while (path[i] != 0) {
		add_slash(path[i], cmd, abs_path);
		if (access(abs_path, X_OK| F_OK) == 0)
			return (abs_path);
		i++;
	}
	error(cmd);
	error(": Command not found.\n");
	return (NULL);
}

int	execute_prog_comma(char *array, char **path, char **my_env)
{
	pid_t pid;
	array = spaces(array);
	char **av = str_to_space(array);
	char *abs_path = get_path_comma(path, av[0]);

	if (abs_path != NULL) {
		if ((pid = fork()) == -1)
			perror("Error: fork error.\n");
		if (pid == 0)
			execve(abs_path, av, my_env);
		else if (pid != -1)
			return (value = my_wait_dat());
		value = 0;
		return (1);
	}
	value = 1;
	return (1);
}
