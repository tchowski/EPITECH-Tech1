/*
** EPITECH PROJECT, 2017
** print_h.c
** File description:
** print_h
*/

#include "my.h"

void print_h(void)
{
	my_putchar('\n');
	my_putstr("USAGE:\n");
	my_putstr("\t./my_sokoban map\n");
	my_putchar('\n');
	my_putstr("DESCRIPTION:\n");
	my_putstr("\tmap file representing the warehouse map, ");
	my_putstr("containing '#' for walls,\n\t\t'P' for player, ");
	my_putstr("'X' for boxes and 'O' for storage locations.\n");
}
