/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** my_putchar
*/

#include "generator.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}
