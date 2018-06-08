/*
** EPITECH PROJECT, 2018
** print_usage.c
** File description:
** print_usage
*/

#include "my.h"

void	print_usage(void)
{
	my_putstr("USAGE\n");
	my_putstr("\t ./navy [first_player_pid] navy_positions\n");
	my_putstr("DESCRIPTION\n");
	my_putstr("\t first_player_pid:\tonly for the 2nd player. pid of the first player.\n");
	my_putstr("\t navy_positions:\tfile representing the positions of the ships.\n");
}
