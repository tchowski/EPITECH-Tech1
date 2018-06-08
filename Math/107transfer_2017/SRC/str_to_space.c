/*
** EPITECH PROJECT, 2018
** str_to_array.c
** File description:
** str_to_array
*/

#include "../include/allh.h"
#include <stdio.h>
#include <stdlib.h>

static	int	lenght_str(char *str)
{
	int i = 1;
	int k = 0;

	while (str[i] != 0 && str[i] != '*') {
		i++;
		k++;
	}
	return (k);
}

static	int	count_char(char *str)
{
	int i = 0;
	int k = 0;

	while (str[i] != 0) {
		if (str[i] == '*')
			k++;
		i++;
	}
	return(k);
}

char	**str_to_space(char *str)
{
	char **array;
	int nb;
	int i = 0;

	nb = count_char(str) + 1;
	array = malloc(sizeof(*array) * (nb + 2));

	while (i != nb) {
		array[i] = malloc(sizeof(*array) * (lenght_str(str) + 2));
		my_strncpy(array[i], str, lenght_str(str) + 1);
		str = str + lenght_str(str) + 2;
		i++;
	}
	array[i] = NULL;
	return (array);
}
