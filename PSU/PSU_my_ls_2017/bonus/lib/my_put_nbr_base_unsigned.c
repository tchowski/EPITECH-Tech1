/*
** EPITECH PROJECT, 2017
** my_put_nbr_unsigned.c
** File description:
** my_put_nbr_unsigned
*/

#include <unistd.h>
#include "my_printf.h"

unsigned int my_put_nbr_base_unsigned(unsigned int i)
{
	int rev_nb = 0;
	int count = 0;

	if (i == 0)
		my_putchar('0');
	 if (i < 0)
		return (84);
	while (i >= 1) {
		rev_nb = (rev_nb *10) + (i % 10);
		i = i / 10;
		count++;
	}
	while (count != 0) {
		my_putchar((rev_nb % 10) + '0');
		rev_nb = rev_nb / 10;
		count--;
	}
	return (i);
}
