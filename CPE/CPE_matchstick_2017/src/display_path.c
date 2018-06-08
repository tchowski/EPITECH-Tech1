/*
** EPITECH PROJECT, 2018
** display_path.c
** File description:
** display_path
*/

#include "my.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void display_path_without(char **str, int x)
{
	int i = 0;

	print_map_x(x);
	for (i = 0; str[i] != 0; i++) {
		my_putstr(str[i]);
		my_putchar('\n');
	}
	print_map_x(x);
}

void display_path(char **str, int x)
{
	int i = 0;

	print_map_x(x);
	for (i = 0; str[i] != 0; i++) {
		my_putstr(str[i]);
		my_putchar('\n');
	}
	print_map_x(x);
	my_putchar('\n');
}

void	player_display(int t, int n)
{
	n += 1;
	my_putstr("Player removed ");
	my_put_nbr(t);
	my_putstr(" match(es) from line ");
	my_put_nbr(n);
	my_putchar('\n');
}
