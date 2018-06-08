/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int main (int ac, char **av)
{
	if (ac == 1) {
		print_error();
		return (84);
	}
	else if (av[1][0] != '-')
	file_to_array(ac, av);
	else
		display_fonc(ac, av);
	return (0);
}
