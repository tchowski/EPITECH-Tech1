/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** my_putchar
*/

#include "get_next_line.h"
#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}
