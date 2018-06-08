/*
** EPITECH PROJECT, 2017
** my_put_nbr_base.c
** File description:
** my_put_nbr_base
*/

#include <stdlib.h>
#include "my_printf.h"

int one_zero(unsigned int i)
{
	my_putchar('\\');
	my_putchar('0');
	return (my_put_nbr(i));
}

int two_zero(unsigned int i)
{
	my_putchar('\\');
	my_putchar('0');
	my_putchar('0');
	my_put_nbr(i);
}

int	my_strlen_oct(char *str)
{
	int i = 0;

	while (str[i]) {
		if (str[i] <= 32 || str[i] == 127)
		my_put_nbr_base_oct_str(str[i]);
		else
			my_putchar(str[i]);
		i++;
	}
	return (0);
}

unsigned int my_put_nbr_base_oct_str(unsigned int i)
{
	int result;
	int octal = 0;
	int k = 1;

	while (i!=0) {
		result=i%8;
		i=i/8;
		octal = octal + result *k;
		k=k*10;
	}
	if (octal <= 7)
		return (two_zero(octal));
	if (octal > 10 && octal < 100)
		return (one_zero(octal));
	else {
		my_putchar('\\');
		my_put_nbr(octal);
	}
}
