/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** my_putstr
*/

#include "get_next_line.h"
#include <unistd.h>

int	my_putstr(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0'){
		my_putchar(str[j]);
		j++;
	}
	return (0);
}
