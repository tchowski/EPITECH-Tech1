/*
** EPITECH PROJECT, 2018
** display.c
** File description:
** display
*/

#include "my.h"

void	display(int argc, char **argv, char **envp)
{
	my_putstr("Program name: ");
	my_putstr(argv[1]);
	my_putchar('\n');
	my_putstr("Nb args: ");
	my_put_nbr(argc);
	my_putchar('\n');
	my_putstr("PID:	");
	my_putchar('\n');
	my_putstr("Child PID: ");
	my_putchar('\n');
	my_putstr("... . .");
	my_putchar('\n');
	my_putstr("... . .");
	my_putchar('\n');
	my_putstr("... . .	/* execution of */");
	my_putchar('\n');
	my_putstr("... . .");
	my_putchar('\n');
	my_putstr("... . .");
	my_putchar('\n');
	my_putstr("Program terminated.");
	my_putchar('\n');
	my_putstr("Status:	");
	my_putchar('\n');
	open_dir(argv, envp);
}
