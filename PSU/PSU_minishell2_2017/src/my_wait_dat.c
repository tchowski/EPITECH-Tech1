/*
** EPITECH PROJECT, 2018
** my_wait.c
** File description:
** my_wait
*/

#include "gnl.h"
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "my.h"

int	my_wait_dat(void)
{
	int status;
	int sig;

	wait(&status);
	if (WIFSIGNALED(status) && !WIFEXITED(status)) {
		sig = WTERMSIG(status);
		if (sig == 11) {
			error("Segmentation fault\n");
			value = 139;
			return (139);
		}
		else if (sig == 8) {
			value = 136;
			error("Floating exception\n");
			return (136);
		}
	}
	return (0);
}

void	add_slash(char *s1, char *s2, char *buff)
{
	while (*s1) {
		*buff = *s1;
		buff++;
		s1++;
	}
	*buff = '/';
	buff++;
	while (*s2) {
		*buff = *s2;
		buff++;
		s2++;
	}
	*buff = 0;
}
