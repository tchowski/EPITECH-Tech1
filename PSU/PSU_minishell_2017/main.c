/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "my.h"
#include "gnl.h"
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **envp)
{
	char *s;
	int end;
	/*if (argc != 2) {
		error("Error: ");
		return (error( "not enought arguments.\n"));
	}*/
	while (!end) {
		my_putstr("$>");
		s = get_next_line(0);
		if (my_strcmp(s, "exit") == 0) {
				free(s);
				return(84);
		}
	}
	//execve(argv[1], &argv[1], envp);
	//if (argc == 2)
	//	display(argc, argv, envp);
	return (0);

}
