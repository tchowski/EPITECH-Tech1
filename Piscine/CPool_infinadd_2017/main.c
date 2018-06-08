/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main (int ac, char **av)
{
	if (ac != 3) {
		write (2, "Invalid params !\n", 17);
		return (84);
	}
	my_put_nbr(number(av[1]) + number(av[2]));
	return (0);
}
