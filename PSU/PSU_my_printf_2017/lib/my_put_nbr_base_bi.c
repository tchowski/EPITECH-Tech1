/*
** EPITECH PROJECT, 2017
** my_put_nbr_base.c
** File description:
** my_put_nbr_base
*/

#include <stdlib.h>
#include "my_printf.h"

char *my_put_nbr_base_bi(unsigned int i)
{
	int result;
	char *val = malloc(sizeof(char));
	int j = 0;

	while (i != 0) {
		result= i % 2;
		i= i / 2;
		val[j] = result + 48;
		j++;
	}
	my_putstr(val);
	return (val);
}
