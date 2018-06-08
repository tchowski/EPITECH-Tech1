/*
** EPITECH PROJECT, 2017
** my_put_nbr_base.c
** File description:
** my_put_nbr_base
*/

#include "my_printf.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *my_revstr_hex(char *str)
{
	char tmp_k;
	char tmp_i;
	int i = 0;
	int k = 0;

	while (str[i])
		i++;
	i = i -1;
	while (k <= i) {
		tmp_k = str[k];
		tmp_i = str[i];
		str[k] = tmp_i;
		str[i] = tmp_k;
		i--;
		k++;
	}
	return (str);
}

char *my_put_nbr_base_hex(unsigned int nb)
{
	int result;
	int j = 0;
	char val[] = "salut";

	while(nb!=0) {
		result=nb%16;
		nb = nb / 16;
		if (result < 10) { 
			val[j] = result + 48;
			j++;
			}
		else { 
			val[j] = 'A' + result % 10;
			j++;
		}
	}
	my_putstr(my_revstr_hex(val));
	return my_revstr_hex(val);
}
