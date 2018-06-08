/*
** EPITECH PROJECT, 2017
** put_nbr_base.c
** File description:
** put_nbr_base
*/

#include "my_printf.h"

int my_put_nbr_base(unsigned int n, char *base)
{
	int res;
	int rest;

	res = n / my_putstr(base);
	rest = n % my_putstr(base);
	if (res > 0)
		my_put_nbr_base(res, base);
	my_putchar(base[rest]);
	return (0);
}
