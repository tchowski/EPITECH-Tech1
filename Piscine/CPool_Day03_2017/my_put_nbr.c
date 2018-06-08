/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** my_put_nbr
*/

#include<unistd.h>
#include <stdio.h>

int my_put_nbr(int nb)
{
	int i = 0;

	if (nb < 0){
		i = i - nb;
		my_putchar('-');
	}
	else
		i = nb;
	if (nb >= 10){
		my_put_nbr(i / 10);
		my_put_nbr(i % 10);
	}
	else
		my_putchar(i + '0');
	return (i);
}
