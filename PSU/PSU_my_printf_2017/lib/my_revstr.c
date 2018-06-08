/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** revstr
*/

#include "my_printf.h"

char *my_revstr(char *str)
{	
	char tmp_k;
	char tmp_i;
	int i = 0;
	int k = 0;

	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (k <= i){
		tmp_k = str[k];
		tmp_i = str[i];
		str[k] = tmp_i;
		str[i] = tmp_k;
		i--;
		k++;
	}
	my_putstr(str);
	return (str);
}

