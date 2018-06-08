/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** put nbr 
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if  (nb >= 10) {
		my_put_nbr(nb / 10);
		my_putchar(nb % 10 + 48);
	}else
		my_putchar(nb + 48);
	return (nb);
}
