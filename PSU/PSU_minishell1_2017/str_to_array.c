/*
** EPITECH PROJECT, 2018
** str_to_array.c
** File description:
** str_to_array
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int	lenght_str(char *str)
{
	int i = 1;
	int k = 0;

	while (str[i] != 0 && str[i] != ':') {
		i++;
		k++;
	}
	return (k);
}

int	count_char(char *str)
{
	int i = 0;
	int k = 0;

	while (str[i] != 0) {
		if (str[i] == ':')
			k++;
		i++;
	}
	return(k);
}

char	**str_to_array(char *str)
{
	char **array;
	int nb;
	int i;

	nb = count_char(str) + 1;
	array = malloc(sizeof(*array) * (nb + 1));
	i = 0;
	while (i != nb) {
		array[i] = malloc(sizeof(*array) * (lenght_str(str) + 1));
		my_strncpy(array[i], str, lenght_str(str) + 1);
		str = str + lenght_str(str) + 2;
		i++;
	}
	array[i] = NULL;
	return (array);
}
