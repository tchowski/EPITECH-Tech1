/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3) {
		if (parser_check(argv) == 84) {
			error("Not valids arguments\n");
			return (84);
		}
		else if (my_atoi(argv[1]) > 1 && my_atoi(argv[1]) < 100)
				return (print_map(my_atoi(argv[1]), my_atoi(argv[2])));
		else {
			error("You should put a number beetwen 1 & 100\n");
			return (84);
		}
	}
	else {
		error("You should put 2 arguments\n");
		return (84);
	}
}

int	parser_check(char **map)
{
	int i = 0;
	int c = 0;

	while (map[1][i] != 0) {
		if (map[1][i] < '0' || map[1][i] > '9')
			return (84);
		i++;
	}
	i = 0;
	while (map[2][i] != 0) {
		if (map[2][i] < '0' || map[2][i] > '9')
			return (84);
		i++;
	}
}
