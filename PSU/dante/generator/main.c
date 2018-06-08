/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "generator.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 4 || argc < 3)
	 	exit (84);
	if (check_arg(argv[1], argv[2]) == 84)
		return (84);
	if (argv[3] == NULL)
		init_imperfect_maze(atoi(argv[1]), atoi(argv[2]));
	else if (strcmp(argv[3], "perfect") == 0)
		init_perfect_maze(atoi(argv[1]), atoi(argv[2]));
	return (0);
}

int check_arg(char *av1, char *av2)
{
	if (atoi(av1) < 0 || atoi(av2) < 0)
		return (84);
	for (int i = 0; av1[i] != '\0'; i++) {
		if (av1[i] < '0' || av1[i] > '9')
			return (84);
	}
	for (int i = 0; av2[i] != '\0'; i++) {
		if (av2[i] < '0' || av2[i] > '9')
			return (84);
	}
	return (0);
}
