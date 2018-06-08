/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 3) {
		error("Usage : ./navy [enemy_pid] navy_positions.txt\n");
		return (84);
	}
	if (argv[1][0] == '-' && argv[1][1] == 'h') {
		print_usage();
		return (0);
	}
	argc == 2 ? check_map(argv[1]) : check_map(argv[2]);
	if (argc == 2 && check_map(argv[1]) != 84) {
		open_map_player_1(argv[1]);
		get_pid_player_1();
	}
	if (argc == 3) {
		open_map_player_2(argv[2]);
		get_pid_player_2(my_atoi(argv[1]));
	}
}
