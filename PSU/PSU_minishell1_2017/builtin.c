/*
** EPITECH PROJECT, 2018
** builtin.c
** File description:
** builtin
*/

#include <unistd.h>
#include "my.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	builtin_exit(void)
{
	my_putstr("exit\n");
	exit(value);
}

int	builtin_pwd(void)
{
	char buffer[_SC_UCHAR_MAX];

	getcwd(buffer, _SC_UCHAR_MAX);
	my_putstr(buffer);
	my_putchar('\n');
	return (1);
}

char	*builtin_cd_check(char **str, char **my_env, char *oldpwd, int c)
{
	char **homepwd = path_cd(my_env, "HOME=", 5);
	char **oldpwd1 = path_cd(my_env, "OLDPWD=", 7);
	char *cmd = malloc(sizeof(char) * 100);

	if (c == 1|| my_strcmp(str[1], "~") == 0) {
		cmd = homepwd[0];
		return (cmd);
	}
	else if (my_strcmp(str[1], "-") == 0) {
		if (oldpwd == NULL)
			return (oldpwd1[0]);
		else
			cmd = oldpwd;
		return (cmd);
	}
	else
		return (str[1]);
}

int     builtin_cd(char **str, char **my_env)
{
	int i, c = 0;
	char *cmd;
	static char *oldpwd;
	char *buffer;

	buffer = malloc(sizeof(char *) * 512);
	while (str[c] != 0)
		c++;
	cmd = builtin_cd_check(str, my_env, oldpwd, c);
	if (c > 2) {
		error("cd: Too many arguments.\n");
		return (1);
	}
	if (access(cmd, F_OK) == -1) {
		my_putstr(cmd);
		my_putstr(": No such file or directory.\n");
		value = 1;
		return (1);
	}
	if (access(cmd, R_OK) == -1) {
		my_putstr(cmd);
		my_putstr(": Permission denied.\n");
		value = 1;
		return (1);
	}
	getcwd(buffer, 512);
	oldpwd = buffer;
	my_env = update_oldpwd(my_env);
	if (chdir(cmd) == -1) {
		my_putstr(cmd);
		my_putstr(": Not a directory.\n");
		value = 1;
		return (1);
	}
		value = 0;
        return (1);
}
