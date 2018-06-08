/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "my.h"

void print_error (void)
{
	my_putstr("./my_hunter:  bad arguments: ");
	my_putchar('\n');
	my_putstr("retry with -h\n");
}

void display_fonc(int ac, char **av)
{
	if(ac == 1)
		print_error();
	if(av[1][1] != 'h' && av[1][1] != 'd')
		print_error();
	if(av[1][0] == '-') {
		switch (av[1][1]) {
			case 'd' : print_d();
				   break;
			case 'h' : print_h();
				   break;
		}
	}
	else
		print_error();
}
