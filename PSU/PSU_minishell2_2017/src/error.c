/*
** EPITECH PROJECT, 2018
** error.c
** File description:
** error
*/

#include <unistd.h>
#include "my.h"

void error(char *str)
{
	write(2, str, my_strlen(str));
}

int count_path_double(char **str)
{
	int i = 0;

	while (str[i] != 0)
		i++;
	return (i);
}
