/*
** EPITECH PROJECT, 2017
** my_put_nbr_base_oct.c
** File description:
** my_put_nbr_base
*/

#include "my_printf.h"

unsigned int my_put_nbr_base_oct(unsigned int i)
{
	int result;
	int binaire = 0;
	int k = 1;

	while (i != 0) {
		result=i%8;
		i=i/8;
		binaire=binaire+result*k;
		k=k*10;
	}
	return (my_put_nbr(binaire));
}
