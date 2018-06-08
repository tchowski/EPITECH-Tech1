/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** my_putchar
*/

#include <unistd.h>

char	my_putcharchar(char c)
{
	return (write(1, &c, 1));
}
