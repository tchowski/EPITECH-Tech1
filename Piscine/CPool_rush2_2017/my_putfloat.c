/*
** EPITECH PROJECT, 2017
** my_putfloat.c
** File description:
** put a float
*/

#include "my.h"

void my_putfloat(float freq)
{
	int nb = freq;
	int ten = 0;
	int one = 0;

	my_put_nbr(nb);
	my_putchar('.');
	nb = (freq - nb) * 100;
	ten = nb / 10;
	one = nb % 10;
	my_putchar(ten + '0');
	my_putchar(one + '0');
}
