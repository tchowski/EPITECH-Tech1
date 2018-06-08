/*
** EPITECH PROJECT, 2018
** checkargs.c
** File description:
** Default
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

static void	print_help(void)
{
	my_putstr("USAGE\n\t./asm file_name[.s]\n\n");
	my_putstr("DESCRIPTION\n\tfile_name\t");
	my_putstr("file in assembly language to be converted into ");
	my_putstr("file_name.cor, an\n\t\t\texecutable in the ");
	my_putstr("Virtual Machine.\n");
}

void		check(int ac, char **av)
{
	if (ac != 2)
		exit (84);
	if (my_strcmp(av[1], "-h") == 0) {
		print_help();
		exit (0);
	}
	if (!file_exists(av[1])) {
		my_putstr("ERROR WHILE OPENING THE FILE!\n");
		exit (84);
	}
}
